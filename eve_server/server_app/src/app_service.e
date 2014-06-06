note
	description : "simple application root class"
	date        : "$Date: 2013-06-19 13:31:07 -0300 (mié 19 de jun de 2013) $"
	revision    : "$Revision: 62 $"

deferred class
	APP_SERVICE

inherit
	WSF_LAUNCHABLE_SERVICE
		redefine
			initialize
		end

	WSF_ROUTED_SERVICE

	WSF_URI_HELPER_FOR_ROUTED_SERVICE

	WSF_URI_TEMPLATE_HELPER_FOR_ROUTED_SERVICE

--	SHARED_EXECUTION_ENVIRONMENT
--		export
--			{NONE} all
--		end

--create
--	make_and_launch

feature {NONE} -- Initialization

	initialize
			-- Initialize current service.
		do
			Precursor
			initialize_router
			create file_location.make_empty
			create class_name.make_empty
			create p_factory
			create project_path.make_empty
			create project_name.make_empty
			create command_line.make_empty
			create compile_message.make_empty
			create error_message.make_empty
			create output_message.make_empty
			create warning_message.make_empty
			create syntax_message.make_empty
			create dump_message.make_empty
		end

	setup_router
			-- Setup `router'
		local
			fhdl: WSF_FILE_SYSTEM_HANDLER
			doc: WSF_ROUTER_SELF_DOCUMENTATION_HANDLER
		do
			create doc.make (router)
			router.handle_with_request_methods ("/api/doc", doc, router.methods_GET)

			--Mapping my URI's for functions			
			--map_uri_template_agent_with_request_methods ("/updateFile", agent put_file_location, router.methods_POST)
			--map_uri_template_agent_with_request_methods ("/cleanCompile", agent get_clean_compilation_result, router.methods_GET)
			--map_uri_template_agent_with_request_methods ("/errorList", agent get_error_list, router.methods_GET)
			--map_uri_template_agent_with_request_methods ("/warningList", agent get_warning_list, router.methods_GET)
			--map_uri_template_agent_with_request_methods ("/runtimeErrorList", agent get_runtime_error_list, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/compile", agent get_compilation_result, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/run", agent get_execution_result, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/interfaceView", agent get_interface_view, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/flatView", agent get_flat_view, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/contractView", agent get_contract_view, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/classDescendants", agent get_class_descendants, router.methods_GET)

			--Setting the home page
			create fhdl.make_hidden ("www")
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end

feature --Access
	file_location: STRING
	class_name: STRING
	p_factory: PROCESS_FACTORY
	command_line: STRING
	project_name:STRING
	project_path:STRING
	compile_message: STRING
	output_message: STRING
	error_message: STRING
	warning_message :STRING
	syntax_message:STRING
	dump_message:STRING
	has_error: BOOLEAN
	has_warning: BOOLEAN
	has_syntax_error:BOOLEAN
	has_runtime_error:BOOLEAN
	has_classview_error:BOOLEAN
	fixed_project_path:STRING = "C:/Users/Manav/Desktop/eve_server/projects/"

feature -- Execution

	--Function that compiles the file
	get_compilation_result (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			res_string:STRING
			json_object:JSON_OBJECT
			json_array: JSON_ARRAY
			header:HTTP_HEADER
			clean_compile:BOOLEAN
			path:STRING
			id:STRING
			clean_compile_path:STRING
		do
			--Initializing variables
			create header.make
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create compile_message.make_empty
			create error_message.make_empty
			create warning_message.make_empty
			create output_message.make_empty
			create syntax_message.make_empty
			create dump_message.make_empty

			--Settting errors and warnings to false
			has_error:=false
			has_warning:=false
			has_syntax_error:=false

			path:=extract_req_parameter(req,"path")
			clean_compile:=check_req_parameter(req,"clean")
			id:=extract_req_parameter(req,"id")

			--User is using a new project, so change the path setting accordingly
			if not path.is_empty then
				id:=set_project_path(path,id)
				clean_compile:=true
			else
				--User is using an old path setting, so check that it exists
				if project_path.is_empty or project_name.is_empty then
					--Give error
				end
				if id.is_empty then
					--Give error
				else
					if not project_path.has_substring (id)then
						--Give error
					end
				end
			end

			--If target is to also to be provided, then deal with it here
			if clean_compile then
				command_line:="ec -clean -config "+ project_name
			else
				command_line:="ec -config "+ project_name+ " -c_compile -batch"
			end

			--Gives the main option to clean compile a proect
			compile_helper(project_path)

			--Now do finish_freezing with it if it does not have errors and if the clean_compile option is true
			if has_error=false and has_syntax_error=false and clean_compile then
				command_line:="finish_freezing"
				clean_compile_path:=project_path+"/EIFGENs/"+project_name+"/W_code"
				clean_compile_path.replace_substring_all (".ecf", "")
				compile_helper (clean_compile_path)
			end

			--Setting the compile result,output message,error list and warning list
			json_object.put_string (compile_message, "Compile_Message")
			json_object.put_string (output_message, "Output_Message")
			json_object.put_string (error_message, "Error_Message")
			json_object.put_string (syntax_message, "Syntax_Message")
			json_object.put_string (warning_message, "Warning_Message")
			json_object.put_string (dump_message, "Dump_Message")
			json_object.put (get_error_list, "Error")
			json_object.put (get_warning_list, "Warning")

			--Add to JSON array
			json_array.add (json_object)
			res_string.append (json_array.representation)
			res_string.replace_substring_all ("<br>", "\n")

			--Adding the response header
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

	--Function that first compiles and then runs the program
	get_execution_result (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			project_path_empty: project_path /= Void and not project_path.is_empty
			project_name_empty: project_path /= Void and not project_name.is_empty
		local
			res_string:STRING
			json_object:JSON_OBJECT
			json_array:JSON_ARRAY
			header:HTTP_HEADER
			id:STRING
		do
			--Prepare the response object
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create header.make
			create compile_message.make_empty
			create error_message.make_empty
			create warning_message.make_empty
			create output_message.make_empty
			create syntax_message.make_empty
			create dump_message.make_empty

			--Settting errors and warnings to false
			has_error:=false
			has_warning:=false
			has_syntax_error:=false
			has_runtime_error:=false

			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				if not project_path.has_substring (id)then
					--Give error
				end
			end

			--Do compilation here and see the compile results and then send for run
			--If the project has not been compiled till now compile it or else don't compile it
			command_line:="ec -config "+ project_name+ " -c_compile -batch"
			compile_helper(project_path)

			--Setting the JSON resposne object
			if has_error=false and has_syntax_error=false then
				--Run the project
				execution_helper
			end
			json_object.put_string (output_message, "Execution_Output")
			json_object.put_string (error_message, "Error_Message")
			json_object.put_string (syntax_message, "Syntax_Message")
			json_object.put_string (warning_message, "Warning_Message")
			json_object.put (get_error_list, "Compile_Errors")
			json_object.put (get_warning_list, "Warnings")
			json_object.put (get_runtime_error_list, "Runtime_Errors")

			json_array.add (json_object)
			res_string.append (json_array.representation)
			res_string.replace_substring_all ("<br>", "\n")
			--Set the response header with the id value
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

	--Function that returns the interface view of a class
	get_interface_view (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			project_path_empty: project_path /= Void and not project_path.is_empty
			project_name_empty: project_path /= Void and not project_name.is_empty
		local
			input_string: STRING
			res_string:STRING
			parser: JSON_PARSER
			json_object:JSON_OBJECT
			header:HTTP_HEADER
			id:STRING
			class_string:STRING
		do
			--Find interface_view for class name
			create header.make
			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				if not project_path.has_substring (id)then
					--Give error
				end
			end

			--Extract the class
			class_string:=extract_req_parameter(req,"class")
			if class_string.is_empty then
				--Give error, as it should not be empty
			end

			create res_string.make_from_string("[{%"result%" : %"")
			res_string.append("Interface View is here%"}]")
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

	--Function that returns the flat view of a class
	get_flat_view (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			project_path_empty: project_path /= Void and not project_path.is_empty
			project_name_empty: project_path /= Void and not project_name.is_empty
		local
			res_string:STRING
			json_object:JSON_OBJECT
			header:HTTP_HEADER
			id:STRING
			class_string:STRING
			json_array:JSON_ARRAY
		do
			--find flat_view for class_name
			create header.make
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create error_message.make_empty
			create output_message.make_empty
			create warning_message.make_empty
			create dump_message.make_empty
			create syntax_message.make_empty
			create compile_message.make_empty

			--Setting values
			has_classview_error:=false
			has_error:=false
			has_syntax_error:=false
			has_warning:=false

			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				if not project_path.has_substring (id)then
					--Give error
				end
			end

			--Extract the class
			class_string:=extract_req_parameter(req,"class")
			if class_string.is_empty then
				--Give error, as it should not be empty
			end

			--Setting the command line for the flat view
			command_line:="ec -flat "+class_string+" -config "+ project_name
			view_helper (class_string)

			json_object.put_string (output_message, "Flat_View")
			json_object.put_string (error_message, "Error_Message")
			json_object.put_string (warning_message, "Warning_Message")
			json_object.put_string (syntax_message, "Syntax_Message")
			json_object.put_string (dump_message, "Dump")
			json_object.put (get_error_list, "Errors")
			json_object.put (get_warning_list, "Warnings")
			json_array.add (json_object)

			--Prepare the response string
			res_string.append (json_array.representation)
			res_string.replace_substring_all ("<br>", "\n")

			--Set the response header with the id value
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

	--Function that returns the contract view of a class
	get_contract_view (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			project_path_empty: project_path /= Void and not project_path.is_empty
			project_name_empty: project_path /= Void and not project_name.is_empty
		local
			res_string:STRING
			json_object:JSON_OBJECT
			header:HTTP_HEADER
			id:STRING
			class_string:STRING
			json_array:JSON_ARRAY
		do
			--Find contract view for class_name here
			create header.make
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create error_message.make_empty
			create output_message.make_empty
			create warning_message.make_empty
			create dump_message.make_empty
			create syntax_message.make_empty
			create compile_message.make_empty

			--Setting values
			has_classview_error:=false
			has_error:=false
			has_syntax_error:=false
			has_warning:=false

			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				if not project_path.has_substring (id)then
					--Give error
				end
			end

			--Extract the class
			class_string:=extract_req_parameter(req,"class")
			if class_string.is_empty then
				--Give error, as it should not be empty
			end

			--Setting the command line for the contract view
			command_line:="ec -short "+class_string+" -config "+ project_name
			view_helper (class_string)

			json_object.put_string (output_message, "Contract_View")
			json_object.put_string (error_message, "Error_Message")
			json_object.put_string (warning_message, "Warning_Message")
			json_object.put_string (syntax_message, "Syntax_Message")
			json_object.put_string (dump_message, "Dump")
			json_object.put (get_error_list, "Errors")
			json_object.put (get_warning_list, "Warnings")
			json_array.add (json_object)

			--Prepare the response string
			res_string.append (json_array.representation)
			res_string.replace_substring_all ("<br>", "\n")

			--Set the response header with the id value
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

	--Function that returns the class Descendants of a class
	get_class_descendants (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			project_path_empty: project_path /= Void and not project_path.is_empty
			project_name_empty: project_path /= Void and not project_name.is_empty
		local
			input_string: STRING
			res_string:STRING
			parser: JSON_PARSER
			json_object:JSON_OBJECT
			header:HTTP_HEADER
			id:STRING
			class_string:STRING
			json_array:JSON_ARRAY
		do
			--Find class descendants for class_name here
			create header.make
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create error_message.make_empty
			create output_message.make_empty
			create warning_message.make_empty
			create dump_message.make_empty
			create syntax_message.make_empty
			create compile_message.make_empty

			--Setting values
			has_classview_error:=false
			has_error:=false
			has_syntax_error:=false
			has_warning:=false

			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				if not project_path.has_substring (id)then
					--Give error
				end
			end

			--Extract the class
			class_string:=extract_req_parameter(req,"class")
			if class_string.is_empty then
				--Give error, as it should not be empty
			end

			--Setting the command line for the class descendants
			command_line:="ec -descendants "+class_string+" -config "+ project_name
			view_helper (class_string)


			json_object.put_string (output_message, "Class_Descendants_Dump")
			json_object.put_string (error_message, "Error_Message")
			json_object.put_string (warning_message, "Warning_Message")
			json_object.put_string (syntax_message, "Syntax_Message")
			json_object.put_string (dump_message, "Dump")
			json_object.put (get_error_list, "Errors")
			json_object.put (get_warning_list, "Warnings")
			--json_object.put (null, "Descendants")

			--Parse the descendants
			if not has_error and not has_syntax_error then
				class_string.to_upper
				if not output_message.has_substring (class_string+ " is not in the universe") then
					--Parse the descendants here
					json_object.put (get_descendants_list(class_string), "Descendants")
				end
			end

			json_array.add (json_object)

			--Prepare the response string
			res_string.append (json_array.representation)
			res_string.replace_substring_all ("<br>", "\n")

			--Set the response header with the id value
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

feature --Helper functions

	set_project_path(a_str:STRING; id:STRING):STRING
		--Helper function that sets the path and creates a new directory for the compile command
		local
			string_array: LIST[STRING]
			exists:BOOLEAN
			temp:STRING
			index:INTEGER
			dst_path:STRING
			src:RAW_FILE
			dst:RAW_FILE
			unique_value:STRING
		do
			--If the id is blank, create a new unique value here
			if id.is_empty then
				unique_value:=uuid_generator.generate_uuid.out
			else
				unique_value:=id
			end

			--Extract file name and path
			string_array:=a_str.split ('/')
			project_name:=string_array.at (string_array.count)
			project_path:=a_str.substring (1, a_str.count-project_name.count-1)

			index:=project_name.substring_index (".ecf", 1)
			temp:=project_name.substring (1, index-1)
			dst_path:=fixed_project_path+temp+"_"+unique_value

			--Create the new directory (unique value is the value that uniquely identifies the project
			exists:=file_exists(fixed_project_path+temp+"_"+unique_value+"/"+project_name)
			--If the directory exists use it, else create a new one
			if exists=false then
				--Create the new project directory here
				--Copy from project_path to dst_directory
				create src.make_with_path (create {PATH}.make_from_string (project_path))
				create dst.make_with_path (create {PATH}.make_from_string (dst_path))
				recursive_copy (src, dst)
			end
			--Assign to the new project path
			project_path:=dst_path

			Result:=unique_value

		ensure
			project_path_empty: project_path /= Void and not project_path.is_empty
			project_name_empty: project_path /= Void and not project_name.is_empty
		end

	get_descendants_list(class_string:STRING) : JSON_ARRAY
		--Function that returns the list of class descendants
		local
			descendants_list: EIFFEL_ARCHITECTURE
			descendants_array:JSON_ARRAY
		do
			create descendants_list.make (output_message,class_string)
			descendants_array:=descendants_list.json_arr
			Result:=descendants_array
		end

	get_runtime_error_list : JSON_ARRAY
		--Function that returns the set of runtime errors
		local
			error_list:EIFFEL_RUNTIME
			error_array:JSON_ARRAY
		do
			if has_runtime_error=True then
				create error_list.make (error_message)
				error_array:=error_list.json_array
			end
			Result:=error_array
		end

	get_error_list : JSON_ARRAY
		--Function that returns the set of error_list
		local
			error_list:EIFFEL_ERRORS
			error_array: JSON_ARRAY
		do
			--Getting error list
			if has_error=True then
				create error_list.make (error_message)
				error_array:=error_list.json_array
			end
			if has_syntax_error then
				create error_list.make (syntax_message)
				error_array:=error_list.json_array
			end
			Result:=error_array
		end

	get_warning_list : JSON_ARRAY
		--Function that returns the set of warnings
		local
			warning_list:EIFFEL_WARNINGS
			warning_array:JSON_ARRAY
		do
			if has_warning=True then
				create warning_list.make (warning_message)
				warning_array:=warning_list.json_array
			end
			Result:=warning_array
		end

	--Function to get a string from a json_value
	send_json_value (obj:JSON_OBJECT; key: STRING):STRING
		--Sends the string representation of the JSON value	
		do
			Result:=""
			if attached {JSON_STRING} obj.item (key) as str then
				Result:=str.unescaped_string_8
			end
		end

	extract_req_parameter (req:WSF_REQUEST;str:STRING):STRING
		--Function that extracts the value of str from the request object
		do
			if attached {WSF_STRING} req.query_parameter (str) as p_str then
				Result := p_str.value
			else
				Result := ""
			end
		end

	check_req_parameter (req:WSF_REQUEST; str:STRING):BOOLEAN
		--Function that extracts the value of str from the request object
		do
			if attached {WSF_STRING} req.query_parameter (str) as p_str then
				Result := p_str.value.to_boolean
			else
				Result := false
			end
		end


	file_exists (fn: READABLE_STRING_GENERAL): BOOLEAN
		--Check if file exists or not
		local
			f: RAW_FILE
		do
			create f.make_with_name (fn)
			Result := f.exists and then f.is_readable
		end

	--Generates the unique id
	uuid_generator: UUID_GENERATOR
		once
			create Result
		end

	recursive_copy (src, dst:RAW_FILE)
		--Recursively copies the directories
		local
			dst_dir:DIRECTORY
			src_dir:DIRECTORY
			srcFile:RAW_FILE
			dstFile:RAW_FILE
			srcPath:PATH
			dstPath:PATH
			p:PATH
		do
			--if the src file is a directory, then recursively copy
			if src.is_directory then
				create dst_dir.make_with_path (dst.path)
				if not dst_dir.exists then
					dst_dir.recursive_create_dir
				end
				create src_dir.make_with_path (src.path)

				--Extract the directory list here
				across src_dir.entries as ic loop
					p:= ic.item
					if p.utf_8_name.at (1)/='.' then
						create srcPath.make_from_string (src.path.utf_8_name+"/"+p.utf_8_name)
						create dstPath.make_from_string (dst.path.utf_8_name+"/"+p.utf_8_name)
						create srcFile.make_with_path (srcPath)
						create dstFile.make_with_path (dstPath)
						recursive_copy (srcFile, dstFile)
					end
				end
			else
				--The src file is a file, so simply coy it
				create srcFile.make_open_read (src.path.utf_8_name)
				create dstFile.make_create_read_write (dst.path.utf_8_name)
				srcFile.copy_to (dstFile)
				srcFile.close
				dstFile.close
			end
		end

feature -- Compile commands

	compile_helper(path:STRING)
		local
			ec_process:PROCESS
			e_parser:EIFFEL_PARSER
		do
			--Compile

			ec_process:=p_factory.process_launcher_with_command_line (command_line,path)
		--	ec_process:=p_factory.process_launcher_with_command_line ("ec -config sample_1.ecf -c_compile -batch","C:/Users/Manav/Desktop/eve_server/sample_1")
			ec_process.enable_launch_in_new_process_group
			ec_process.set_separate_console (true)
			ec_process.redirect_error_to_agent (agent handle_error_compilation)
			ec_process.redirect_output_to_agent (agent handle_output_compilation)
			--ec_process.redirect_output_to_file ("C:/Users/Manav/Desktop/output.txt")
			--ec_process.redirect_error_to_file ("C:/Users/Manav/Desktop/error.txt")
			ec_process.launch

			--Wait for the compilation to finish.
			--Do Something to wait till compilation is over
			from
			until
				not ec_process.is_running
			loop
			end

			compile_message.replace_substring_all ("%R%N", "<br>")
			output_message.replace_substring_all ("%R%N", "<br>")

			if dump_message.is_empty then
				dump_message:=compile_message
			end

			--Parsing the command line string for errors and messages
			create e_parser.make (compile_message)
			compile_message:=e_parser.compile_message
			compile_message:=compile_message.substring (1, compile_message.substring_index ("Recompiled.", 1)+10)
			--If the project was finish_freezed then the errors, warnings would be lost if they are again allowed to modify.
			if path.substring_index ("W_code", 1)=0 then
				error_message:=e_parser.error_message
				warning_message:=e_parser.warning_message
				syntax_message:=e_parser.syntax_error
			end
			if not error_message.is_empty then
				has_error:=true
			end
			if not warning_message.is_empty then
				has_warning:=true
			end
			if not syntax_message.is_empty then
				has_syntax_error:=true
			end
		end

	execution_helper
		local
			ec_process:PROCESS
		do
			--Run the project
			command_line:=project_path+"/EIFGENs/"+project_name+"/W_code/"+project_name+".exe"
			command_line.replace_substring_all (".ecf", "")
			ec_process:=p_factory.process_launcher_with_command_line (command_line,"")
			ec_process.enable_launch_in_new_process_group
			ec_process.set_separate_console (true)
			ec_process.redirect_error_to_agent (agent handle_error_execution)
			ec_process.redirect_output_to_agent (agent handle_output_execution)
			ec_process.launch

			--Wait for the execution to finish.
			--Do Something to wait till compilation is over
			from
			until
				not ec_process.is_running
			loop
			end

			error_message.replace_substring_all ("%R%N", "<br>")
			output_message.replace_substring_all ("%R%N", "<br>")
		end

	view_helper (class_string:STRING)
		local
			ec_process:PROCESS
			e_parser:EIFFEL_PARSER
			output_index:INTEGER
		do
			--Get the class views
			ec_process:=p_factory.process_launcher_with_command_line (command_line,project_path)
			ec_process.enable_launch_in_new_process_group
			ec_process.set_separate_console (true)
			ec_process.redirect_error_to_agent (agent handle_error_classview)
			ec_process.redirect_output_to_agent (agent handle_output_classview)
			ec_process.launch

			--Wait for the execution to finish.
			--Do Something to wait till compilation is over
			from
			until
				not ec_process.is_running
			loop
			end

			error_message.replace_substring_all ("%R%N", "<br>")
			output_message.replace_substring_all ("%R%N", "<br>")

			if dump_message.is_empty then
				dump_message:=error_message
			end

			--Parsing the command line string for errors and messages
			create e_parser.make (error_message)
			output_message:=e_parser.output_message
			error_message:=e_parser.error_message
			warning_message:=e_parser.warning_message
			syntax_message:=e_parser.syntax_error

			if not error_message.is_empty then
				has_error:=true
			end
			if not warning_message.is_empty then
				has_warning:=true
			end
			if not syntax_message.is_empty then
				has_syntax_error:=true
			end

			if not has_error and not has_syntax_error then
				class_string.to_upper
				if output_message.has_substring (class_string+ " is not in the universe") then
					error_message:=output_message
					output_message:=""
				end
			end
		end


feature --input, output and error agents

	handle_error_compilation (a_str:STRING)
		--Agent that handles the error messages from the compilation
		do
			--io.put_string (a_str)
			if a_str.has_substring ("Error code") then
				--Error has occured. Deal with it
				has_error:=True
			end
			if a_str.has_substring ("Warning code") then
				--There is a warning in the project
				has_warning:=True
			end
			if a_str.has_substring ("Syntax error") then
				--There is a syntax error in the project
				has_syntax_error:=True
			end
			compile_message.append (a_str)
		end

	handle_output_compilation (a_str:STRING)
		--Agent that handles the output from the compilation
		do
			--io.put_string (a_str)
			--io.output.flush
			if not a_str.is_empty and a_str/=Void then
				output_message.append(a_str)
			end
		end

	handle_output_execution (a_str:STRING)
		--Agent that handles the output from the execution
		do
			--io.put_string (a_str)
			--io.output.flush
			if not a_str.is_empty and a_str/=Void then
				output_message.append(a_str)
			end
		end

	handle_error_execution (a_str:STRING)
		--Agent that handles the error from the execution
		do
			--io.put_string (a_str)
			has_runtime_error:=true
			error_message.append (a_str)
		end

	handle_output_classview (a_str:STRING)
		--Agent that handles the output from the execution
		do
			io.put_string (a_str)
			--io.output.flush
			if not a_str.is_empty and a_str/=Void then
				output_message.append(a_str)
			end
		end

	handle_error_classview (a_str:STRING)
		--Agent that handles the error from the execution
		do
			io.put_string (a_str)
			has_classview_error:=true
			error_message.append (a_str)
		end
end

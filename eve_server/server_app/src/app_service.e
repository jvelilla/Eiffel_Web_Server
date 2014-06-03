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
			map_uri_template_agent_with_request_methods ("/updateFile", agent put_file_location, router.methods_POST)
			map_uri_template_agent_with_request_methods ("/compile", agent get_compilation_result, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/cleanCompile", agent get_clean_compilation_result, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/errorList", agent get_error_list, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/warningList", agent get_warning_list, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/run", agent get_execution_result, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/runtimeErrorList", agent get_runtime_error_list, router.methods_GET)
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
	has_error: BOOLEAN
	has_warning: BOOLEAN
	has_syntax_error:BOOLEAN
	has_runtime_error:BOOLEAN

feature -- Execution

	-- Function that extracts the file location of the project
	put_file_location (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			input_string: STRING
			res_string:STRING
			parser: JSON_PARSER
			json_object:JSON_OBJECT
			string_array: LIST[STRING]
		do
			create input_string.make_empty
			has_error:=false
			has_warning:=false
			has_syntax_error:=false
			has_runtime_error:=false

			create compile_message.make_empty
			create error_message.make_empty
			create warning_message.make_empty
			create output_message.make_empty
			create syntax_message.make_empty

			req.read_input_data_into (input_string)
			create parser.make_parser (input_string)

			if attached {JSON_OBJECT} parser.parse as jv and parser.is_parsed then
				json_object:=jv
				file_location:= send_json_value(jv,"location")
				class_name:= send_json_value(jv,"class")
			end
			string_array:=file_location.split ('\')
			project_name:=string_array.at (string_array.count)
			project_path:=file_location.substring (1, file_location.count-project_name.count-1)

		ensure
			file_location_empty: file_location /= Void and not file_location.is_empty
		end

	--Function that compiles the file
	get_compilation_result (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			file_location_empty: file_location /= Void and not file_location.is_empty
		local
			input_string: STRING
			res_string:STRING
			parser: JSON_PARSER
			json_object:JSON_OBJECT
			json_array: JSON_ARRAY
		do
			--If target is to also to be provided, then deal with it here
			command_line:="ec -config "+ project_name+ " -c_compile -batch"

			--Compile the project
			compile_helper(project_path)

			--Creating the response JSON object
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			json_object.put_string (compile_message, "Compile_Message")
			if has_syntax_error then
				json_object.put_boolean (true, "Has_Error")
			else
				json_object.put_boolean (has_error, "Has_Error")
			end
			json_object.put_boolean (has_warning, "Has_Warning")
			json_object.put_string (output_message, "Output_Message")
			json_array.add (json_object)
			res_string.append (json_array.representation)

			res_string.replace_substring_all ("<br>", "\n")
			res.put_string (res_string)
		end

	--Function that clean compiles the file
	get_clean_compilation_result (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			file_location_empty: file_location /= Void and not file_location.is_empty
		local
			input_string: STRING
			res_string:STRING
			parser: JSON_PARSER
			json_object:JSON_OBJECT
			json_array: JSON_ARRAY
			finish_freezing_path: STRING
		do
			--If target is to also to be provided, then deal with it here
			--Gives the main option to clean compile a proect
			command_line:="ec -clean -config "+ project_name
			compile_helper(project_path)

			--Now do finish_freezing with it if it does not have errors
			if has_error=false and has_syntax_error=false then
				command_line:="finish_freezing"
				finish_freezing_path:=project_path+"\EIFGENs\"+project_name+"\W_code"
				finish_freezing_path.replace_substring_all (".ecf", "")
				compile_helper (finish_freezing_path)
			end

			--Creating the response JSON object
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			json_object.put_string (compile_message, "Compile_Message")
			if has_syntax_error then
				json_object.put_boolean (true, "Has_Error")
			else
				json_object.put_boolean (has_error, "Has_Error")
			end
			json_object.put_boolean (has_warning, "Has_Warning")
			json_object.put_string (output_message, "Output_Message")
			json_array.add (json_object)
			res_string.append (json_array.representation)

			res_string.replace_substring_all ("<br>", "\n")
			res.put_string (res_string)
		end

	get_error_list (req: WSF_REQUEST; res: WSF_RESPONSE)
		--Function that sends the error list back to the client
		require
			file_location_empty: file_location /= Void and not file_location.is_empty
		local
			res_string:STRING
			json_array: JSON_ARRAY
			error_list:EIFFEL_ERRORS
		do
			create res_string.make_empty
			create json_array.make_array
			if has_error=True then
				create error_list.make (error_message)
				json_array:=error_list.json_array
			end
			if has_syntax_error then
				create error_list.make (syntax_message)
				json_array:=error_list.json_array
			end
			res_string.append (json_array.representation)
			res_string.replace_substring_all ("<br>", "\n")
			res.put_string (res_string)
		end

	get_warning_list (req: WSF_REQUEST; res: WSF_RESPONSE)
		--Function that sends the warning list back to the client
		require
			file_location_empty: file_location /= Void and not file_location.is_empty
		local
			res_string:STRING
			json_array: JSON_ARRAY
			warning_list:EIFFEL_WARNINGS
		do
			create res_string.make_empty
			create json_array.make_array
			if has_warning=True then
				create warning_list.make (warning_message)
				json_array:=warning_list.json_array
			end

			res_string.append (json_array.representation)
			res_string.replace_substring_all ("<br>", "\n")
			res.put_string (res_string)
		end

	--Function that first compiles and then runs the program
	get_execution_result (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			file_location_empty: file_location /= Void and not file_location.is_empty
		local
			input_string: STRING
			res_string:STRING
			parser: JSON_PARSER
			json_object:JSON_OBJECT
			json_array:JSON_ARRAY
			ec_process: PROCESS
		do
			--Do compilation here and see the compile results and then send for run
			--If the project has not been compiled till now compile it or else don't compile it
			command_line:="ec -config "+ project_name+ " -c_compile -batch"
			compile_helper(project_path)

			--Prepare the response object
			create res_string.make_empty
			create json_array.make_array
			create json_object.make

			if has_error=true or has_syntax_error=true then
				json_object.put_string ("", "Execution_Output")
				json_object.put_boolean (true, "Has_Compile_Error")
				--Check for runtime errors
				json_object.put_boolean (false, "Has_Runtime_Error")
			else
				--Run the project
				execution_helper
				json_object.put_string (output_message, "Execution_Output")
				json_object.put_boolean (false, "Has_Compile_Error")
				--Check for runtime errors
				json_object.put_boolean (has_runtime_error, "Has_Runtime_Error")
			end
			json_array.add (json_object)
			res_string.append (json_array.representation)
			res_string.replace_substring_all ("<br>", "\n")
			res.put_string (res_string)
		end

	get_runtime_error_list (req: WSF_REQUEST; res: WSF_RESPONSE)
		--Function that sends the runtime error list back to the client
		require
			file_location_empty: file_location /= Void and not file_location.is_empty
		local
			res_string:STRING
			json_array: JSON_ARRAY
			json_object:JSON_OBJECT
			error_list:EIFFEL_RUNTIME
		do
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			if has_runtime_error=True then
				create error_list.make (error_message)
				json_array:=error_list.json_array
--				json_object.put_string (error_message, "error_message")
--				json_array.add (json_object)
			end
			res_string.append (json_array.representation)
			res_string.replace_substring_all ("<br>", "\n")
			res.put_string (res_string)
		end

	--Function that returns the interface view of a class
	get_interface_view (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			file_location_empty: file_location /= Void and not file_location.is_empty
			class_empty: class_name /= Void and not class_name.is_empty
		local
			input_string: STRING
			res_string:STRING
			parser: JSON_PARSER
			json_object:JSON_OBJECT
		do
			--Find interface_view for class name
			create res_string.make_from_string("[{%"result%" : %"")
			res_string.append("Interface View is here%"}]")
			res.put_string (res_string)
		end

	--Function that returns the flat view of a class
	get_flat_view (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			file_location_empty: file_location /= Void and not file_location.is_empty
			class_empty: class_name /= Void and not class_name.is_empty
		local
			input_string: STRING
			res_string:STRING
			parser: JSON_PARSER
			json_object:JSON_OBJECT
		do
			--find flat_view for class_name
			create res_string.make_from_string("[{%"result%" : %"")
			res_string.append("Flat View is here%"}]")
			res.put_string (res_string)
		end

	--Function that returns the contract view of a class
	get_contract_view (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			file_location_empty: file_location /= Void and not file_location.is_empty
			class_empty: class_name /= Void and not class_name.is_empty
		local
			input_string: STRING
			res_string:STRING
			parser: JSON_PARSER
			json_object:JSON_OBJECT
		do
			--Find contract view for class_name here
			create res_string.make_from_string("[{%"result%" : %"")
			res_string.append("Contract View is here%"}]")
			res.put_string (res_string)
		end

	--Function that returns the class Descendants of a class
	get_class_descendants (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			file_location_empty: file_location /= Void and not file_location.is_empty
			class_empty: class_name /= Void and not class_name.is_empty
		local
			input_string: STRING
			res_string:STRING
			parser: JSON_PARSER
			json_object:JSON_OBJECT
		do
			--Find class descendants for class_name here
			create res_string.make_from_string("[{%"result%" : %"")
			res_string.append("Class descendants is here%"}]")
			res.put_string (res_string)
		end

feature --Helper functions

	--Function to get a string from a json_value
	send_json_value (obj:JSON_OBJECT; key: STRING):STRING
		--Sends the string representation of the JSON value	
		do
			Result:=""
			if attached {JSON_STRING} obj.item (key) as str then
				Result:=str.unescaped_string_8
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
		--	ec_process:=p_factory.process_launcher_with_command_line ("ec -config sample_1.ecf -c_compile -batch","C:\Users\Manav\Desktop\eve_server\sample_1")
			ec_process.enable_launch_in_new_process_group
			ec_process.set_separate_console (true)
			ec_process.redirect_error_to_agent (agent handle_error_compilation)
			ec_process.redirect_output_to_agent (agent handle_output_compilation)
			--ec_process.redirect_output_to_file ("C:\Users\Manav\Desktop\output.txt")
			--ec_process.redirect_error_to_file ("C:\Users\Manav\Desktop\error.txt")
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

			--Parsing the command line string for errors and messages
			create e_parser.make (compile_message)
--			compile_message.append (e_parser.compile_message)
--			error_message.append (e_parser.error_message)
--			warning_message.append (e_parser.warning_message)
--			syntax_message.append (e_parser.syntax_error)

			compile_message:=e_parser.compile_message
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
			e_parser:EIFFEL_PARSER
		do
			--Run the project
			command_line:=project_path+"\EIFGENs\"+project_name+"\W_code\"+project_name+".exe"
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

--			--Parsing the command line string for errors and messages
--			create e_parser.make (compile_message)
--			compile_message:=e_parser.compile_message
--			error_message:=e_parser.error_message
--			warning_message:=e_parser.warning_message
--			syntax_message:=e_parser.syntax_error
--			if not error_message.is_empty then
--				has_error:=true
--			end
--			if not warning_message.is_empty then
--				has_warning:=true
--			end
--			if not syntax_message.is_empty then
--				has_syntax_error:=true
--			end
		end

feature --input, output and error agents

	handle_error_compilation (a_str:STRING)
		--Agent that handles the error messages from the compilation
		do
			io.put_string (a_str)
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
			io.put_string (a_str)
			--io.output.flush
			if not a_str.is_empty and a_str/=Void then
				output_message.append(a_str)
			end
		end

	handle_output_execution (a_str:STRING)
		--Agent that handles the output from the execution
		do
			io.put_string (a_str)
			--io.output.flush
			if not a_str.is_empty and a_str/=Void then
				output_message.append(a_str)
			end
		end

	handle_error_execution (a_str:STRING)
		--Agent that handles the error from the execution
		do
			io.put_string (a_str)
			has_runtime_error:=true
			error_message.append (a_str)
		end
end

note
	description: "Summary description for {EIFFEL_WARNINGS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EIFFEL_WARNINGS
create
	make

feature -- Make
	make(a_str:STRING)
		do
			initialize (a_str)
			create json_object.make
			create_warning_list
		end

feature --Access
	warning_message:STRING
	warning_count:INTEGER
	json_array:JSON_ARRAY
	json_object:JSON_OBJECT

feature --Execution
	initialize(a_str:STRING)
		--Initialize warning message to the local string of the class
		require
			string_not_empty: a_str/=Void and not a_str.is_empty
		do
			warning_message:=a_str
			warning_message.replace_substring_all ("%N", "<br>")
		ensure
			string_set: warning_message=a_str
		end

	create_warning_list
		--Parses the warning line number, type, and description
		--Assumptions for warning messages:
			--	Message is always expected to have Warning_Code and Warning
			--	Message is always expected to have "What_To_Do".
			-- 	If the message does not have a Class, then it is not expected to have a Feature either.
			--	So simply dump it in after_feature key (including the what to do)
		local
			warning_code_start_index:INTEGER
			warning_start_index: INTEGER
			what_to_do_start_index: INTEGER
			class_start_index:INTEGER
			feature_start_index: INTEGER

			warning_code_last_index:INTEGER
			warning_last_index: INTEGER
			what_to_do_last_index: INTEGER
			class_last_index:INTEGER
			feature_last_index: INTEGER

			warning_code_string:STRING
			warning_string: STRING
			what_to_do_string:STRING
			class_string:STRING
			feature_string: STRING
			after_feature_string: STRING

			i:INTEGER
			warning_index:INTEGER
			message_end:INTEGER
			dump_index:INTEGER

			has_what_to_do:BOOLEAN
			has_class:BOOLEAN
			has_Feature:BOOLEAN

		do
			create json_array.make_array
			warning_count:=0

			from
				warning_index:=warning_message.substring_index ("Warning code", 1)
			until
				warning_index=0
			loop
				create json_object.make
				has_what_to_do:=true
				has_class:=true
				has_feature:=true

				--Message is always expected to have Warning_Code and Warning
				warning_code_start_index:=warning_message.substring_index ("Warning code: ", warning_index)+14
				warning_code_last_index:=warning_message.substring_index ("Warning:", warning_index)-1

				warning_start_index:=warning_message.substring_index ("Warning: ", warning_index)+9
				warning_last_index:=warning_message.substring_index ("What to do:", warning_index)-1

				message_end:=warning_message.substring_index ("-----", warning_code_start_index+1)-1

				--	Message is always expected to have "What_To_Do".
				-- 	If the message does not have a Class, then it is not expected to have a feature or line either.
				--	So simply dump it.
				what_to_do_start_index:=warning_message.substring_index ("What to do: ", warning_index)+12

				what_to_do_last_index:=warning_message.substring_index ("Class:", warning_index)-1
				--If no class exists in the warning message's length, then dump what_to_do
				if what_to_do_last_index=-1 or what_to_do_last_index>message_end then
					has_what_to_do:=false
					dump_index:=what_to_do_start_index-12
					what_to_do_last_index:=dump_index-1
				end

				class_start_index:=warning_message.substring_index ("Class: ", warning_index)+7
				--If the warning does not contain a class in the warning message's length
				if class_start_index=7 or class_start_index>message_end then
					has_class:=false
					dump_index:=what_to_do_last_index+1
					class_last_index:=dump_index-1
				else
					from
						i:=class_start_index
					until
						--Change this line if the line breaker changes
						warning_message.at (i)='>'
					loop
						i:=i+1
					end
					--Change this line if the line breaker changes
					class_last_index:=i
					dump_index:=class_last_index+1
				end

				feature_start_index:=warning_message.substring_index ("Feature: ", warning_index)+9
				--If the warning does not contain a feature in the warning message's length
				if feature_start_index=9 or feature_start_index>message_end then
					has_feature:=false
					dump_index:=class_last_index+1
					feature_last_index:=dump_index-1
				else
					from
						i:=feature_start_index
					until
						--Change this line if the line breaker changes
						warning_message.at (i)='>'
					loop
						i:=i+1
					end
					--Change this line if the line breaker changes
					feature_last_index:=i
					dump_index:=feature_last_index+1
				end

				warning_code_string:=warning_message.substring (warning_code_start_index, warning_code_last_index)
				warning_string:=warning_message.substring (warning_start_index,warning_last_index)
--				what_to_do_string:=warning_message.substring (what_to_do_start_index,what_to_do_last_index)
--				class_string:=warning_message.substring (class_start_index,class_last_index)
--				feature_string:=warning_message.substring (feature_start_index,feature_last_index)
--				after_feature_string:=warning_message.substring (feature_last_index+1, warning_message.substring_index ("-----", warning_index)-1)

				if has_what_to_do then
					what_to_do_string:=warning_message.substring (what_to_do_start_index,what_to_do_last_index)
				else
					what_to_do_string:=""
				end

				if has_class then
					class_string:=warning_message.substring (class_start_index,class_last_index)
				else
					class_string:=""
				end

				if has_feature then
					feature_string:=warning_message.substring (feature_start_index,feature_last_index)
				else
					feature_string:=""
				end

				--The dump of the message is here
				after_feature_string:=warning_message.substring (dump_index, message_end)

				--Create the parsed warning
				json_object.put_string (warning_code_string,"Warning_Code")
				json_object.put_string (warning_string,"Warning")
				json_object.put_string (what_to_do_string,"What_to_do")
				json_object.put_string (class_string,"Class")
				json_object.put_string (feature_string,"Feature")
				json_object.put_string (after_feature_string, "After_Feature")

				--json_object.put_string ("True","Has_warning")
				json_array.add (json_object)

				--Updating the loop variable
				warning_index:=warning_message.substring_index ("Warning code",feature_last_index)
				warning_count:=warning_count+1

				--Checking the parsed warning
				io.put_string (json_array.i_th (warning_count).representation)
				io.put_new_line
			end
		end
end

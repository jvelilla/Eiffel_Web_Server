note
	description: "Summary description for {MY_THREAD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MY_THREAD

inherit
	THREAD


feature --Variables

	--Change this address
	fixed_project_path:STRING = "C:/Users/Manav/Desktop/eve_server/projects/"

feature --Execute
	execute
		do
			delete_eifgens
		end

feature --Executing functions
		delete_eifgens
			--Deletes the EIFGEN's that have not been used for more than 90 days
			local
				main_dir:DIRECTORY
				file:RAW_FILE
				sub_path:PATH
				eifgen_dir:DIRECTORY
				date:DATE_TIME
				cur_date:DATE_TIME
				duration:DATE_TIME_DURATION
				dur_length:DATE_TIME_DURATION
				p:PATH
			do
				create main_dir.make_with_path (create {PATH}.make_from_string (fixed_project_path))
				--Extract the list of projects here
				across main_dir.entries as ic loop
					p:= ic.item
					if p.utf_8_name.at (1)/='.' then
						create sub_path.make_from_string (fixed_project_path+"/"+p.utf_8_name+"/EIFGENs")
						create eifgen_dir.make_with_path (sub_path)

						--If the EIFGEN's exist, then check if it is more than 90 days old(in seconds) and delete it.
						if eifgen_dir.exists then
							create file.make_with_path (eifgen_dir.path)
							create date.make_from_epoch(file.date)
							create cur_date.make_now
							duration:=cur_date.relative_duration (date)
							if duration.seconds_count>=(60*60*24*90) then
								eifgen_dir.recursive_delete
--								io.put_string (date.out)
--								io.put_new_line
							end
						end
					end
				end
			end
end

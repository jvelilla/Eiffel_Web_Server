note
	description: "Summary description for {MY_THREAD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MY_THREAD

inherit
	THREAD

create
	make, make_with_values

feature
	make_with_values (sec:INTEGER; lifetime:INTEGER)
		do
			make
			seconds_after_midnight:=sec
			eifgen_duration:=lifetime
		end

feature --Variables

	--Change this address
	fixed_project_path:STRING = "C:/Users/Manav/Desktop/eve_server/projects/"
	sub_path:PATH
	seconds_after_midnight:INTEGER
	eifgen_duration:INTEGER

feature --Execute
	execute
		local
			time:DATE_TIME
		do
			--Running this thread infinitely. And when the time is seconds_after_midnight seconds past midnight ,it will check to delete the usused EIFGEN's
			from

			until
				false
			loop
				create time.make_now
				--io.put_integer (time.time.seconds)
				--At seconds_after_midnight seconds past midnight everyday, it will check to delete the EIFGEN's if they haven't been used for over 90 days.
				if time.time.seconds=seconds_after_midnight then
					delete_eifgens
				end
			end
		end

feature --Executing functions
		delete_eifgens
			--Deletes the EIFGEN's that have not been used for more than 90 days
			local
				main_dir:DIRECTORY
				file:RAW_FILE
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
							if duration.seconds_count>=eifgen_duration then
								eifgen_dir.recursive_delete
--								io.put_string (date.out)
--								io.put_new_line
							end
						end
					end
				end
			end
end

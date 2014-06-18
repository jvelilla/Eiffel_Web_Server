note
	description : "sample application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			a,c: INTEGER
			bal:ACCOUNT
		do
			--| Add your code here
			io.put_string ("Hello Eiffel World!%N")
			extra_feature(0)
			from
				c:=1
			until
				c=2
			loop
				io.put_string (a.out)
			end
			create bal.make (10)
			bal.withdraw (5)
		end

	extra_feature (a:INTEGER)
		require
			number_out_of_range: a=0
		local
			s:STRING
		do
			io.put_string ("Number not out of range")
			io.put_new_line
			create s.make_from_string ("abcd")
		ensure
			number_out_of_range: a=0
		end
end

note
	description : "sample_1 application root class"
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
		do
			--| Add your code here
			print ("Hello Eiffel World!%N")
			a:=4
			c:=1.4
			print(c.out)
		end

	extra_feature
		do
		end
end

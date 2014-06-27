note
	description: "Summary description for {HTTP_SERVER_CONFIGURATION}."
	date: "$Date$"
	revision: "$Revision$"

class
	HTTP_SERVER_CONFIGURATION

inherit
	HTTP_SERVER_CONFIGURATION_I

create
	make

feature -- Status

	Server_details: STRING_8 = "Server : NINO Eiffel Server"
	
	has_ssl_support: BOOLEAN = False
			-- Precursor

feature -- SSL Helpers

	set_ssl_protocol_to_ssl_2_or_3
			-- Set `ssl_protocol' with `Ssl_23'.
		do
				-- Ignored
		end

	set_ssl_protocol_to_ssl_3
			-- Set `ssl_protocol' with `Ssl_3'.
		do
				-- Ignored
		end

	set_ssl_protocol_to_tls_1_0
			-- Set `ssl_protocol' with `Tls_1_0'.
		do
				-- Ignored
		end

	set_ssl_protocol_to_tls_1_1
			-- Set `ssl_protocol' with `Tls_1_1'.
		do
				-- Ignored
		end

	set_ssl_protocol_to_tls_1_2
			-- Set `ssl_protocol' with `Tls_1_2'.
		do
				-- Ignored
		end

	set_ssl_protocol_to_dtls_1_0
			-- Set `ssl_protocol' with `Dtls_1_0'.
		do
				-- Ignored
		end	


note
	copyright: "2011-2013, Javier Velilla, Jocelyn Fiat and others"
	license: "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end

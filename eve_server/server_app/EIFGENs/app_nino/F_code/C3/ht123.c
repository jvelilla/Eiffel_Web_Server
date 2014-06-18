/*
 * Code for class HTTP_STATUS_CODE_MESSAGES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht123.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_STATUS_CODE_MESSAGES}.http_status_code_message */
EIF_REFERENCE F164_8311 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	RTGC;
	switch (arg1) {
		case 100L:
			Result = RTMS_EX_H("Continue",8,2035097445);
			break;
		case 101L:
			Result = RTMS_EX_H("Switching Protocols",19,99036275);
			break;
		case 102L:
			Result = RTMS_EX_H("Processing",10,1807591271);
			break;
		case 200L:
			Result = RTMS_EX_H("OK",2,20299);
			break;
		case 201L:
			Result = RTMS_EX_H("Created",7,1222454116);
			break;
		case 202L:
			Result = RTMS_EX_H("Accepted",8,385886052);
			break;
		case 203L:
			Result = RTMS_EX_H("Non-Authoritative Information",29,225469550);
			break;
		case 204L:
			Result = RTMS_EX_H("No Content",10,440539764);
			break;
		case 205L:
			Result = RTMS_EX_H("Reset Content",13,1200807028);
			break;
		case 206L:
			Result = RTMS_EX_H("Partial Content",15,993868660);
			break;
		case 207L:
			Result = RTMS_EX_H("Multi-Status",12,1677333619);
			break;
		case 300L:
			Result = RTMS_EX_H("Multiple Choices",16,1134913651);
			break;
		case 301L:
			Result = RTMS_EX_H("Moved Permanently",17,478838905);
			break;
		case 302L:
			Result = RTMS_EX_H("Found",5,1870504548);
			break;
		case 303L:
			Result = RTMS_EX_H("See Other",9,1935819122);
			break;
		case 304L:
			Result = RTMS_EX_H("Not Modified",12,104637284);
			break;
		case 305L:
			Result = RTMS_EX_H("Use Proxy",9,2023926393);
			break;
		case 306L:
			Result = RTMS_EX_H("Switch Proxy",12,1183095161);
			break;
		case 307L:
			Result = RTMS_EX_H("Temporary Redirect",18,1809363828);
			break;
		case 400L:
			Result = RTMS_EX_H("Bad Request",11,480473204);
			break;
		case 401L:
			Result = RTMS_EX_H("Unauthorized",12,2043467108);
			break;
		case 402L:
			Result = RTMS_EX_H("Payment Required",16,595669604);
			break;
		case 403L:
			Result = RTMS_EX_H("Forbidden",9,1133290094);
			break;
		case 404L:
			Result = RTMS_EX_H("Not Found",9,519938148);
			break;
		case 405L:
			Result = RTMS_EX_H("Method Not Allowed",18,1556186724);
			break;
		case 406L:
			Result = RTMS_EX_H("Not Acceptable",14,1326595941);
			break;
		case 407L:
			Result = RTMS_EX_H("Proxy Authentication Required",29,295093604);
			break;
		case 408L:
			Result = RTMS_EX_H("Request Timeout",15,1729348212);
			break;
		case 409L:
			Result = RTMS_EX_H("Conflict",8,2084989300);
			break;
		case 410L:
			Result = RTMS_EX_H("Gone",4,1198485093);
			break;
		case 411L:
			Result = RTMS_EX_H("Length Required",15,1215469156);
			break;
		case 412L:
			Result = RTMS_EX_H("Precondition Failed",19,99381604);
			break;
		case 413L:
			Result = RTMS_EX_H("Request Entity Too Large",24,255904869);
			break;
		case 414L:
			Result = RTMS_EX_H("Request-URI Too Long",20,1098108775);
			break;
		case 415L:
			Result = RTMS_EX_H("Unsupported Media Type",22,1806357861);
			break;
		case 416L:
			Result = RTMS_EX_H("Requested Range Not Satisfiable",31,2118876005);
			break;
		case 417L:
			Result = RTMS_EX_H("Expectation Failed",18,1777869668);
			break;
		case 418L:
			Result = RTMS_EX_H("I\'m a teapot",12,2019786356);
			break;
		case 421L:
			Result = RTMS_EX_H("There are too many connections from your internet address",57,608721779);
			break;
		case 422L:
			Result = RTMS_EX_H("Unprocessable Entity",20,458227577);
			break;
		case 423L:
			Result = RTMS_EX_H("Locked",6,1818257252);
			break;
		case 424L:
			Result = RTMS_EX_H("Failed Dependency",17,1405794681);
			break;
		case 425L:
			Result = RTMS_EX_H("Unordered Collection",20,184548974);
			break;
		case 426L:
			Result = RTMS_EX_H("Upgrade Required",16,1938052964);
			break;
		case 449L:
			Result = RTMS_EX_H("Retry With",10,1852474984);
			break;
		case 450L:
			Result = RTMS_EX_H("Blocked by Windows Parental Controls",36,1954523251);
			break;
		case 500L:
			Result = RTMS_EX_H("Internal Server Error",21,1474060146);
			break;
		case 501L:
			Result = RTMS_EX_H("Not Implemented",15,748386148);
			break;
		case 502L:
			Result = RTMS_EX_H("Bad Gateway",11,1111329657);
			break;
		case 503L:
			Result = RTMS_EX_H("Service Unavailable",19,706765669);
			break;
		case 504L:
			Result = RTMS_EX_H("Gateway Timeout",15,1652483444);
			break;
		case 505L:
			Result = RTMS_EX_H("HTTP Version Not Supported",26,648490084);
			break;
		case 506L:
			Result = RTMS_EX_H("Variant Also Negotiates",23,1399311731);
			break;
		case 507L:
			Result = RTMS_EX_H("Insufficient Storage",20,958966629);
			break;
		case 509L:
			Result = RTMS_EX_H("Bandwidth Limit Exceeded",24,843410532);
			break;
		case 510L:
			Result = RTMS_EX_H("Not Extended",12,502999396);
			break;
		case 530L:
			Result = RTMS_EX_H("User access denied",18,1732144484);
			break;
		default:
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTLE;
	return Result;
}

void EIF_Minit123 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class WEL_PROCESS_CREATION_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we50.h"
#include <winbase.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PROCESS_CREATION_CONSTANTS}.create_new_console */
EIF_INTEGER_32 F69_6487 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) CREATE_NEW_CONSOLE;
	return Result;
}

/* {WEL_PROCESS_CREATION_CONSTANTS}.detached_process */
EIF_INTEGER_32 F69_6490 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) DETACHED_PROCESS;
	return Result;
}

/* {WEL_PROCESS_CREATION_CONSTANTS}.create_unicode_environment */
EIF_INTEGER_32 F69_6491 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) CREATE_UNICODE_ENVIRONMENT;
	return Result;
}

void EIF_Minit50 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

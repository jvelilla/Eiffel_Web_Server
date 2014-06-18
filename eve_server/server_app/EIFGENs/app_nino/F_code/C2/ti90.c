/*
 * Code for class TIME_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti90.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TIME_CONSTANTS}.time_default_format_string */
EIF_REFERENCE F135_7791 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = RTOUCR(218,F63_6467,(RTCV(RTOUCR(213,F134_7784,(Current)))));
	RTLE;
	return Result;
}

void EIF_Minit90 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class JSON_NULL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js389.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_NULL}.hash_code */
EIF_INTEGER_32 F986_19037 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F885_17002(RTCV(RTOUCR(153,F986_19041,(Current))));
	RTLE;
	return Result;
}

/* {JSON_NULL}.representation */
EIF_REFERENCE F986_19038 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	RTGC;
	Result = RTMS_EX_H("null",4,1853189228);
	RTLE;
	return Result;
}

/* {JSON_NULL}.null_value */

EIF_REFERENCE F986_19041 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (153,RTMS_EX_H("null",4,1853189228));
}

void EIF_Minit389 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

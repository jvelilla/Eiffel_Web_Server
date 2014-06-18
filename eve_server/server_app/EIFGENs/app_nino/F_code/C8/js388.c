/*
 * Code for class JSON_BOOLEAN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js388.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_BOOLEAN}.make_boolean */
void F985_19031 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) arg1;
}

/* {JSON_BOOLEAN}.hash_code */
EIF_INTEGER_32 F985_19033 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
	Result = (tb1 ? 1L : 0L);
	RTLE;
	return Result;
}

/* {JSON_BOOLEAN}.representation */
EIF_REFERENCE F985_19034 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		Result = RTMS_EX_H("true",4,1953658213);
	} else {
		Result = RTMS_EX_H("false",5,1635280741);
	}
	RTLE;
	return Result;
}

void EIF_Minit388 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

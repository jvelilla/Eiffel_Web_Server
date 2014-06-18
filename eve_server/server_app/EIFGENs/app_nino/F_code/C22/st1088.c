/*
 * Code for class STRING_TABLE [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st1088.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_TABLE}.make_caseless */
void F705_13149 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F699_13000(Current, arg1);
	RTLE;
}

/* {STRING_TABLE}.hash_code_of */
EIF_INTEGER_32 F705_13151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_)) {
		ti4_1 = F885_17003(RTCV(arg1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F885_17002(RTCV(arg1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}/* NOTREACHED */
	
}

/* {STRING_TABLE}.same_keys */
EIF_BOOLEAN F705_13153 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_)) {
		tb1 = F885_17035(RTCV(arg1), arg2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		tb1 = F885_17038(RTCV(arg1), arg2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}/* NOTREACHED */
	
}

/* {STRING_TABLE}.is_equal */
EIF_BOOLEAN F705_13154 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_5_3_);
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_) == tb1)) {
		RTLE;
		return (EIF_BOOLEAN) F699_13020(Current, arg1);
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {STRING_TABLE}.empty_duplicate */
EIF_REFERENCE F705_13155 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_)) {
		tr1 = RTLNSMART(dftype);
		F705_13149(RTCV(tr1), arg1);
		Result = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNSMART(dftype);
		F699_13000(RTCV(tr1), arg1);
		Result = (EIF_REFERENCE) tr1;
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_)) {
		F240_9595(RTCV(Result));
	}
	RTLE;
	return Result;
}

void EIF_Minit1088 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class FITNESS_AND_QUALITY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi362.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FITNESS_AND_QUALITY}.make */
void F898_18478 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_64 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_REAL_64 *)(Current+ _R64OFF_1_0_0_1_0_0_0_0_) = (EIF_REAL_64) arg2;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FITNESS_AND_QUALITY}.entity */
EIF_REFERENCE F898_18481 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {FITNESS_AND_QUALITY}.set_entity */
void F898_18483 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {FITNESS_AND_QUALITY}.is_less */
EIF_BOOLEAN F898_18484 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_0_0_0_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == ti4_1)) {
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_1_0_0_1_0_0_0_0_);
		tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_1_0_0_1_0_0_0_0_);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tr8_1 < tr8_2);
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_0_0_0_);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 < ti4_2);
	}
	RTLE;
	return Result;
}

void EIF_Minit362 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

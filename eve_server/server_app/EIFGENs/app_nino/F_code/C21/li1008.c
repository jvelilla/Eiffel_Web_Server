/*
 * Code for class LINEAR [REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li1008.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINEAR}.has */
EIF_BOOLEAN F282_9729 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[dtype-459])(Current);
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9287[dtype-268])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9297[dtype-268])(Current, (EIF_REFERENCE) &arg1);
	}
	Result = F282_9735(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {LINEAR}.search */
void F282_9731 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O9209[Dtype(Current)-238])) {
		for (;;) {
			tb1 = '\01';
			if (!F282_9735(Current)) {
				tb1 = (arg1 == F816_12636(Current));
			}
			if (tb1) break;
			F816_12664(Current);
		}
	} else {
		for (;;) {
			tb2 = '\01';
			if (!F282_9735(Current)) {
				tb2 = (EIF_BOOLEAN)(arg1 == F816_12636(Current));
			}
			if (tb2) break;
			F816_12664(Current);
		}
	}
	RTLE;
}

/* {LINEAR}.item_for_iteration */
EIF_REAL_32 F282_9734 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_32) F816_12636(Current);
}

/* {LINEAR}.exhausted */
EIF_BOOLEAN F282_9735 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9287[Dtype(Current)-268])(Current);
}

/* {LINEAR}.off */
EIF_BOOLEAN F282_9737 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F329_9603(Current)) {
		Result = F780_12451(Current);
	}
	RTLE;
	return Result;
}

/* {LINEAR}.linear_representation */
EIF_REFERENCE F282_9744 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

void EIF_Minit1008 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

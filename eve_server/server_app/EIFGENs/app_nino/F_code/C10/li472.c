/*
 * Code for class LINEAR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li472.h"

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
EIF_BOOLEAN F269_9729 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[dtype-459])(Current);
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9287[dtype-268])(Current)) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9297[dtype-268])(Current, tr1);
	}
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9301[dtype-268])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {LINEAR}.search */
void F269_9731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O9209[dtype-238])) {
		for (;;) {
			tb1 = '\01';
			if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9301[dtype-268])(Current)) {
				tb1 = RTEQ(arg1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9286[dtype-459])(Current));
			}
			if (tb1) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[dtype-459])(Current);
		}
	} else {
		for (;;) {
			tb2 = '\01';
			if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9301[dtype-268])(Current)) {
				tb2 = RTCEQ(arg1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9286[dtype-459])(Current));
			}
			if (tb2) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[dtype-459])(Current);
		}
	}
	RTLE;
}

/* {LINEAR}.item_for_iteration */
EIF_REFERENCE F269_9734 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	RTLE;
	return (EIF_REFERENCE) (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9286[Dtype(Current)-459])(Current);
}

/* {LINEAR}.exhausted */
EIF_BOOLEAN F269_9735 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9287[Dtype(Current)-268])(Current);
}

/* {LINEAR}.off */
EIF_BOOLEAN F269_9737 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[dtype-313])(Current)) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[dtype-459])(Current);
	}
	RTLE;
	return Result;
}

/* {LINEAR}.linear_representation */
EIF_REFERENCE F269_9744 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

void EIF_Minit472 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class LINEAR [NATURAL_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li876.h"

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
EIF_BOOLEAN F279_9729 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
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
	Result = F279_9735(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {LINEAR}.search */
void F279_9731 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O9209[dtype-238])) {
		for (;;) {
			tb1 = '\01';
			if (!F279_9735(Current)) {
				tb1 = (arg1 == *(EIF_NATURAL_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9286[dtype-459])(Current)));
			}
			if (tb1) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[dtype-459])(Current);
		}
	} else {
		for (;;) {
			tb2 = '\01';
			if (!F279_9735(Current)) {
				tb2 = (EIF_BOOLEAN)(arg1 == *(EIF_NATURAL_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9286[dtype-459])(Current)));
			}
			if (tb2) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[dtype-459])(Current);
		}
	}
	RTLE;
}

/* {LINEAR}.item_for_iteration */
EIF_NATURAL_8 F279_9734 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) *(EIF_NATURAL_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9286[Dtype(Current)-459])(Current));
}

/* {LINEAR}.exhausted */
EIF_BOOLEAN F279_9735 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9287[Dtype(Current)-268])(Current);
}

/* {LINEAR}.off */
EIF_BOOLEAN F279_9737 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F326_9603(Current)) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[Dtype(Current)-459])(Current);
	}
	RTLE;
	return Result;
}

/* {LINEAR}.linear_representation */
EIF_REFERENCE F279_9744 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

void EIF_Minit876 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

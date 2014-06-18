/*
 * Code for class LINKED_LIST_ITERATION_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li502.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKED_LIST_ITERATION_CURSOR}.item */
EIF_REFERENCE F672_12217 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTLE;
		return (EIF_REFERENCE) F652_12189(Current);
	} else {
		RTCT0("active_attached", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + O11329[Dtype(Current)-671]);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTCK0;
		} else {
			RTCF0;
		}
		Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc1)-120])(RTCV(loc1));
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST_ITERATION_CURSOR}.after */
EIF_BOOLEAN F672_12218 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTLE;
		return (EIF_BOOLEAN) F652_12201(Current);
	} else {
		Result = '\01';
		if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11321[dtype-651])(Current)) {
			Result = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11329[dtype-671]) == NULL);
		}
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST_ITERATION_CURSOR}.start */
void F672_12219 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F652_12208(Current);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		tr1 = *(EIF_REFERENCE *)(Current + O11327[dtype-651]);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + O11572[Dtype(tr1)-796]);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O11329[dtype-671]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {LINKED_LIST_ITERATION_CURSOR}.forth */
void F672_12220 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	
	RTGC;
	F652_12209(Current);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + O11329[dtype-671]);
			loc2 = tr1;
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_4_)) || (EIF_BOOLEAN) !EIF_TEST(loc2))) break;
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + O9690[Dtype(loc2)-126]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11329[dtype-671]) = (EIF_REFERENCE) tr1;
			loc1++;
		}
	}
	RTLE;
}

/* {LINKED_LIST_ITERATION_CURSOR}.target */
EIF_REFERENCE F672_12221 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11327[Dtype(Current) - 651]);
}


/* {LINKED_LIST_ITERATION_CURSOR}.active */
EIF_REFERENCE F672_12222 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11329[Dtype(Current) - 671]);
}


void EIF_Minit502 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

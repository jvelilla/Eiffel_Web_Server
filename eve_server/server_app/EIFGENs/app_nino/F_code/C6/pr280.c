/*
 * Code for class PROCESS_THREAD_TIMER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr280.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PROCESS_THREAD_TIMER}.make */
void F576_11813 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F145_7952(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_3_0_0_) = (EIF_INTEGER_32) arg1;
	tr1 = RTLNSMART(eif_non_attached_type(582));
	F583_13483(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {PROCESS_THREAD_TIMER}.start */
void F576_11814 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F583_13486(RTCV(tr1));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F145_7956(Current);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F583_13488(RTCV(tr1));
	RTLE;
}

/* {PROCESS_THREAD_TIMER}.destroy */
void F576_11815 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F583_13486(RTCV(tr1));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F583_13488(RTCV(tr1));
	RTLE;
}

/* {PROCESS_THREAD_TIMER}.wait */
EIF_BOOLEAN F576_11816 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		F145_7963(Current);
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tu8_1 = (EIF_NATURAL_64) arg1;
		Result = F145_7964(Current, tu8_1);
	}
	RTLE;
	return Result;
}

/* {PROCESS_THREAD_TIMER}.execute */
void F576_11818 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_64 loc1 = (EIF_INTEGER_64) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = tr1;
	loc2 = RTRV(eif_non_attached_type(109),loc2);
	if (EIF_TEST(loc2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_3_0_0_);
		loc1 = (EIF_INTEGER_64) ti4_1;
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1000000L);
		loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) (loc1 * ti8_1);
		for (;;) {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_3_2_)) break;
			F110_7916(RTCV(loc2));
			if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_3_2_)) {
				F572_11793(Current, loc1);
			}
		}
	}
	RTLE;
}

/* {PROCESS_THREAD_TIMER}.mutex */
EIF_REFERENCE F576_11820 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


void EIF_Minit280 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

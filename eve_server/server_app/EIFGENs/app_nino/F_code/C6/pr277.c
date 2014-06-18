/*
 * Code for class PROCESS_ERROR_LISTENER_THREAD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr277.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PROCESS_ERROR_LISTENER_THREAD}.make */
void F573_11807 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	F145_7952(Current);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	tr1 = RTLNSMART(eif_non_attached_type(582));
	F583_13483(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {PROCESS_ERROR_LISTENER_THREAD}.execute */
void F573_11808 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_64 loc2 = (EIF_INTEGER_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_);
	loc2 = (EIF_INTEGER_64) ti4_1;
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1000000L);
	loc2 = (EIF_INTEGER_64) (EIF_INTEGER_64) (loc2 * ti8_1);
	for (;;) {
		if (loc1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F110_7924(RTCV(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_24_14_0_5_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			if (F146_7974(Current)) {
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				F572_11793(Current, loc2);
			}
		}
	}
	RTLE;
}

void EIF_Minit277 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

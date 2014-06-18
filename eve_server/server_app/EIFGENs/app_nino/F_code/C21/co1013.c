/*
 * Code for class COLLECTION [REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co1013.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COLLECTION}.fill */
void F389_9620 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_32 tr4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9213[Dtype(arg1)-268])(RTCV(arg1));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(loc1)-459])(RTCV(loc1));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9226[dtype-459])(Current)) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9287[Dtype(loc1)-268])(RTCV(loc1));
			tb1 = tb2;
		}
		if (tb1) break;
		tr4_1 = F816_12636(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[dtype-459])(Current, (EIF_REFERENCE) &tr4_1);
		F816_12664(RTCV(loc1));
	}
	RTLE;
}

void EIF_Minit1013 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

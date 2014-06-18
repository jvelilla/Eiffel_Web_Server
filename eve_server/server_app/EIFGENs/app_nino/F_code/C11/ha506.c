/*
 * Code for class HASH_TABLE_ITERATION_CURSOR [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha506.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HASH_TABLE_ITERATION_CURSOR}.item */
EIF_REFERENCE F667_12212 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11327[Dtype(Current)-651]);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + O11662[Dtype(tr1)-696]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(tr1)-696])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_));
	RTLE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.key */
EIF_REFERENCE F667_12213 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11327[Dtype(Current)-651]);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + O11663[Dtype(tr1)-696]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(tr1)-696])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_));
	RTLE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F667_12214 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = '\01';
	tb1 = '\01';
	if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11321[dtype-651])(Current)) {
		tb1 = (EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L));
	}
	if (!tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O11327[dtype-651]);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + O11663[Dtype(tr1)-696]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
		Result = (EIF_BOOLEAN) (loc1 >= ti4_1);
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.forth */
void F667_12215 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L)))) break;
			tr1 = *(EIF_REFERENCE *)(Current + O11327[dtype-651]);
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R11653[Dtype(tr1)-696])(RTCV(tr1), loc3);
			loc1++;
		}
	} else {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tr1 = *(EIF_REFERENCE *)(Current + O11327[dtype-651]);
				tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + O11663[Dtype(tr1)-696]);
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
				tb1 = (EIF_BOOLEAN) (loc3 >= ti4_1);
			}
			if (tb1) break;
			tr1 = *(EIF_REFERENCE *)(Current + O11327[dtype-651]);
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R11652[Dtype(tr1)-696])(RTCV(tr1), loc3);
			loc1++;
		}
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) loc3;
	RTLE;
}

/* {HASH_TABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F667_12216 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11327[Dtype(Current) - 651]);
}


void EIF_Minit506 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

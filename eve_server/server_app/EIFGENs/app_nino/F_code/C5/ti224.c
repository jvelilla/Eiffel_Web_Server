/*
 * Code for class TIME_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti224.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TIME_DURATION}.make */
void F532_10472 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) arg2;
	tr8_1 = (EIF_REAL_64) (arg3);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	RTLE;
}

/* {TIME_DURATION}.make_fine */
void F532_10473 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) arg2;
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) arg3;
	RTLE;
}

/* {TIME_DURATION}.make_by_seconds */
void F532_10474 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	ti4_1 = F134_7783(Current, arg1, ((EIF_INTEGER_32) 3600L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 3600L))));
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) -= tr8_1;
	ti4_1 = F532_10481(Current);
	ti4_1 = F134_7783(Current, ti4_1, ((EIF_INTEGER_32) 60L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L))));
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) -= tr8_1;
	RTLE;
}

/* {TIME_DURATION}.make_by_fine_seconds */
void F532_10475 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) arg1;
	ti4_1 = F532_10481(Current);
	ti4_1 = F134_7783(Current, ti4_1, ((EIF_INTEGER_32) 3600L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 3600L))));
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) -= tr8_1;
	ti4_1 = F532_10481(Current);
	ti4_1 = F134_7783(Current, ti4_1, ((EIF_INTEGER_32) 60L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L))));
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) -= tr8_1;
	RTLE;
}

/* {TIME_DURATION}.fine_seconds_count */
EIF_REAL_64 F532_10476 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_REAL_64) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 60L))));
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
	Result = (EIF_REAL_64) (EIF_REAL_64) (Result + tr8_1);
	RTLE;
	return Result;
}

/* {TIME_DURATION}.seconds_count */
EIF_INTEGER_32 F532_10477 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = (EIF_INTEGER_32) F532_10476(Current);
	RTLE;
	return Result;
}

/* {TIME_DURATION}.hour */
EIF_INTEGER_32 F532_10479 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
}


/* {TIME_DURATION}.minute */
EIF_INTEGER_32 F532_10480 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
}


/* {TIME_DURATION}.second */
EIF_INTEGER_32 F532_10481 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
	Result = (EIF_INTEGER_32) tr8_1;
	RTLE;
	return Result;
}

/* {TIME_DURATION}.fine_second */
EIF_REAL_64 F532_10482 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
}


/* {TIME_DURATION}.is_less */
EIF_BOOLEAN F532_10484 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tr8_1 = F532_10476(Current);
	tr8_2 = F532_10476(RTCV(arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tr8_1 < tr8_2);
	RTLE;
	return Result;
}

/* {TIME_DURATION}.is_equal */
EIF_BOOLEAN F532_10485 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tr8_1 = F532_10476(Current);
	tr8_2 = F532_10476(RTCV(arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr8_1 == tr8_2);
	RTLE;
	return Result;
}

/* {TIME_DURATION}.canonical */
EIF_BOOLEAN F532_10486 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) (F532_10476(Current) >= tr8_1)) {
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 60L));
		if ((EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) < tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tb2 = (EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) >= tr8_1);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) < ((EIF_INTEGER_32) 60L));
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) >= ((EIF_INTEGER_32) 0L));
		}
	} else {
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) -((EIF_INTEGER_32) 60L));
		if ((EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) > tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tb2 = (EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) <= tr8_1);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) > (EIF_INTEGER_32) -((EIF_INTEGER_32) 60L));
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) <= ((EIF_INTEGER_32) 0L));
		}
	}
	RTLE;
	return Result;
}

/* {TIME_DURATION}.fine_second_add */
void F532_10494 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) += arg1;
}

/* {TIME_DURATION}.hour_add */
void F532_10496 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_)) += arg1;
}

/* {TIME_DURATION}.plus */
EIF_REFERENCE F532_10497 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_1_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_4 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_2_0_0_0_0_);
	F532_10473(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + ti4_2), (EIF_INTEGER_32) (ti4_3 + ti4_4), (EIF_REAL_64) (tr8_1 + tr8_2));
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {TIME_DURATION}.opposite */
EIF_REFERENCE F532_10498 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F532_10473(RTCV(tr1), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_), (EIF_REAL_64) -*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {TIME_DURATION}.to_canonical */
EIF_REFERENCE F532_10499 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	if (F532_10486(Current)) {
		RTLE;
		return (EIF_REFERENCE) (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	} else {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) (F532_10476(Current) >= tr8_1)) {
			tr1 = RTLNSMART(dftype);
			tr8_1 = F532_10476(Current);
			F532_10475(RTCV(tr1), tr8_1);
			Result = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNSMART(dftype);
			F532_10475(RTCV(tr1), (EIF_REAL_64) -F532_10476(Current));
			Result = (EIF_REFERENCE) tr1;
			Result = F532_10498(RTCV(Result));
			RTLE;
			return (EIF_REFERENCE) Result;
		}
	}
	RTLE;
	return Result;
}

/* {TIME_DURATION}.to_days */
EIF_INTEGER_32 F532_10500 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = F532_10476(Current);
	
	ti4_1 = F1013_19806(RTCV(tr1));
	Result = F134_7783(Current, ti4_1, ((EIF_INTEGER_32) 86400L));
	RTLE;
	return Result;
}

/* {TIME_DURATION}.time_modulo_day */
EIF_REFERENCE F532_10501 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	tr2 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr2 = F532_10476(Current);
	
	ti4_1 = F1013_19806(RTCV(tr2));
	ti4_1 = F134_7782(Current, ti4_1, ((EIF_INTEGER_32) 86400L));
	F532_10474(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	tr8_1 = F532_10476(Current);
	tr1 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = F532_10476(Current);
	
	ti4_1 = F1013_19806(RTCV(tr1));
	tr8_2 = (EIF_REAL_64) (ti4_1);
	F532_10494(RTCV(Result), (EIF_REAL_64) (tr8_1 - tr8_2));
	RTLE;
	return Result;
}

void EIF_Minit224 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

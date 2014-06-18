/*
 * Code for class DATE_TIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da449.h"
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

/* {DATE_TIME}.make */
void F1091_21051 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y7701,Y7701_gen_type,dftype,140)));
	F1086_20946(RTCV(tr1), arg1, arg2, arg3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y7700,Y7700_gen_type,dftype,140)));
	F1084_20910(RTCV(tr1), arg4, arg5, arg6);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME}.make_fine */
void F1091_21052 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_REAL_64 arg6)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y7701,Y7701_gen_type,dftype,140)));
	F1086_20946(RTCV(tr1), arg1, arg2, arg3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y7700,Y7700_gen_type,dftype,140)));
	F1084_20911(RTCV(tr1), arg4, arg5, arg6);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME}.make_by_date */
void F1091_21054 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y7700,Y7700_gen_type,Dftype(Current),140)));
	F1084_20910(RTCV(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME}.make_now_utc */
void F1091_21056 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(18, 18, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F19_3805(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y7701,Y7701_gen_type,dftype,140)));
	ti4_1 = F19_3808(RTCV(loc1));
	ti4_2 = F19_3809(RTCV(loc1));
	ti4_3 = F19_3810(RTCV(loc1));
	F1086_20946(RTCV(tr1), ti4_1, ti4_2, ti4_3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y7700,Y7700_gen_type,dftype,140)));
	ti4_1 = F19_3811(RTCV(loc1));
	ti4_2 = F19_3812(RTCV(loc1));
	ti4_3 = F19_3813(RTCV(loc1));
	tr8_1 = (EIF_REAL_64) (ti4_3);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_0_);
	F1084_20911(RTCV(tr1), ti4_1, ti4_2, (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) ((EIF_REAL_64) (ti4_3) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L)))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME}.make_from_epoch */
void F1091_21061 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
	} else {
		loc2 = (EIF_INTEGER_32) arg1;
	}
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 86400L));
	loc2 %= ((EIF_INTEGER_32) 86400L);
	tr1 = RTLNS(532, 532, _OBJSIZ_3_0_0_0_0_0_0_0_);
	F533_10504(RTCV(tr1), loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc2);
	loc3 = (EIF_REFERENCE) tr1;
	F1091_21052(Current, ((EIF_INTEGER_32) 1970L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_REAL_64) 0.0);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		tr1 = F533_10524(RTCV(loc3));
		F1091_21076(Current, tr1);
	} else {
		F1091_21076(Current, loc3);
	}
	RTLE;
}

/* {DATE_TIME}.date */
EIF_REFERENCE F1091_21062 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME}.time */
EIF_REFERENCE F1091_21063 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME}.date_duration */
EIF_REFERENCE F1091_21065 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1086_20960(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME}.days */
EIF_INTEGER_32 F1091_21066 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1086_20961(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME}.time_duration */
EIF_REFERENCE F1091_21067 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F1084_20921(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME}.is_less */
EIF_BOOLEAN F1091_21069 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	tb1 = F1086_20959(RTCV(tr1), tr2);
	if (!tb1) {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tb2 = F534_10532(RTCV(tr1), tr2);
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
			tb2 = F1084_20920(RTCV(tr1), tr2);
			tb1 = tb2;
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {DATE_TIME}.is_equal */
EIF_BOOLEAN F1091_21070 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	if (F1_10(Current, *(EIF_REFERENCE *)(Current + _REFACS_1_), tr1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		Result = F1_10(Current, *(EIF_REFERENCE *)(Current), tr1);
	}
	RTLE;
	return Result;
}

/* {DATE_TIME}.duration */
EIF_REFERENCE F1091_21071 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	
	RTGC;
	tr1 = RTLNS(532, 532, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = F1091_21065(Current);
	tr3 = F1091_21067(Current);
	F533_10506(RTCV(tr1), tr2, tr3);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {DATE_TIME}.copy */
void F1091_21074 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {DATE_TIME}.plus */
EIF_REFERENCE F1091_21075 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	
	RTGC;
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	F1091_21076(RTCV(Result), arg1);
	RTLE;
	return Result;
}

/* {DATE_TIME}.add */
void F1091_21076 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	tb1 = F533_10516(RTCV(arg1));
	if (tb1) {
		ti4_1 = F140_7846(RTCV(arg1));
		F1091_21079(Current, ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F140_7844(RTCV(arg1));
		ti4_2 = F140_7845(RTCV(arg1));
		F1086_20983(RTCV(tr1), ti4_1, ti4_2);
		ti4_1 = F140_7846(RTCV(arg1));
		F1091_21079(Current, ti4_1);
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	tr2 = F1091_21067(Current);
	tr1 = F532_10497(RTCV(tr1), tr2);
	ti4_1 = F532_10500(RTCV(tr1));
	F1091_21079(Current, ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = RTOUCR(70,F1084_20919,(RTCV(tr1)));
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	tr3 = F1091_21067(Current);
	tr2 = F532_10497(RTCV(tr2), tr3);
	tr2 = F532_10501(RTCV(tr2));
	tr1 = F1084_20924(RTCV(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME}.relative_duration */
EIF_REFERENCE F1091_21077 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(532, 532, _OBJSIZ_3_0_0_0_0_0_0_0_);
	ti4_1 = F1091_21066(Current);
	ti4_2 = F1091_21066(RTCV(arg1));
	ti4_3 = F140_7847(Current);
	ti4_4 = F140_7847(RTCV(arg1));
	ti4_5 = F140_7848(Current);
	ti4_6 = F140_7848(RTCV(arg1));
	tr8_1 = F140_7850(Current);
	tr8_2 = F140_7850(RTCV(arg1));
	F533_10505(RTCV(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4), (EIF_INTEGER_32) (ti4_5 - ti4_6), (EIF_REAL_64) (tr8_1 - tr8_2));
	Result = (EIF_REFERENCE) tr1;
	Result = F533_10526(RTCV(Result), arg1);
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
	F533_10520(RTCV(Result), tr1);
	RTLE;
	return Result;
}

/* {DATE_TIME}.definite_duration */
EIF_REFERENCE F1091_21078 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	Result = F1091_21077(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(RTCV(Result) + _REFACS_2_);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	F531_10470(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {DATE_TIME}.day_add */
void F1091_21079 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F1091_21066(Current);
	F1086_20951(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + arg1));
	RTLE;
}

/* {DATE_TIME}.hour_add */
void F1091_21080 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = F140_7847(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 24L)))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F134_7782(Current, loc1, ((EIF_INTEGER_32) 24L));
		F137_7810(RTCV(tr1), ti4_1);
		ti4_1 = F134_7783(Current, loc1, ((EIF_INTEGER_32) 24L));
		F1091_21079(Current, ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		F137_7810(RTCV(tr1), loc1);
	}
	RTLE;
}

/* {DATE_TIME}.minute_add */
void F1091_21081 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = F140_7848(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F134_7782(Current, loc1, ((EIF_INTEGER_32) 60L));
		F137_7811(RTCV(tr1), ti4_1);
		ti4_1 = F134_7783(Current, loc1, ((EIF_INTEGER_32) 60L));
		F1091_21080(Current, ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		F137_7811(RTCV(tr1), loc1);
	}
	RTLE;
}

/* {DATE_TIME}.second_add */
void F1091_21082 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = F140_7849(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F134_7782(Current, loc1, ((EIF_INTEGER_32) 60L));
		F137_7812(RTCV(tr1), ti4_1);
		ti4_1 = F134_7783(Current, loc1, ((EIF_INTEGER_32) 60L));
		F1091_21081(Current, ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		F137_7812(RTCV(tr1), loc1);
	}
	RTLE;
}

/* {DATE_TIME}.out */
EIF_REFERENCE F1091_21085 (EIF_REFERENCE Current)
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
	tr1 = F134_7785(Current);
	Result = F1091_21086(Current, tr1);
	RTLE;
	return Result;
}

/* {DATE_TIME}.formatted_out */
EIF_REFERENCE F1091_21086 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(1087, 1087, _OBJSIZ_4_2_0_1_0_0_0_0_);
	F1088_20992(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = F1088_21003(RTCV(loc1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit449 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

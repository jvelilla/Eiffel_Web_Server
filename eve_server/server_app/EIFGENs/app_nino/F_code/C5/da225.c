/*
 * Code for class DATE_TIME_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da225.h"
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

/* {DATE_TIME_DURATION}.make_definite */
void F533_10504 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(530));
	F531_10446(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(531));
	F532_10472(RTCV(tr1), arg2, arg3, arg4);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME_DURATION}.make_fine */
void F533_10505 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_REAL_64 arg6)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(530));
	F531_10445(RTCV(tr1), arg1, arg2, arg3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(531));
	F532_10473(RTCV(tr1), arg4, arg5, arg6);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DATE_TIME_DURATION}.make_by_date_time */
void F533_10506 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {DATE_TIME_DURATION}.date */
EIF_REFERENCE F533_10508 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {DATE_TIME_DURATION}.time */
EIF_REFERENCE F533_10509 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_DURATION}.origin_date_time */
EIF_REFERENCE F533_10510 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME_DURATION}.seconds_count */
EIF_INTEGER_64 F533_10512 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = F531_10452(RTCV(tr1));
	Result = (EIF_INTEGER_64) ti4_1;
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 86400L);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F532_10477(RTCV(tr1));
	ti8_2 = (EIF_INTEGER_64) ti4_1;
	Result = (EIF_INTEGER_64) (EIF_INTEGER_64) ((EIF_INTEGER_64) (Result * ti8_1) + ti8_2);
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.is_less */
EIF_BOOLEAN F533_10514 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tb1 = '\0';
	if (F533_10516(Current)) {
		tb2 = F533_10516(RTCV(arg1));
		tb1 = tb2;
	}
	if (tb1) {
		Result = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F532_10500(RTCV(tr1));
		ti4_2 = F140_7846(RTCV(arg1));
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		ti4_3 = F532_10500(RTCV(tr1));
		if (!((EIF_BOOLEAN) ((EIF_INTEGER_32) (F140_7846(Current) + ti4_1) < (EIF_INTEGER_32) (ti4_2 + ti4_3)))) {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = F532_10500(RTCV(tr1));
			ti4_2 = F140_7846(RTCV(arg1));
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
			ti4_3 = F532_10500(RTCV(tr1));
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (F140_7846(Current) + ti4_1) == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F532_10501(RTCV(tr1));
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
				tr2 = F532_10501(RTCV(tr2));
				tb2 = F532_10484(RTCV(tr1), tr2);
				tb1 = tb2;
			}
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.is_equal */
EIF_BOOLEAN F533_10515 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = F140_7844(RTCV(arg1));
	if ((EIF_BOOLEAN)(F140_7844(Current) == ti4_1)) {
		ti4_1 = F140_7845(RTCV(arg1));
		tb2 = (EIF_BOOLEAN)(F140_7845(Current) == ti4_1);
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F532_10500(RTCV(tr1));
		ti4_2 = F140_7846(RTCV(arg1));
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		ti4_3 = F532_10500(RTCV(tr1));
		tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (F140_7846(Current) + ti4_1) == (EIF_INTEGER_32) (ti4_2 + ti4_3));
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F532_10501(RTCV(tr1));
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tr2 = F532_10501(RTCV(tr2));
		tb1 = F532_10485(RTCV(tr1), tr2);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.definite */
EIF_BOOLEAN F533_10516 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = F531_10455(RTCV(tr1));
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.canonical */
EIF_BOOLEAN F533_10517 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	loc1 = F1091_21075(RTCV(arg1), Current);
	tb1 = F534_10531(RTCV(loc1), arg1);
	if (tb1) {
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tb3 = F531_10456(RTCV(tr1), tr2);
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = F532_10477(RTCV(tr1));
			tb2 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = F532_10486(RTCV(tr1));
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) (F140_7847(Current) < ((EIF_INTEGER_32) 24L));
		}
		Result = (EIF_BOOLEAN) Result;
	} else {
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tb3 = F531_10456(RTCV(tr1), tr2);
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = F532_10477(RTCV(tr1));
			tb2 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = F532_10486(RTCV(tr1));
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) (F140_7847(Current) > (EIF_INTEGER_32) -((EIF_INTEGER_32) 24L));
		}
		Result = (EIF_BOOLEAN) Result;
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.set_origin_date_time */
void F533_10520 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		F531_10459(RTCV(tr1), tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		F531_10459(RTCV(tr1), NULL);
	}
	RTLE;
}

/* {DATE_TIME_DURATION}.opposite */
EIF_REFERENCE F533_10524 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLR(5,loc1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = F531_10468(RTCV(tr2));
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = F532_10498(RTCV(tr3));
	F533_10506(RTCV(tr1), tr2, tr3);
	Result = (EIF_REFERENCE) tr1;
	loc1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc1);
		F533_10520(RTCV(Result), tr1);
	} else {
		F533_10520(RTCV(Result), NULL);
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_DURATION}.to_canonical */
EIF_REFERENCE F533_10526 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLR(7,tr3);
	RTLR(8,Result);
	
	RTGC;
	if (F533_10517(Current, arg1)) {
		RTLE;
		return (EIF_REFERENCE) (EIF_REFERENCE) eif_builtin_ANY_deep_twin (Current);
	} else {
		loc1 = F1091_21075(RTCV(arg1), Current);
		tr1 = RTLNS(531, 531, _OBJSIZ_0_0_0_2_0_0_0_1_);
		ti4_1 = F140_7847(RTCV(loc1));
		ti4_2 = F140_7847(RTCV(arg1));
		ti4_3 = F140_7848(RTCV(loc1));
		ti4_4 = F140_7848(RTCV(arg1));
		tr8_1 = F140_7850(RTCV(loc1));
		tr8_2 = F140_7850(RTCV(arg1));
		F532_10473(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4), (EIF_REAL_64) (tr8_1 - tr8_2));
		loc3 = (EIF_REFERENCE) tr1;
		tb1 = '\0';
		tb2 = F534_10531(RTCV(loc1), arg1);
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
			tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
			tb2 = F1084_20920(RTCV(tr1), tr2);
			tb1 = tb2;
		}
		if (tb1) {
			F532_10496(RTCV(loc3), ((EIF_INTEGER_32) 24L));
			F1091_21079(RTCV(loc1), ((EIF_INTEGER_32) -1L));
		} else {
			tb1 = '\0';
			tb2 = F1091_21069(RTCV(loc1), arg1);
			if (tb2) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
				tb2 = F534_10530(RTCV(tr1), tr2);
				tb1 = tb2;
			}
			if (tb1) {
				F532_10496(RTCV(loc3), ((EIF_INTEGER_32) -24L));
				F1091_21079(RTCV(loc1), ((EIF_INTEGER_32) 1L));
			}
		}
		tr1 = RTLNS(530, 530, _OBJSIZ_1_0_0_3_0_0_0_0_);
		ti4_1 = F1091_21066(RTCV(loc1));
		ti4_2 = F1091_21066(RTCV(arg1));
		F531_10446(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 - ti4_2));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTLNSMART(Dftype(Current));
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tr2 = F531_10469(RTCV(loc2), tr2);
		tr3 = F532_10499(RTCV(loc3));
		F533_10506(RTCV(tr1), tr2, tr3);
		Result = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

void EIF_Minit225 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

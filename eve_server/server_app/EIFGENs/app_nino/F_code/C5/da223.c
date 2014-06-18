/*
 * Code for class DATE_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da223.h"
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

/* {DATE_DURATION}.make */
void F531_10445 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg3;
	RTLE;
}

/* {DATE_DURATION}.make_by_days */
void F531_10446 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg1;
	RTLE;
}

/* {DATE_DURATION}.day */
EIF_INTEGER_32 F531_10448 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
}


/* {DATE_DURATION}.month */
EIF_INTEGER_32 F531_10449 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
}


/* {DATE_DURATION}.year */
EIF_INTEGER_32 F531_10450 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
}


/* {DATE_DURATION}.origin_date */
EIF_REFERENCE F531_10451 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_DURATION}.days_count */
EIF_INTEGER_32 F531_10452 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	RTCT0("origin_date_not_void", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = F531_10469(Current, loc1);
	tr1 = F1086_20971(RTCV(loc1), tr1);
	Result = F1086_20961(RTCV(tr1));
	ti4_1 = F1086_20961(RTCV(loc1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	RTLE;
	return Result;
}

/* {DATE_DURATION}.is_less */
EIF_BOOLEAN F531_10453 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tb1 = '\0';
	if (F531_10455(Current)) {
		tb2 = F531_10455(RTCV(arg1));
		tb1 = tb2;
	}
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_0_0_2_);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 < ti4_2);
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
	return Result;
}

/* {DATE_DURATION}.is_equal */
EIF_BOOLEAN F531_10454 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_0_0_0_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == ti4_1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_0_0_1_);
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) == ti4_1);
	}
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_0_0_2_);
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ti4_1);
	}
	RTLE;
	return Result;
}

/* {DATE_DURATION}.definite */
EIF_BOOLEAN F531_10455 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L)));
	return Result;
}

/* {DATE_DURATION}.canonical */
EIF_BOOLEAN F531_10456 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc2);
	
	RTGC;
	loc1 = F1086_20971(RTCV(arg1), Current);
	tb1 = F534_10531(RTCV(loc1), arg1);
	if (tb1) {
		tr1 = RTLNS(530, 530, _OBJSIZ_1_0_0_3_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		F531_10445(RTCV(tr1), ti4_1, (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L));
		loc3 = (EIF_REFERENCE) tr1;
		loc2 = F1086_20971(RTCV(arg1), loc3);
		Result = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) >= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) < ((EIF_INTEGER_32) 12L))) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) >= ((EIF_INTEGER_32) 0L)))) {
			tb1 = F1086_20959(RTCV(loc1), loc2);
			Result = tb1;
		}
	} else {
		tr1 = RTLNS(530, 530, _OBJSIZ_1_0_0_3_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		F531_10445(RTCV(tr1), ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L));
		loc3 = (EIF_REFERENCE) tr1;
		loc2 = F1086_20971(RTCV(arg1), loc3);
		Result = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) <= ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) > (EIF_INTEGER_32) -((EIF_INTEGER_32) 12L))) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) <= ((EIF_INTEGER_32) 0L)))) {
			tb1 = F534_10530(RTCV(loc1), loc2);
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {DATE_DURATION}.set_origin_date */
void F531_10459 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {DATE_DURATION}.opposite */
EIF_REFERENCE F531_10468 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F531_10445(RTCV(tr1), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_));
	Result = (EIF_REFERENCE) tr1;
	loc1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc1);
		F531_10459(RTCV(Result), tr1);
	} else {
		F531_10459(RTCV(Result), NULL);
	}
	RTLE;
	return Result;
}

/* {DATE_DURATION}.to_canonical */
EIF_REFERENCE F531_10469 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,Result);
	
	RTGC;
	if (F531_10456(Current, arg1)) {
		RTLE;
		return (EIF_REFERENCE) (EIF_REFERENCE) eif_builtin_ANY_deep_twin (Current);
	} else {
		loc2 = F1086_20971(RTCV(arg1), Current);
		loc3 = F629_11925(RTCV(loc2));
		ti4_1 = F629_11925(RTCV(arg1));
		ti4_2 = F629_11924(RTCV(loc2));
		ti4_3 = F629_11924(RTCV(arg1));
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - ti4_1) * ((EIF_INTEGER_32) 12L)) + ti4_2) - ti4_3);
		loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
		F1086_20979(RTCV(loc1), loc3);
		tb1 = F534_10531(RTCV(loc2), arg1);
		if (tb1) {
			tb1 = F534_10529(RTCV(loc1), loc2);
			if (tb1) {
				tr1 = RTLNSMART(dftype);
				ti4_1 = F629_11923(RTCV(loc2));
				ti4_2 = F629_11923(RTCV(loc1));
				F531_10445(RTCV(tr1), (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (ti4_1 - ti4_2));
				Result = (EIF_REFERENCE) tr1;
			} else {
				loc3--;
				F1086_20978(RTCV(loc1));
				ti4_1 = F629_11924(RTCV(loc1));
				ti4_2 = F629_11925(RTCV(loc1));
				ti4_1 = F138_7825(RTCV(arg1), ti4_1, ti4_2);
				ti4_2 = F629_11923(RTCV(arg1));
				if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
					tr1 = RTLNSMART(dftype);
					ti4_1 = F629_11923(RTCV(loc2));
					F531_10445(RTCV(tr1), (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 12L)), ti4_1);
					Result = (EIF_REFERENCE) tr1;
				} else {
					tr1 = RTLNSMART(dftype);
					ti4_1 = F629_11923(RTCV(loc2));
					ti4_2 = F629_11924(RTCV(loc1));
					ti4_3 = F629_11925(RTCV(loc1));
					ti4_2 = F138_7825(RTCV(arg1), ti4_2, ti4_3);
					ti4_3 = F629_11923(RTCV(arg1));
					F531_10445(RTCV(tr1), (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3));
					Result = (EIF_REFERENCE) tr1;
				}
			}
		} else {
			tb1 = F534_10531(RTCV(loc1), loc2);
			if (tb1) {
				tr1 = RTLNSMART(dftype);
				ti4_1 = F629_11923(RTCV(loc2));
				ti4_2 = F629_11923(RTCV(loc1));
				F531_10445(RTCV(tr1), (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (ti4_1 - ti4_2));
				Result = (EIF_REFERENCE) tr1;
			} else {
				loc3++;
				F1086_20977(RTCV(loc1));
				tr1 = RTLNSMART(dftype);
				ti4_1 = F629_11923(RTCV(loc2));
				ti4_2 = F629_11924(RTCV(loc2));
				ti4_3 = F629_11925(RTCV(loc2));
				ti4_2 = F138_7825(RTCV(arg1), ti4_2, ti4_3);
				ti4_3 = F629_11923(RTCV(loc1));
				F531_10445(RTCV(tr1), (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 12L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) - ti4_3));
				Result = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTLE;
	return Result;
}

/* {DATE_DURATION}.to_definite */
void F531_10470 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = F1086_20971(RTCV(arg1), Current);
	ti4_1 = F1086_20961(RTCV(loc1));
	ti4_2 = F1086_20961(RTCV(arg1));
	F531_10446(Current, (EIF_INTEGER_32) (ti4_1 - ti4_2));
	RTLE;
}

void EIF_Minit223 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

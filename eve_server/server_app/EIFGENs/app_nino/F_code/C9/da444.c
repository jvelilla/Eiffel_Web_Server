/*
 * Code for class DATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da444.h"
#include "eif_built_in.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE}.make */
void F1086_20946 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F629_11928(Current, arg1, arg2, arg3);
}

/* {DATE}.make_by_days */
void F1086_20951 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 59L))) - ((EIF_INTEGER_32) 1L));
	ti4_1 = F134_7782(Current, loc1, ((EIF_INTEGER_32) 146097L));
	loc2 = F134_7783(Current, ti4_1, ((EIF_INTEGER_32) 4L));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * loc2) + ((EIF_INTEGER_32) 3L));
	loc3 = F134_7783(Current, loc1, ((EIF_INTEGER_32) 146097L));
	ti4_1 = F134_7783(Current, loc2, ((EIF_INTEGER_32) 1461L));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) (((EIF_INTEGER_32) 100L) * loc3)) + ti4_1);
	ti4_1 = F134_7782(Current, loc2, ((EIF_INTEGER_32) 1461L));
	loc1 = F134_7783(Current, ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 4L))), ((EIF_INTEGER_32) 4L));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) (((EIF_INTEGER_32) 5L) * loc1)) - ((EIF_INTEGER_32) 3L));
	loc4 = F134_7783(Current, loc1, ((EIF_INTEGER_32) 153L));
	ti4_1 = F134_7782(Current, loc1, ((EIF_INTEGER_32) 153L));
	loc5 = F134_7783(Current, ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 5L))), ((EIF_INTEGER_32) 5L));
	if ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 10L))) {
		loc4 += ((EIF_INTEGER_32) 3L);
	} else {
		loc4 -= ((EIF_INTEGER_32) 9L);
		loc3++;
	}
	loc3 += ((EIF_INTEGER_32) 1600L);
	F1086_20946(Current, loc3, loc4, loc5);
	RTLE;
}

/* {DATE}.origin */
static EIF_REFERENCE F1086_20958_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(185)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(1085, 1085, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1086_20946(RTCV(tr1), ((EIF_INTEGER_32) 1600L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1086_20958 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(185,F1086_20958_body,(Current));
}

/* {DATE}.is_less */
EIF_BOOLEAN F1086_20959 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)))) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 < loc2);
	} else {
		Result = '\0';
		ti4_1 = F629_11925(RTCV(arg1));
		if ((EIF_BOOLEAN) (F629_11925(Current) < ti4_1)) {
			ti4_1 = eif_bit_and(loc1,((EIF_INTEGER_32) 65535L));
			ti4_2 = eif_bit_and(loc2,((EIF_INTEGER_32) 65535L));
			Result = (EIF_BOOLEAN) (ti4_1 < ti4_2);
		}
	}
	RTLE;
	return Result;
}

/* {DATE}.duration */
EIF_REFERENCE F1086_20960 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(530, 530, _OBJSIZ_1_0_0_3_0_0_0_0_);
	ti4_1 = F629_11925(RTCV(RTOUCR(185,F1086_20958,(Current))));
	ti4_1 = F1086_20969(Current, ti4_1);
	ti4_2 = F1086_20964(Current);
	ti4_3 = F1086_20964(RTCV(RTOUCR(185,F1086_20958,(Current))));
	F531_10446(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3));
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {DATE}.days */
EIF_INTEGER_32 F1086_20961 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F629_11925(RTCV(RTOUCR(185,F1086_20958,(Current))));
	Result = F1086_20969(Current, ti4_1);
	ti4_1 = F1086_20964(Current);
	ti4_2 = F1086_20964(RTCV(RTOUCR(185,F1086_20958,(Current))));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ti4_2);
	RTLE;
	return Result;
}

/* {DATE}.leap_year */
EIF_BOOLEAN F1086_20962 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F629_11925(Current);
	Result = F138_7832(Current, ti4_1);
	RTLE;
	return Result;
}

/* {DATE}.days_at_month */
EIF_INTEGER_32 F1086_20963 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = F629_11924(Current);
	tr1 = RTOUCR(186,F1086_20987,(Current));
	/* INLINED CODE (SPECIAL.item) */
	ti4_1 = *((EIF_INTEGER_32 *)tr1 + (loc1));
	/* END INLINED CODE */
	Result = ti4_1;
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 2L))) {
		tb1 = F1086_20962(Current);
	}
	if (tb1) {
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {DATE}.year_day */
EIF_INTEGER_32 F1086_20964 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F1086_20963(Current);
	ti4_1 = F629_11923(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	RTLE;
	return Result;
}

/* {DATE}.day_of_the_week */
EIF_INTEGER_32 F1086_20967 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F1086_20961(Current);
	Result = F134_7782(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 7L));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {DATE}.days_from */
EIF_INTEGER_32 F1086_20969 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F629_11925(Current);
	Result = F134_7783(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 4L));
	ti4_1 = F134_7783(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 4L));
	ti4_2 = F134_7783(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 100L));
	ti4_3 = F134_7783(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 100L));
	ti4_4 = F134_7783(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 400L));
	ti4_5 = F134_7783(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 400L));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - arg1) * ((EIF_INTEGER_32) 365L)) + (EIF_INTEGER_32) (Result - ti4_1)) - (EIF_INTEGER_32) (ti4_2 - ti4_3)) + (EIF_INTEGER_32) (ti4_4 - ti4_5));
	RTLE;
	return Result;
}

/* {DATE}.plus */
EIF_REFERENCE F1086_20971 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F1086_20972(RTCV(Result), arg1);
	RTLE;
	return Result;
}

/* {DATE}.add */
void F1086_20972 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tb1 = F531_10455(RTCV(arg1));
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_0_0_2_);
		F1086_20976(Current, ti4_1);
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_0_0_1_);
		F1086_20983(Current, ti4_1, ti4_2);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_0_0_2_);
		F1086_20976(Current, ti4_1);
	}
	RTLE;
}

/* {DATE}.day_add */
void F1086_20976 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F1086_20961(Current);
	F1086_20951(Current, (EIF_INTEGER_32) (ti4_1 + arg1));
	RTLE;
}

/* {DATE}.month_forth */
void F1086_20977 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(F629_11924(Current) == ((EIF_INTEGER_32) 12L))) {
		F629_11930(Current, ((EIF_INTEGER_32) 1L));
		F1086_20980(Current);
	} else {
		ti4_1 = F629_11924(Current);
		ti4_2 = F629_11925(Current);
		loc1 = F138_7825(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2);
		if ((EIF_BOOLEAN) (F629_11923(Current) > loc1)) {
			F629_11929(Current, loc1);
		}
		ti4_1 = F629_11924(Current);
		F629_11930(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

/* {DATE}.month_back */
void F1086_20978 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(F629_11924(Current) == ((EIF_INTEGER_32) 1L))) {
		F629_11930(Current, ((EIF_INTEGER_32) 12L));
		F1086_20981(Current);
	} else {
		ti4_1 = F629_11924(Current);
		ti4_2 = F629_11925(Current);
		loc1 = F138_7825(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ti4_2);
		if ((EIF_BOOLEAN) (F629_11923(Current) > loc1)) {
			F629_11929(Current, loc1);
		}
		ti4_1 = F629_11924(Current);
		F629_11930(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

/* {DATE}.month_add */
void F1086_20979 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc4 = F629_11924(Current);
	loc1 = F134_7782(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + arg1) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 12L));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	loc2 = F629_11925(Current);
	ti4_1 = F134_7783(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + arg1) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 12L));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_1);
	loc3 = F138_7825(Current, loc1, loc2);
	loc5 = F629_11923(Current);
	if ((EIF_BOOLEAN) (loc5 > loc3)) {
		F629_11928(Current, loc2, loc1, loc3);
	} else {
		F629_11928(Current, loc2, loc1, loc5);
	}
	RTLE;
}

/* {DATE}.year_forth */
void F1086_20980 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc2 = F629_11924(Current);
	loc1 = F629_11925(Current);
	loc3 = F138_7825(Current, loc2, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN) (F629_11923(Current) > loc3)) {
		F629_11929(Current, loc3);
	}
	F629_11931(Current, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {DATE}.year_back */
void F1086_20981 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F629_11924(Current);
	ti4_2 = F629_11925(Current);
	if ((EIF_BOOLEAN) (F629_11923(Current) > F138_7825(Current, ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))))) {
		ti4_1 = F629_11924(Current);
		ti4_2 = F629_11925(Current);
		ti4_1 = F138_7825(Current, ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
		F629_11929(Current, ti4_1);
	}
	ti4_1 = F629_11925(Current);
	F629_11931(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {DATE}.year_month_add */
void F1086_20983 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	F1086_20979(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 12L)) + arg2));
}

/* {DATE}.out */
EIF_REFERENCE F1086_20985 (EIF_REFERENCE Current)
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
	tr1 = F138_7826(Current);
	Result = F1086_20986(Current, tr1);
	RTLE;
	return Result;
}

/* {DATE}.formatted_out */
EIF_REFERENCE F1086_20986 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = F1088_21004(RTCV(loc1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {DATE}.days_at_months */
static EIF_REFERENCE F1086_20987_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(186)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {954,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 13L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 13L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 90L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 120L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 151L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 181L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 212L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 243L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 273L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 304L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 334L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F955_18829)(tr2);
	Result = *(EIF_REFERENCE *)(RTCV(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1086_20987 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(186,F1086_20987_body,(Current));
}

void EIF_Minit444 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

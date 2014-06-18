/*
 * Code for class HTTP_DATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht365.h"
#include <ctype.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_DATE}.make_from_timestamp */
void F901_18528 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_64 *)(Current+ _I64OFF_2_1_0_0_0_0_0_) = (EIF_INTEGER_64) arg1;
	tr1 = RTLNSMART(eif_non_attached_type(1090));
	ti4_1 = (EIF_INTEGER_32) arg1;
	F1091_21061(RTCV(tr1), ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {HTTP_DATE}.make_from_string */
void F901_18529 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc2);
	
	RTGC;
	tr1 = F901_18558(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	} else {
		tr1 = F901_18559(Current, arg1);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
		} else {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = RTOUCR(155,F901_18536,(Current));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
}

/* {HTTP_DATE}.make_from_date_time */
void F901_18530 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {HTTP_DATE}.date_time */
EIF_REFERENCE F901_18533 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {HTTP_DATE}.string */
EIF_REFERENCE F901_18534 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F901_18540(Current);
}

/* {HTTP_DATE}.epoch */
static EIF_REFERENCE F901_18536_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(155)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(1090, 1090, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F1091_21061(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F901_18536 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(155,F901_18536_body,(Current));
}

/* {HTTP_DATE}.internal_rfc1123_string */
EIF_REFERENCE F901_18538 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {HTTP_DATE}.rfc1123_string */
EIF_REFERENCE F901_18540 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(892));
		F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 32L));
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current);
		F901_18548(Current, tr1, loc1);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {HTTP_DATE}.append_to_rfc1123_string */
void F901_18544 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
	ti4_1 = F1086_20967(RTCV(tr1));
	F901_18554(Current, ti4_1, arg1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 44L);
	F891_17234(RTCV(arg1), tu4_1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	F891_17234(RTCV(arg1), tu4_1);
	ti4_1 = F140_7846(RTCV(loc1));
	F901_18552(Current, ti4_1, arg1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	F891_17234(RTCV(arg1), tu4_1);
	ti4_1 = F140_7845(RTCV(loc1));
	F901_18556(Current, ti4_1, arg1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	F891_17234(RTCV(arg1), tu4_1);
	ti4_1 = F140_7844(RTCV(loc1));
	F901_18557(Current, ti4_1, arg1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	F891_17234(RTCV(arg1), tu4_1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
	F901_18553(Current, tr1, arg1);
	tr1 = RTMS_EX_H(" GMT",4,541543764);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg1)-890])(RTCV(arg1), tr1);
	RTLE;
}

/* {HTTP_DATE}.append_date_time_to_rfc1123_string */
void F901_18548 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,Current);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	ti4_1 = F1086_20967(RTCV(tr1));
	F901_18554(Current, ti4_1, arg2);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 44L);
	F891_17234(RTCV(arg2), tu4_1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	F891_17234(RTCV(arg2), tu4_1);
	ti4_1 = F140_7846(RTCV(arg1));
	F901_18552(Current, ti4_1, arg2);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	F891_17234(RTCV(arg2), tu4_1);
	ti4_1 = F140_7845(RTCV(arg1));
	F901_18556(Current, ti4_1, arg2);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	F891_17234(RTCV(arg2), tu4_1);
	ti4_1 = F140_7844(RTCV(arg1));
	F901_18557(Current, ti4_1, arg2);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
	F891_17234(RTCV(arg2), tu4_1);
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
	F901_18553(Current, tr1, arg2);
	tr1 = RTMS_EX_H(" GMT",4,541543764);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
	RTLE;
}

/* {HTTP_DATE}.append_2_digits_integer_to */
void F901_18552 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 9L))) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
		F891_17234(RTCV(arg2), tu4_1);
	}
	F901_18557(Current, arg1, arg2);
	RTLE;
}

/* {HTTP_DATE}.append_2_digits_time_to */
void F901_18553 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	
	RTGC;
	ti4_1 = F137_7801(RTCV(arg1));
	F901_18552(Current, ti4_1, arg2);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 58L);
	F891_17234(RTCV(arg2), tu4_1);
	ti4_1 = F137_7802(RTCV(arg1));
	F901_18552(Current, ti4_1, arg2);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 58L);
	F891_17234(RTCV(arg2), tu4_1);
	ti4_1 = F137_7803(RTCV(arg1));
	F901_18552(Current, ti4_1, arg2);
	RTLE;
}

/* {HTTP_DATE}.append_day_ddd_to */
void F901_18554 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,tr1);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTMS_EX_H("Sun",3,5469550);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 2L:
			tr1 = RTMS_EX_H("Mon",3,5074798);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 3L:
			tr1 = RTMS_EX_H("Tue",3,5535077);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 4L:
			tr1 = RTMS_EX_H("Wed",3,5727588);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 5L:
			tr1 = RTMS_EX_H("Thu",3,5531765);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 6L:
			tr1 = RTMS_EX_H("Fri",3,4616809);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 7L:
			tr1 = RTMS_EX_H("Sat",3,5464436);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
	}
	RTLE;
}

/* {HTTP_DATE}.append_month_mmm_to */
void F901_18556 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,tr1);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTMS_EX_H("Jan",3,4874606);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 2L:
			tr1 = RTMS_EX_H("Feb",3,4613474);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 3L:
			tr1 = RTMS_EX_H("Mar",3,5071218);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 4L:
			tr1 = RTMS_EX_H("Apr",3,4288626);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 5L:
			tr1 = RTMS_EX_H("May",3,5071225);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 6L:
			tr1 = RTMS_EX_H("Jun",3,4879726);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 7L:
			tr1 = RTMS_EX_H("Jul",3,4879724);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 8L:
			tr1 = RTMS_EX_H("Aou",3,4288373);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 9L:
			tr1 = RTMS_EX_H("Sep",3,5465456);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 10L:
			tr1 = RTMS_EX_H("Oct",3,5202804);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 11L:
			tr1 = RTMS_EX_H("Nov",3,5140342);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
		case 12L:
			tr1 = RTMS_EX_H("Dec",3,4482403);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
			break;
	}
	RTLE;
}

/* {HTTP_DATE}.append_integer_to */
void F901_18557 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = arg2;
	loc1 = RTRV(eif_non_attached_type(891),loc1);
	if (EIF_TEST(loc1)) {
		F892_17290(RTCV(loc1), arg1);
	} else {
		loc2 = arg2;
		loc2 = RTRV(eif_non_attached_type(892),loc2);
		if (EIF_TEST(loc2)) {
			F893_17381(RTCV(loc2), arg1);
		} else {
			tr1 = c_outi(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15197[Dtype(arg2)-890])(RTCV(arg2), tr1);
		}
	}
	RTLE;
}

/* {HTTP_DATE}.string_to_date_time */
EIF_REFERENCE F901_18558 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc14 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN tb14;
	EIF_BOOLEAN tb15;
	EIF_BOOLEAN tb16;
	EIF_BOOLEAN tb17;
	EIF_BOOLEAN tb18;
	EIF_BOOLEAN tb19;
	EIF_BOOLEAN tb20;
	EIF_BOOLEAN tb21;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,Result);
	
	RTGC;
	loc12 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc13 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 4L));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		loc12++;
	}
	F893_17405(RTCV(loc1));
	for (;;) {
		tb2 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tr1 = RTLNS(829, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)tr1 = tc1;
			
			tb3 = F828_16864(RTCV(tr1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) break;
		tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
		F893_17392(RTCV(loc1), tc1);
		loc12++;
	}
	tb3 = '\0';
	if ((EIF_BOOLEAN) (loc12 <= loc13)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
		tb3 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 3L));
	}
	if (tb3) {
		loc2 = F893_17411(RTCV(loc1));
	} else {
		loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	for (;;) {
		tb3 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb4 = EIF_TEST(isspace(tc1));
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) break;
		loc12++;
	}
	tb4 = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc14 && (EIF_BOOLEAN) (loc12 <= loc13))) {
		tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
		tb4 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ',');
	}
	if (tb4) {
		loc12++;
		for (;;) {
			tb4 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb5 = EIF_TEST(isspace(tc1));
				tb4 = (EIF_BOOLEAN) !tb5;
			}
			if (tb4) break;
			loc12++;
		}
		F893_17405(RTCV(loc1));
		for (;;) {
			tb5 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb6 = EIF_TEST(isdigit(tc1));
				tb5 = (EIF_BOOLEAN) !tb6;
			}
			if (tb5) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb6 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb6 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb6) {
			loc4 = F885_17058(RTCV(loc1));
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		loc12++;
	} else {
		for (;;) {
			tb6 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb7 = EIF_TEST(isspace(tc1));
				tb6 = (EIF_BOOLEAN) !tb7;
			}
			if (tb6) break;
			loc12++;
		}
	}
	if ((EIF_BOOLEAN) !loc14) {
		F893_17405(RTCV(loc1));
		for (;;) {
			tb7 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tr1 = RTLNS(829, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
				*(EIF_CHARACTER_8 *)tr1 = tc1;
				
				tb8 = F828_16864(RTCV(tr1));
				tb7 = (EIF_BOOLEAN) !tb8;
			}
			if (tb7) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb8 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb8 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 3L));
		}
		if (tb8) {
			loc3 = F893_17412(RTCV(loc1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 3L))) {
				F893_17359(RTCV(loc3), ((EIF_INTEGER_32) 3L));
			}
			tr1 = RTMS_EX_H("JAN",3,4866382);
			tb8 = F889_17187(RTCV(loc3), tr1);
			if (tb8) {
				loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			} else {
				tr1 = RTMS_EX_H("FEB",3,4605250);
				tb8 = F889_17187(RTCV(loc3), tr1);
				if (tb8) {
					loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				} else {
					tr1 = RTMS_EX_H("MAR",3,5062994);
					tb8 = F889_17187(RTCV(loc3), tr1);
					if (tb8) {
						loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					} else {
						tr1 = RTMS_EX_H("APR",3,4280402);
						tb8 = F889_17187(RTCV(loc3), tr1);
						if (tb8) {
							loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						} else {
							tr1 = RTMS_EX_H("MAY",3,5063001);
							tb8 = F889_17187(RTCV(loc3), tr1);
							if (tb8) {
								loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
							} else {
								tr1 = RTMS_EX_H("JUN",3,4871502);
								tb8 = F889_17187(RTCV(loc3), tr1);
								if (tb8) {
									loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
								} else {
									tr1 = RTMS_EX_H("JUL",3,4871500);
									tb8 = F889_17187(RTCV(loc3), tr1);
									if (tb8) {
										loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
									} else {
										tr1 = RTMS_EX_H("AOU",3,4280149);
										tb8 = F889_17187(RTCV(loc3), tr1);
										if (tb8) {
											loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
										} else {
											tr1 = RTMS_EX_H("SEP",3,5457232);
											tb8 = F889_17187(RTCV(loc3), tr1);
											if (tb8) {
												loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
											} else {
												tr1 = RTMS_EX_H("OCT",3,5194580);
												tb8 = F889_17187(RTCV(loc3), tr1);
												if (tb8) {
													loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
												} else {
													tr1 = RTMS_EX_H("NOV",3,5132118);
													tb8 = F889_17187(RTCV(loc3), tr1);
													if (tb8) {
														loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
													} else {
														tr1 = RTMS_EX_H("DEC",3,4474179);
														tb8 = F889_17187(RTCV(loc3), tr1);
														if (tb8) {
															loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
														} else {
															loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		loc12++;
	} else {
		for (;;) {
			tb8 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb9 = EIF_TEST(isspace(tc1));
				tb8 = (EIF_BOOLEAN) !tb9;
			}
			if (tb8) break;
			loc12++;
		}
	}
	if ((EIF_BOOLEAN) !loc14) {
		F893_17405(RTCV(loc1));
		for (;;) {
			tb9 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb10 = EIF_TEST(isdigit(tc1));
				tb9 = (EIF_BOOLEAN) !tb10;
			}
			if (tb9) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb10 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb10 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb10) {
			loc5 = F885_17058(RTCV(loc1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
				loc5 += ((EIF_INTEGER_32) 1900L);
			}
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	for (;;) {
		tb10 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb11 = EIF_TEST(isspace(tc1));
			tb10 = (EIF_BOOLEAN) !tb11;
		}
		if (tb10) break;
		loc12++;
	}
	if ((EIF_BOOLEAN) !loc14) {
		F893_17405(RTCV(loc1));
		for (;;) {
			tb11 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb12 = EIF_TEST(isdigit(tc1));
				tb11 = (EIF_BOOLEAN) !tb12;
			}
			if (tb11) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb12 = '\0';
		tb13 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb13 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb13) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb12 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
		}
		if (tb12) {
			loc6 = F885_17058(RTCV(loc1));
			loc12++;
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if ((EIF_BOOLEAN) !loc14) {
		F893_17405(RTCV(loc1));
		for (;;) {
			tb12 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb13 = EIF_TEST(isdigit(tc1));
				tb12 = (EIF_BOOLEAN) !tb13;
			}
			if (tb12) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb13 = '\0';
		tb14 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb14 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb14) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb13 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
		}
		if (tb13) {
			loc7 = F885_17058(RTCV(loc1));
			loc12++;
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if ((EIF_BOOLEAN) !loc14) {
		F893_17405(RTCV(loc1));
		for (;;) {
			tb13 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb14 = EIF_TEST(isdigit(tc1));
				tb13 = (EIF_BOOLEAN) !tb14;
			}
			if (tb13) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb14 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb14 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb14) {
			loc8 = F885_17058(RTCV(loc1));
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	tb14 = '\0';
	if ((EIF_BOOLEAN) !loc14) {
		tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
		tb14 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.');
	}
	if (tb14) {
		loc12++;
		F893_17405(RTCV(loc1));
		for (;;) {
			tb14 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb15 = EIF_TEST(isdigit(tc1));
				tb14 = (EIF_BOOLEAN) !tb15;
			}
			if (tb14) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb15 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb15 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb15) {
			loc9 = F885_17058(RTCV(loc1));
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if ((EIF_BOOLEAN) !loc14) {
		for (;;) {
			tb15 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb16 = EIF_TEST(isspace(tc1));
				tb15 = (EIF_BOOLEAN) !tb16;
			}
			if (tb15) break;
			loc12++;
		}
		F893_17405(RTCV(loc1));
		for (;;) {
			tb16 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tr1 = RTLNS(829, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
				*(EIF_CHARACTER_8 *)tr1 = tc1;
				
				tb17 = F828_16864(RTCV(tr1));
				tb16 = (EIF_BOOLEAN) !tb17;
			}
			if (tb16) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tc1 = (EIF_CHARACTER_8) toupper(tc1);
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb17 = '\01';
		tr1 = RTMS_EX_H("GMT",3,4672852);
		tb18 = F889_17187(RTCV(loc1), tr1);
		if (!tb18) {
			tr1 = RTMS_EX_H("UTC",3,5592131);
			tb18 = F889_17187(RTCV(loc1), tr1);
			tb17 = tb18;
		}
		if (tb17) {
			for (;;) {
				tb17 = '\01';
				if (!(EIF_BOOLEAN) (loc12 > loc13)) {
					tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
					tb18 = EIF_TEST(isspace(tc1));
					tb17 = (EIF_BOOLEAN) !tb18;
				}
				if (tb17) break;
				loc12++;
			}
			if ((EIF_BOOLEAN) (loc12 <= loc13)) {
				F893_17405(RTCV(loc1));
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '+')) {
					tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
					F893_17392(RTCV(loc1), tc1);
				} else {
					tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
						tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
						F893_17392(RTCV(loc1), tc1);
					} else {
						loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
				if ((EIF_BOOLEAN) !loc14) {
					loc12++;
					for (;;) {
						tb18 = '\01';
						if (!(EIF_BOOLEAN) (loc12 > loc13)) {
							tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
							tb19 = EIF_TEST(isspace(tc1));
							tb18 = (EIF_BOOLEAN) !tb19;
						}
						if (tb18) break;
						loc12++;
					}
					for (;;) {
						tb19 = '\01';
						if (!(EIF_BOOLEAN) (loc12 > loc13)) {
							tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
							tb20 = EIF_TEST(isdigit(tc1));
							tb19 = (EIF_BOOLEAN) !tb20;
						}
						if (tb19) break;
						tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
						tc1 = (EIF_CHARACTER_8) toupper(tc1);
						F893_17392(RTCV(loc1), tc1);
						loc12++;
					}
					loc11 = F885_17058(RTCV(loc1));
					loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc11 * ((EIF_INTEGER_32) 60L));
					tb20 = '\0';
					if ((EIF_BOOLEAN) (loc12 <= loc13)) {
						tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
						tb20 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
					}
					if (tb20) {
						loc12++;
						F893_17405(RTCV(loc1));
						for (;;) {
							tb20 = '\01';
							if (!(EIF_BOOLEAN) (loc12 > loc13)) {
								tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
								tb21 = EIF_TEST(isdigit(tc1));
								tb20 = (EIF_BOOLEAN) !tb21;
							}
							if (tb20) break;
							tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
							tc1 = (EIF_CHARACTER_8) toupper(tc1);
							F893_17392(RTCV(loc1), tc1);
							loc12++;
						}
						tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
						*(EIF_INTEGER_32 *)tr1 = loc11;
						
						ti4_1 = F992_19166(RTCV(tr1));
						ti4_2 = F885_17058(RTCV(loc1));
						loc11 += (EIF_INTEGER_32) (ti4_1 * ti4_2);
					}
				}
			}
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if ((EIF_BOOLEAN) !loc14) {
		tr1 = RTLNS(1090, 1090, _OBJSIZ_2_0_0_2_0_0_0_1_);
		F1091_21051(RTCV(tr1), loc5, loc10, loc4, loc6, loc7, loc8);
		Result = (EIF_REFERENCE) tr1;
		if ((EIF_BOOLEAN)(loc11 != ((EIF_INTEGER_32) 0L))) {
			F1091_21081(RTCV(Result), (EIF_INTEGER_32) -loc11);
		}
	}
	RTLE;
	return Result;
}

/* {HTTP_DATE}.ansi_c_string_to_date_time */
EIF_REFERENCE F901_18559 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc14 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN tb14;
	EIF_BOOLEAN tb15;
	EIF_BOOLEAN tb16;
	EIF_BOOLEAN tb17;
	EIF_BOOLEAN tb18;
	EIF_BOOLEAN tb19;
	EIF_BOOLEAN tb20;
	EIF_BOOLEAN tb21;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,Result);
	
	RTGC;
	loc12 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc13 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 4L));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		loc12++;
	}
	F893_17405(RTCV(loc1));
	for (;;) {
		tb2 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tr1 = RTLNS(829, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)tr1 = tc1;
			
			tb3 = F828_16864(RTCV(tr1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) break;
		tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
		F893_17392(RTCV(loc1), tc1);
		loc12++;
	}
	tb3 = '\0';
	if ((EIF_BOOLEAN) (loc12 <= loc13)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
		tb3 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 3L));
	}
	if (tb3) {
		loc2 = F893_17411(RTCV(loc1));
	} else {
		loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	for (;;) {
		tb3 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb4 = EIF_TEST(isspace(tc1));
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) break;
		loc12++;
	}
	if ((EIF_BOOLEAN) !loc14) {
		F893_17405(RTCV(loc1));
		for (;;) {
			tb4 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tr1 = RTLNS(829, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
				*(EIF_CHARACTER_8 *)tr1 = tc1;
				
				tb5 = F828_16864(RTCV(tr1));
				tb4 = (EIF_BOOLEAN) !tb5;
			}
			if (tb4) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb5 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb5 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 3L));
		}
		if (tb5) {
			loc3 = F893_17412(RTCV(loc1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 3L))) {
				F893_17359(RTCV(loc3), ((EIF_INTEGER_32) 3L));
			}
			tr1 = RTMS_EX_H("JAN",3,4866382);
			tb5 = F889_17187(RTCV(loc3), tr1);
			if (tb5) {
				loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			} else {
				tr1 = RTMS_EX_H("FEB",3,4605250);
				tb5 = F889_17187(RTCV(loc3), tr1);
				if (tb5) {
					loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				} else {
					tr1 = RTMS_EX_H("MAR",3,5062994);
					tb5 = F889_17187(RTCV(loc3), tr1);
					if (tb5) {
						loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					} else {
						tr1 = RTMS_EX_H("APR",3,4280402);
						tb5 = F889_17187(RTCV(loc3), tr1);
						if (tb5) {
							loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						} else {
							tr1 = RTMS_EX_H("MAY",3,5063001);
							tb5 = F889_17187(RTCV(loc3), tr1);
							if (tb5) {
								loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
							} else {
								tr1 = RTMS_EX_H("JUN",3,4871502);
								tb5 = F889_17187(RTCV(loc3), tr1);
								if (tb5) {
									loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
								} else {
									tr1 = RTMS_EX_H("JUL",3,4871500);
									tb5 = F889_17187(RTCV(loc3), tr1);
									if (tb5) {
										loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
									} else {
										tr1 = RTMS_EX_H("AOU",3,4280149);
										tb5 = F889_17187(RTCV(loc3), tr1);
										if (tb5) {
											loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
										} else {
											tr1 = RTMS_EX_H("SEP",3,5457232);
											tb5 = F889_17187(RTCV(loc3), tr1);
											if (tb5) {
												loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
											} else {
												tr1 = RTMS_EX_H("OCT",3,5194580);
												tb5 = F889_17187(RTCV(loc3), tr1);
												if (tb5) {
													loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
												} else {
													tr1 = RTMS_EX_H("NOV",3,5132118);
													tb5 = F889_17187(RTCV(loc3), tr1);
													if (tb5) {
														loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
													} else {
														tr1 = RTMS_EX_H("DEC",3,4474179);
														tb5 = F889_17187(RTCV(loc3), tr1);
														if (tb5) {
															loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
														} else {
															loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	for (;;) {
		tb5 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb6 = EIF_TEST(isspace(tc1));
			tb5 = (EIF_BOOLEAN) !tb6;
		}
		if (tb5) break;
		loc12++;
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc14 && (EIF_BOOLEAN) (loc12 <= loc13))) {
		F893_17405(RTCV(loc1));
		for (;;) {
			tb6 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb7 = EIF_TEST(isdigit(tc1));
				tb6 = (EIF_BOOLEAN) !tb7;
			}
			if (tb6) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb7 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb7 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb7) {
			loc4 = F885_17058(RTCV(loc1));
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	for (;;) {
		tb7 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb8 = EIF_TEST(isspace(tc1));
			tb7 = (EIF_BOOLEAN) !tb8;
		}
		if (tb7) break;
		loc12++;
	}
	if ((EIF_BOOLEAN) !loc14) {
		F893_17405(RTCV(loc1));
		for (;;) {
			tb8 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb9 = EIF_TEST(isdigit(tc1));
				tb8 = (EIF_BOOLEAN) !tb9;
			}
			if (tb8) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb9 = '\0';
		tb10 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb10 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb10) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb9 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
		}
		if (tb9) {
			loc6 = F885_17058(RTCV(loc1));
			loc12++;
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if ((EIF_BOOLEAN) !loc14) {
		F893_17405(RTCV(loc1));
		for (;;) {
			tb9 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb10 = EIF_TEST(isdigit(tc1));
				tb9 = (EIF_BOOLEAN) !tb10;
			}
			if (tb9) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb10 = '\0';
		tb11 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb11 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb11) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb10 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
		}
		if (tb10) {
			loc7 = F885_17058(RTCV(loc1));
			loc12++;
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if ((EIF_BOOLEAN) !loc14) {
		F893_17405(RTCV(loc1));
		for (;;) {
			tb10 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb11 = EIF_TEST(isdigit(tc1));
				tb10 = (EIF_BOOLEAN) !tb11;
			}
			if (tb10) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb11 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb11 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb11) {
			loc8 = F885_17058(RTCV(loc1));
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	tb11 = '\0';
	if ((EIF_BOOLEAN) !loc14) {
		tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
		tb11 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.');
	}
	if (tb11) {
		loc12++;
		F893_17405(RTCV(loc1));
		for (;;) {
			tb11 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb12 = EIF_TEST(isdigit(tc1));
				tb11 = (EIF_BOOLEAN) !tb12;
			}
			if (tb11) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb12 = '\0';
		if ((EIF_BOOLEAN) (loc12 <= loc13)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tb12 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb12) {
			loc9 = F885_17058(RTCV(loc1));
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	for (;;) {
		tb12 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb13 = EIF_TEST(isspace(tc1));
			tb12 = (EIF_BOOLEAN) !tb13;
		}
		if (tb12) break;
		loc12++;
	}
	if ((EIF_BOOLEAN) !loc14) {
		F893_17405(RTCV(loc1));
		for (;;) {
			tb13 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb14 = EIF_TEST(isdigit(tc1));
				tb13 = (EIF_BOOLEAN) !tb14;
			}
			if (tb13) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			loc5 = F885_17058(RTCV(loc1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
				loc5 += ((EIF_INTEGER_32) 1900L);
			}
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	for (;;) {
		tb14 = '\01';
		if (!(EIF_BOOLEAN) (loc12 > loc13)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tb15 = EIF_TEST(isspace(tc1));
			tb14 = (EIF_BOOLEAN) !tb15;
		}
		if (tb14) break;
		loc12++;
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc12 <= loc13) && (EIF_BOOLEAN) !loc14)) {
		for (;;) {
			tb15 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tb16 = EIF_TEST(isspace(tc1));
				tb15 = (EIF_BOOLEAN) !tb16;
			}
			if (tb15) break;
			loc12++;
		}
		F893_17405(RTCV(loc1));
		for (;;) {
			tb16 = '\01';
			if (!(EIF_BOOLEAN) (loc12 > loc13)) {
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				tr1 = RTLNS(829, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
				*(EIF_CHARACTER_8 *)tr1 = tc1;
				
				tb17 = F828_16864(RTCV(tr1));
				tb16 = (EIF_BOOLEAN) !tb17;
			}
			if (tb16) break;
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
			tc1 = (EIF_CHARACTER_8) toupper(tc1);
			F893_17392(RTCV(loc1), tc1);
			loc12++;
		}
		tb17 = '\01';
		tr1 = RTMS_EX_H("GMT",3,4672852);
		tb18 = F889_17187(RTCV(loc1), tr1);
		if (!tb18) {
			tr1 = RTMS_EX_H("UTC",3,5592131);
			tb18 = F889_17187(RTCV(loc1), tr1);
			tb17 = tb18;
		}
		if (tb17) {
			for (;;) {
				tb17 = '\01';
				if (!(EIF_BOOLEAN) (loc12 > loc13)) {
					tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
					tb18 = EIF_TEST(isspace(tc1));
					tb17 = (EIF_BOOLEAN) !tb18;
				}
				if (tb17) break;
				loc12++;
			}
			if ((EIF_BOOLEAN) (loc12 <= loc13)) {
				F893_17405(RTCV(loc1));
				tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '+')) {
					tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
					F893_17392(RTCV(loc1), tc1);
				} else {
					tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
						tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
						F893_17392(RTCV(loc1), tc1);
					} else {
						loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
				if ((EIF_BOOLEAN) !loc14) {
					loc12++;
					for (;;) {
						tb18 = '\01';
						if (!(EIF_BOOLEAN) (loc12 > loc13)) {
							tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
							tb19 = EIF_TEST(isspace(tc1));
							tb18 = (EIF_BOOLEAN) !tb19;
						}
						if (tb18) break;
						loc12++;
					}
					for (;;) {
						tb19 = '\01';
						if (!(EIF_BOOLEAN) (loc12 > loc13)) {
							tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
							tb20 = EIF_TEST(isdigit(tc1));
							tb19 = (EIF_BOOLEAN) !tb20;
						}
						if (tb19) break;
						tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
						tc1 = (EIF_CHARACTER_8) toupper(tc1);
						F893_17392(RTCV(loc1), tc1);
						loc12++;
					}
					loc11 = F885_17058(RTCV(loc1));
					loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc11 * ((EIF_INTEGER_32) 60L));
					tb20 = '\0';
					if ((EIF_BOOLEAN) (loc12 <= loc13)) {
						tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
						tb20 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
					}
					if (tb20) {
						loc12++;
						F893_17405(RTCV(loc1));
						for (;;) {
							tb20 = '\01';
							if (!(EIF_BOOLEAN) (loc12 > loc13)) {
								tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
								tb21 = EIF_TEST(isdigit(tc1));
								tb20 = (EIF_BOOLEAN) !tb21;
							}
							if (tb20) break;
							tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc12));
							tc1 = (EIF_CHARACTER_8) toupper(tc1);
							F893_17392(RTCV(loc1), tc1);
							loc12++;
						}
						tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
						*(EIF_INTEGER_32 *)tr1 = loc11;
						
						ti4_1 = F992_19166(RTCV(tr1));
						ti4_2 = F885_17058(RTCV(loc1));
						loc11 += (EIF_INTEGER_32) (ti4_1 * ti4_2);
					}
				}
			}
		} else {
			loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if ((EIF_BOOLEAN) !loc14) {
		tr1 = RTLNS(1090, 1090, _OBJSIZ_2_0_0_2_0_0_0_1_);
		F1091_21051(RTCV(tr1), loc5, loc10, loc4, loc6, loc7, loc8);
		Result = (EIF_REFERENCE) tr1;
		if ((EIF_BOOLEAN)(loc11 != ((EIF_INTEGER_32) 0L))) {
			F1091_21081(RTCV(Result), (EIF_INTEGER_32) -loc11);
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit365 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

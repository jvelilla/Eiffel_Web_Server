/*
 * Code for class STRING_TO_REAL_CONVERTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st140.h"
#include <math.h>
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_TO_REAL_CONVERTOR}.make */
void F180_8482 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	tr2 = RTMS_EX_H(" ",1,32);
	F889_17164(RTCV(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	tr2 = RTMS_EX_H(" ",1,32);
	F889_17164(RTCV(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STRING_TO_REAL_CONVERTOR}.is_integral_double */
EIF_BOOLEAN F180_8488 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (ti4_2 < ((EIF_INTEGER_32) 9L))) && (EIF_BOOLEAN) !Result);
	return Result;
}

/* {STRING_TO_REAL_CONVERTOR}.parsed_double */
EIF_REAL_64 F180_8492 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_);
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_)) {
		(*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_0_)) += (EIF_REAL_64) ((EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_1_)) /  (EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_2_)));
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		Result = *(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_);
		tr8_1 = (EIF_REAL_64) (ti4_1);
		Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) -Result * (EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64) 10.0), (EIF_REAL_64) (tr8_1)));
	} else {
		Result = *(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_);
		tr8_1 = (EIF_REAL_64) (ti4_1);
		Result = (EIF_REAL_64) (EIF_REAL_64) (Result * (EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64) 10.0), (EIF_REAL_64) (tr8_1)));
	}
	RTLE;
	return Result;
}

/* {STRING_TO_REAL_CONVERTOR}.reset */
void F180_8494 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_0_) = (EIF_REAL_64) tr8_1;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_1_) = (EIF_REAL_64) tr8_1;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_2_) = (EIF_REAL_64) tr8_1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {STRING_TO_REAL_CONVERTOR}.parse_string_with_type */
void F180_8495 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc7);
	RTLR(3,loc3);
	RTLR(4,loc8);
	RTLR(5,loc4);
	RTLR(6,tr1);
	
	RTGC;
	F180_8494(Current, arg2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	loc7 = arg1;
	loc7 = RTRV(eif_non_attached_type(888),loc7);
	if (EIF_TEST(loc7)) {
		loc3 = *(EIF_REFERENCE *)(RTCV(loc7) + O15184[Dtype(loc7)-888]);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) == ((EIF_INTEGER_32) 9L)))) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc3 + (loc1));
			/* END INLINED CODE */
			tc1 = tc2;
			F180_8496(Current, tc1);
			loc1++;
		}
	} else {
		loc8 = arg1;
		loc8 = RTRV(eif_non_attached_type(886),loc8);
		if (EIF_TEST(loc8)) {
			loc4 = *(EIF_REFERENCE *)(RTCV(loc8) + O15146[Dtype(loc8)-886]);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) == ((EIF_INTEGER_32) 9L)))) break;
				/* INLINED CODE (SPECIAL.item) */
				tw2 = *((EIF_CHARACTER_32 *)loc4 + (loc1));
				/* END INLINED CODE */
				loc5 = tw2;
				tb1 = (loc5 <= 0xFF);
				if (tb1) {
					tc1 = (EIF_CHARACTER_8) loc5;
					F180_8496(Current, tc1);
				} else {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
				loc1++;
			}
		} else {
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) == ((EIF_INTEGER_32) 9L)))) break;
				loc6 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), loc1);
				tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_NATURAL_32 *)tr1 = loc6;
				
				tb1 = F1004_19554(RTCV(tr1));
				if (tb1) {
					tc1 = (EIF_CHARACTER_8) loc6;
					F180_8496(Current, tc1);
				} else {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
				loc1++;
			}
		}
	}
	RTLE;
}

/* {STRING_TO_REAL_CONVERTOR}.parse_character */
void F180_8496 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_)) {
		case 0L:
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L)));
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_0_) = (EIF_REAL_64) tr8_1;
			} else {
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+')) {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						tb1 = '\0';
						if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
							tr1 = *(EIF_REFERENCE *)(Current);
							tb2 = F889_17194(RTCV(tr1), arg1);
							tb1 = tb2;
						}
						if (tb1) {
						} else {
							if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '.')) {
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							} else {
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
							}
						}
					}
				}
			}
			break;
		case 1L:
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L)));
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_0_) = (EIF_REAL_64) tr8_1;
			} else {
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '.')) {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
			}
			break;
		case 2L:
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_0_);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 48L));
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_0_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * (EIF_REAL_64) 10.0) + tr8_2) - tr8_3);
			} else {
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '.')) {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tb2 = F889_17194(RTCV(tr1), arg1);
						tb1 = tb2;
					}
					if (tb1) {
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
					} else {
						tc1 = (EIF_CHARACTER_8) tolower(arg1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'e')) {
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
						} else {
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
						}
					}
				}
			}
			break;
		case 3L:
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L)));
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_1_) = (EIF_REAL_64) tr8_1;
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_2_) = (EIF_REAL_64) (EIF_REAL_64) 10.0;
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				tb1 = '\0';
				tc1 = (EIF_CHARACTER_8) tolower(arg1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'e')) {
					tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_);
				}
				if (tb1) {
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				} else {
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tb2 = F889_17194(RTCV(tr1), arg1);
						tb1 = tb2;
					}
					if (tb1) {
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
					} else {
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
					}
				}
			}
			break;
		case 4L:
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_1_);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L))));
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_1_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * (EIF_REAL_64) 10.0) + tr8_2);
				(*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_2_2_)) *= (EIF_REAL_64) 10.0;
			} else {
				tc1 = (EIF_CHARACTER_8) tolower(arg1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'e')) {
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				} else {
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tb2 = F889_17194(RTCV(tr1), arg1);
						tb1 = tb2;
					}
					if (tb1) {
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
					} else {
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
					}
				}
			}
			break;
		case 5L:
			if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
			} else {
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+')) {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
				} else {
					tb1 = EIF_TEST(isdigit(arg1));
					if (tb1) {
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
						ti4_1 = (EIF_INTEGER_32) (arg1);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					} else {
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
					}
				}
			}
			break;
		case 6L:
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			}
			break;
		case 7L:
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_);
				ti4_2 = (EIF_INTEGER_32) (arg1);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 10L)) + ti4_2) - ((EIF_INTEGER_32) 48L));
			} else {
				tb1 = '\0';
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tb2 = F889_17194(RTCV(tr1), arg1);
					tb1 = tb2;
				}
				if (tb1) {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
				} else {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
			}
			break;
		case 8L:
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb1 = F889_17194(RTCV(tr1), arg1);
			if ((EIF_BOOLEAN) !tb1) {
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			}
			break;
	}
	RTLE;
}

void EIF_Minit140 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

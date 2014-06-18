/*
 * Code for class STRING_TO_INTEGER_CONVERTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st141.h"
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

/* {STRING_TO_INTEGER_CONVERTOR}.make */
void F181_8505 (EIF_REFERENCE Current)
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
	F181_8506(Current, ((EIF_INTEGER_32) 0L));
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

/* {STRING_TO_INTEGER_CONVERTOR}.reset */
void F181_8506 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_) = (EIF_NATURAL_64) tu8_1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {STRING_TO_INTEGER_CONVERTOR}.overflowed */
EIF_BOOLEAN F181_8508 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result && (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)));
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parse_string_with_type */
void F181_8511 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	F181_8506(Current, arg2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	loc7 = arg1;
	loc7 = RTRV(eif_non_attached_type(888),loc7);
	if (EIF_TEST(loc7)) {
		loc3 = *(EIF_REFERENCE *)(RTCV(loc7) + O15184[Dtype(loc7)-888]);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc3 + (loc1));
			/* END INLINED CODE */
			tc1 = tc2;
			F181_8512(Current, tc1);
			loc1++;
		}
	} else {
		loc8 = arg1;
		loc8 = RTRV(eif_non_attached_type(886),loc8);
		if (EIF_TEST(loc8)) {
			loc4 = *(EIF_REFERENCE *)(RTCV(loc8) + O15146[Dtype(loc8)-886]);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
				/* INLINED CODE (SPECIAL.item) */
				tw2 = *((EIF_CHARACTER_32 *)loc4 + (loc1));
				/* END INLINED CODE */
				loc5 = tw2;
				tb1 = (loc5 <= 0xFF);
				if (tb1) {
					tc1 = (EIF_CHARACTER_8) loc5;
					F181_8512(Current, tc1);
				} else {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				loc1++;
			}
		} else {
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
				loc6 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), loc1);
				tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_NATURAL_32 *)tr1 = loc6;
				
				tb1 = F1004_19554(RTCV(tr1));
				if (tb1) {
					tc1 = (EIF_CHARACTER_8) loc6;
					F181_8512(Current, tc1);
				} else {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				loc1++;
			}
		}
	}
	RTLE;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parse_character */
void F181_8512 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 4L))) {
		switch (loc3) {
			case 0L:
				tb1 = EIF_TEST(isdigit(arg1));
				if (tb1) {
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
					tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					ti4_1 = (EIF_INTEGER_32) (arg1);
					tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_) = (EIF_NATURAL_64) tu8_1;
				} else {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-') || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+'))) {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					} else {
						tb1 = '\0';
						if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
							tr1 = *(EIF_REFERENCE *)(Current);
							tb2 = F889_17194(RTCV(tr1), arg1);
							tb1 = tb2;
						}
						if (tb1) {
						} else {
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						}
					}
				}
				break;
			case 1L:
				tb1 = EIF_TEST(isdigit(arg1));
				if (tb1) {
					tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					ti4_1 = (EIF_INTEGER_32) (arg1);
					tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_) = (EIF_NATURAL_64) tu8_1;
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) != ((EIF_INTEGER_32) 0L))) {
						tr1 = RTOUCR(75,F181_8526,(Current));
						tb1 = F177_8432(RTCV(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_));
						if (tb1) {
							*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) loc1;
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_) = (EIF_NATURAL_64) loc2;
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
						}
					}
				} else {
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				break;
			case 2L:
				tb1 = EIF_TEST(isdigit(arg1));
				if (tb1) {
					loc1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_);
					loc2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_);
					tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_);
					tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
					tu8_3 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
					ti4_1 = (EIF_INTEGER_32) (arg1);
					tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_) = (EIF_NATURAL_64) tu8_1;
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) != ((EIF_INTEGER_32) 0L))) {
						tr1 = RTOUCR(75,F181_8526,(Current));
						tb1 = F177_8432(RTCV(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_));
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) tb1;
						if (F181_8508(Current)) {
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) loc1;
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_) = (EIF_NATURAL_64) loc2;
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
						}
					}
				} else {
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tb2 = F889_17194(RTCV(tr1), arg1);
						tb1 = tb2;
					}
					if (tb1) {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					} else {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					}
				}
				break;
			case 3L:
				tb1 = '\0';
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tb2 = F889_17194(RTCV(tr1), arg1);
					tb1 = tb2;
				}
				if (tb1) {
				} else {
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) loc3;
	RTLE;
}

/* {STRING_TO_INTEGER_CONVERTOR}.is_integral_integer */
EIF_BOOLEAN F181_8515 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 3L)))) && (EIF_BOOLEAN) !Result);
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_integer */
EIF_INTEGER_32 F181_8519 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) == ((EIF_INTEGER_32) 1L))) {
		tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_);
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_);
		Result = (EIF_INTEGER_32) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -Result;
	} else {
		tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_);
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_);
		Result = (EIF_INTEGER_32) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
	}
	RTLE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_natural_64 */
EIF_NATURAL_64 F181_8525 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
	tu8_2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_2_);
	Result = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (Result * tu8_1) + tu8_2);
	RTLE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.overflow_checker */
static EIF_REFERENCE F181_8526_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(75)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(176, 176, _OBJSIZ_4_0_0_0_0_0_2_0_);
	F177_8431(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F181_8526 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(75,F181_8526_body,(Current));
}

void EIF_Minit141 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class PERCENT_ENCODER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pe104.h"
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

/* {PERCENT_ENCODER}.percent_encoded_string */
EIF_REFERENCE F147_7982 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	F889_17162(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F147_7983(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {PERCENT_ENCODER}.append_percent_encoded_string_to */
void F147_7983 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		loc1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), loc2);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\0';
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
		if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L);
			tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
		}
		if (!(tb3)) {
			tb3 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 90L);
				tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			tb2 = tb3;
		}
		if (!tb2) {
			tb2 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 122L);
				tb2 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			F891_17234(RTCV(arg2), loc1);
		} else {
			switch (loc1) {
				case 45U:
				case 46U:
				case 95U:
				case 126U:
					F891_17234(RTCV(arg2), loc1);
					break;
				case 33U:
				case 36U:
				case 37U:
				case 38U:
				case 39U:
				case 40U:
				case 41U:
				case 42U:
				case 43U:
				case 44U:
				case 58U:
				case 59U:
				case 61U:
				case 64U:
					F147_7986(Current, loc1, arg2);
					break;
				default:
					F147_7986(Current, loc1, arg2);
					break;
			}
		}
		loc2++;
	}
	RTLE;
}

/* {PERCENT_ENCODER}.append_percent_encoded_character_code_to */
void F147_7986 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
		F147_7988(Current, arg1, arg2);
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
			F147_7988(Current, arg1, arg2);
		} else {
			F147_7987(Current, arg1, arg2);
		}
	}
	RTLE;
}

/* {PERCENT_ENCODER}.append_percent_encoded_ascii_character_code_to */
void F147_7987 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
		F147_7988(Current, arg1, arg2);
	} else {
		loc1 = (EIF_INTEGER_32) arg1;
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
		F891_17234(RTCV(arg2), tu4_1);
		tr1 = RTOUCR(219,F147_8001,(Current));
		ti4_1 = eif_bit_shift_right(loc1,((EIF_INTEGER_32) 4L));
		/* INLINED CODE (SPECIAL.item) */
		tu4_2 = *((EIF_NATURAL_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		tu4_1 = tu4_2;
		F891_17234(RTCV(arg2), tu4_1);
		tr1 = RTOUCR(219,F147_8001,(Current));
		ti4_1 = eif_bit_and(loc1,((EIF_INTEGER_32) 15L));
		/* INLINED CODE (SPECIAL.item) */
		tu4_2 = *((EIF_NATURAL_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		tu4_1 = tu4_2;
		F891_17234(RTCV(arg2), tu4_1);
	}
	RTLE;
}

/* {PERCENT_ENCODER}.append_percent_encoded_unicode_character_code_to */
void F147_7988 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
	if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
		F147_7987(Current, arg1, arg2);
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
		if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
			tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 6L));
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
			tu4_1 = eif_bit_or((tu4_1),tu4_2);
			F147_7987(Current, tu4_1, arg2);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
			tu4_1 = eif_bit_and(arg1,tu4_1);
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
			tu4_1 = eif_bit_or((tu4_1),tu4_2);
			F147_7987(Current, tu4_1, arg2);
		} else {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
			if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 12L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F147_7987(Current, tu4_1, arg2);
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 6L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and((tu4_1),tu4_2);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F147_7987(Current, tu4_1, arg2);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and(arg1,tu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F147_7987(Current, tu4_1, arg2);
			} else {
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 18L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F147_7987(Current, tu4_1, arg2);
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 12L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and((tu4_1),tu4_2);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F147_7987(Current, tu4_1, arg2);
				tu4_1 = eif_bit_shift_right(arg1,((EIF_INTEGER_32) 6L));
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and((tu4_1),tu4_2);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F147_7987(Current, tu4_1, arg2);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and(arg1,tu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_1 = eif_bit_or((tu4_1),tu4_2);
				F147_7987(Current, tu4_1, arg2);
			}
		}
	}
	RTLE;
}

/* {PERCENT_ENCODER}.percent_decoded_string */
EIF_REFERENCE F147_7989 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(891, 891, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	F887_17089(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F147_7990(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {PERCENT_ENCODER}.append_percent_decoded_string_to */
void F147_7990 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,arg2);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,arg1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	loc6 = arg2;
	loc6 = RTRV(eif_non_attached_type(891),loc6);
	loc5 = (EIF_BOOLEAN) EIF_TEST(loc6);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {125,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 125, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F126_10164(RTCV(tr1), loc1);
	loc4 = (EIF_REFERENCE) tr1;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), loc1);
		switch (loc3) {
			case 43U:
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
				F891_17234(RTCV(arg2), tu4_1);
				break;
			case 37U:
				if ((EIF_BOOLEAN)(loc1 == loc2)) {
					*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					F891_17234(RTCV(arg2), loc3);
				} else {
					if (loc5) {
						F126_10165(RTCV(loc4), loc1);
						loc3 = F147_7992(Current, arg1, loc4);
						F891_17234(RTCV(arg2), loc3);
						loc1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc4)-120])(RTCV(loc4)));
					} else {
						F126_10165(RTCV(loc4), loc1);
						loc3 = F147_7991(Current, arg1, loc4);
						F891_17234(RTCV(arg2), loc3);
						loc1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc4)-120])(RTCV(loc4)));
					}
				}
				break;
			default:
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
				if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
					F891_17234(RTCV(arg2), loc3);
				} else {
					if (loc5) {
						F891_17234(RTCV(arg2), loc3);
					} else {
						F147_7986(Current, loc3, arg2);
					}
				}
				break;
		}
		loc1++;
	}
	RTLE;
}

/* {PERCENT_ENCODER}.next_percent_decoded_character_code */
EIF_NATURAL_32 F147_7991 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	
	RTGC;
	loc7 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(arg2)-120])(RTCV(arg2)));
	loc1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)));
	tb1 = '\01';
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 85L);
	if (!(EIF_BOOLEAN)(loc1 == tu4_1)) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 117L);
		tb1 = (EIF_BOOLEAN)(loc1 == tu4_1);
	}
	if (tb1) {
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L));
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || loc4)) break;
			loc1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), loc2);
			loc8 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L);
				loc8 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			loc8 = (EIF_BOOLEAN) loc8;
			tb1 = '\01';
			tb2 = '\01';
			if (!loc8) {
				tb3 = '\0';
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
				if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 102L);
					tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
				}
				tb2 = tb3;
			}
			if (!tb2) {
				tb2 = '\0';
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
				if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 70L);
					tb2 = (EIF_BOOLEAN) (loc1 <= tu4_1);
				}
				tb1 = tb2;
			}
			if (tb1) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 16L);
				loc6 *= tu4_1;
				if (loc8) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
					loc6 += (EIF_NATURAL_32) (loc1 - tu4_1);
				} else {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 70L);
					if ((EIF_BOOLEAN) (loc1 > tu4_1)) {
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
						loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + (EIF_NATURAL_32) (loc1 - tu4_1)) + tu4_2);
					} else {
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
						loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + (EIF_NATURAL_32) (loc1 - tu4_1)) + tu4_2);
					}
				}
				loc2++;
			} else {
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				loc2--;
			}
		}
		F126_10165(RTCV(arg2), loc2);
		RTLE;
		return (EIF_NATURAL_32) loc6;
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L)));
		loc5 = F147_8003(Current, tr1);
		Result = (EIF_NATURAL_32) loc5;
		F126_10165(RTCV(arg2), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L)));
	}
	RTLE;
	return Result;
}

/* {PERCENT_ENCODER}.next_percent_decoded_unicode_character_code */
EIF_NATURAL_32 F147_7992 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc8);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,arg1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {125,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 125, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(arg2)-120])(RTCV(arg2)));
	F126_10164(RTCV(tr1), ti4_1);
	loc8 = (EIF_REFERENCE) tr1;
	loc4 = F147_7991(Current, arg1, loc8);
	loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc8)-120])(RTCV(loc8)));
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	Result = (EIF_NATURAL_32) loc4;
	F126_10165(RTCV(arg2), loc2);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
	if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
		RTLE;
		return (EIF_NATURAL_32) loc4;
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 223L);
		if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
				loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
				if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
					F126_10165(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
					loc5 = F147_7991(Current, arg1, loc8);
					loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc8)-120])(RTCV(loc8)));
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
					tu4_1 = eif_bit_and(loc4,tu4_1);
					tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 6L));
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_2 = eif_bit_and(loc5,tu4_2);
					Result = eif_bit_or((tu4_1),tu4_2);
					Result = (EIF_NATURAL_32) Result;
					F126_10165(RTCV(arg2), loc2);
				}
			}
		} else {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 239L);
			if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
					loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
					if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
						F126_10165(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
						loc5 = F147_7991(Current, arg1, loc8);
						loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc8)-120])(RTCV(loc8)));
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
							loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
							if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
								F126_10165(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
								loc6 = F147_7991(Current, arg1, loc8);
								loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc8)-120])(RTCV(loc8)));
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
								tu4_1 = eif_bit_and(loc4,tu4_1);
								tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 12L));
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								tu4_2 = eif_bit_and(loc5,tu4_2);
								tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
								tu4_1 = eif_bit_or((tu4_1),tu4_2);
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								tu4_2 = eif_bit_and(loc6,tu4_2);
								Result = eif_bit_or(tu4_1,tu4_2);
								Result = (EIF_NATURAL_32) Result;
								F126_10165(RTCV(arg2), loc2);
							}
						}
					}
				}
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 247L);
				if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
						loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
						if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
							F126_10165(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
							loc5 = F147_7991(Current, arg1, loc8);
							loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc8)-120])(RTCV(loc8)));
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
								loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
								if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
									F126_10165(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
									loc6 = F147_7991(Current, arg1, loc8);
									loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc8)-120])(RTCV(loc8)));
									if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
										loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
										if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
											F126_10165(RTCV(loc8), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
											loc7 = F147_7991(Current, arg1, loc8);
											loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc8)-120])(RTCV(loc8)));
											F126_10165(RTCV(arg2), loc2);
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
											tu4_1 = eif_bit_and(loc4,tu4_1);
											tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 18L));
											tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											tu4_2 = eif_bit_and(loc5,tu4_2);
											tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 12L));
											tu4_1 = eif_bit_or((tu4_1),tu4_2);
											tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											tu4_2 = eif_bit_and(loc6,tu4_2);
											tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
											tu4_1 = eif_bit_or(tu4_1,tu4_2);
											tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											tu4_2 = eif_bit_and(loc7,tu4_2);
											Result = eif_bit_or(tu4_1,tu4_2);
											Result = (EIF_NATURAL_32) Result;
										}
									}
								}
							}
						}
					}
				} else {
					RTLE;
					return (EIF_NATURAL_32) loc4;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {PERCENT_ENCODER}.hex_digit */
static EIF_REFERENCE F147_8001_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(219)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	{
		static EIF_TYPE_INDEX typarr0[] = {959,1005,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 16L),sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	F960_18821(RTCV(tr1), tu4_1, ((EIF_INTEGER_32) 16L));
	Result = (EIF_REFERENCE) tr1;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 0L))) = ((EIF_NATURAL_32) 48U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 1L))) = ((EIF_NATURAL_32) 49U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 2L))) = ((EIF_NATURAL_32) 50U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 3L))) = ((EIF_NATURAL_32) 51U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 4L))) = ((EIF_NATURAL_32) 52U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 5L))) = ((EIF_NATURAL_32) 53U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 6L))) = ((EIF_NATURAL_32) 54U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 7L))) = ((EIF_NATURAL_32) 55U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 8L))) = ((EIF_NATURAL_32) 56U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 9L))) = ((EIF_NATURAL_32) 57U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 10L))) = ((EIF_NATURAL_32) 65U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 11L))) = ((EIF_NATURAL_32) 66U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 12L))) = ((EIF_NATURAL_32) 67U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 13L))) = ((EIF_NATURAL_32) 68U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 14L))) = ((EIF_NATURAL_32) 69U);
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_32 *)Result + (((EIF_INTEGER_32) 15L))) = ((EIF_NATURAL_32) 70U);
	/* END INLINED CODE */
	;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F147_8001 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(219,F147_8001_body,(Current));
}

/* {PERCENT_ENCODER}.hexadecimal_string_to_natural_32 */
EIF_NATURAL_32 F147_8003 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc1 = RTOUCR(220,F147_8004,(Current));
	F179_8462(RTCV(loc1), arg1, ((EIF_INTEGER_32) 0L));
	tu4_1 = F179_8474(RTCV(loc1));
	RTLE;
	return (EIF_NATURAL_32) tu4_1;
}

/* {PERCENT_ENCODER}.ctoi_convertor */
static EIF_REFERENCE F147_8004_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(220)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(178, 178, _OBJSIZ_2_4_0_3_0_0_4_0_);
	F179_8456(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F178_8449(RTCV(Result), (EIF_BOOLEAN) 0);
	F178_8448(RTCV(Result), (EIF_BOOLEAN) 0);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F147_8004 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(220,F147_8004_body,(Current));
}

void EIF_Minit104 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

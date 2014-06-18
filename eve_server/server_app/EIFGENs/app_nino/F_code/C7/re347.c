/*
 * Code for class READABLE_STRING_GENERAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re347.h"
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

/* {READABLE_STRING_GENERAL}.make_empty */
void F885_16993 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R15027[Dtype(Current)-886])(Current, ((EIF_INTEGER_32) 0L));
}

/* {READABLE_STRING_GENERAL}.index_of */
EIF_INTEGER_32 F885_16996 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[dtype-886])(Current);
	if ((EIF_BOOLEAN) (arg2 <= loc2)) {
		loc1 = (EIF_INTEGER_32) arg2;
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15030[dtype-887])(Current, loc1) == arg1);
			}
			if (tb1) break;
			loc1++;
		}
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			RTLE;
			return (EIF_INTEGER_32) loc1;
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {READABLE_STRING_GENERAL}.hash_code */
EIF_INTEGER_32 F885_17002 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(Current + O15119[dtype-884]);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[dtype-886])(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L))),((EIF_INTEGER_32) 8L));
			tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15030[dtype-887])(Current, loc1);
			ti4_2 = (EIF_INTEGER_32) (tw1);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
			loc1++;
		}
		*(EIF_INTEGER_32 *)(Current + O15119[dtype-884]) = (EIF_INTEGER_32) Result;
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.case_insensitive_hash_code */
EIF_INTEGER_32 F885_17003 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(Current + O15120[dtype-884]);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[dtype-886])(Current);
		loc1 = RTOUCR(6,F885_17084,(Current));
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 > loc3)) break;
			ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L))),((EIF_INTEGER_32) 8L));
			tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15030[dtype-887])(Current, loc2);
			tw1 = F25_3864(RTCV(loc1), tw1);
			ti4_2 = (EIF_INTEGER_32) (tw1);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
			loc2++;
		}
		*(EIF_INTEGER_32 *)(Current + O15120[dtype-884]) = (EIF_INTEGER_32) Result;
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.valid_index */
EIF_BOOLEAN F885_17005 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(Current)-886])(Current));
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_double */
EIF_BOOLEAN F885_17019 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOUCR(32,F885_17082,(Current));
	F180_8495(RTCV(loc1), Current, ((EIF_INTEGER_32) 101L));
	tb1 = F180_8488(RTCV(loc1));
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

/* {READABLE_STRING_GENERAL}.is_integer */
EIF_BOOLEAN F885_17024 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F885_17078(Current, ((EIF_INTEGER_32) 3L));
}

/* {READABLE_STRING_GENERAL}.is_integer_32 */
EIF_BOOLEAN F885_17025 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F885_17078(Current, ((EIF_INTEGER_32) 3L));
}

/* {READABLE_STRING_GENERAL}.is_natural_64 */
EIF_BOOLEAN F885_17031 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F885_17078(Current, ((EIF_INTEGER_32) 14L));
}

/* {READABLE_STRING_GENERAL}.is_case_insensitive_equal */
EIF_BOOLEAN F885_17035 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(Current)-886])(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = F885_17036(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.same_caseless_characters */
EIF_BOOLEAN F885_17036 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,arg1);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[dtype-886])(Current) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		loc4 = RTOUCR(6,F885_17084,(Current));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (EIF_INTEGER_32) arg4;
		loc2 = (EIF_INTEGER_32) arg2;
		loc3 += loc1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			loc5 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15030[dtype-887])(Current, loc1);
			loc6 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15030[Dtype(arg1)-887])(RTCV(arg1), loc2);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc5 != loc6)) {
				tw1 = F25_3864(RTCV(loc4), loc5);
				tw2 = F25_3864(RTCV(loc4), loc6);
				tb1 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb1) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
			}
			loc1++;
			loc2++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.has_substring */
EIF_BOOLEAN F885_17037 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
		if ((EIF_BOOLEAN) (ti4_1 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[dtype-886])(Current))) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R15077[dtype-886])(Current, arg1, ((EIF_INTEGER_32) 1L));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.same_string */
EIF_BOOLEAN F885_17038 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(Current)-886])(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = F885_17039(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.same_characters */
EIF_BOOLEAN F885_17039 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[dtype-886])(Current) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (EIF_INTEGER_32) arg4;
		loc2 = (EIF_INTEGER_32) arg2;
		loc3 += loc1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15030[Dtype(arg1)-887])(RTCV(arg1), loc2);
			if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15030[dtype-887])(Current, loc1) != tw1)) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
			}
			loc1++;
			loc2++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.starts_with */
EIF_BOOLEAN F885_17040 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
		if ((EIF_BOOLEAN) (loc1 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[dtype-886])(Current))) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
				tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), loc1);
				if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[dtype-887])(Current, loc1) != tu4_1)) {
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
				loc1--;
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_string_8 */
EIF_REFERENCE F885_17046 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F885_17049(Current);
}

/* {READABLE_STRING_GENERAL}.as_readable_string_8 */
EIF_REFERENCE F885_17048 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F885_17049(Current);
}

/* {READABLE_STRING_GENERAL}.as_string_8 */
EIF_REFERENCE F885_17049 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc4 = Current;
	loc4 = RTRV(eif_non_attached_type(892),loc4);
	if (EIF_TEST(loc4)) {
		RTLE;
		return (EIF_REFERENCE) loc4;
	} else {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[dtype-886])(Current);
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F889_17162(RTCV(tr1), loc2);
		Result = (EIF_REFERENCE) tr1;
		F893_17425(RTCV(Result), loc2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[dtype-887])(Current, loc1);
			tb1 = F889_17197(RTCV(Result), loc3);
			if (tb1) {
				F893_17365(RTCV(Result), loc3, loc1);
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				F893_17365(RTCV(Result), tu4_1, loc1);
			}
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.as_readable_string_32 */
EIF_REFERENCE F885_17051 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F885_17052(Current);
}

/* {READABLE_STRING_GENERAL}.as_string_32 */
EIF_REFERENCE F885_17052 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc3 = Current;
	loc3 = RTRV(eif_non_attached_type(891),loc3);
	if (EIF_TEST(loc3)) {
		RTLE;
		return (EIF_REFERENCE) loc3;
	} else {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[dtype-886])(Current);
		tr1 = RTLNS(891, 891, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F887_17089(RTCV(tr1), loc2);
		Result = (EIF_REFERENCE) tr1;
		F892_17334(RTCV(Result), loc2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[dtype-887])(Current, loc1);
			F892_17274(RTCV(Result), tu4_1, loc1);
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_string_32 */
EIF_REFERENCE F885_17053 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc3 = Current;
	loc3 = RTRV(eif_non_attached_type(891),loc3);
	if (EIF_TEST(loc3)) {
		RTLE;
		return (EIF_REFERENCE) loc3;
	} else {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[dtype-886])(Current);
		tr1 = RTLNS(891, 891, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F887_17089(RTCV(tr1), loc2);
		Result = (EIF_REFERENCE) tr1;
		F892_17334(RTCV(Result), loc2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[dtype-887])(Current, loc1);
			F892_17274(RTCV(Result), tu4_1, loc1);
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_integer */
EIF_INTEGER_32 F885_17058 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOUCR(33,F885_17081,(Current));
	F181_8511(RTCV(loc1), Current, ((EIF_INTEGER_32) 0L));
	ti4_1 = F181_8519(RTCV(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {READABLE_STRING_GENERAL}.to_integer_32 */
EIF_INTEGER_32 F885_17059 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOUCR(33,F885_17081,(Current));
	F181_8511(RTCV(loc1), Current, ((EIF_INTEGER_32) 0L));
	ti4_1 = F181_8519(RTCV(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {READABLE_STRING_GENERAL}.to_natural_64 */
EIF_NATURAL_64 F885_17065 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_64 tu8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOUCR(33,F885_17081,(Current));
	F181_8511(RTCV(loc1), Current, ((EIF_INTEGER_32) 0L));
	tu8_1 = F181_8525(RTCV(loc1));
	RTLE;
	return (EIF_NATURAL_64) tu8_1;
}

/* {READABLE_STRING_GENERAL}.to_double */
EIF_REAL_64 F885_17068 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOUCR(32,F885_17082,(Current));
	F180_8495(RTCV(loc1), Current, ((EIF_INTEGER_32) 0L));
	tr8_1 = F180_8492(RTCV(loc1));
	RTLE;
	return (EIF_REAL_64) tr8_1;
}

/* {READABLE_STRING_GENERAL}.to_real_64 */
EIF_REAL_64 F885_17069 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOUCR(32,F885_17082,(Current));
	F180_8495(RTCV(loc1), Current, ((EIF_INTEGER_32) 0L));
	tr8_1 = F180_8492(RTCV(loc1));
	RTLE;
	return (EIF_REAL_64) tr8_1;
}

/* {READABLE_STRING_GENERAL}.to_boolean */
EIF_BOOLEAN F885_17070 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(Current)-886])(Current) == ((EIF_INTEGER_32) 4L))) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {READABLE_STRING_GENERAL}.split */
EIF_REFERENCE F885_17071 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Result);
	
	RTGC;
	loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[dtype-886])(Current);
	{
		EIF_TYPE_INDEX typarr0[] = {802,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = Dftype(Current);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F803_12632(RTCV(tr1), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 0L))) {
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc3 > loc5)) break;
			loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_32, EIF_INTEGER_32)) R15031[dtype-884])(Current, arg1, loc3);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L));
			}
			loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[dtype-887])(Current, loc3, (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(loc1)-459])(RTCV(loc1), loc2);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
		}
		if ((EIF_BOOLEAN)(loc4 == loc5)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R15111[dtype-887])(Current, ((EIF_INTEGER_32) 0L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(loc1)-459])(RTCV(loc1), tr1);
		}
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R15111[dtype-887])(Current, ((EIF_INTEGER_32) 0L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(loc1)-459])(RTCV(loc1), tr1);
	}
	Result = (EIF_REFERENCE) loc1;
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_valid_integer_or_natural */
EIF_BOOLEAN F885_17078 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = RTOUCR(33,F885_17081,(Current));
	F181_8506(RTCV(loc1), arg1);
	F181_8511(RTCV(loc1), Current, arg1);
	tb1 = F181_8515(RTCV(loc1));
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

/* {READABLE_STRING_GENERAL}.c_string_provider */
static EIF_REFERENCE F885_17080_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(34)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(562, 562, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F563_11288(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F885_17080 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(34,F885_17080_body,(Current));
}

/* {READABLE_STRING_GENERAL}.ctoi_convertor */
static EIF_REFERENCE F885_17081_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(33)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(180, 180, _OBJSIZ_2_3_0_3_0_0_4_0_);
	F181_8505(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H(" ",1,32);
	F178_8450(RTCV(Result), tr1);
	tr1 = RTMS_EX_H(" ",1,32);
	F178_8451(RTCV(Result), tr1);
	F178_8449(RTCV(Result), (EIF_BOOLEAN) 1);
	F178_8448(RTCV(Result), (EIF_BOOLEAN) 1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F885_17081 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(33,F885_17081_body,(Current));
}

/* {READABLE_STRING_GENERAL}.ctor_convertor */
static EIF_REFERENCE F885_17082_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(32)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(179, 179, _OBJSIZ_2_6_0_4_0_0_2_3_);
	F180_8482(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H(" ",1,32);
	F178_8450(RTCV(Result), tr1);
	tr1 = RTMS_EX_H(" ",1,32);
	F178_8451(RTCV(Result), tr1);
	F178_8449(RTCV(Result), (EIF_BOOLEAN) 1);
	F178_8448(RTCV(Result), (EIF_BOOLEAN) 1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F885_17082 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(32,F885_17082_body,(Current));
}

/* {READABLE_STRING_GENERAL}.character_properties */
static EIF_REFERENCE F885_17084_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(6)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(24, 24, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F885_17084 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(6,F885_17084_body,(Current));
}

void EIF_Minit347 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

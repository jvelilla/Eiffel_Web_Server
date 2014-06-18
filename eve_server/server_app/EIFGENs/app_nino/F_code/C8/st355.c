/*
 * Code for class STRING_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st355.h"
#include "eif_built_in.h"
#include <ctype.h>
#include "eif_helpers.h"
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

/* {STRING_8}.item */
EIF_CHARACTER_8 F893_17342 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tc2;
	RTLE;
	return Result;
}

/* {STRING_8}.at */
EIF_CHARACTER_8 F893_17343 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tc2;
	RTLE;
	return Result;
}

/* {STRING_8}.character_32_item */
EIF_CHARACTER_32 F893_17344 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = F893_17345(Current, arg1);
	Result = (EIF_CHARACTER_32) tu4_1;
	RTLE;
	return Result;
}

/* {STRING_8}.code */
EIF_NATURAL_32 F893_17345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tc1 = tc2;
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {STRING_8}.area */
EIF_REFERENCE F893_17347 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {STRING_8}.extendible */
EIF_BOOLEAN F893_17348 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {STRING_8}.replace_substring */
void F893_17353 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	
	RTGC;
	loc4 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc5);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		F893_17409(Current, loc1);
	}
	loc3 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
		/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
		memmove((EIF_CHARACTER_8 *)loc3 + ((EIF_INTEGER_32) (arg3 + loc2)),(EIF_CHARACTER_8 *)loc3 + arg3, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (loc5 - arg3));
		RT_SPECIAL_COUNT(loc3) = eif_max_int32(RT_SPECIAL_COUNT(loc3), (EIF_INTEGER_32) (arg3 + loc2) + (EIF_INTEGER_32) (loc5 - arg3));
		/* END INLINED CODE */
		;
	}
	F893_17425(Current, loc1);
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_CHARACTER_8 *)loc3 + ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)tr1 + ti4_1, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc4);
	RT_SPECIAL_COUNT(loc3) = eif_max_int32(RT_SPECIAL_COUNT(loc3), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) + loc4);
	/* END INLINED CODE */
	;
	RTLE;
}

/* {STRING_8}.replace_substring_all */
void F893_17354 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc16);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,loc13);
	RTLR(5,loc14);
	RTLR(6,loc18);
	RTLR(7,tr1);
	RTLR(8,loc17);
	
	RTGC;
	if ((EIF_BOOLEAN) !F324_9603(Current)) {
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc16 = RTOUCR(4,F889_17204,(Current));
		F172_8376(RTCV(loc16), arg1);
		loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
		loc4 = *(EIF_INTEGER_32 *)(RTCV(arg2) + O15187[Dtype(arg2)-888]);
		if ((EIF_BOOLEAN) (loc3 >= loc4)) {
			loc1 = F174_8393(RTCV(loc16), Current, arg1, ((EIF_INTEGER_32) 1L), loc6);
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
				if ((EIF_BOOLEAN)(loc3 == loc4)) {
					loc13 = *(EIF_REFERENCE *)(Current);
					loc14 = *(EIF_REFERENCE *)(RTCV(arg2) + O15184[Dtype(arg2)-888]);
					loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg2)-888])(RTCV(arg2));
					for (;;) {
						if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
						/* INLINED CODE (SPECIAL.copy_data) */
						memmove((EIF_CHARACTER_8 *)loc13 + ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)loc14 + loc5, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc4);
						RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) + loc4);
						/* END INLINED CODE */
						;
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) <= loc6)) {
							loc1 = F174_8393(RTCV(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc4), loc6);
						} else {
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					}
				} else {
					if ((EIF_BOOLEAN) (loc3 > loc4)) {
						loc2 = F174_8393(RTCV(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc3), loc6);
						loc13 = *(EIF_REFERENCE *)(Current);
						loc14 = *(EIF_REFERENCE *)(RTCV(arg2) + O15184[Dtype(arg2)-888]);
						loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg2)-888])(RTCV(arg2));
						for (;;) {
							if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
							/* INLINED CODE (SPECIAL.copy_data) */
							memmove((EIF_CHARACTER_8 *)loc13 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15)),(EIF_CHARACTER_8 *)loc14 + loc5, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc4);
							RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15) + loc4);
							/* END INLINED CODE */
							;
							/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
							memmove((EIF_CHARACTER_8 *)loc13 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15)),(EIF_CHARACTER_8 *)loc13 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc1) - loc3));
							RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc1) - loc3));
							/* END INLINED CODE */
							;
							loc1 = (EIF_INTEGER_32) loc2;
							loc15 += (EIF_INTEGER_32) (loc3 - loc4);
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) <= loc6)) {
								loc2 = F174_8393(RTCV(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc3), loc6);
							} else {
								loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							}
						}
						/* INLINED CODE (SPECIAL.copy_data) */
						memmove((EIF_CHARACTER_8 *)loc13 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15)),(EIF_CHARACTER_8 *)loc14 + loc5, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc4);
						RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15) + loc4);
						/* END INLINED CODE */
						;
						/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
						memmove((EIF_CHARACTER_8 *)loc13 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15)),(EIF_CHARACTER_8 *)loc13 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)) - loc1) - loc3));
						RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15) + (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)) - loc1) - loc3));
						/* END INLINED CODE */
						;
						loc15 += (EIF_INTEGER_32) (loc3 - loc4);
						F893_17425(Current, (EIF_INTEGER_32) (loc6 - loc15));
					}
				}
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		} else {
			tr1 = F172_8381(RTCV(loc16), Current, arg1, ((EIF_INTEGER_32) 1L), loc6);
			loc18 = tr1;
			if (EIF_TEST(loc18)) {
				loc17 = F804_12635(RTCV(loc18));
				loc8 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc17);
				loc11 = (EIF_INTEGER_32) loc6;
				loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
				loc6 += (EIF_INTEGER_32) (loc8 * loc12);
				tr1 = *(EIF_REFERENCE *)(Current);
				loc13 = F962_18854(RTCV(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)));
				RTAR(Current, loc13);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc13;
				loc7 = (EIF_INTEGER_32) loc8;
				loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg2)-888])(RTCV(arg2));
				loc14 = *(EIF_REFERENCE *)(RTCV(arg2) + O15184[Dtype(arg2)-888]);
				for (;;) {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) 0L))) break;
					loc7--;
					/* INLINED CODE (SPECIAL.item) */
					ti4_2 = *((EIF_INTEGER_32 *)loc17 + (loc7));
					/* END INLINED CODE */
					loc9 = ti4_2;
					loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + (EIF_INTEGER_32) (loc7 * loc12));
					/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
					memmove((EIF_CHARACTER_8 *)loc13 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 + loc4) - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)loc13 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc3) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc11 - loc9) - loc3) + ((EIF_INTEGER_32) 1L)));
					RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 + loc4) - ((EIF_INTEGER_32) 1L)) + (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc11 - loc9) - loc3) + ((EIF_INTEGER_32) 1L)));
					/* END INLINED CODE */
					;
					loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
					/* INLINED CODE (SPECIAL.copy_data) */
					memmove((EIF_CHARACTER_8 *)loc13 + ((EIF_INTEGER_32) (loc10 - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)loc14 + loc5, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc4);
					RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) (loc10 - ((EIF_INTEGER_32) 1L)) + loc4);
					/* END INLINED CODE */
					;
				}
				F893_17425(Current, loc6);
			}
		}
	}
	RTLE;
}

/* {STRING_8}.fill_blank */
void F893_17356 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F889_17200(Current, (EIF_CHARACTER_8) ' ');
}

/* {STRING_8}.keep_head */
void F893_17359 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {STRING_8}.keep_tail */
void F893_17360 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (arg1 < loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
		memmove((EIF_CHARACTER_8 *)tr1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)tr1 + (EIF_INTEGER_32) (loc1 - arg1), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)arg1);
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + arg1);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {STRING_8}.left_adjust */
void F893_17361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	loc3 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc2 > loc1)) {
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc3 + (loc2));
			/* END INLINED CODE */
			tc1 = tc2;
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		loc2++;
	}
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) - loc2);
		/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
		memmove((EIF_CHARACTER_8 *)loc3 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)loc3 + loc2, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc1);
		RT_SPECIAL_COUNT(loc3) = eif_max_int32(RT_SPECIAL_COUNT(loc3), ((EIF_INTEGER_32) 0L) + loc1);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {STRING_8}.right_adjust */
void F893_17362 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc4);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) loc2;
	loc4 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc4 + (loc1));
			/* END INLINED CODE */
			tc1 = tc2;
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		loc3++;
		loc1--;
	}
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) - loc3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {STRING_8}.put */
void F893_17364 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) = arg1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {STRING_8}.put_code */
void F893_17365 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (EIF_CHARACTER_8) arg1;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) = tc1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {STRING_8}.prepend */
void F893_17369 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F893_17395(Current, arg1, ((EIF_INTEGER_32) 1L));
}

/* {STRING_8}.prepend_integer */
void F893_17373 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = c_outi(arg1);
	F893_17369(Current, tr1);
	RTLE;
}

/* {STRING_8}.append_string_general */
void F893_17376 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(888),loc1);
	if (EIF_TEST(loc1)) {
		F893_17377(Current, loc1);
	} else {
		F891_17235(Current, arg1);
	}
	RTLE;
}

/* {STRING_8}.append */
void F893_17377 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		if ((EIF_BOOLEAN) (loc3 > F889_17180(Current))) {
			ti4_1 = F354_9610(Current);
			F893_17408(Current, (EIF_INTEGER_32) (loc3 + ti4_1));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)tr1 + (loc1),(EIF_CHARACTER_8 *)tr2 + ti4_1, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc2);
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), loc1 + loc2);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc3;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {STRING_8}.append_substring */
void F893_17378 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		if ((EIF_BOOLEAN) (loc3 > F889_17180(Current))) {
			ti4_1 = F354_9610(Current);
			F893_17408(Current, (EIF_INTEGER_32) (loc3 + ti4_1));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)tr1 + (loc1),(EIF_CHARACTER_8 *)tr2 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg2) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc2);
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), loc1 + loc2);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc3;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {STRING_8}.plus */
EIF_REFERENCE F893_17379 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,Result);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R15111[Dtype(Current)-887])(Current, (EIF_INTEGER_32) (ti4_1 + ti4_2));
	F893_17377(RTCV(Result), Current);
	F893_17376(RTCV(Result), arg1);
	RTLE;
	return Result;
}

/* {STRING_8}.append_string */
void F893_17380 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F893_17377(Current, arg1);
	}
	RTLE;
}

/* {STRING_8}.append_integer */
void F893_17381 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		F893_17391(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			F893_17391(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0x80000000L))) {
				F893_17391(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 10L));
			} else {
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_32) arg1;
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 % ((EIF_INTEGER_32) 10L)) + ((EIF_INTEGER_32) 48L)));
			F893_17391(Current, tc1);
			loc1 /= ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_integer_8 */
void F893_17382 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_INTEGER_8 loc1 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_INTEGER_8 ti1_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	
	RTGC;
	ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(arg1 == ti1_1)) {
		F893_17391(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN) (arg1 < ti1_1)) {
			F893_17391(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_8) -128L))) {
				F893_17391(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L);
				loc1 = (EIF_INTEGER_8) (EIF_INTEGER_8) -(EIF_INTEGER_8) (arg1 / loc1);
			} else {
				loc1 = (EIF_INTEGER_8) (EIF_INTEGER_8) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_8) arg1;
		}
		for (;;) {
			ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L);
			if ((EIF_BOOLEAN)(loc1 == ti1_1)) break;
			ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L);
			ti1_3 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 48L);
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_8) ((EIF_INTEGER_8) (loc1 % ti1_2) + ti1_3));
			F893_17391(Current, tc1);
			ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L);
			loc1 /= ti1_2;
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_integer_16 */
void F893_17383 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_INTEGER_16 loc1 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	
	RTGC;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(arg1 == ti2_1)) {
		F893_17391(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN) (arg1 < ti2_1)) {
			F893_17391(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_16) -32768L))) {
				F893_17391(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L);
				loc1 = (EIF_INTEGER_16) (EIF_INTEGER_16) -(EIF_INTEGER_16) (arg1 / loc1);
			} else {
				loc1 = (EIF_INTEGER_16) (EIF_INTEGER_16) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_16) arg1;
		}
		for (;;) {
			ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
			if ((EIF_BOOLEAN)(loc1 == ti2_1)) break;
			ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L);
			ti2_3 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 48L);
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_16) ((EIF_INTEGER_16) (loc1 % ti2_2) + ti2_3));
			F893_17391(Current, tc1);
			ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L);
			loc1 /= ti2_2;
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_integer_64 */
void F893_17384 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_INTEGER_64 loc1 = (EIF_INTEGER_64) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	
	RTGC;
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(arg1 == ti8_1)) {
		F893_17391(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN) (arg1 < ti8_1)) {
			F893_17391(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_64) RTI64C(0x8000000000000000)))) {
				F893_17391(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
				loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -(EIF_INTEGER_64) (arg1 / loc1);
			} else {
				loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_64) arg1;
		}
		for (;;) {
			ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
			if ((EIF_BOOLEAN)(loc1 == ti8_1)) break;
			ti8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
			ti8_3 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 48L);
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_64) ((EIF_INTEGER_64) (loc1 % ti8_2) + ti8_3));
			F893_17391(Current, tc1);
			ti8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
			loc1 /= ti8_2;
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_8 */
void F893_17385 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	
	RTGC;
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(arg1 == tu1_1)) {
		F893_17391(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_8) arg1;
		for (;;) {
			tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			if ((EIF_BOOLEAN)(loc1 == tu1_1)) break;
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
			tu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 48L);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_8) ((EIF_NATURAL_8) (loc1 % tu1_2) + tu1_3));
			F893_17391(Current, tc1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
			loc1 /= tu1_2;
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_16 */
void F893_17386 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	
	RTGC;
	tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(arg1 == tu2_1)) {
		F893_17391(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_16) arg1;
		for (;;) {
			tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L);
			if ((EIF_BOOLEAN)(loc1 == tu2_1)) break;
			tu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L);
			tu2_3 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 48L);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_16) ((EIF_NATURAL_16) (loc1 % tu2_2) + tu2_3));
			F893_17391(Current, tc1);
			tu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L);
			loc1 /= tu2_2;
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_32 */
void F893_17387 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(arg1 == tu4_1)) {
		F893_17391(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_32) arg1;
		for (;;) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
			if ((EIF_BOOLEAN)(loc1 == tu4_1)) break;
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
			tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc1 % tu4_2) + tu4_3));
			F893_17391(Current, tc1);
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
			loc1 /= tu4_2;
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_64 */
void F893_17388 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	
	RTGC;
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(arg1 == tu8_1)) {
		F893_17391(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_64) arg1;
		for (;;) {
			tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
			if ((EIF_BOOLEAN)(loc1 == tu8_1)) break;
			tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
			tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 48L);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (loc1 % tu8_2) + tu8_3));
			F893_17391(Current, tc1);
			tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
			loc1 /= tu8_2;
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)loc5 + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_character */
void F893_17391 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc1 == F889_17180(Current))) {
		ti4_1 = F354_9610(Current);
		F893_17408(Current, (EIF_INTEGER_32) (loc1 + ti4_1));
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)tr1 + (loc1)) = arg1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {STRING_8}.extend */
void F893_17392 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc1 == F889_17180(Current))) {
		ti4_1 = F354_9610(Current);
		F893_17408(Current, (EIF_INTEGER_32) (loc1 + ti4_1));
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)tr1 + (loc1)) = arg1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {STRING_8}.insert_string */
void F893_17395 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L))) {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
		if ((EIF_BOOLEAN) (loc2 > F889_17180(Current))) {
			ti4_1 = F354_9610(Current);
			F893_17408(Current, (EIF_INTEGER_32) (loc2 + ti4_1));
		}
		loc4 = *(EIF_REFERENCE *)(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
		memmove((EIF_CHARACTER_8 *)loc4 + ((EIF_INTEGER_32) (loc1 + loc3)),(EIF_CHARACTER_8 *)loc4 + loc1, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_1 - loc1));
		RT_SPECIAL_COUNT(loc4) = eif_max_int32(RT_SPECIAL_COUNT(loc4), (EIF_INTEGER_32) (loc1 + loc3) + (EIF_INTEGER_32) (ti4_1 - loc1));
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)loc4 + (loc1),(EIF_CHARACTER_8 *)tr1 + ti4_1, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc3);
		RT_SPECIAL_COUNT(loc4) = eif_max_int32(RT_SPECIAL_COUNT(loc4), loc1 + loc3);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {STRING_8}.remove_head */
void F893_17398 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		F893_17360(Current, (EIF_INTEGER_32) (ti4_1 - arg1));
	}
	RTLE;
}

/* {STRING_8}.remove_tail */
void F893_17400 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (arg1 > loc1)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		F893_17359(Current, (EIF_INTEGER_32) (loc1 - arg1));
	}
	RTLE;
}

/* {STRING_8}.wipe_out */
void F893_17405 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {STRING_8}.resize */
void F893_17408 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = F962_18856(RTCV(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STRING_8}.grow */
void F893_17409 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > F889_17180(Current))) {
		F893_17408(Current, arg1);
	}
	RTLE;
}

/* {STRING_8}.as_lower */
EIF_REFERENCE F893_17411 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	F893_17417(RTCV(Result));
	RTLE;
	return Result;
}

/* {STRING_8}.as_upper */
EIF_REFERENCE F893_17412 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	F893_17418(RTCV(Result));
	RTLE;
	return Result;
}

/* {STRING_8}.to_lower */
void F893_17417 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	F889_17206(Current, tr1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {STRING_8}.to_upper */
void F893_17418 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	F889_17207(Current, tr1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {STRING_8}.linear_representation */
EIF_REFERENCE F893_17419 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {810,829,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 810, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F889_17180(Current);
	F811_12632(RTCV(tr1), ti4_1);
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) break;
		tc1 = F893_17342(Current, loc2);
		F811_12672(RTCV(loc1), tc1);
		loc2++;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {STRING_8}.substring */
EIF_REFERENCE F893_17423 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)))) {
		Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R15111[dtype-887])(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		tr1 = *(EIF_REFERENCE *)(RTCV(Result));
		tr2 = *(EIF_REFERENCE *)(Current);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)tr1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)tr2 + (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		/* END INLINED CODE */
		;
		F893_17425(RTCV(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
	} else {
		RTLE;
		return (EIF_REFERENCE) (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R15111[dtype-887])(Current, ((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {STRING_8}.set_count */
void F893_17425 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {STRING_8}.new_string */
EIF_REFERENCE F893_17426 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F889_17162(RTCV(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {STRING_8}.correct_mismatch */
void F893_17427 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit355 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

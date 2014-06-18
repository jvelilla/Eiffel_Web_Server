/*
 * Code for class READABLE_STRING_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re349.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {READABLE_STRING_32}.make */
void F887_17089 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O15149[dtype-886]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O15119[dtype-884]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	{
		static EIF_TYPE_INDEX typarr0[] = {964,826,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
	}
	F965_18821(RTCV(tr1), tw1, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O15146[dtype-886]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {READABLE_STRING_32}.make_from_string */
void F887_17091 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_CHARACTER_32 tw1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O15146[dtype-886]) = (EIF_REFERENCE) tr1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
	*(EIF_INTEGER_32 *)(Current + O15149[dtype-886]) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current + O15119[dtype-884]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(Current != arg1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O15149[dtype-886]);
		{
			static EIF_TYPE_INDEX typarr0[] = {964,826,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O15146[dtype-886]) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(arg1)-886])(RTCV(arg1));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + O15149[dtype-886]);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_32 *)tr1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)tr2 + ti4_2, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
		/* END INLINED CODE */
		;
	}
	RTLE;
}

/* {READABLE_STRING_32}.index_of */
EIF_INTEGER_32 F887_17101 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(Current + O15149[dtype-886]);
	if ((EIF_BOOLEAN) (arg2 <= loc3)) {
		loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[dtype-886])(Current);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) + loc4);
		loc3 += loc4;
		loc1 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc2 == loc3)) {
				/* INLINED CODE (SPECIAL.item) */
				tw2 = *((EIF_CHARACTER_32 *)loc1 + (loc2));
				/* END INLINED CODE */
				tw1 = tw2;
				tb1 = (EIF_BOOLEAN)(tw1 == arg1);
			}
			if (tb1) break;
			loc2++;
		}
		if ((EIF_BOOLEAN) (loc2 < loc3)) {
			RTLE;
			return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) - loc4);
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {READABLE_STRING_32}.last_index_of */
EIF_INTEGER_32 F887_17102 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[dtype-886])(Current);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) + loc3);
	loc1 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc2 < loc3)) {
			/* INLINED CODE (SPECIAL.item) */
			tw2 = *((EIF_CHARACTER_32 *)loc1 + (loc2));
			/* END INLINED CODE */
			tw1 = tw2;
			tb1 = (EIF_BOOLEAN)(tw1 == arg1);
		}
		if (tb1) break;
		loc2--;
	}
	RTLE;
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) - loc3);
}

/* {READABLE_STRING_32}.substring_index */
EIF_INTEGER_32 F887_17106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOUCR(5,F887_17132,(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O15149[Dtype(Current)-886]);
	Result = F172_8379(RTCV(tr1), Current, arg1, arg2, ti4_1);
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.capacity */
EIF_INTEGER_32 F887_17108 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15146[Dtype(Current)-886]);
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.count */
EIF_INTEGER_32 F887_17109 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O15149[Dtype(Current) - 886]);
}


/* {READABLE_STRING_32}.index_set */
EIF_REFERENCE F887_17111 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(720, 720, _OBJSIZ_0_3_0_2_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O15149[Dtype(Current)-886]);
	F721_12254(RTCV(tr1), ((EIF_INTEGER_32) 1L), ti4_1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {READABLE_STRING_32}.is_equal */
EIF_BOOLEAN F887_17112 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = *(EIF_INTEGER_32 *)(Current + O15149[dtype-886]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			loc2 = *(EIF_INTEGER_32 *)(Current + O15119[dtype-884]);
			loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15119[Dtype(arg1)-884]);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)(loc2 == loc3))) {
				tr1 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(arg1)-886])(RTCV(arg1));
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[dtype-886])(Current);
				Result = F965_18836(RTCV(tr1), tr2, ti4_1, ti4_2, loc1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.is_case_insensitive_equal */
EIF_BOOLEAN F887_17113 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		loc1 = *(EIF_INTEGER_32 *)(Current + O15149[Dtype(Current)-886]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = F887_17114(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.same_caseless_characters */
EIF_BOOLEAN F887_17114 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc7 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc8 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,loc5);
	RTLR(3,loc6);
	RTLR(4,arg1);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O15149[dtype-886]) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		loc4 = RTOUCR(6,F885_17084,(Current));
		loc5 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
		loc6 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[dtype-886])(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(arg1)-886])(RTCV(arg1));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + arg2) - ((EIF_INTEGER_32) 1L));
		loc3 += loc1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tw2 = *((EIF_CHARACTER_32 *)loc5 + (loc1));
			/* END INLINED CODE */
			loc7 = tw2;
			/* INLINED CODE (SPECIAL.item) */
			tw2 = *((EIF_CHARACTER_32 *)loc6 + (loc2));
			/* END INLINED CODE */
			loc8 = tw2;
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc7 != loc8)) {
				tw1 = F25_3864(RTCV(loc4), loc7);
				tw2 = F25_3864(RTCV(loc4), loc8);
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

/* {READABLE_STRING_32}.is_less */
EIF_BOOLEAN F887_17117 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
		loc2 = *(EIF_INTEGER_32 *)(Current + O15149[dtype-886]);
		if ((EIF_BOOLEAN)(loc1 == loc2)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
			tr2 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(arg1)-886])(RTCV(arg1));
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[dtype-886])(Current);
			ti4_1 = F887_17133(Current, tr1, tr2, ti4_1, ti4_2, loc1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		} else {
			if ((EIF_BOOLEAN) (loc2 < loc1)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
				tr2 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(arg1)-886])(RTCV(arg1));
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[dtype-886])(Current);
				ti4_1 = F887_17133(Current, tr1, tr2, ti4_1, ti4_2, loc2);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
			} else {
				tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
				tr2 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(arg1)-886])(RTCV(arg1));
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[dtype-886])(Current);
				ti4_1 = F887_17133(Current, tr1, tr2, ti4_1, ti4_2, loc1);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.starts_with */
EIF_BOOLEAN F887_17123 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc4);
	RTLR(3,loc5);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
		if ((EIF_BOOLEAN) (loc1 <= *(EIF_INTEGER_32 *)(Current + O15149[dtype-886]))) {
			loc4 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
			loc5 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[dtype-886])(Current);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
			loc1 = F887_17139(RTCV(arg1));
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(arg1)-886])(RTCV(arg1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				if ((EIF_BOOLEAN)(loc1 == loc3)) break;
				loc1--;
				loc2--;
				/* INLINED CODE (SPECIAL.item) */
				tw2 = *((EIF_CHARACTER_32 *)loc4 + (loc2));
				/* END INLINED CODE */
				tw1 = tw2;
				/* INLINED CODE (SPECIAL.item) */
				tw3 = *((EIF_CHARACTER_32 *)loc5 + (loc1));
				/* END INLINED CODE */
				tw2 = tw3;
				if ((EIF_BOOLEAN)(tw1 != tw2)) {
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					loc1 = (EIF_INTEGER_32) loc3;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.ends_with */
EIF_BOOLEAN F887_17124 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc4);
	RTLR(3,loc5);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
		loc2 = *(EIF_INTEGER_32 *)(Current + O15149[dtype-886]);
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			loc4 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
			loc5 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
			loc2 = F887_17139(Current);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			loc1 = F887_17139(RTCV(arg1));
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(arg1)-886])(RTCV(arg1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				if ((EIF_BOOLEAN)(loc1 == loc3)) break;
				loc1--;
				loc2--;
				/* INLINED CODE (SPECIAL.item) */
				tw2 = *((EIF_CHARACTER_32 *)loc4 + (loc2));
				/* END INLINED CODE */
				tw1 = tw2;
				/* INLINED CODE (SPECIAL.item) */
				tw3 = *((EIF_CHARACTER_32 *)loc5 + (loc1));
				/* END INLINED CODE */
				tw2 = tw3;
				if ((EIF_BOOLEAN)(tw1 != tw2)) {
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					loc1 = (EIF_INTEGER_32) loc3;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.copy */
void F887_17127 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		loc1 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
		eif_builtin_ANY_standard_copy (Current, arg1);
		tb1 = '\01';
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
			tb2 = (EIF_BOOLEAN)(loc1 == tr1);
		}
		if (!tb2) {
			ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= *(EIF_INTEGER_32 *)(Current + O15149[dtype-886]));
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O15149[dtype-886]);
			tr1 = F965_18853(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O15146[dtype-886]) = (EIF_REFERENCE) tr1;
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O15146[dtype-886]);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O15149[dtype-886]);
			/* INLINED CODE (SPECIAL.copy_data) */
			memmove((EIF_CHARACTER_32 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)tr1 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)ti4_1);
			RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + ti4_1);
			/* END INLINED CODE */
			;
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + O15146[dtype-886]) = (EIF_REFERENCE) loc1;
		}
		*(EIF_INTEGER_32 *)(Current + O15119[dtype-884]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {READABLE_STRING_32}.out */
EIF_REFERENCE F887_17131 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O15149[Dtype(Current)-886]));
	Result = (EIF_REFERENCE) tr1;
	tr1 = F885_17049(Current);
	F893_17377(RTCV(Result), tr1);
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.string_searcher */
static EIF_REFERENCE F887_17132_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(5)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(172, 172, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F172_8375(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F887_17132 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(5,F887_17132_body,(Current));
}

/* {READABLE_STRING_32}.str_strict_cmp */
EIF_INTEGER_32 F887_17133 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg3;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg5);
	loc2 = (EIF_INTEGER_32) arg4;
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc3)) break;
		/* INLINED CODE (SPECIAL.item) */
		tw2 = *((EIF_CHARACTER_32 *)arg1 + (loc1));
		/* END INLINED CODE */
		tw1 = tw2;
		loc4 = (EIF_INTEGER_32) (tw1);
		/* INLINED CODE (SPECIAL.item) */
		tw2 = *((EIF_CHARACTER_32 *)arg2 + (loc2));
		/* END INLINED CODE */
		tw1 = tw2;
		loc5 = (EIF_INTEGER_32) (tw1);
		if ((EIF_BOOLEAN)(loc4 != loc5)) {
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc5);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		}
		loc1++;
		loc2++;
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.to_lower_area */
void F887_17134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg2;
	loc4 = RTOUCR(6,F885_17084,(Current));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		/* INLINED CODE (SPECIAL.item) */
		tw2 = *((EIF_CHARACTER_32 *)arg1 + (loc1));
		/* END INLINED CODE */
		loc2 = tw2;
		loc3 = F25_3864(RTCV(loc4), loc2);
		if ((EIF_BOOLEAN)(loc2 != loc3)) {
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_32 *)arg1 + (loc1)) = loc3;
			/* END INLINED CODE */
			;
		}
		loc1++;
	}
	RTLE;
}

/* {READABLE_STRING_32}.to_upper_area */
void F887_17135 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg2;
	loc4 = RTOUCR(6,F885_17084,(Current));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		/* INLINED CODE (SPECIAL.item) */
		tw2 = *((EIF_CHARACTER_32 *)arg1 + (loc1));
		/* END INLINED CODE */
		loc2 = tw2;
		loc3 = F25_3865(RTCV(loc4), loc2);
		if ((EIF_BOOLEAN)(loc2 != loc3)) {
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_32 *)arg1 + (loc1)) = loc3;
			/* END INLINED CODE */
			;
		}
		loc1++;
	}
	RTLE;
}

/* {READABLE_STRING_32}.area */
EIF_REFERENCE F887_17137 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O15146[Dtype(Current) - 886]);
}


/* {READABLE_STRING_32}.area_lower */
EIF_INTEGER_32 F887_17138 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {READABLE_STRING_32}.area_upper */
EIF_INTEGER_32 F887_17139 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[dtype-886])(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O15149[dtype-886]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

void EIF_Minit349 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

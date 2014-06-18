/*
 * Code for class READABLE_STRING_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re351.h"
#include "eif_built_in.h"
#include <ctype.h>
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

/* {READABLE_STRING_8}.make */
void F889_17162 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O15187[dtype-888]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O15119[dtype-884]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
		static EIF_TYPE_INDEX typarr0[] = {961,829,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
	}
	F962_18821(RTCV(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O15184[dtype-888]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {READABLE_STRING_8}.make_filled */
void F889_17163 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F889_17162(Current, arg2);
	F889_17200(Current, arg1);
	RTLE;
}

/* {READABLE_STRING_8}.make_from_string */
void F889_17164 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O15184[dtype-888]) = (EIF_REFERENCE) tr1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	*(EIF_INTEGER_32 *)(Current + O15187[dtype-888]) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current + O15119[dtype-884]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(Current != arg1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]);
		{
			static EIF_TYPE_INDEX typarr0[] = {961,829,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O15184[dtype-888]) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)tr1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)tr2 + ti4_2, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
		/* END INLINED CODE */
		;
	}
	RTLE;
}

/* {READABLE_STRING_8}.make_from_c */
void F889_17165 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTOUCR(34,F885_17080,(Current));
	F563_11295(RTCV(tr1), arg1);
	loc1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(34,F885_17080,(Current)))+ _LNGOFF_1_0_0_0_);
	{
		static EIF_TYPE_INDEX typarr0[] = {961,829,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
	}
	F962_18821(RTCV(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O15184[dtype-888]) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current + O15187[dtype-888]) = (EIF_INTEGER_32) loc1;
	*(EIF_INTEGER_32 *)(Current + O15119[dtype-884]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTOUCR(34,F885_17080,(Current));
	tr2 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
	F563_11304(RTCV(tr1), tr2, ((EIF_INTEGER_32) 1L), loc1);
	RTLE;
}

/* {READABLE_STRING_8}.index_of */
EIF_INTEGER_32 F889_17173 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]);
	if ((EIF_BOOLEAN) (arg2 <= loc3)) {
		loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) + loc4);
		loc3 += loc4;
		loc1 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc2 == loc3)) {
				/* INLINED CODE (SPECIAL.item) */
				tc2 = *((EIF_CHARACTER_8 *)loc1 + (loc2));
				/* END INLINED CODE */
				tc1 = tc2;
				tb1 = (EIF_BOOLEAN)(tc1 == arg1);
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

/* {READABLE_STRING_8}.last_index_of */
EIF_INTEGER_32 F889_17174 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) + loc3);
	loc1 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc2 < loc3)) {
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc1 + (loc2));
			/* END INLINED CODE */
			tc1 = tc2;
			tb1 = (EIF_BOOLEAN)(tc1 == arg1);
		}
		if (tb1) break;
		loc2--;
	}
	RTLE;
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) - loc3);
}

/* {READABLE_STRING_8}.string */
EIF_REFERENCE F889_17176 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17164(RTCV(tr1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {READABLE_STRING_8}.substring_index */
EIF_INTEGER_32 F889_17178 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	tr1 = RTOUCR(4,F889_17204,(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O15187[Dtype(Current)-888]);
	Result = F172_8379(RTCV(tr1), Current, arg1, arg2, ti4_1);
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.capacity */
EIF_INTEGER_32 F889_17180 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15184[Dtype(Current)-888]);
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.count */
EIF_INTEGER_32 F889_17181 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O15187[Dtype(Current) - 888]);
}


/* {READABLE_STRING_8}.occurrences */
EIF_INTEGER_32 F889_17182 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
	loc2 = *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
	loc3 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		/* INLINED CODE (SPECIAL.item) */
		tc2 = *((EIF_CHARACTER_8 *)loc3 + (loc1));
		/* END INLINED CODE */
		tc1 = tc2;
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
			Result++;
		}
		loc1++;
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.index_set */
EIF_REFERENCE F889_17183 (EIF_REFERENCE Current)
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O15187[Dtype(Current)-888]);
	F721_12254(RTCV(tr1), ((EIF_INTEGER_32) 1L), ti4_1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {READABLE_STRING_8}.is_equal */
EIF_BOOLEAN F889_17184 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		loc1 = *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			loc2 = *(EIF_INTEGER_32 *)(Current + O15119[dtype-884]);
			loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15119[Dtype(arg1)-884]);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)(loc2 == loc3))) {
				tr1 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
				Result = F962_18836(RTCV(tr1), tr2, ti4_1, ti4_2, loc1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.is_case_insensitive_equal */
EIF_BOOLEAN F889_17185 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		loc1 = *(EIF_INTEGER_32 *)(Current + O15187[Dtype(Current)-888]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = F889_17186(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.same_caseless_characters */
EIF_BOOLEAN F889_17186 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc7 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,loc5);
	RTLR(3,arg1);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O15187[dtype-888]) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		loc4 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
		loc5 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + arg2) - ((EIF_INTEGER_32) 1L));
		loc3 += loc1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc4 + (loc1));
			/* END INLINED CODE */
			loc6 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)loc5 + (loc2));
			/* END INLINED CODE */
			loc7 = tc2;
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc6 != loc7)) {
				tc1 = (EIF_CHARACTER_8) tolower(loc6);
				tc2 = (EIF_CHARACTER_8) tolower(loc7);
				tb1 = (EIF_BOOLEAN)(tc1 != tc2);
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

/* {READABLE_STRING_8}.same_string */
EIF_BOOLEAN F889_17187 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		loc1 = *(EIF_INTEGER_32 *)(Current + O15187[Dtype(Current)-888]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = F889_17188(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.same_characters */
EIF_BOOLEAN F889_17188 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc1 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O15187[dtype-888]) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		tr1 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
		Result = F962_18836(RTCV(tr1), tr2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg2) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg4) - ((EIF_INTEGER_32) 1L)), loc1);
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.is_less */
EIF_BOOLEAN F889_17189 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
		loc2 = *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]);
		if ((EIF_BOOLEAN)(loc1 == loc2)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
			tr2 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
			ti4_1 = F889_17205(Current, tr1, tr2, ti4_1, ti4_2, loc1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		} else {
			if ((EIF_BOOLEAN) (loc2 < loc1)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
				tr2 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
				ti4_1 = F889_17205(Current, tr1, tr2, ti4_1, ti4_2, loc2);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
			} else {
				tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
				tr2 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
				ti4_1 = F889_17205(Current, tr1, tr2, ti4_1, ti4_2, loc1);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.has */
EIF_BOOLEAN F889_17194 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
		loc3 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
		loc2 += loc1;
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc1 == loc2)) {
				/* INLINED CODE (SPECIAL.item) */
				tc2 = *((EIF_CHARACTER_8 *)loc3 + (loc1));
				/* END INLINED CODE */
				tc1 = tc2;
				tb1 = (EIF_BOOLEAN)(tc1 == arg1);
			}
			if (tb1) break;
			loc1++;
		}
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 < loc2);
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.starts_with */
EIF_BOOLEAN F889_17195 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 tc3;
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
		loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
		if ((EIF_BOOLEAN) (loc1 <= *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]))) {
			loc4 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
			loc5 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
			loc1 = F889_17211(RTCV(arg1));
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				if ((EIF_BOOLEAN)(loc1 == loc3)) break;
				loc1--;
				loc2--;
				/* INLINED CODE (SPECIAL.item) */
				tc2 = *((EIF_CHARACTER_8 *)loc4 + (loc2));
				/* END INLINED CODE */
				tc1 = tc2;
				/* INLINED CODE (SPECIAL.item) */
				tc3 = *((EIF_CHARACTER_8 *)loc5 + (loc1));
				/* END INLINED CODE */
				tc2 = tc3;
				if ((EIF_BOOLEAN)(tc1 != tc2)) {
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					loc1 = (EIF_INTEGER_32) loc3;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.ends_with */
EIF_BOOLEAN F889_17196 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 tc3;
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
		loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
		loc2 = *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]);
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			loc4 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
			loc5 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
			loc2 = F889_17211(Current);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			loc1 = F889_17211(RTCV(arg1));
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				if ((EIF_BOOLEAN)(loc1 == loc3)) break;
				loc1--;
				loc2--;
				/* INLINED CODE (SPECIAL.item) */
				tc2 = *((EIF_CHARACTER_8 *)loc4 + (loc2));
				/* END INLINED CODE */
				tc1 = tc2;
				/* INLINED CODE (SPECIAL.item) */
				tc3 = *((EIF_CHARACTER_8 *)loc5 + (loc1));
				/* END INLINED CODE */
				tc2 = tc3;
				if ((EIF_BOOLEAN)(tc1 != tc2)) {
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					loc1 = (EIF_INTEGER_32) loc3;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.valid_code */
EIF_BOOLEAN F889_17197 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (arg1 <= tu4_1);
	return Result;
}

/* {READABLE_STRING_8}.copy */
void F889_17199 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		loc1 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
		eif_builtin_ANY_standard_copy (Current, arg1);
		tb1 = '\01';
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
			tb2 = (EIF_BOOLEAN)(loc1 == tr1);
		}
		if (!tb2) {
			ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]));
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]);
			tr1 = F962_18853(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O15184[dtype-888]) = (EIF_REFERENCE) tr1;
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]);
			/* INLINED CODE (SPECIAL.copy_data) */
			memmove((EIF_CHARACTER_8 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)ti4_1);
			RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + ti4_1);
			/* END INLINED CODE */
			;
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + O15184[dtype-888]) = (EIF_REFERENCE) loc1;
		}
		*(EIF_INTEGER_32 *)(Current + O15119[dtype-884]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {READABLE_STRING_8}.fill_character */
void F889_17200 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = F889_17180(Current);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + O15184[dtype-888]);
		F962_18842(RTCV(tr1), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
		*(EIF_INTEGER_32 *)(Current + O15187[dtype-888]) = (EIF_INTEGER_32) loc1;
		*(EIF_INTEGER_32 *)(Current + O15119[dtype-884]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {READABLE_STRING_8}.out */
EIF_REFERENCE F889_17203 (EIF_REFERENCE Current)
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
	F889_17162(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O15187[Dtype(Current)-888]));
	Result = (EIF_REFERENCE) tr1;
	F893_17377(RTCV(Result), Current);
	RTLE;
	return Result;
}

/* {READABLE_STRING_8}.string_searcher */
static EIF_REFERENCE F889_17204_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(4)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(173, 173, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F172_8375(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F889_17204 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(4,F889_17204_body,(Current));
}

/* {READABLE_STRING_8}.str_strict_cmp */
EIF_INTEGER_32 F889_17205 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
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
		tc2 = *((EIF_CHARACTER_8 *)arg1 + (loc1));
		/* END INLINED CODE */
		tc1 = tc2;
		loc4 = (EIF_INTEGER_32) (tc1);
		/* INLINED CODE (SPECIAL.item) */
		tc2 = *((EIF_CHARACTER_8 *)arg2 + (loc2));
		/* END INLINED CODE */
		tc1 = tc2;
		loc5 = (EIF_INTEGER_32) (tc1);
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

/* {READABLE_STRING_8}.to_lower_area */
void F889_17206 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		/* INLINED CODE (SPECIAL.item) */
		tc2 = *((EIF_CHARACTER_8 *)arg1 + (loc1));
		/* END INLINED CODE */
		tc1 = tc2;
		tc1 = (EIF_CHARACTER_8) tolower(tc1);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_CHARACTER_8 *)arg1 + (loc1)) = tc1;
		/* END INLINED CODE */
		;
		loc1++;
	}
	RTLE;
}

/* {READABLE_STRING_8}.to_upper_area */
void F889_17207 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		/* INLINED CODE (SPECIAL.item) */
		tc2 = *((EIF_CHARACTER_8 *)arg1 + (loc1));
		/* END INLINED CODE */
		tc1 = tc2;
		tc1 = (EIF_CHARACTER_8) toupper(tc1);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_CHARACTER_8 *)arg1 + (loc1)) = tc1;
		/* END INLINED CODE */
		;
		loc1++;
	}
	RTLE;
}

/* {READABLE_STRING_8}.area */
EIF_REFERENCE F889_17209 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O15184[Dtype(Current) - 888]);
}


/* {READABLE_STRING_8}.area_lower */
EIF_INTEGER_32 F889_17210 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {READABLE_STRING_8}.area_upper */
EIF_INTEGER_32 F889_17211 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[dtype-888])(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O15187[dtype-888]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

void EIF_Minit351 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

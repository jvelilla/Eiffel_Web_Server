/*
 * Code for class IMMUTABLE_STRING_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "im350.h"
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

/* {IMMUTABLE_STRING_32}.make_from_string_general */
void F888_17140 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(3,loc2);
	RTLR(4,tr1);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(888),loc1);
	if (EIF_TEST(loc1)) {
		F888_17141(Current, loc1);
	} else {
		loc2 = arg1;
		loc2 = RTRV(eif_non_attached_type(886),loc2);
		if (EIF_TEST(loc2)) {
			F888_17142(Current, loc2);
		} else {
			tr1 = F885_17053(RTCV(arg1));
			F888_17142(Current, tr1);
		}
	}
	RTLE;
}

/* {IMMUTABLE_STRING_32}.make_from_string_8 */
void F888_17141 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	{
		static EIF_TYPE_INDEX typarr0[] = {964,826,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	loc1 = (EIF_REFERENCE) tr1;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(arg1)-888])(RTCV(arg1));
	loc2 = *(EIF_REFERENCE *)(RTCV(arg1) + O15184[Dtype(arg1)-888]);
	loc5 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 > loc5)) break;
		tc1 = F962_18823(RTCV(loc2), loc4);
		tw1 = (EIF_CHARACTER_32) tc1;
		F965_18840(RTCV(loc1), tw1);
		loc3++;
		loc4++;
	}
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	F965_18840(RTCV(loc1), tw1);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	F888_17143(Current, loc1, ((EIF_INTEGER_32) 0L), ti4_2);
	RTLE;
}

/* {IMMUTABLE_STRING_32}.make_from_string_32 */
void F888_17142 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) eif_builtin_ANY_same_type (Current, arg1)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(arg1)-886])(RTCV(arg1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
		{
			static EIF_TYPE_INDEX typarr0[] = {964,826,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(arg1)-886])(RTCV(arg1));
		ti4_3 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_32 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)tr1 + ti4_2, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
		/* END INLINED CODE */
		;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) ti4_2;
	RTLE;
}

/* {IMMUTABLE_STRING_32}.make_from_area_and_bounds */
void F888_17143 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg3;
	RTLE;
}

/* {IMMUTABLE_STRING_32}.copy */
void F888_17145 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
	}
	RTLE;
}

/* {IMMUTABLE_STRING_32}.item */
EIF_CHARACTER_32 F888_17146 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	/* INLINED CODE (SPECIAL.item) */
	tw2 = *((EIF_CHARACTER_32 *)tr1 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ti4_1) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tw2;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.code */
EIF_NATURAL_32 F888_17148 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	/* INLINED CODE (SPECIAL.item) */
	tw2 = *((EIF_CHARACTER_32 *)tr1 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ti4_1) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tw1 = tw2;
	Result = (EIF_NATURAL_32) tw1;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.plus */
EIF_REFERENCE F888_17150 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,Result);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	{
		static EIF_TYPE_INDEX typarr0[] = {964,826,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_CHARACTER_32 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)tr1 + ti4_3, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)ti4_4);
	RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + ti4_4);
	/* END INLINED CODE */
	;
	loc7 = arg1;
	loc7 = RTRV(eif_non_attached_type(886),loc7);
	if (EIF_TEST(loc7)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc7) + O15146[Dtype(loc7)-886]);
		ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(loc7)-886])(RTCV(loc7));
		ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		ti4_5 = *(EIF_INTEGER_32 *)(RTCV(loc7) + O15149[Dtype(loc7)-886]);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_32 *)loc1 + (ti4_4),(EIF_CHARACTER_32 *)tr1 + ti4_3, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_5 + ((EIF_INTEGER_32) 1L)));
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ti4_4 + (EIF_INTEGER_32) (ti4_5 + ((EIF_INTEGER_32) 1L)));
		/* END INLINED CODE */
		;
	} else {
		loc8 = arg1;
		loc8 = RTRV(eif_non_attached_type(888),loc8);
		if (EIF_TEST(loc8)) {
			ti4_3 = *(EIF_INTEGER_32 *)(RTCV(loc8) + O15187[Dtype(loc8)-888]);
			{
				static EIF_TYPE_INDEX typarr0[] = {964,826,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(tr1) = 0;
			}
			loc2 = (EIF_REFERENCE) tr1;
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15185[Dtype(loc8)-888])(RTCV(loc8));
			loc3 = *(EIF_REFERENCE *)(RTCV(loc8) + O15184[Dtype(loc8)-888]);
			loc6 = *(EIF_INTEGER_32 *)(RTCV(loc8) + O15187[Dtype(loc8)-888]);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				if ((EIF_BOOLEAN) (loc4 > loc6)) break;
				tc1 = F962_18823(RTCV(loc3), loc5);
				tw1 = (EIF_CHARACTER_32) tc1;
				F965_18840(RTCV(loc2), tw1);
				loc4++;
				loc5++;
			}
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
			F965_18840(RTCV(loc2), tw1);
			ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
			/* INLINED CODE (SPECIAL.copy_data) */
			memmove((EIF_CHARACTER_32 *)loc1 + (ti4_4),(EIF_CHARACTER_32 *)loc2 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 2L)));
			RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ti4_4 + (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 2L)));
			/* END INLINED CODE */
			;
		}
	}
	tr1 = RTLNSMART(dftype);
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	ti4_5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	F888_17143(RTCV(tr1), loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_4 + ti4_5));
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.as_lower */
EIF_REFERENCE F888_17152 (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_CHARACTER_32 tw1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {964,826,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_CHARACTER_32 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)tr1 + ti4_2, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
	RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
	/* END INLINED CODE */
	;
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	F887_17134(Current, loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
	tr1 = RTLNSMART(dftype);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	F888_17143(RTCV(tr1), loc1, ((EIF_INTEGER_32) 0L), ti4_2);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {IMMUTABLE_STRING_32}.as_upper */
EIF_REFERENCE F888_17153 (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_CHARACTER_32 tw1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {964,826,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_CHARACTER_32 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)tr1 + ti4_2, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
	RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
	/* END INLINED CODE */
	;
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	F887_17135(Current, loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
	tr1 = RTLNSMART(dftype);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	F888_17143(RTCV(tr1), loc1, ((EIF_INTEGER_32) 0L), ti4_2);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {IMMUTABLE_STRING_32}.substring */
EIF_REFERENCE F888_17154 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_32 tw1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)))) {
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
		{
			static EIF_TYPE_INDEX typarr0[] = {964,826,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_32 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)tr1 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg1) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)loc2);
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + loc2);
		/* END INLINED CODE */
		;
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		F965_18840(RTCV(loc1), tw1);
		tr1 = RTLNSMART(dftype);
		F888_17143(RTCV(tr1), loc1, ((EIF_INTEGER_32) 0L), loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) RTOUCR(26,F888_17159,(Current));
	}/* NOTREACHED */
	
}

/* {IMMUTABLE_STRING_32}.is_empty */
EIF_BOOLEAN F888_17157 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ((EIF_INTEGER_32) 0L));
}

/* {IMMUTABLE_STRING_32}.new_string */
EIF_REFERENCE F888_17158 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(887, 887, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F887_17089(RTCV(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {IMMUTABLE_STRING_32}.empty_string */
static EIF_REFERENCE F888_17159_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(26)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(887, 887, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F887_17089(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F888_17159 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(26,F888_17159_body,(Current));
}

/* {IMMUTABLE_STRING_32}.area_lower */
EIF_INTEGER_32 F888_17160 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
}


/* {IMMUTABLE_STRING_32}.correct_mismatch */
void F888_17161 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
		tr1 = RTOUCR(2,F625_11836,(Current));
		tr2 = RTMS_EX_H("area",4,1634887009);
		tr1 = F697_13004(RTCV(tr1), tr2);
		loc1 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {964,826,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTRV(eif_non_attached_type(typres0),loc1);
		}
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	}
	RTLE;
}

void EIF_Minit350 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class FUNCTION [G#1, G#2, REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fu955.h"
#include "eif_built_in.h"
#include "eif_rout_obj.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F874_16991
static EIF_REAL_64 inline_F874_16991 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	#ifdef WORKBENCH
	EIF_REAL_64 result;
	if (arg1 != 0) {
		return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
			arg2, arg3, arg4).it_r8;
	} else {
		rout_obj_call_function_dynamic (
			arg5,
			arg6,
			arg7,
			arg3,
			arg8,
			arg4,
			arg9,
			arg10, 
			&result);
		return result;
	}
#else
	return (FUNCTION_CAST(EIF_REAL_64, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
		arg2, arg3, arg4);
#endif
	;
}
#define INLINE_F874_16991
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FUNCTION}.last_result */
EIF_REAL_64 F874_16982 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_4_2_0_3_0_3_0_0_);
}


/* {FUNCTION}.call */
void F874_16983 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tr8_1 = F874_16984(Current, arg1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_4_2_0_3_0_3_0_0_) = (EIF_REAL_64) tr8_1;
	RTLE;
}

/* {FUNCTION}.item */
EIF_REAL_64 F874_16984 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc1 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (loc2);
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_3_0_2_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_3_0_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_1_);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_2_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_);
	RTLE;
	return (EIF_REAL_64) inline_F874_16991(tp1, tp2, *(EIF_REFERENCE *)(Current + _REFACS_1_), arg1, ti4_1, tb1, ti4_2, loc1, ti4_3, *(EIF_REFERENCE *)(Current + _REFACS_2_));
}

/* {FUNCTION}.is_equal */
EIF_BOOLEAN F874_16986 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	Result = '\0';
	if (F867_16948(Current, arg1)) {
		tr8_1 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_4_2_0_3_0_3_0_0_);
		Result = (*(EIF_REAL_64 *)(Current+ _R64OFF_4_2_0_3_0_3_0_0_) == tr8_1);
	}
	RTLE;
	return Result;
}

/* {FUNCTION}.copy */
void F874_16987 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		F867_16955(Current, arg1);
		tr8_1 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_4_2_0_3_0_3_0_0_);
		*(EIF_REAL_64 *)(Current+ _R64OFF_4_2_0_3_0_3_0_0_) = (EIF_REAL_64) tr8_1;
	}
	RTLE;
}

/* {FUNCTION}.fast_item */
EIF_REAL_64 F874_16991 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	
	Result = inline_F874_16991 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32) arg5, (EIF_BOOLEAN) arg6, (EIF_INTEGER_32) arg7, (EIF_INTEGER_32) arg8, (EIF_INTEGER_32) arg9, (EIF_POINTER) arg10);
	return Result;
}

void EIF_Minit955 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class FUNCTION [G#1, G#2, G#3]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fu493.h"
#include "eif_built_in.h"
#include "eif_rout_obj.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F869_16991
static EIF_REFERENCE inline_F869_16991 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	#ifdef WORKBENCH
	EIF_REFERENCE result;
	if (arg1 != 0) {
		return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
			arg2, arg3, arg4).it_r;
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
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
		arg2, arg3, arg4);
#endif
	;
}
#define INLINE_F869_16991
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FUNCTION}.last_result */
EIF_REFERENCE F869_16982 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O15020[Dtype(Current) - 868]);
}


/* {FUNCTION}.call */
void F869_16983 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R15021[dtype-868])(Current, arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O15020[dtype-868]) = (EIF_REFERENCE) RTCCL(tr1);
	RTLE;
}

/* {FUNCTION}.item */
EIF_REFERENCE F869_16984 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTCDT;
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
	tp1 = *(EIF_POINTER *)(Current + O15003[dtype-866]);
	tp2 = *(EIF_POINTER *)(Current + O15001[dtype-866]);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O15004[dtype-866]);
	tb1 = *(EIF_BOOLEAN *)(Current + O15005[dtype-866]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O15006[dtype-866]);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + O14991[dtype-866]);
	RTLE;
	return (EIF_REFERENCE) (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER, EIF_POINTER, EIF_POINTER, EIF_INTEGER_32, EIF_BOOLEAN, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_POINTER)) R15025[dtype-868])(Current, tp1, tp2, *(EIF_REFERENCE *)(Current + _REFACS_1_), arg1, ti4_1, tb1, ti4_2, loc1, ti4_3, *(EIF_REFERENCE *)(Current + _REFACS_2_));
}

/* {FUNCTION}.is_equal */
EIF_BOOLEAN F869_16986 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\0';
	if (F867_16948(Current, arg1)) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R15020[Dtype(arg1)-868])(RTCV(arg1));
		Result = RTEQ(*(EIF_REFERENCE *)(Current + O15020[Dtype(Current)-868]), tr1);
	}
	RTLE;
	return Result;
}

/* {FUNCTION}.copy */
void F869_16987 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		F867_16955(Current, arg1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R15020[Dtype(arg1)-868])(RTCV(arg1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O15020[Dtype(Current)-868]) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTLE;
}

/* {FUNCTION}.fast_item */
EIF_REFERENCE F869_16991 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	
	RTEAA("fast_item", 868, Current, 0, 10, 10228);
	Result = inline_F869_16991 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32) arg5, (EIF_BOOLEAN) arg6, (EIF_INTEGER_32) arg7, (EIF_INTEGER_32) arg8, (EIF_INTEGER_32) arg9, (EIF_POINTER) arg10);
	if (!Result) {
		if (RTAT(eif_final_id(Y15026,Y15026_gen_type,Dftype(Current),868))) {RTEC(EN_FAIL);}
	}
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit493 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

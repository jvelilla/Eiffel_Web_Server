/*
 * Code for class ROUTINE [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ro466.h"
#include "eif_built_in.h"
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

/* {ROUTINE}.operands */
EIF_REFERENCE F867_16941 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ROUTINE}.hash_code */
EIF_INTEGER_32 F867_16943 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O15000[dtype-866]);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O15004[dtype-866]);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	Result = eif_bit_xor(Result,ti4_1);
	RTLE;
	return Result;
}

/* {ROUTINE}.is_equal */
EIF_BOOLEAN F867_16948 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tb5 = '\0';
	tb6 = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	if (RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_1_), tr1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tb6 = RTEQ(*(EIF_REFERENCE *)(Current), tr1);
	}
	if (tb6) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
		tb5 = RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_2_), tr1);
	}
	if (tb5) {
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O15000[Dtype(arg1)-866]);
		tb4 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O15000[dtype-866]) == tp1);
	}
	if (tb4) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15004[Dtype(arg1)-866]);
		tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O15004[dtype-866]) == ti4_1);
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15006[Dtype(arg1)-866]);
		tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O15006[dtype-866]) == ti4_1);
	}
	if (tb2) {
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O15003[Dtype(arg1)-866]);
		tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O15003[dtype-866]) == tp1);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O15001[Dtype(arg1)-866]);
		Result = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O15001[dtype-866]) == tp1);
	}
	RTLE;
	return Result;
}

/* {ROUTINE}.copy */
void F867_16955 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
}

/* {ROUTINE}.closed_operands */
EIF_REFERENCE F867_16960 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ROUTINE}.open_map */
EIF_REFERENCE F867_16964 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ROUTINE}.set_rout_disp */
void F867_16969 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7, EIF_INTEGER_32 arg8, EIF_REFERENCE arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	
	
	F867_16971(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

/* {ROUTINE}.set_rout_disp_final */
void F867_16970 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_REFERENCE arg4, EIF_BOOLEAN arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg4);
	
	RTGC;
	*(EIF_POINTER *)(Current + O15000[dtype-866]) = (EIF_POINTER) arg1;
	*(EIF_POINTER *)(Current + O15003[dtype-866]) = (EIF_POINTER) arg2;
	*(EIF_POINTER *)(Current + O15001[dtype-866]) = (EIF_POINTER) arg3;
	RTAR(Current, arg4);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg4;
	*(EIF_BOOLEAN *)(Current + O14990[dtype-866]) = (EIF_BOOLEAN) arg5;
	*(EIF_INTEGER_32 *)(Current + O14991[dtype-866]) = (EIF_INTEGER_32) arg6;
	RTLE;
}

/* {ROUTINE}.set_rout_disp_int */
void F867_16971 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7, EIF_INTEGER_32 arg8, EIF_REFERENCE arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg5);
	RTLR(2,arg9);
	
	RTGC;
	*(EIF_POINTER *)(Current + O15000[dtype-866]) = (EIF_POINTER) arg1;
	*(EIF_POINTER *)(Current + O15003[dtype-866]) = (EIF_POINTER) arg2;
	*(EIF_POINTER *)(Current + O15001[dtype-866]) = (EIF_POINTER) arg3;
	*(EIF_INTEGER_32 *)(Current + O15004[dtype-866]) = (EIF_INTEGER_32) arg4;
	RTAR(Current, arg5);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg5;
	*(EIF_BOOLEAN *)(Current + O15005[dtype-866]) = (EIF_BOOLEAN) arg6;
	*(EIF_BOOLEAN *)(Current + O14990[dtype-866]) = (EIF_BOOLEAN) arg7;
	*(EIF_INTEGER_32 *)(Current + O15006[dtype-866]) = (EIF_INTEGER_32) arg8;
	RTAR(Current, arg9);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg9;
	*(EIF_INTEGER_32 *)(Current + O14991[dtype-866]) = (EIF_INTEGER_32) arg10;
	RTLE;
}

void EIF_Minit466 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

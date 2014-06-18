/*
 * Code for class NATURAL_64
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na405.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_64}.is_less */
EIF_BOOLEAN F1003_19512 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1002, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	Result = F1001_19457(Current, tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.plus */
EIF_NATURAL_64 F1003_19513 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1002, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	tr1 = F1001_19466(Current, tr1);
	Result = *(EIF_NATURAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.product */
EIF_NATURAL_64 F1003_19515 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1002, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	tr1 = F1001_19468(Current, tr1);
	Result = *(EIF_NATURAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.integer_quotient */
EIF_NATURAL_64 F1003_19518 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1002, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	tr1 = F1001_19472(Current, tr1);
	Result = *(EIF_NATURAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.integer_remainder */
EIF_NATURAL_64 F1003_19519 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1002, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	tr1 = F1001_19473(Current, tr1);
	Result = *(EIF_NATURAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.as_natural_32 */
EIF_NATURAL_32 F1003_19523 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F1001_19480(Current);
}

/* {NATURAL_64}.as_integer_32 */
EIF_INTEGER_32 F1003_19527 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1001_19484(Current);
}

/* {NATURAL_64}.to_character_8 */
EIF_CHARACTER_8 F1003_19531 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F1001_19499(Current);
}

/* {NATURAL_64}.bit_and */
EIF_NATURAL_64 F1003_19533 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1002, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	tr1 = F1001_19501(Current, tr1);
	Result = *(EIF_NATURAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.bit_xor */
EIF_NATURAL_64 F1003_19535 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1002, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	tr1 = F1001_19503(Current, tr1);
	Result = *(EIF_NATURAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.bit_shift_left */
EIF_NATURAL_64 F1003_19537 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_NATURAL_64 *)F1001_19506(Current, arg1);
}

/* {NATURAL_64}.bit_shift_right */
EIF_NATURAL_64 F1003_19538 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_NATURAL_64 *)F1001_19507(Current, arg1);
}

void EIF_Minit405 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

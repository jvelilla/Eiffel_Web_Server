/*
 * Code for class reference NATURAL_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na409.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_32}.is_less */
EIF_BOOLEAN F1005_19602 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	Result = F1004_19547(Current, tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.plus */
EIF_NATURAL_32 F1005_19603 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1004_19556(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.minus */
EIF_NATURAL_32 F1005_19604 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1004_19557(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.product */
EIF_NATURAL_32 F1005_19605 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1004_19558(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.integer_quotient */
EIF_NATURAL_32 F1005_19608 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1004_19562(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.integer_remainder */
EIF_NATURAL_32 F1005_19609 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1004_19563(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.as_natural_8 */
EIF_NATURAL_8 F1005_19611 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) F1004_19568(Current);
}

/* {NATURAL_32}.as_natural_16 */
EIF_NATURAL_16 F1005_19612 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) F1004_19569(Current);
}

/* {NATURAL_32}.as_natural_32 */
EIF_NATURAL_32 F1005_19613 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F1004_19570(Current);
}

/* {NATURAL_32}.as_natural_64 */
EIF_NATURAL_64 F1005_19614 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F1004_19571(Current);
}

/* {NATURAL_32}.as_integer_32 */
EIF_INTEGER_32 F1005_19617 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1004_19574(Current);
}

/* {NATURAL_32}.as_integer_64 */
EIF_INTEGER_64 F1005_19618 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_64) F1004_19575(Current);
}

/* {NATURAL_32}.to_character_8 */
EIF_CHARACTER_8 F1005_19621 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F1004_19589(Current);
}

/* {NATURAL_32}.to_character_32 */
EIF_CHARACTER_32 F1005_19622 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_32) F1004_19590(Current);
}

/* {NATURAL_32}.bit_and */
EIF_NATURAL_32 F1005_19623 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1004_19591(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.bit_or */
EIF_NATURAL_32 F1005_19624 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1004_19592(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.bit_shift_left */
EIF_NATURAL_32 F1005_19627 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_NATURAL_32 *)F1004_19596(Current, arg1);
}

/* {NATURAL_32}.bit_shift_right */
EIF_NATURAL_32 F1005_19628 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_NATURAL_32 *)F1004_19597(Current, arg1);
}

void EIF_Minit409 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

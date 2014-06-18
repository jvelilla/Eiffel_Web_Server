/*
 * Code for class INTEGER_64
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in393.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_64}.is_less */
EIF_BOOLEAN F991_19136 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(990, 990, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	Result = F989_19078(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.plus */
EIF_INTEGER_64 F991_19137 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(990, 990, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F989_19088(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.product */
EIF_INTEGER_64 F991_19139 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(990, 990, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F989_19090(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.opposite */
EIF_INTEGER_64 F991_19142 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_64 *)F989_19093(Current);
}

/* {INTEGER_64}.integer_quotient */
EIF_INTEGER_64 F991_19143 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(990, 990, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F989_19094(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.integer_remainder */
EIF_INTEGER_64 F991_19144 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(990, 990, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F989_19095(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.as_natural_64 */
EIF_NATURAL_64 F991_19149 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F989_19103(Current);
}

/* {INTEGER_64}.as_integer_32 */
EIF_INTEGER_32 F991_19152 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F989_19106(Current);
}

/* {INTEGER_64}.to_character_8 */
EIF_CHARACTER_8 F991_19156 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F989_19122(Current);
}

/* {INTEGER_64}.bit_and */
EIF_INTEGER_64 F991_19158 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(990, 990, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F989_19124(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

void EIF_Minit393 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

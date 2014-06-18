/*
 * Code for class reference INTEGER_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in397.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_32}.is_less */
EIF_BOOLEAN F993_19231 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	Result = F992_19172(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.plus */
EIF_INTEGER_32 F993_19232 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F992_19182(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.minus */
EIF_INTEGER_32 F993_19233 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F992_19183(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.product */
EIF_INTEGER_32 F993_19234 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F992_19184(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.quotient */
EIF_REAL_64 F993_19235 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	Result = F992_19185(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.opposite */
EIF_INTEGER_32 F993_19237 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F992_19187(Current);
}

/* {INTEGER_32}.integer_quotient */
EIF_INTEGER_32 F993_19238 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F992_19188(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.integer_remainder */
EIF_INTEGER_32 F993_19239 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F992_19189(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.power */
EIF_REAL_64 F993_19240 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	return (EIF_REAL_64) F992_19190(Current, arg1);
}

/* {INTEGER_32}.as_natural_8 */
EIF_NATURAL_8 F993_19241 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) F992_19195(Current);
}

/* {INTEGER_32}.as_natural_16 */
EIF_NATURAL_16 F993_19242 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) F992_19196(Current);
}

/* {INTEGER_32}.as_natural_32 */
EIF_NATURAL_32 F993_19243 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F992_19197(Current);
}

/* {INTEGER_32}.as_natural_64 */
EIF_NATURAL_64 F993_19244 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F992_19198(Current);
}

/* {INTEGER_32}.as_integer_8 */
EIF_INTEGER_8 F993_19245 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_8) F992_19199(Current);
}

/* {INTEGER_32}.as_integer_16 */
EIF_INTEGER_16 F993_19246 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_16) F992_19200(Current);
}

/* {INTEGER_32}.as_integer_64 */
EIF_INTEGER_64 F993_19248 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_64) F992_19202(Current);
}

/* {INTEGER_32}.to_double */
EIF_REAL_64 F993_19250 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_64) F992_19213(Current);
}

/* {INTEGER_32}.to_character_8 */
EIF_CHARACTER_8 F993_19251 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F992_19217(Current);
}

/* {INTEGER_32}.to_character_32 */
EIF_CHARACTER_32 F993_19252 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_32) F992_19218(Current);
}

/* {INTEGER_32}.bit_and */
EIF_INTEGER_32 F993_19253 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F992_19219(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.bit_or */
EIF_INTEGER_32 F993_19254 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F992_19220(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.bit_xor */
EIF_INTEGER_32 F993_19255 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F992_19221(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.bit_not */
EIF_INTEGER_32 F993_19256 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F992_19222(Current);
}

/* {INTEGER_32}.bit_shift_left */
EIF_INTEGER_32 F993_19257 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F992_19224(Current, arg1);
}

/* {INTEGER_32}.bit_shift_right */
EIF_INTEGER_32 F993_19258 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F992_19225(Current, arg1);
}

void EIF_Minit397 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

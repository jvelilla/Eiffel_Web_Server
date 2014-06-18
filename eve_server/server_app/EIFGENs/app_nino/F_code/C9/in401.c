/*
 * Code for class INTEGER_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in401.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_8_REF}.hash_code */
EIF_INTEGER_32 F998_19355 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_INTEGER_32) ti1_1;
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.is_less */
EIF_BOOLEAN F998_19362 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	ti1_2 = *(EIF_INTEGER_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti1_1 < ti1_2);
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.is_equal */
EIF_BOOLEAN F998_19363 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	ti1_2 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti1_1 == ti1_2);
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.set_item */
void F998_19364 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_) = (EIF_INTEGER_8) arg1;
}

/* {INTEGER_8_REF}.plus */
EIF_REFERENCE F998_19372 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	ti1_2 = *(EIF_INTEGER_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	F998_19364(RTCV(Result), (EIF_INTEGER_8) (ti1_1 + ti1_2));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.opposite */
EIF_REFERENCE F998_19377 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	F998_19364(RTCV(Result), (EIF_INTEGER_8) -*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.integer_quotient */
EIF_REFERENCE F998_19378 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	ti1_2 = *(EIF_INTEGER_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	F998_19364(RTCV(Result), (EIF_INTEGER_8) (ti1_1 / ti1_2));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.integer_remainder */
EIF_REFERENCE F998_19379 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	ti1_2 = *(EIF_INTEGER_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	F998_19364(RTCV(Result), (EIF_INTEGER_8) (ti1_1 % ti1_2));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.as_natural_64 */
EIF_NATURAL_64 F998_19388 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_NATURAL_64) ti1_1;
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.as_integer_32 */
EIF_INTEGER_32 F998_19391 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_INTEGER_32) ti1_1;
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.to_natural_64 */
EIF_NATURAL_64 F998_19396 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R16952[Dtype(Current)-997])(Current);
}

/* {INTEGER_8_REF}.to_integer */
EIF_INTEGER_32 F998_19399 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16955[Dtype(Current)-997])(Current);
}

/* {INTEGER_8_REF}.to_integer_32 */
EIF_INTEGER_32 F998_19400 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16955[Dtype(Current)-997])(Current);
}

/* {INTEGER_8_REF}.to_character_8 */
EIF_CHARACTER_8 F998_19407 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_8) ti1_1;
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.out */
EIF_REFERENCE F998_19419 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 4L));
	Result = (EIF_REFERENCE) tr1;
	F893_17382(RTCV(Result), *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit401 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

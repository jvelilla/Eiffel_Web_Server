/*
 * Code for class INTEGER_16_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in398.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_16_REF}.hash_code */
EIF_INTEGER_32 F995_19260 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_INTEGER_32) ti2_1;
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	RTLE;
	return Result;
}

/* {INTEGER_16_REF}.is_less */
EIF_BOOLEAN F995_19267 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti2_1 < ti2_2);
	RTLE;
	return Result;
}

/* {INTEGER_16_REF}.is_equal */
EIF_BOOLEAN F995_19268 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti2_1 = *(EIF_INTEGER_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti2_1 == ti2_2);
	RTLE;
	return Result;
}

/* {INTEGER_16_REF}.set_item */
void F995_19269 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_) = (EIF_INTEGER_16) arg1;
}

/* {INTEGER_16_REF}.plus */
EIF_REFERENCE F995_19277 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	F995_19269(RTCV(Result), (EIF_INTEGER_16) (ti2_1 + ti2_2));
	RTLE;
	return Result;
}

/* {INTEGER_16_REF}.opposite */
EIF_REFERENCE F995_19282 (EIF_REFERENCE Current)
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
	F995_19269(RTCV(Result), (EIF_INTEGER_16) -*(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_));
	RTLE;
	return Result;
}

/* {INTEGER_16_REF}.integer_quotient */
EIF_REFERENCE F995_19283 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	F995_19269(RTCV(Result), (EIF_INTEGER_16) (ti2_1 / ti2_2));
	RTLE;
	return Result;
}

/* {INTEGER_16_REF}.integer_remainder */
EIF_REFERENCE F995_19284 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
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
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_2 = *(EIF_INTEGER_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	F995_19269(RTCV(Result), (EIF_INTEGER_16) (ti2_1 % ti2_2));
	RTLE;
	return Result;
}

/* {INTEGER_16_REF}.as_natural_64 */
EIF_NATURAL_64 F995_19293 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_NATURAL_64) ti2_1;
	RTLE;
	return Result;
}

/* {INTEGER_16_REF}.as_integer_32 */
EIF_INTEGER_32 F995_19296 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_INTEGER_32) ti2_1;
	RTLE;
	return Result;
}

/* {INTEGER_16_REF}.to_natural_64 */
EIF_NATURAL_64 F995_19301 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R16900[Dtype(Current)-994])(Current);
}

/* {INTEGER_16_REF}.to_integer */
EIF_INTEGER_32 F995_19303 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16903[Dtype(Current)-994])(Current);
}

/* {INTEGER_16_REF}.to_integer_32 */
EIF_INTEGER_32 F995_19304 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16903[Dtype(Current)-994])(Current);
}

/* {INTEGER_16_REF}.to_character_8 */
EIF_CHARACTER_8 F995_19312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_16 ti2_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_CHARACTER_8) ti2_1;
	RTLE;
	return Result;
}

/* {INTEGER_16_REF}.out */
EIF_REFERENCE F995_19324 (EIF_REFERENCE Current)
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
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 6L));
	Result = (EIF_REFERENCE) tr1;
	F893_17383(RTCV(Result), *(EIF_INTEGER_16 *)(Current+ _I16OFF_0_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit398 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class NATURAL_16_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na410.h"
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

/* {NATURAL_16_REF}.hash_code */
EIF_INTEGER_32 F1007_19630 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_INTEGER_32) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.is_less */
EIF_BOOLEAN F1007_19637 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu2_1 < tu2_2);
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.is_equal */
EIF_BOOLEAN F1007_19638 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_1 == tu2_2);
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.set_item */
void F1007_19639 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) = (EIF_NATURAL_16) arg1;
}

/* {NATURAL_16_REF}.plus */
EIF_REFERENCE F1007_19646 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
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
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	F1007_19639(RTCV(Result), (EIF_NATURAL_16) (tu2_1 + tu2_2));
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.integer_quotient */
EIF_REFERENCE F1007_19652 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
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
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	F1007_19639(RTCV(Result), (EIF_NATURAL_16) (tu2_1 / tu2_2));
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.integer_remainder */
EIF_REFERENCE F1007_19653 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
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
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	F1007_19639(RTCV(Result), (EIF_NATURAL_16) (tu2_1 % tu2_2));
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.as_natural_8 */
EIF_NATURAL_8 F1007_19659 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_NATURAL_8) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.as_natural_16 */
EIF_NATURAL_16 F1007_19660 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_NATURAL_16) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.as_natural_32 */
EIF_NATURAL_32 F1007_19661 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_NATURAL_32) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.as_natural_64 */
EIF_NATURAL_64 F1007_19662 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_NATURAL_64) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.as_integer_32 */
EIF_INTEGER_32 F1007_19665 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_INTEGER_32) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.to_natural_32 */
EIF_NATURAL_32 F1007_19669 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R17098[Dtype(Current)-1006])(Current);
}

/* {NATURAL_16_REF}.to_natural_64 */
EIF_NATURAL_64 F1007_19670 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R17099[Dtype(Current)-1006])(Current);
}

/* {NATURAL_16_REF}.to_integer_32 */
EIF_INTEGER_32 F1007_19673 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R17102[Dtype(Current)-1006])(Current);
}

/* {NATURAL_16_REF}.to_hex_string */
EIF_REFERENCE F1007_19677 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(535, 535, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = ((EIF_INTEGER_32) 16L);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 / ((EIF_INTEGER_32) 4L));
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	F893_17356(RTCV(Result));
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	loc2 = (EIF_INTEGER_32) tu2_1;
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		loc3 = eif_bit_and(loc2,((EIF_INTEGER_32) 15L));
		loc3 = (EIF_INTEGER_32) loc3;
		tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = loc3;
		
		tc1 = F992_19215(RTCV(tr1));
		F893_17364(RTCV(Result), tc1, loc1);
		loc2 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 4L));
		loc1--;
	}
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.to_character_8 */
EIF_CHARACTER_8 F1007_19680 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_CHARACTER_8) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.to_character_32 */
EIF_CHARACTER_32 F1007_19681 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_CHARACTER_32) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.bit_and */
EIF_REFERENCE F1007_19682 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
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
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	tu2_1 = eif_bit_and(tu2_1,tu2_2);
	F1007_19639(RTCV(Result), tu2_1);
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.bit_or */
EIF_REFERENCE F1007_19683 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
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
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
	tu2_1 = eif_bit_or(tu2_1,tu2_2);
	F1007_19639(RTCV(Result), tu2_1);
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.bit_shift_left */
EIF_REFERENCE F1007_19687 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
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
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_1 = eif_bit_shift_left(tu2_1,arg1);
	F1007_19639(RTCV(Result), tu2_1);
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.bit_shift_right */
EIF_REFERENCE F1007_19688 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
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
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_1 = eif_bit_shift_right(tu2_1,arg1);
	F1007_19639(RTCV(Result), tu2_1);
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.out */
EIF_REFERENCE F1007_19692 (EIF_REFERENCE Current)
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
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 5L));
	Result = (EIF_REFERENCE) tr1;
	F893_17386(RTCV(Result), *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit410 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

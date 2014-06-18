/*
 * Code for class NATURAL_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na419.h"
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

/* {NATURAL_8_REF}.hash_code */
EIF_INTEGER_32 F1016_19839 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_INTEGER_32) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.is_less */
EIF_BOOLEAN F1016_19846 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tu1_2 = *(EIF_NATURAL_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 < tu1_2);
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.is_equal */
EIF_BOOLEAN F1016_19847 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	tu1_2 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.set_item */
void F1016_19848 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_) = (EIF_NATURAL_8) arg1;
}

/* {NATURAL_8_REF}.plus */
EIF_REFERENCE F1016_19855 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
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
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tu1_2 = *(EIF_NATURAL_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	F1016_19848(RTCV(Result), (EIF_NATURAL_8) (tu1_1 + tu1_2));
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.integer_quotient */
EIF_REFERENCE F1016_19861 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
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
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tu1_2 = *(EIF_NATURAL_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	F1016_19848(RTCV(Result), (EIF_NATURAL_8) (tu1_1 / tu1_2));
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.integer_remainder */
EIF_REFERENCE F1016_19862 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
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
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tu1_2 = *(EIF_NATURAL_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	F1016_19848(RTCV(Result), (EIF_NATURAL_8) (tu1_1 % tu1_2));
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.as_natural_16 */
EIF_NATURAL_16 F1016_19869 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_NATURAL_16) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.as_natural_32 */
EIF_NATURAL_32 F1016_19870 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_NATURAL_32) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.as_natural_64 */
EIF_NATURAL_64 F1016_19871 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_NATURAL_64) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.as_integer_32 */
EIF_INTEGER_32 F1016_19874 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_INTEGER_32) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.to_natural_16 */
EIF_NATURAL_16 F1016_19877 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) (FUNCTION_CAST(EIF_NATURAL_16, (EIF_REFERENCE)) R17200[Dtype(Current)-1015])(Current);
}

/* {NATURAL_8_REF}.to_natural_32 */
EIF_NATURAL_32 F1016_19878 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R17201[Dtype(Current)-1015])(Current);
}

/* {NATURAL_8_REF}.to_natural_64 */
EIF_NATURAL_64 F1016_19879 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R17202[Dtype(Current)-1015])(Current);
}

/* {NATURAL_8_REF}.to_integer_32 */
EIF_INTEGER_32 F1016_19882 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R17205[Dtype(Current)-1015])(Current);
}

/* {NATURAL_8_REF}.to_hex_string */
EIF_REFERENCE F1016_19886 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	F893_17356(RTCV(Result));
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	loc2 = (EIF_INTEGER_32) tu1_1;
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

/* {NATURAL_8_REF}.to_character_8 */
EIF_CHARACTER_8 F1016_19889 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_8) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.to_character_32 */
EIF_CHARACTER_32 F1016_19890 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_32) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.bit_and */
EIF_REFERENCE F1016_19891 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
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
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tu1_2 = *(EIF_NATURAL_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	F1016_19848(RTCV(Result), tu1_1);
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.bit_or */
EIF_REFERENCE F1016_19892 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
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
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tu1_2 = *(EIF_NATURAL_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	tu1_1 = eif_bit_or(tu1_1,tu1_2);
	F1016_19848(RTCV(Result), tu1_1);
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.out */
EIF_REFERENCE F1016_19901 (EIF_REFERENCE Current)
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
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 3L));
	Result = (EIF_REFERENCE) tr1;
	F893_17385(RTCV(Result), *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit419 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class UUID
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uu333.h"
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

/* {UUID}.make_from_array */
void F823_16613 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc3 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 1L));
	loc2 = (EIF_NATURAL_32) tu1_1;
	loc2 = eif_bit_shift_left(loc2,((EIF_INTEGER_32) 8L));
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 2L));
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	loc2 += tu4_1;
	loc2 = eif_bit_shift_left(loc2,((EIF_INTEGER_32) 8L));
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 3L));
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	loc2 += tu4_1;
	loc2 = eif_bit_shift_left(loc2,((EIF_INTEGER_32) 8L));
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 4L));
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	loc2 += tu4_1;
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_3_0_) = (EIF_NATURAL_32) loc2;
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 5L));
	loc1 = (EIF_NATURAL_16) tu1_1;
	loc1 = eif_bit_shift_left(loc1,((EIF_INTEGER_32) 8L));
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 6L));
	tu2_1 = (EIF_NATURAL_16) tu1_1;
	loc1 += tu2_1;
	*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) = (EIF_NATURAL_16) loc1;
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 7L));
	loc1 = (EIF_NATURAL_16) tu1_1;
	loc1 = eif_bit_shift_left(loc1,((EIF_INTEGER_32) 8L));
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 8L));
	tu2_1 = (EIF_NATURAL_16) tu1_1;
	loc1 += tu2_1;
	*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_1_) = (EIF_NATURAL_16) loc1;
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 9L));
	loc1 = (EIF_NATURAL_16) tu1_1;
	loc1 = eif_bit_shift_left(loc1,((EIF_INTEGER_32) 8L));
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 10L));
	tu2_1 = (EIF_NATURAL_16) tu1_1;
	loc1 += tu2_1;
	*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_2_) = (EIF_NATURAL_16) loc1;
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 11L));
	loc3 = (EIF_NATURAL_64) tu1_1;
	loc3 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 8L));
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 12L));
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	loc3 += tu8_1;
	loc3 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 8L));
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 13L));
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	loc3 += tu8_1;
	loc3 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 8L));
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 14L));
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	loc3 += tu8_1;
	loc3 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 8L));
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 15L));
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	loc3 += tu8_1;
	loc3 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 8L));
	tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 16L));
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	loc3 += tu8_1;
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_3_1_0_0_0_) = (EIF_NATURAL_64) loc3;
	RTLE;
}

/* {UUID}.hash_code */
EIF_INTEGER_32 F823_16619 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_3_1_0_0_0_);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu8_1)));
	RTLE;
	return Result;
}

/* {UUID}.is_less */
EIF_BOOLEAN F823_16622 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_3_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCV(arg1)+ _LNGOFF_0_0_3_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	tu4_1 = *(EIF_NATURAL_32 *)(RTCV(arg1)+ _LNGOFF_0_0_3_0_);
	if ((EIF_BOOLEAN)(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_3_0_) == tu4_1)) {
		tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
		tu2_2 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu2_1 < tu2_2);
		tu2_1 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) == tu2_1)) {
			tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_1_);
			tu2_2 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_1_);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu2_1 < tu2_2);
			tu2_1 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_1_);
			if ((EIF_BOOLEAN)(*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_1_) == tu2_1)) {
				tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_2_);
				tu2_2 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_2_);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu2_1 < tu2_2);
				tu2_1 = *(EIF_NATURAL_16 *)(RTCV(arg1)+ _I16OFF_0_0_2_);
				if ((EIF_BOOLEAN)(*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_2_) == tu2_1)) {
					tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_3_1_0_0_0_);
					tu8_2 = *(EIF_NATURAL_64 *)(RTCV(arg1)+ _I64OFF_0_0_3_1_0_0_0_);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu8_1 < tu8_2);
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {UUID}.out */
EIF_REFERENCE F823_16624 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 37L));
	Result = (EIF_REFERENCE) tr1;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_3_0_);
	tr1 = RTLNS(1005, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = tu4_1;
	
	tr1 = F1004_19586(RTCV(tr1));
	F893_17376(RTCV(Result), tr1);
	F893_17391(RTCV(Result), (EIF_CHARACTER_8) '-');
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tr1 = RTLNS(1008, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = tu2_1;
	
	tr1 = F1007_19677(RTCV(tr1));
	F893_17376(RTCV(Result), tr1);
	F893_17391(RTCV(Result), (EIF_CHARACTER_8) '-');
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_1_);
	tr1 = RTLNS(1008, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = tu2_1;
	
	tr1 = F1007_19677(RTCV(tr1));
	F893_17376(RTCV(Result), tr1);
	F893_17391(RTCV(Result), (EIF_CHARACTER_8) '-');
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_2_);
	tr1 = RTLNS(1008, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = tu2_1;
	
	tr1 = F1007_19677(RTCV(tr1));
	F893_17376(RTCV(Result), tr1);
	F893_17391(RTCV(Result), (EIF_CHARACTER_8) '-');
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_3_1_0_0_0_);
	tr1 = RTLNS(1002, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = tu8_1;
	
	tr1 = F1001_19496(RTCV(tr1));
	tr1 = F893_17423(RTCV(tr1), ((EIF_INTEGER_32) 5L), ((EIF_INTEGER_32) 16L));
	F893_17376(RTCV(Result), tr1);
	RTLE;
	return Result;
}

void EIF_Minit333 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

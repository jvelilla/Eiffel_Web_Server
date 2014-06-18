/*
 * Code for class DATE_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da287.h"
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

/* {DATE_VALUE}.day */
EIF_INTEGER_32 F629_11923 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O11063[Dtype(Current)-628]);
	Result = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
	RTLE;
	return Result;
}

/* {DATE_VALUE}.month */
EIF_INTEGER_32 F629_11924 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O11063[Dtype(Current)-628]);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 65280L));
	Result = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 8L));
	RTLE;
	return Result;
}

/* {DATE_VALUE}.year */
EIF_INTEGER_32 F629_11925 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O11063[Dtype(Current)-628]);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) -65536L));
	ti4_1 = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 16L));
	Result = eif_bit_and((ti4_1),((EIF_INTEGER_32) 65535L));
	RTLE;
	return Result;
}

/* {DATE_VALUE}.set_date */
void F629_11928 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) 255L));
	loc1 = eif_bit_and(loc1,ti4_1);
	loc1 = eif_bit_or(loc1,arg3);
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) 65280L));
	loc1 = eif_bit_and(loc1,ti4_1);
	ti4_1 = eif_bit_shift_left(arg2,((EIF_INTEGER_32) 8L));
	loc1 = eif_bit_or(loc1,ti4_1);
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) -65536L));
	loc1 = eif_bit_and(loc1,ti4_1);
	ti4_1 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 16L));
	loc1 = eif_bit_or(loc1,ti4_1);
	*(EIF_INTEGER_32 *)(Current + O11063[Dtype(Current)-628]) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {DATE_VALUE}.set_day */
void F629_11929 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O11063[dtype-628]);
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) 255L));
	loc1 = eif_bit_and(loc1,ti4_1);
	loc1 = eif_bit_or(loc1,arg1);
	*(EIF_INTEGER_32 *)(Current + O11063[dtype-628]) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {DATE_VALUE}.set_month */
void F629_11930 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O11063[dtype-628]);
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) 65280L));
	loc1 = eif_bit_and(loc1,ti4_1);
	ti4_1 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 8L));
	loc1 = eif_bit_or(loc1,ti4_1);
	*(EIF_INTEGER_32 *)(Current + O11063[dtype-628]) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {DATE_VALUE}.set_year */
void F629_11931 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O11063[dtype-628]);
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) -65536L));
	loc1 = eif_bit_and(loc1,ti4_1);
	ti4_1 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 16L));
	loc1 = eif_bit_or(loc1,ti4_1);
	*(EIF_INTEGER_32 *)(Current + O11063[dtype-628]) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {DATE_VALUE}.correct_mismatch */
void F629_11934 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = RTOUCR(2,F625_11836,(Current));
	tr2 = RTOUCR(217,F629_11941,(Current));
	tr1 = F697_13004(RTCV(tr1), tr2);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_non_attached_type(991),loc1);
	if (EIF_TEST(loc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_0_0_0_0_);
		F629_11942(Current, ti4_1);
	} else {
		F625_11835(Current);
	}
	RTLE;
}

/* {DATE_VALUE}.compact_date_attribute_name */

EIF_REFERENCE F629_11941 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (217,RTMS_EX_H("compact_date",12,1114629989));
}

/* {DATE_VALUE}.set_private_internal_compact_date */
void F629_11942 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = eif_bit_and(arg1,((EIF_INTEGER_32) 65535L));
	ti4_2 = eif_bit_and(arg1,((EIF_INTEGER_32) 16711680L));
	ti4_2 = eif_bit_shift_right((ti4_2),((EIF_INTEGER_32) 16L));
	ti4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4278190080));
	ti4_3 = eif_bit_and(arg1,ti4_3);
	ti4_3 = eif_bit_shift_right((ti4_3),((EIF_INTEGER_32) 24L));
	ti4_3 = eif_bit_and((ti4_3),((EIF_INTEGER_32) 255L));
	F629_11928(Current, ti4_1, ti4_2, ti4_3);
	RTLE;
}

void EIF_Minit287 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

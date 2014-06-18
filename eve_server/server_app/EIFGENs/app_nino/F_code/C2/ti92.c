/*
 * Code for class TIME_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti92.h"
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

/* {TIME_VALUE}.hour */
EIF_INTEGER_32 F137_7801 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O7659[Dtype(Current)-136]);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 16711680L));
	Result = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 16L));
	RTLE;
	return Result;
}

/* {TIME_VALUE}.minute */
EIF_INTEGER_32 F137_7802 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O7659[Dtype(Current)-136]);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 65280L));
	Result = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 8L));
	RTLE;
	return Result;
}

/* {TIME_VALUE}.second */
EIF_INTEGER_32 F137_7803 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O7659[Dtype(Current)-136]);
	Result = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
	RTLE;
	return Result;
}

/* {TIME_VALUE}.fine_second */
EIF_REAL_64 F137_7806 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R7651[dtype-136])(Current);
	Result = (EIF_REAL_64) (ti4_1);
	tr8_1 = *(EIF_REAL_64 *)(Current + O7658[dtype-136]);
	Result = (EIF_REAL_64) (EIF_REAL_64) (Result + tr8_1);
	RTLE;
	return Result;
}

/* {TIME_VALUE}.set_hour */
void F137_7810 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O7659[dtype-136]);
	ti4_2 = eif_bit_not(((EIF_INTEGER_32) 16711680L));
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O7659[dtype-136]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O7659[dtype-136]);
	ti4_2 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 16L));
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O7659[dtype-136]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {TIME_VALUE}.set_minute */
void F137_7811 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O7659[dtype-136]);
	ti4_2 = eif_bit_not(((EIF_INTEGER_32) 65280L));
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O7659[dtype-136]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O7659[dtype-136]);
	ti4_2 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O7659[dtype-136]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {TIME_VALUE}.set_second */
void F137_7812 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O7659[dtype-136]);
	ti4_2 = eif_bit_not(((EIF_INTEGER_32) 255L));
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O7659[dtype-136]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O7659[dtype-136]);
	ti4_1 = eif_bit_or(ti4_1,arg1);
	*(EIF_INTEGER_32 *)(Current + O7659[dtype-136]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {TIME_VALUE}.set_fine_second */
void F137_7813 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg1;
	F137_7812(Current, loc1);
	tr8_1 = (EIF_REAL_64) (loc1);
	*(EIF_REAL_64 *)(Current + O7658[Dtype(Current)-136]) = (EIF_REAL_64) (EIF_REAL_64) (arg1 - tr8_1);
	RTLE;
}

void EIF_Minit92 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

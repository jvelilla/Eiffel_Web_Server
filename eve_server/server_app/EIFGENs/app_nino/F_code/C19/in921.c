/*
 * Code for class INDEXABLE_ITERATION_CURSOR [CHARACTER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in921.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INDEXABLE_ITERATION_CURSOR}.make */
void F663_12188 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(14),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(RTCV(loc1)+ _LNGOFF_0_0_0_0_);
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_NATURAL_32) tu4_1;
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_NATURAL_32) tu4_1;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.item */
EIF_CHARACTER_32 F663_12189 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_CHARACTER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(tr1)-696])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)));
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.new_cursor */
EIF_REFERENCE F663_12195 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	F663_12208(RTCV(Result));
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F663_12201 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) !F663_12203(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R11345[Dtype(tr1)-696])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.is_valid */
EIF_BOOLEAN F663_12203 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_non_attached_type(14),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(RTCV(loc1)+ _LNGOFF_0_0_0_0_);
		Result = (EIF_BOOLEAN)(tu4_1 == *(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_1_0_0_));
	}
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.start */
void F663_12208 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F663_12211(Current);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		ti4_1 = F721_12259(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F721_12257(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F721_12259(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F721_12257(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ti4_1;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.forth */
void F663_12209 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)) -= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
	} else {
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)) += *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
	}
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F663_12210 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {INDEXABLE_ITERATION_CURSOR}.index_set */
EIF_REFERENCE F663_12211 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11344[Dtype(tr1)-696])(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit921 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

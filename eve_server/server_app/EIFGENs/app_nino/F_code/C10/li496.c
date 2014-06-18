/*
 * Code for class LINKED_QUEUE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li496.h"
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

/* {LINKED_QUEUE}.make */
void F801_12868 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {LINKED_QUEUE}.item */
EIF_REFERENCE F801_12869 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc1)-120])(RTCV(loc1));
	RTLE;
	return Result;
}

/* {LINKED_QUEUE}.extend */
void F801_12871 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTCCL(arg1);
	F797_12813(Current, tr1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {LINKED_QUEUE}.force */
void F801_12872 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTCCL(arg1);
	F797_12813(Current, tr1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {LINKED_QUEUE}.linear_representation */
EIF_REFERENCE F801_12873 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {802,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,dftype,238);
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11507[Dtype(tr1)-802])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_));
	loc1 = (EIF_REFERENCE) tr1;
	F797_12806(Current);
	for (;;) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) break;
		tr1 = F797_12789(Current);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(loc1)-459])(RTCV(loc1), tr2);
		F797_12808(Current);
	}
	{
		EIF_TYPE_INDEX typarr0[] = {802,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,dftype,238);
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11507[Dtype(tr1)-802])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_));
	Result = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9303[Dtype(loc1)-736])(RTCV(loc1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9385[Dtype(loc1)-601])(RTCV(loc1));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(loc1)-459])(RTCV(loc1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9386[Dtype(loc1)-601])(RTCV(loc1));
	}
	RTLE;
	return Result;
}

/* {LINKED_QUEUE}.copy */
void F801_12875 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tb1 = F316_9603(RTCV(arg1));
		if ((EIF_BOOLEAN) !tb1) {
			F797_12832(Current);
			tr1 = F797_12793(RTCV(arg1));
			loc2 = tr1;
			loc2 = RTRV(eif_non_attached_type(eif_final_id(Y9248,Y9248_gen_type,dftype,439)),loc2);
			if (EIF_TEST(loc2)) {
				loc1 = (EIF_REFERENCE) loc2;
			}
			F797_12806(RTCV(arg1));
			for (;;) {
				tb1 = F797_12800(RTCV(arg1));
				if (tb1) break;
				tr1 = F797_12789(RTCV(arg1));
				tr2 = RTCCL(tr1);
				F797_12814(Current, tr2);
				F797_12808(Current);
				F797_12808(RTCV(arg1));
			}
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				F797_12812(RTCV(arg1), loc1);
			}
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

void EIF_Minit496 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

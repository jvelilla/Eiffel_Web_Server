/*
 * Code for class ARRAYED_STACK [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar625.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAYED_STACK}.extend */
void F819_12709 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F806_12672(Current, arg1);
	F806_12663(Current);
	RTLE;
}

/* {ARRAYED_STACK}.remove */
void F819_12712 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F806_12684(Current);
	F806_12663(Current);
	RTLE;
}

/* {ARRAYED_STACK}.linear_representation */
EIF_REFERENCE F819_12713 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {805,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,Dftype(Current),238);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 805, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F806_12653(Current);
	F806_12632(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	loc1 = F806_12653(Current);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 1L))) break;
		tb1 = F806_12637(Current, loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), (EIF_REFERENCE) &tb1);
		loc1--;
	}
	RTLE;
	return Result;
}

void EIF_Minit625 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

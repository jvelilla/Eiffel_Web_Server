/*
 * Code for class TO_SPECIAL [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "to480.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TO_SPECIAL}.area */
EIF_REFERENCE F546_11156 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10387[Dtype(Current) - 545]);
}


/* {TO_SPECIAL}.make_empty_area */
void F546_11157 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y10387,Y10387_gen_type,Dftype(Current),545)),EO_REF,arg1,sizeof(EIF_REFERENCE), EIF_FALSE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O10387[Dtype(Current)-545]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {TO_SPECIAL}.make_filled_area */
void F546_11158 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr2 = RTCCL(arg1);
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y10387,Y10387_gen_type,Dftype(Current),545)),EO_REF,arg2,sizeof(EIF_REFERENCE), EIF_FALSE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R16608[Dtype(tr1)-953])(RTCV(tr1), tr2, arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O10387[Dtype(Current)-545]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {TO_SPECIAL}.set_area */
void F546_11163 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O10387[Dtype(Current)-545]) = (EIF_REFERENCE) arg1;
}

void EIF_Minit480 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

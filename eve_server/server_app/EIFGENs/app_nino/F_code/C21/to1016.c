/*
 * Code for class TO_SPECIAL [REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "to1016.h"

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
EIF_REFERENCE F559_11156 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {TO_SPECIAL}.make_empty_area */
void F559_11157 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y10387,Y10387_gen_type,Dftype(Current),545)),0,arg1,sizeof(EIF_REAL_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {TO_SPECIAL}.make_filled_area */
void F559_11158 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y10387,Y10387_gen_type,Dftype(Current),545)),0,arg2,sizeof(EIF_REAL_32), EIF_TRUE);
	F967_18821(RTCV(tr1), arg1, arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {TO_SPECIAL}.set_area */
void F559_11163 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

void EIF_Minit1016 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

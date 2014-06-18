/*
 * Code for class INTERACTIVE_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in495.h"
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

/* {INTERACTIVE_LIST}.default_create */
void F820_12722 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F803_12632(Current, ((EIF_INTEGER_32) 4L));
}

/* {INTERACTIVE_LIST}.on_item_added_at */
void F820_12724 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {INTERACTIVE_LIST}.on_item_removed_at */
void F820_12725 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {INTERACTIVE_LIST}.extend */
void F820_12727 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O11533[dtype-819]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F803_12672(Current, tr1);
	*(EIF_BOOLEAN *)(Current + O11533[dtype-819]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(arg1);
	ti4_1 = F803_12653(Current);
	F820_12742(Current, tr1, ti4_1);
	RTLE;
}

/* {INTERACTIVE_LIST}.append */
void F820_12728 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = F803_12653(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[Dtype(arg1)-601])(RTCV(arg1));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
	if ((EIF_BOOLEAN) (loc1 > F803_12654(Current))) {
		F803_12679(Current, loc1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(arg1)-459])(RTCV(arg1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[Dtype(arg1)-459])(RTCV(arg1));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(arg1)-459])(RTCV(arg1));
		tr2 = RTCCL(tr1);
		F820_12727(Current, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(arg1)-459])(RTCV(arg1));
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.put_i_th */
void F820_12731 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = F803_12637(Current, arg2);
	*(EIF_BOOLEAN *)(Current + O11533[dtype-819]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F803_12670(Current, tr1, arg2);
	*(EIF_BOOLEAN *)(Current + O11533[dtype-819]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = RTCCL(loc1);
		F820_12743(Current, tr1, arg2);
	}
	tr1 = RTCCL(arg1);
	F820_12742(Current, tr1, arg2);
	RTLE;
}

/* {INTERACTIVE_LIST}.replace */
void F820_12732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O11521[dtype-802]);
	loc2 = F803_12636(Current);
	*(EIF_BOOLEAN *)(Current + O11533[dtype-819]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F803_12675(Current, tr1);
	*(EIF_BOOLEAN *)(Current + O11533[dtype-819]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(loc2);
	F820_12743(Current, tr1, loc1);
	tr1 = RTCCL(arg1);
	F820_12742(Current, tr1, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.remove */
void F820_12733 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O11521[dtype-802]);
	loc2 = F803_12636(Current);
	*(EIF_BOOLEAN *)(Current + O11533[dtype-819]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F803_12684(Current);
	*(EIF_BOOLEAN *)(Current + O11533[dtype-819]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(loc2);
	F820_12743(Current, tr1, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.prune_all */
void F820_12737 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc6);
	RTLR(5,arg1);
	
	RTGC;
	loc5 = *(EIF_BOOLEAN *)(Current + O9209[dtype-238]);
	loc7 = F803_12635(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = F803_12653(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == F803_12653(Current))) break;
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (loc2 - loc3))) {
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc7)-696])(RTCV(loc7), (EIF_INTEGER_32) (loc1 + loc3));
				tr2 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R16620[Dtype(loc7)-953])(RTCV(loc7), tr2, loc1);
			}
			loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc7)-696])(RTCV(loc7), loc1);
			if (loc5) {
				loc4 = (EIF_BOOLEAN) RTEQ(arg1, loc6);
			} else {
				loc4 = (EIF_BOOLEAN) RTCEQ(arg1, loc6);
			}
			if (loc4) {
				tr1 = RTCCL(loc6);
				F820_12743(Current, tr1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				loc3++;
			} else {
				loc1++;
			}
		} else {
			loc1++;
		}
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16634[Dtype(loc7)-953])(RTCV(loc7), loc3);
	ti4_1 = F803_12653(Current);
	*(EIF_INTEGER_32 *)(Current + O11521[dtype-802]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {INTERACTIVE_LIST}.wipe_out */
void F820_12739 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (F803_12635(Current));
	loc3 = F803_12653(Current);
	F803_12688(Current);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R16610[Dtype(loc1)-953])(RTCV(loc1), loc2);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R11530[Dtype(Current)-819])(Current, tr2, ((EIF_INTEGER_32) 1L));
		loc2++;
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.added_item */
void F820_12742 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O11533[dtype-819])) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R11529[dtype-819])(Current, tr1, arg2);
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.removed_item */
void F820_12743 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O11533[dtype-819])) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R11530[dtype-819])(Current, tr1, arg2);
	}
	RTLE;
}

void EIF_Minit495 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

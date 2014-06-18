/*
 * Code for class HASH_TABLE [INTEGER_32, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha989.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HASH_TABLE}.make */
void F699_13000 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc3);
	
	RTGC;
	tr1 = RTLNS(461, 461, _OBJSIZ_0_1_0_1_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	loc4 = eif_max_int32 (arg1,((EIF_INTEGER_32) 2L));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	loc4 = F462_9997(RTCV(loc1), loc4);
	*(EIF_INTEGER_32 *)(Current + O11635[dtype-696]) = (EIF_INTEGER_32) loc4;
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y11662,Y11662_gen_type,dftype,696)),0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11662[dtype-696]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y11663,Y11663_gen_type,dftype,696)),EO_REF,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_REFERENCE), EIF_FALSE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11663[dtype-696]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {956,832,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_BOOLEAN), EIF_TRUE);
	}
	F957_18821(RTCV(tr1), (EIF_BOOLEAN) 0, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11665[dtype-696]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {954,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	}
	F955_18821(RTCV(tr1), ((EIF_INTEGER_32) -1L), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11664[dtype-696]) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current + O11668[dtype-696]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	*(EIF_INTEGER_32 *)(Current + O11712[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O11672[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_32 *)(Current + O11671[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O11627[dtype-696]) = (EIF_INTEGER_32) loc2;
	*(EIF_BOOLEAN *)(Current + O11667[dtype-696]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current + O11666[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O11676[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
	*(EIF_INTEGER_32 *)(Current + O11677[dtype-696]) = (EIF_INTEGER_32) loc2;
	RTAR(Current, loc3);
	*(EIF_REFERENCE *)(Current + O11678[dtype-696]) = (EIF_REFERENCE) RTCCL(loc3);
	RTLE;
}

/* {HASH_TABLE}.make_equal */
void F699_13001 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11624[Dtype(Current)-696])(Current, arg1);
	F240_9595(Current);
	RTLE;
}

/* {HASH_TABLE}.accommodate */
void F699_13002 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
	ti4_1 = eif_max_int32 (ti4_1,arg1);
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11660[dtype-696])(Current, ti4_1);
	loc4 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
	loc5 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(loc5)-953])(loc5);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R11680[dtype-696])(Current, loc1)) {
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc4 + (loc1));
			/* END INLINED CODE */
			ti4_1 = ti4_2;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc5)-696])(RTCV(loc5), loc1);
			tr2 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R9239[Dtype(loc3)-696])(RTCV(loc3), (EIF_REFERENCE) &ti4_1, tr2);
		}
		loc1++;
	}
	if (*(EIF_BOOLEAN *)(Current + O11667[dtype-696])) {
		tr1 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current + O11635[dtype-696])));
		/* END INLINED CODE */
		loc1 = ti4_3;
		/* INLINED CODE (SPECIAL.item) */
		ti4_2 = *((EIF_INTEGER_32 *)loc4 + (loc1));
		/* END INLINED CODE */
		ti4_1 = ti4_2;
		tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(tr1)-696])(RTCV(tr1), loc1);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R9239[Dtype(loc3)-696])(RTCV(loc3), (EIF_REFERENCE) &ti4_1, tr2);
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + O11662[Dtype(loc3)-696]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11683[dtype-696])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + O11663[Dtype(loc3)-696]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11685[dtype-696])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + O11665[Dtype(loc3)-696]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11686[dtype-696])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + O11664[Dtype(loc3)-696]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11687[dtype-696])(Current, tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3) + O11635[Dtype(loc3)-696]);
	*(EIF_INTEGER_32 *)(Current + O11635[dtype-696]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3) + O11668[Dtype(loc3)-696]);
	*(EIF_INTEGER_32 *)(Current + O11668[dtype-696]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.found_item */
EIF_INTEGER_32 F699_13003 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O11627[Dtype(Current) - 696]);
}


/* {HASH_TABLE}.item */
EIF_INTEGER_32 F699_13004 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc9);
	RTLR(6,loc10);
	RTLR(7,loc11);
	RTLR(8,loc12);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		if (*(EIF_BOOLEAN *)(Current + O11667[dtype-696])) {
			tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
			tr2 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)tr2 + (*(EIF_INTEGER_32 *)(Current + O11635[dtype-696])));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
			/* END INLINED CODE */
			Result = ti4_3;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
		loc10 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
		loc11 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O11635[dtype-696]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R11634[dtype-696])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc10 + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc9)-696])(RTCV(loc9), loc4);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R11636[dtype-696])(Current, tr1, tr2)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
					/* INLINED CODE (SPECIAL.item) */
					ti4_2 = *((EIF_INTEGER_32 *)tr1 + (loc4));
					/* END INLINED CODE */
					Result = ti4_2;
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)loc11 + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.has */
EIF_BOOLEAN F699_13006 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLR(6,tr1);
	RTLR(7,loc12);
	RTLR(8,tr2);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		if (*(EIF_BOOLEAN *)(Current + O11667[dtype-696])) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
		loc10 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
		loc11 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O11635[dtype-696]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R11634[dtype-696])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc10 + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc9)-696])(RTCV(loc9), loc4);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R11636[dtype-696])(Current, tr1, tr2)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)loc11 + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.has_key */
EIF_BOOLEAN F699_13007 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O11666[dtype-696]);
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11691[dtype-696])(Current, tr1);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11642[dtype-696])(Current);
	if (Result) {
		tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11669[dtype-696])(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current + O11627[dtype-696]) = (EIF_INTEGER_32) ti4_1;
	} else {
		*(EIF_INTEGER_32 *)(Current + O11627[dtype-696]) = (EIF_INTEGER_32) loc2;
	}
	*(EIF_INTEGER_32 *)(Current + O11666[dtype-696]) = (EIF_INTEGER_32) loc1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.has_item */
EIF_BOOLEAN F699_13008 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O11667[dtype-696])) {
		tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
		tr2 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr2 + (*(EIF_INTEGER_32 *)(Current + O11635[dtype-696])));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if ((EIF_BOOLEAN) !Result) {
		loc3 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
		loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc3);
		if (*(EIF_BOOLEAN *)(Current + O9209[dtype-238])) {
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				Result = '\0';
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R11680[dtype-696])(Current, loc1)) {
					/* INLINED CODE (SPECIAL.item) */
					ti4_2 = *((EIF_INTEGER_32 *)loc3 + (loc1));
					/* END INLINED CODE */
					ti4_1 = ti4_2;
					Result = (arg1 == ti4_1);
				}
				loc1++;
			}
		} else {
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				Result = '\0';
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R11680[dtype-696])(Current, loc1)) {
					/* INLINED CODE (SPECIAL.item) */
					ti4_2 = *((EIF_INTEGER_32 *)loc3 + (loc1));
					/* END INLINED CODE */
					ti4_1 = ti4_2;
					Result = (EIF_BOOLEAN)(arg1 == ti4_1);
				}
				loc1++;
			}
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.item_for_iteration */
EIF_INTEGER_32 F699_13010 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current + O11668[dtype-696])));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.key_for_iteration */
EIF_REFERENCE F699_13011 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(tr1)-696])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O11668[dtype-696]));
	RTLE;
	return Result;
}

/* {HASH_TABLE}.new_cursor */
EIF_REFERENCE F699_13013 (EIF_REFERENCE Current)
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
	{
		EIF_TYPE_INDEX typarr0[] = {668,0,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,Dftype(Current),238);
		typarr0[2] = eif_final_id(Y9241,Y9241_gen_type,Dftype(Current),406);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 668, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	F653_12188(RTCV(tr1), Current);
	Result = (EIF_REFERENCE) tr1;
	F653_12208(RTCV(Result));
	RTLE;
	return Result;
}

/* {HASH_TABLE}.iteration_item */
EIF_INTEGER_32 F699_13014 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11662[Dtype(Current)-696]);
	/* INLINED CODE (SPECIAL.item) */
	ti4_2 = *((EIF_INTEGER_32 *)tr1 + (arg1));
	/* END INLINED CODE */
	Result = ti4_2;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.hash_code_of */
EIF_INTEGER_32 F699_13015 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R14689[Dtype(arg1)-822])(RTCV(arg1));
	return (EIF_INTEGER_32) ti4_1;
}

/* {HASH_TABLE}.count */
EIF_INTEGER_32 F699_13016 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O11712[Dtype(Current) - 696]);
}


/* {HASH_TABLE}.iteration_index_set */
EIF_REFERENCE F699_13019 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(720, 720, _OBJSIZ_0_3_0_2_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R11652[dtype-696])(Current, ((EIF_INTEGER_32) -1L));
	tr2 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr2)-953])(tr2);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R11653[dtype-696])(Current, ti4_2);
	F721_12254(RTCV(tr1), ti4_1, ti4_2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_equal */
EIF_BOOLEAN F699_13020 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O11712[Dtype(arg1)-696]);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O11712[dtype-696]) == ti4_1)) {
		tb3 = *(EIF_BOOLEAN *)(RTCV(arg1) + O9209[Dtype(arg1)-238]);
		tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O9209[dtype-238]) == tb3);
	}
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(arg1) + O11667[Dtype(arg1)-696]);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O11667[dtype-696]) == tb2);
	}
	if (tb1) {
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11074[dtype-644])(Current);
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc1)-646])(RTCV(loc1));
			if (tb1) break;
			if ((EIF_BOOLEAN) !Result) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9804[Dtype(loc1)-666])(RTCV(loc1));
			tr2 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11650[Dtype(arg1)-696])(RTCV(arg1), tr2);
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11642[Dtype(arg1)-696])(RTCV(arg1));
			if (tb2) {
				if (*(EIF_BOOLEAN *)(Current + O9209[dtype-238])) {
					ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc1)-646])(RTCV(loc1)));
					ti4_2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11627[Dtype(arg1)-696])(RTCV(arg1)));
					Result = (EIF_BOOLEAN) (ti4_1 == ti4_2);
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc1)-646])(RTCV(loc1)));
					ti4_2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11627[Dtype(arg1)-696])(RTCV(arg1)));
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
				}
			} else {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc1)-646])(RTCV(loc1));
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.same_keys */
EIF_BOOLEAN F699_13021 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	return (EIF_BOOLEAN) RTEQ(arg1, arg2);
}

/* {HASH_TABLE}.extendible */
EIF_BOOLEAN F699_13024 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {HASH_TABLE}.found */
EIF_BOOLEAN F699_13030 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O11671[Dtype(Current)-696]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	return Result;
}

/* {HASH_TABLE}.not_found */
EIF_BOOLEAN F699_13031 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O11671[Dtype(Current)-696]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L));
	return Result;
}

/* {HASH_TABLE}.after */
EIF_BOOLEAN F699_13032 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R11682[dtype-696])(Current, *(EIF_INTEGER_32 *)(Current + O11668[dtype-696]));
}

/* {HASH_TABLE}.off */
EIF_BOOLEAN F699_13033 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R11682[dtype-696])(Current, *(EIF_INTEGER_32 *)(Current + O11668[dtype-696]));
}

/* {HASH_TABLE}.valid_iteration_index */
EIF_BOOLEAN F699_13036 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R11681[Dtype(Current)-696])(Current, arg1);
}

/* {HASH_TABLE}.start */
void F699_13037 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R11652[dtype-696])(Current, ((EIF_INTEGER_32) -1L));
	*(EIF_INTEGER_32 *)(Current + O11668[dtype-696]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.forth */
void F699_13038 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R11652[dtype-696])(Current, *(EIF_INTEGER_32 *)(Current + O11668[dtype-696]));
	*(EIF_INTEGER_32 *)(Current + O11668[dtype-696]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.search */
void F699_13040 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O11666[dtype-696]);
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11691[dtype-696])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11642[dtype-696])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11669[dtype-696])(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current + O11627[dtype-696]) = (EIF_INTEGER_32) ti4_1;
	} else {
		*(EIF_INTEGER_32 *)(Current + O11627[dtype-696]) = (EIF_INTEGER_32) loc2;
	}
	*(EIF_INTEGER_32 *)(Current + O11666[dtype-696]) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {HASH_TABLE}.next_iteration_position */
EIF_INTEGER_32 F699_13042 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	loc1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
	tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
	loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result >= loc2)) {
			/* INLINED CODE (SPECIAL.item) */
			tb3 = *((EIF_BOOLEAN *)loc1 + (Result));
			/* END INLINED CODE */
			tb2 = tb3;
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		Result++;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.previous_iteration_position */
EIF_INTEGER_32 F699_13043 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O11665[Dtype(Current)-696]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
			/* INLINED CODE (SPECIAL.item) */
			tb3 = *((EIF_BOOLEAN *)loc1 + (Result));
			/* END INLINED CODE */
			tb2 = tb3;
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		Result--;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.put */
void F699_13044 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11691[dtype-696])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11642[dtype-696])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R11697[dtype-696])(Current);
		tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11669[dtype-696])(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current + O11627[dtype-696]) = (EIF_INTEGER_32) ti4_1;
	} else {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11670[dtype-696])(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R11710[dtype-696])(Current);
			tr1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11691[dtype-696])(Current, tr1);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O11672[dtype-696]) != ((EIF_INTEGER_32) -1L))) {
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R11679[dtype-696])(Current, *(EIF_INTEGER_32 *)(Current + O11672[dtype-696]));
			loc3 = *(EIF_INTEGER_32 *)(Current + O11672[dtype-696]);
			tr1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
			F957_18839(RTCV(tr1), (EIF_BOOLEAN) 0, loc2);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
			loc3 = *(EIF_INTEGER_32 *)(Current + O11666[dtype-696]);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)tr1 + (loc3)) = loc2;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
		F955_18839(RTCV(tr1), arg1, loc2);
		tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
		tr2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R16621[Dtype(tr1)-953])(RTCV(tr1), tr2, loc2);
		if (RTCEQ(arg2, loc1)) {
			*(EIF_BOOLEAN *)(Current + O11667[dtype-696]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current + O11712[dtype-696]))++;
		*(EIF_INTEGER_32 *)(Current + O11627[dtype-696]) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current + O11671[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	}
	RTLE;
}

/* {HASH_TABLE}.force */
void F699_13045 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11691[dtype-696])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11643[dtype-696])(Current)) {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11670[dtype-696])(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R11710[dtype-696])(Current);
			tr1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11691[dtype-696])(Current, tr1);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O11672[dtype-696]) != ((EIF_INTEGER_32) -1L))) {
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R11679[dtype-696])(Current, *(EIF_INTEGER_32 *)(Current + O11672[dtype-696]));
			loc4 = *(EIF_INTEGER_32 *)(Current + O11672[dtype-696]);
			tr1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
			F957_18839(RTCV(tr1), (EIF_BOOLEAN) 0, loc3);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
			loc4 = *(EIF_INTEGER_32 *)(Current + O11666[dtype-696]);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)tr1 + (loc4)) = loc3;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
		tr2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R16621[Dtype(tr1)-953])(RTCV(tr1), tr2, loc3);
		if (RTCEQ(arg2, loc1)) {
			*(EIF_BOOLEAN *)(Current + O11667[dtype-696]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current + O11712[dtype-696]))++;
		*(EIF_INTEGER_32 *)(Current + O11627[dtype-696]) = (EIF_INTEGER_32) loc2;
	} else {
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11669[dtype-696])(Current);
		tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc3));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current + O11627[dtype-696]) = (EIF_INTEGER_32) ti4_1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
	F955_18839(RTCV(tr1), arg1, loc3);
	RTLE;
}

/* {HASH_TABLE}.extend */
void F699_13046 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11692[dtype-696])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11670[dtype-696])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R11710[dtype-696])(Current);
		tr1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11692[dtype-696])(Current, tr1);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O11672[dtype-696]) != ((EIF_INTEGER_32) -1L))) {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R11679[dtype-696])(Current, *(EIF_INTEGER_32 *)(Current + O11672[dtype-696]));
		loc3 = *(EIF_INTEGER_32 *)(Current + O11672[dtype-696]);
		tr1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
		F957_18839(RTCV(tr1), (EIF_BOOLEAN) 0, loc2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
		loc3 = *(EIF_INTEGER_32 *)(Current + O11666[dtype-696]);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_INTEGER_32 *)tr1 + (loc3)) = loc2;
	/* END INLINED CODE */
	;
	tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
	F955_18839(RTCV(tr1), arg1, loc2);
	tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
	tr2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R16621[Dtype(tr1)-953])(RTCV(tr1), tr2, loc2);
	if (RTCEQ(arg2, loc1)) {
		*(EIF_BOOLEAN *)(Current + O11667[dtype-696]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	(*(EIF_INTEGER_32 *)(Current + O11712[dtype-696]))++;
	*(EIF_INTEGER_32 *)(Current + O11671[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	RTLE;
}

/* {HASH_TABLE}.remove */
void F699_13050 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc6);
	
	RTGC;
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11691[dtype-696])(Current, tr1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11642[dtype-696])(Current)) {
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11669[dtype-696])(Current);
		if (RTCEQ(arg1, loc1)) {
			*(EIF_BOOLEAN *)(Current + O11667[dtype-696]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_BOOLEAN *)tr1 + (loc3)) = (EIF_BOOLEAN) 1;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O11666[dtype-696]);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)tr1 + (ti4_1)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc3 + ((EIF_INTEGER_32) -2L));
		/* END INLINED CODE */
		;
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O11668[dtype-696]) == loc3)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R11648[dtype-696])(Current);
		}
		(*(EIF_INTEGER_32 *)(Current + O11712[dtype-696]))--;
		ti4_1 = eif_min_int32 (loc3,*(EIF_INTEGER_32 *)(Current + O11676[dtype-696]));
		*(EIF_INTEGER_32 *)(Current + O11676[dtype-696]) = (EIF_INTEGER_32) ti4_1;
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O11676[dtype-696]) == *(EIF_INTEGER_32 *)(Current + O11712[dtype-696]))) {
			tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
			loc4 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O11676[dtype-696]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ti4_1);
			tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
			F955_18852(RTCV(tr1), loc4);
			tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16634[Dtype(tr1)-953])(RTCV(tr1), loc4);
			tr1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O11676[dtype-696]);
			tr2 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
			ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr2);
			F957_18842(RTCV(tr1), (EIF_BOOLEAN) 0, ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
			*(EIF_INTEGER_32 *)(Current + O11677[dtype-696]) = (EIF_INTEGER_32) loc2;
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + O11678[dtype-696]) = (EIF_REFERENCE) RTCCL(loc1);
			*(EIF_INTEGER_32 *)(Current + O11676[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
		} else {
			loc5 = *(EIF_INTEGER_32 *)(Current + O11677[dtype-696]);
			tr1 = *(EIF_REFERENCE *)(Current + O11678[dtype-696]);
			loc6 = RTCCL(tr1);
			if ((EIF_BOOLEAN) ((EIF_TRUE) && EIF_TEST(loc6))) {
				tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
				/* INLINED CODE (SPECIAL.put) */
				*((EIF_INTEGER_32 *)tr1 + (loc3)) = loc5;
				/* END INLINED CODE */
				;
				tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
				tr2 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R16620[Dtype(tr1)-953])(RTCV(tr1), tr2, loc3);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
				/* INLINED CODE (SPECIAL.item) */
				ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc3));
				/* END INLINED CODE */
				ti4_1 = ti4_3;
				*(EIF_INTEGER_32 *)(Current + O11677[dtype-696]) = (EIF_INTEGER_32) ti4_1;
				tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(tr1)-696])(RTCV(tr1), loc3);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O11678[dtype-696]) = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
		*(EIF_INTEGER_32 *)(Current + O11671[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
		*(EIF_INTEGER_32 *)(Current + O11627[dtype-696]) = (EIF_INTEGER_32) loc2;
	}
	RTLE;
}

/* {HASH_TABLE}.wipe_out */
void F699_13052 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
	F955_18858(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16640[Dtype(tr1)-953])(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
	tr2 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
	ti4_1 = F957_18832(RTCV(tr2));
	F957_18842(RTCV(tr1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 0L), ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O11635[dtype-696]);
	F955_18842(RTCV(tr1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L), ti4_1);
	*(EIF_INTEGER_32 *)(Current + O11627[dtype-696]) = (EIF_INTEGER_32) loc1;
	*(EIF_INTEGER_32 *)(Current + O11712[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O11666[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
	*(EIF_INTEGER_32 *)(Current + O11668[dtype-696]) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current + O11671[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_BOOLEAN *)(Current + O11667[dtype-696]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {HASH_TABLE}.clear_all */
void F699_13053 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9234[Dtype(Current)-696])(Current);
}

/* {HASH_TABLE}.linear_representation */
EIF_REFERENCE F699_13054 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O11668[dtype-696]);
	{
		EIF_TYPE_INDEX typarr0[] = {803,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,Dftype(Current),238);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 803, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F804_12632(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O11712[dtype-696]));
	Result = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11647[dtype-696])(Current);
	for (;;) {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11645[dtype-696])(Current)) break;
		ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11631[dtype-696])(Current));
		F804_12672(RTCV(Result), ti4_1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R11648[dtype-696])(Current);
	}
	*(EIF_INTEGER_32 *)(Current + O11668[dtype-696]) = (EIF_INTEGER_32) loc1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.copy */
void F699_13055 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O11662[Dtype(arg1)-696]);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11683[dtype-696])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O11663[Dtype(arg1)-696]);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11685[dtype-696])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O11665[Dtype(arg1)-696]);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11686[dtype-696])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O11664[Dtype(arg1)-696]);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11687[dtype-696])(Current, tr1);
	}
	RTLE;
}

/* {HASH_TABLE}.empty_duplicate */
EIF_REFERENCE F699_13056 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11624[Dtype(tr1)-696])(RTCV(tr1), arg1);
	Result = (EIF_REFERENCE) tr1;
	if (*(EIF_BOOLEAN *)(Current + O9209[Dtype(Current)-238])) {
		F240_9595(RTCV(Result));
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.correct_mismatch */
void F699_13057 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,loc5);
	RTLR(9,loc12);
	RTLR(10,loc7);
	
	RTGC;
	tr1 = RTOUCR(2,F625_11836,(Current));
	tr2 = RTMS_EX_H("hash_table_version_64",21,855604276);
	tb1 = F697_13006(RTCV(tr1), tr2);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTOUCR(2,F625_11836,(Current));
		tr2 = RTMS_EX_H("content",7,460700276);
		tr1 = F697_13004(RTCV(tr1), tr2);
		loc8 = RTCCL(tr1);
		{
			EIF_TYPE_INDEX typarr0[] = {722,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,dftype,238);
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc8 = RTRV(eif_non_attached_type(typres0),loc8);
		}
		if (EIF_TEST(loc8)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc8));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11662[dtype-696]) = (EIF_REFERENCE) tr1;
		}
		tr1 = RTOUCR(2,F625_11836,(Current));
		tr2 = RTMS_EX_H("keys",4,1801812339);
		tr1 = F697_13004(RTCV(tr1), tr2);
		loc9 = RTCCL(tr1);
		{
			EIF_TYPE_INDEX typarr0[] = {721,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y9241,Y9241_gen_type,dftype,406);
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc9 = RTRV(eif_non_attached_type(typres0),loc9);
		}
		if (EIF_TEST(loc9)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc9) + O10387[Dtype(loc9)-545]);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11663[dtype-696]) = (EIF_REFERENCE) tr1;
		}
		tr1 = RTOUCR(2,F625_11836,(Current));
		tr2 = RTMS_EX_H("deleted_marks",13,2142169971);
		tr1 = F697_13004(RTCV(tr1), tr2);
		loc10 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {724,832,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc10 = RTRV(eif_non_attached_type(typres0),loc10);
		}
		if (EIF_TEST(loc10)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc10));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11665[dtype-696]) = (EIF_REFERENCE) tr1;
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11665[dtype-696]) != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11663[dtype-696]) != NULL))) {
			tr1 = RTOUCR(2,F625_11836,(Current));
			tr2 = RTMS_EX_H("hash_table_version_57",21,855604023);
			tb1 = F697_13006(RTCV(tr1), tr2);
			if ((EIF_BOOLEAN) !tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
				ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
				tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
				if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
					loc1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
					tr2 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr2)-953])(tr2);
					{
						static EIF_TYPE_INDEX typarr0[] = {956,832,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr1 = RTLNSP2(eif_non_attached_type(typres0),0,ti4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
						RT_SPECIAL_COUNT(tr1) = 0;
					}
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + O11665[dtype-696]) = (EIF_REFERENCE) tr1;
					tr1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
					ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
					/* INLINED CODE (SPECIAL.copy_data) */
					memmove((EIF_BOOLEAN *)tr1 + (((EIF_INTEGER_32) 0L)),(EIF_BOOLEAN *)loc1 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)ti4_2);
					RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + ti4_2);
					/* END INLINED CODE */
					;
				}
			}
		}
		tr2 = RTOUCR(2,F625_11836,(Current));
		tr3 = RTMS_EX_H("count",5,1870727284);
		tr2 = F697_13004(RTCV(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), 993, tr1, loc11, tb1);
		if (tb1) {
			loc4 = (EIF_INTEGER_32) loc11;
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11662[dtype-696]) == NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11663[dtype-696]) == NULL)) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11665[dtype-696]) == NULL))) {
			F625_11835(Current);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
			loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11660[dtype-696])(Current, loc4);
			for (;;) {
				if ((EIF_BOOLEAN)(loc2 == loc3)) break;
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(tr1)-696])(RTCV(tr1), loc2);
				loc12 = RTCCL(tr1);
				if (EIF_TEST(loc12)) {
					tb1 = !RTCEQ(loc12, loc7);
				}
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
					/* INLINED CODE (SPECIAL.item) */
					ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc2));
					/* END INLINED CODE */
					ti4_2 = ti4_3;
					tr1 = RTCCL(loc12);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R9239[Dtype(loc5)-696])(RTCV(loc5), (EIF_REFERENCE) &ti4_2, tr1);
				}
				loc2++;
			}
			tb1 = '\0';
			tr2 = RTOUCR(2,F625_11836,(Current));
			tr3 = RTMS_EX_H("has_default",11,1777575796);
			tr2 = F697_13004(RTCV(tr2), tr3);
			tr1 = RTCCL(tr2);
			RTOB(*(EIF_BOOLEAN *), 832, tr1, loc13, tb2);
			if (tb2) {
				tb1 = loc13;
			}
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
				tr2 = *(EIF_REFERENCE *)(Current + O11662[dtype-696]);
				ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr2);
				/* INLINED CODE (SPECIAL.item) */
				ti4_5 = *((EIF_INTEGER_32 *)tr1 + ((EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
				/* END INLINED CODE */
				ti4_2 = ti4_5;
				tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(tr1)-696])(RTCV(tr1), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
				tr2 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R9239[Dtype(loc5)-696])(RTCV(loc5), (EIF_REFERENCE) &ti4_2, tr2);
			}
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + O11662[Dtype(loc5)-696]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11683[dtype-696])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + O11663[Dtype(loc5)-696]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11685[dtype-696])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + O11665[Dtype(loc5)-696]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11686[dtype-696])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + O11664[Dtype(loc5)-696]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11687[dtype-696])(Current, tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5) + O11635[Dtype(loc5)-696]);
			*(EIF_INTEGER_32 *)(Current + O11635[dtype-696]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5) + O11668[Dtype(loc5)-696]);
			*(EIF_INTEGER_32 *)(Current + O11668[dtype-696]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5) + O11672[Dtype(loc5)-696]);
			*(EIF_INTEGER_32 *)(Current + O11672[dtype-696]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5) + O11666[Dtype(loc5)-696]);
			*(EIF_INTEGER_32 *)(Current + O11666[dtype-696]) = (EIF_INTEGER_32) ti4_2;
			*(EIF_INTEGER_32 *)(Current + O11676[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
			*(EIF_INTEGER_32 *)(Current + O11677[dtype-696]) = (EIF_INTEGER_32) loc6;
			RTAR(Current, loc7);
			*(EIF_REFERENCE *)(Current + O11678[dtype-696]) = (EIF_REFERENCE) RTCCL(loc7);
		}
		*(EIF_INTEGER_32 *)(Current + O11671[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {HASH_TABLE}.content */
EIF_REFERENCE F699_13059 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11662[Dtype(Current) - 696]);
}


/* {HASH_TABLE}.keys */
EIF_REFERENCE F699_13060 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11663[Dtype(Current) - 696]);
}


/* {HASH_TABLE}.indexes_map */
EIF_REFERENCE F699_13061 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11664[Dtype(Current) - 696]);
}


/* {HASH_TABLE}.deleted_marks */
EIF_REFERENCE F699_13062 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11665[Dtype(Current) - 696]);
}


/* {HASH_TABLE}.position */
EIF_INTEGER_32 F699_13066 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current + O11666[dtype-696])));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.soon_full */
EIF_BOOLEAN F699_13067 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
	tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16605[Dtype(tr1)-953])(tr1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.ht_deleted_item */
EIF_INTEGER_32 F699_13074 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O11677[Dtype(Current) - 696]);
}


/* {HASH_TABLE}.ht_deleted_key */
EIF_REFERENCE F699_13075 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11678[Dtype(Current) - 696]);
}


/* {HASH_TABLE}.deleted_position */
EIF_INTEGER_32 F699_13076 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
	/* INLINED CODE (SPECIAL.item) */
	ti4_2 = *((EIF_INTEGER_32 *)tr1 + (arg1));
	/* END INLINED CODE */
	Result = ti4_2;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -Result + ((EIF_INTEGER_32) -2L));
	tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
	Result = eif_min_int32 (Result,ti4_1);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.occupied */
EIF_BOOLEAN F699_13077 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O11667[dtype-696])) {
		Result = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current + O11635[dtype-696])));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		if ((EIF_BOOLEAN)(arg1 != ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)tr1 + (arg1));
			/* END INLINED CODE */
			tb1 = tb2;
			Result = (EIF_BOOLEAN) !tb1;
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
		/* INLINED CODE (SPECIAL.item) */
		tb2 = *((EIF_BOOLEAN *)tr1 + (arg1));
		/* END INLINED CODE */
		Result = tb2;
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.truly_occupied */
EIF_BOOLEAN F699_13078 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
		tb1 = (EIF_BOOLEAN) (arg1 < ti4_1);
	}
	if (tb1) {
		Result = '\01';
		tb1 = '\0';
		if (*(EIF_BOOLEAN *)(Current + O11667[dtype-696])) {
			tr1 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current + O11635[dtype-696])));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
		}
		if (!(tb1)) {
			Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R11680[dtype-696])(Current, arg1);
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_off_position */
EIF_BOOLEAN F699_13079 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + O11663[Dtype(Current)-696]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16604[Dtype(tr1)-953])(tr1);
		Result = (EIF_BOOLEAN) (arg1 >= ti4_1);
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.set_content */
void F699_13080 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O11662[Dtype(Current)-696]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_keys */
void F699_13082 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O11663[Dtype(Current)-696]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_deleted_marks */
void F699_13083 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O11665[Dtype(Current)-696]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_indexes_map */
void F699_13084 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O11664[Dtype(Current)-696]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.internal_search */
void F699_13088 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLR(6,tr1);
	RTLR(7,loc12);
	RTLR(8,tr2);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		*(EIF_INTEGER_32 *)(Current + O11666[dtype-696]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O11635[dtype-696]);
		if (*(EIF_BOOLEAN *)(Current + O11667[dtype-696])) {
			*(EIF_INTEGER_32 *)(Current + O11671[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			*(EIF_INTEGER_32 *)(Current + O11671[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O11663[dtype-696]);
		loc10 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
		loc11 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O11635[dtype-696]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R11634[dtype-696])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		*(EIF_INTEGER_32 *)(Current + O11671[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc10 + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc9)-696])(RTCV(loc9), loc4);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R11636[dtype-696])(Current, tr1, tr2)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					*(EIF_INTEGER_32 *)(Current + O11671[dtype-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)loc11 + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
		*(EIF_INTEGER_32 *)(Current + O11666[dtype-696]) = (EIF_INTEGER_32) loc5;
	}
	*(EIF_INTEGER_32 *)(Current + O11672[dtype-696]) = (EIF_INTEGER_32) loc7;
	RTLE;
}

/* {HASH_TABLE}.search_for_insertion */
void F699_13089 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,tr1);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		*(EIF_INTEGER_32 *)(Current + O11666[dtype-696]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O11635[dtype-696]);
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O11664[dtype-696]);
		loc10 = *(EIF_REFERENCE *)(Current + O11665[dtype-696]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O11635[dtype-696]);
		loc8 = (EIF_INTEGER_32) loc6;
		tr1 = RTCCL(arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R11634[dtype-696])(Current, tr1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc9 + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)loc10 + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
		*(EIF_INTEGER_32 *)(Current + O11666[dtype-696]) = (EIF_INTEGER_32) loc5;
	}
	*(EIF_INTEGER_32 *)(Current + O11672[dtype-696]) = (EIF_INTEGER_32) loc7;
	RTLE;
}

/* {HASH_TABLE}.set_conflict */
void F699_13094 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O11671[Dtype(Current)-696]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {HASH_TABLE}.add_space */
void F699_13107 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O11712[dtype-696]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O11712[dtype-696]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11626[dtype-696])(Current, (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L))));
}

/* {HASH_TABLE}.collection_extend */
void F699_13109 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit989 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

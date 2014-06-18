/*
 * Code for class HASH_TABLE [INTEGER_32, INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha580.h"
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
void F700_13000 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(461, 461, _OBJSIZ_0_1_0_1_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	loc4 = eif_max_int32 (arg1,((EIF_INTEGER_32) 2L));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	loc4 = F462_9997(RTCV(loc1), loc4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_) = (EIF_INTEGER_32) loc4;
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y11662,Y11662_gen_type,dftype,696)),0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y11663,Y11663_gen_type,dftype,696)),0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {956,832,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_BOOLEAN), EIF_TRUE);
	}
	F957_18821(RTCV(tr1), (EIF_BOOLEAN) 0, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {954,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	}
	F955_18821(RTCV(tr1), ((EIF_INTEGER_32) -1L), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc2;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) loc2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) = (EIF_INTEGER_32) loc3;
	RTLE;
}

/* {HASH_TABLE}.make_equal */
void F700_13001 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F700_13000(Current, arg1);
	F240_9595(Current);
	RTLE;
}

/* {HASH_TABLE}.accommodate */
void F700_13002 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	ti4_1 = eif_max_int32 (ti4_1,arg1);
	loc3 = F700_13056(Current, ti4_1);
	loc4 = *(EIF_REFERENCE *)(Current);
	loc5 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc5);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		if (F700_13077(Current, loc1)) {
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc4 + (loc1));
			/* END INLINED CODE */
			ti4_1 = ti4_2;
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)loc5 + (loc1));
			/* END INLINED CODE */
			ti4_2 = ti4_3;
			F700_13044(RTCV(loc3), ti4_1, ti4_2);
		}
		loc1++;
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
		/* END INLINED CODE */
		loc1 = ti4_3;
		/* INLINED CODE (SPECIAL.item) */
		ti4_2 = *((EIF_INTEGER_32 *)loc4 + (loc1));
		/* END INLINED CODE */
		ti4_1 = ti4_2;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc1));
		/* END INLINED CODE */
		ti4_2 = ti4_3;
		F700_13044(RTCV(loc3), ti4_1, ti4_2);
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3));
	F700_13080(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_);
	F700_13082(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_3_);
	F700_13083(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_2_);
	F700_13084(Current, tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_4_3_0_1_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_4_3_0_3_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.found_item */
EIF_INTEGER_32 F700_13003 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_);
}


/* {HASH_TABLE}.item */
EIF_INTEGER_32 F700_13004 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)tr2 + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
			/* END INLINED CODE */
			Result = ti4_3;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = F700_13015(Current, arg1);
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
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)loc9 + (loc4));
				/* END INLINED CODE */
				loc12 = ti4_2;
				if (F700_13021(Current, loc12, arg1)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					tr1 = *(EIF_REFERENCE *)(Current);
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
EIF_BOOLEAN F700_13006 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = F700_13015(Current, arg1);
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
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)loc9 + (loc4));
				/* END INLINED CODE */
				loc12 = ti4_2;
				if (F700_13021(Current, loc12, arg1)) {
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
EIF_BOOLEAN F700_13007 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
	F700_13088(Current, arg1);
	Result = F700_13030(Current);
	if (Result) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F700_13066(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) ti4_1;
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc2;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) loc1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.has_item */
EIF_BOOLEAN F700_13008 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr2 + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if ((EIF_BOOLEAN) !Result) {
		loc3 = *(EIF_REFERENCE *)(Current);
		loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc3);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				Result = '\0';
				if (F700_13077(Current, loc1)) {
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
				if (F700_13077(Current, loc1)) {
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
EIF_INTEGER_32 F700_13010 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_)));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.key_for_iteration */
EIF_INTEGER_32 F700_13011 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_)));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.new_cursor */
EIF_REFERENCE F700_13013 (EIF_REFERENCE Current)
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
		EIF_TYPE_INDEX typarr0[] = {669,0,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,Dftype(Current),238);
		typarr0[2] = eif_final_id(Y9241,Y9241_gen_type,Dftype(Current),406);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 669, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	F653_12188(RTCV(tr1), Current);
	Result = (EIF_REFERENCE) tr1;
	F653_12208(RTCV(Result));
	RTLE;
	return Result;
}

/* {HASH_TABLE}.iteration_item */
EIF_INTEGER_32 F700_13014 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	ti4_2 = *((EIF_INTEGER_32 *)tr1 + (arg1));
	/* END INLINED CODE */
	Result = ti4_2;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.hash_code_of */
EIF_INTEGER_32 F700_13015 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (arg1)));
	return (EIF_INTEGER_32) ti4_1;
}

/* {HASH_TABLE}.count */
EIF_INTEGER_32 F700_13016 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
}


/* {HASH_TABLE}.iteration_index_set */
EIF_REFERENCE F700_13019 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(720, 720, _OBJSIZ_0_3_0_2_0_0_0_0_);
	ti4_1 = F700_13042(Current, ((EIF_INTEGER_32) -1L));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr2);
	ti4_2 = F700_13043(Current, ti4_2);
	F721_12254(RTCV(tr1), ti4_1, ti4_2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_equal */
EIF_BOOLEAN F700_13020 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_4_3_0_9_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == ti4_1)) {
		tb3 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_4_0_);
		tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) == tb3);
	}
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_4_2_);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) == tb2);
	}
	if (tb1) {
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = F700_13013(Current);
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc1)-646])(RTCV(loc1));
			if (tb1) break;
			if ((EIF_BOOLEAN) !Result) break;
			ti4_1 = F670_12213(RTCV(loc1));
			F700_13040(RTCV(arg1), ti4_1);
			tb2 = F700_13030(RTCV(arg1));
			if (tb2) {
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
					ti4_1 = F670_12212(RTCV(loc1));
					ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_4_3_0_0_);
					Result = (EIF_BOOLEAN) (ti4_1 == ti4_2);
				} else {
					ti4_1 = F670_12212(RTCV(loc1));
					ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_4_3_0_0_);
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
EIF_BOOLEAN F700_13021 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (arg1 == arg2);
}

/* {HASH_TABLE}.extendible */
EIF_BOOLEAN F700_13024 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {HASH_TABLE}.found */
EIF_BOOLEAN F700_13030 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	return Result;
}

/* {HASH_TABLE}.not_found */
EIF_BOOLEAN F700_13031 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L));
	return Result;
}

/* {HASH_TABLE}.after */
EIF_BOOLEAN F700_13032 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F700_13079(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_));
}

/* {HASH_TABLE}.off */
EIF_BOOLEAN F700_13033 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F700_13079(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_));
}

/* {HASH_TABLE}.valid_iteration_index */
EIF_BOOLEAN F700_13036 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F700_13078(Current, arg1);
}

/* {HASH_TABLE}.start */
void F700_13037 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F700_13042(Current, ((EIF_INTEGER_32) -1L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.forth */
void F700_13038 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F700_13042(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.search */
void F700_13040 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
	F700_13088(Current, arg1);
	if (F700_13030(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F700_13066(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) ti4_1;
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc2;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {HASH_TABLE}.next_iteration_position */
EIF_INTEGER_32 F700_13042 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr1 = *(EIF_REFERENCE *)(Current);
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
EIF_INTEGER_32 F700_13043 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
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
void F700_13044 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F700_13088(Current, arg2);
	if (F700_13030(Current)) {
		F700_13094(Current);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F700_13066(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (ti4_1));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) ti4_1;
	} else {
		if (F700_13067(Current)) {
			F700_13107(Current);
			F700_13088(Current, arg2);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) != ((EIF_INTEGER_32) -1L))) {
			loc2 = F700_13076(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_));
			loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F957_18839(RTCV(tr1), (EIF_BOOLEAN) 0, loc2);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)tr1 + (loc3)) = loc2;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current);
		F955_18839(RTCV(tr1), arg1, loc2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F955_18839(RTCV(tr1), arg2, loc2);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))++;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	}
	RTLE;
}

/* {HASH_TABLE}.force */
void F700_13045 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F700_13088(Current, arg2);
	if (F700_13031(Current)) {
		if (F700_13067(Current)) {
			F700_13107(Current);
			F700_13088(Current, arg2);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) != ((EIF_INTEGER_32) -1L))) {
			loc3 = F700_13076(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_));
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F957_18839(RTCV(tr1), (EIF_BOOLEAN) 0, loc3);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc3 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)tr1 + (loc4)) = loc3;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F955_18839(RTCV(tr1), arg2, loc3);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))++;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc2;
	} else {
		loc3 = F700_13066(Current);
		tr1 = *(EIF_REFERENCE *)(Current);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc3));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) ti4_1;
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	F955_18839(RTCV(tr1), arg1, loc3);
	RTLE;
}

/* {HASH_TABLE}.extend */
void F700_13046 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F700_13089(Current, arg2);
	if (F700_13067(Current)) {
		F700_13107(Current);
		F700_13089(Current, arg2);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) != ((EIF_INTEGER_32) -1L))) {
		loc2 = F700_13076(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_));
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F957_18839(RTCV(tr1), (EIF_BOOLEAN) 0, loc2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_INTEGER_32 *)tr1 + (loc3)) = loc2;
	/* END INLINED CODE */
	;
	tr1 = *(EIF_REFERENCE *)(Current);
	F955_18839(RTCV(tr1), arg1, loc2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F955_18839(RTCV(tr1), arg2, loc2);
	if ((EIF_BOOLEAN)(arg2 == loc1)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))++;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	RTLE;
}

/* {HASH_TABLE}.remove */
void F700_13050 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	F700_13088(Current, arg1);
	if (F700_13030(Current)) {
		loc3 = F700_13066(Current);
		if ((EIF_BOOLEAN)(arg1 == loc1)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_BOOLEAN *)tr1 + (loc3)) = (EIF_BOOLEAN) 1;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)tr1 + (ti4_1)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc3 + ((EIF_INTEGER_32) -2L));
		/* END INLINED CODE */
		;
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) == loc3)) {
			F700_13038(Current);
		}
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))--;
		ti4_1 = eif_min_int32 (loc3,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) ti4_1;
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc4 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ti4_1);
			tr1 = *(EIF_REFERENCE *)(Current);
			F955_18852(RTCV(tr1), loc4);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F955_18852(RTCV(tr1), loc4);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr2);
			F957_18842(RTCV(tr1), (EIF_BOOLEAN) 0, ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) loc2;
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) = (EIF_INTEGER_32) loc1;
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
		} else {
			loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_);
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_);
			if ((EIF_BOOLEAN) ((EIF_TRUE) && (EIF_TRUE))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				/* INLINED CODE (SPECIAL.put) */
				*((EIF_INTEGER_32 *)tr1 + (loc3)) = loc5;
				/* END INLINED CODE */
				;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				/* INLINED CODE (SPECIAL.put) */
				*((EIF_INTEGER_32 *)tr1 + (loc3)) = loc6;
				/* END INLINED CODE */
				;
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				/* INLINED CODE (SPECIAL.item) */
				ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc3));
				/* END INLINED CODE */
				ti4_1 = ti4_3;
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) ti4_1;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				/* INLINED CODE (SPECIAL.item) */
				ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc3));
				/* END INLINED CODE */
				ti4_1 = ti4_3;
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) = (EIF_INTEGER_32) ti4_1;
			}
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc2;
	}
	RTLE;
}

/* {HASH_TABLE}.wipe_out */
void F700_13052 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F955_18858(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F955_18858(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti4_1 = F957_18832(RTCV(tr2));
	F957_18842(RTCV(tr1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 0L), ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
	F955_18842(RTCV(tr1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L), ti4_1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {HASH_TABLE}.clear_all */
void F700_13053 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F700_13052(Current);
}

/* {HASH_TABLE}.linear_representation */
EIF_REFERENCE F700_13054 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
	{
		EIF_TYPE_INDEX typarr0[] = {803,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,Dftype(Current),238);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 803, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F804_12632(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_));
	Result = (EIF_REFERENCE) tr1;
	F700_13037(Current);
	for (;;) {
		if (F700_13033(Current)) break;
		ti4_1 = F700_13010(Current);
		F804_12672(RTCV(Result), ti4_1);
		F700_13038(Current);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) loc1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.copy */
void F700_13055 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		F700_13080(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		F700_13082(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		F700_13083(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		F700_13084(Current, tr1);
	}
	RTLE;
}

/* {HASH_TABLE}.empty_duplicate */
EIF_REFERENCE F700_13056 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	F700_13000(RTCV(tr1), arg1);
	Result = (EIF_REFERENCE) tr1;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
		F240_9595(RTCV(Result));
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.correct_mismatch */
void F700_13057 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
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
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,loc5);
	
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
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
		tr1 = RTOUCR(2,F625_11836,(Current));
		tr2 = RTMS_EX_H("keys",4,1801812339);
		tr1 = F697_13004(RTCV(tr1), tr2);
		loc9 = RTCCL(tr1);
		{
			EIF_TYPE_INDEX typarr0[] = {722,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y9241,Y9241_gen_type,dftype,406);
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc9 = RTRV(eif_non_attached_type(typres0),loc9);
		}
		if (EIF_TEST(loc9)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc9));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
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
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL))) {
			tr1 = RTOUCR(2,F625_11836,(Current));
			tr2 = RTMS_EX_H("hash_table_version_57",21,855604023);
			tb1 = F697_13006(RTCV(tr1), tr2);
			if ((EIF_BOOLEAN) !tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
				if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
					loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
					tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr2);
					{
						static EIF_TYPE_INDEX typarr0[] = {956,832,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr1 = RTLNSP2(eif_non_attached_type(typres0),0,ti4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
						RT_SPECIAL_COUNT(tr1) = 0;
					}
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
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
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == NULL))) {
			F625_11835(Current);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc3 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			loc5 = F700_13056(Current, loc4);
			for (;;) {
				if ((EIF_BOOLEAN)(loc2 == loc3)) break;
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				/* INLINED CODE (SPECIAL.item) */
				ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc2));
				/* END INLINED CODE */
				ti4_2 = ti4_3;
				loc12 = ti4_2;
				if ((EIF_TRUE)) {
					tb1 = (EIF_BOOLEAN)(loc12 != loc7);
				}
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(Current);
					/* INLINED CODE (SPECIAL.item) */
					ti4_3 = *((EIF_INTEGER_32 *)tr1 + (loc2));
					/* END INLINED CODE */
					ti4_2 = ti4_3;
					F700_13044(RTCV(loc5), ti4_2, loc12);
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
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr2);
				/* INLINED CODE (SPECIAL.item) */
				ti4_5 = *((EIF_INTEGER_32 *)tr1 + ((EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
				/* END INLINED CODE */
				ti4_2 = ti4_5;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				/* INLINED CODE (SPECIAL.item) */
				ti4_5 = *((EIF_INTEGER_32 *)tr1 + ((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
				/* END INLINED CODE */
				ti4_3 = ti4_5;
				F700_13044(RTCV(loc5), ti4_2, ti4_3);
			}
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5));
			F700_13080(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + _REFACS_1_);
			F700_13082(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + _REFACS_3_);
			F700_13083(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + _REFACS_2_);
			F700_13084(Current, tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5)+ _LNGOFF_4_3_0_1_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5)+ _LNGOFF_4_3_0_3_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5)+ _LNGOFF_4_3_0_5_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc5)+ _LNGOFF_4_3_0_2_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) ti4_2;
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) loc6;
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) = (EIF_INTEGER_32) loc7;
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {HASH_TABLE}.content */
EIF_REFERENCE F700_13059 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {HASH_TABLE}.keys */
EIF_REFERENCE F700_13060 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {HASH_TABLE}.indexes_map */
EIF_REFERENCE F700_13061 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {HASH_TABLE}.deleted_marks */
EIF_REFERENCE F700_13062 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {HASH_TABLE}.position */
EIF_INTEGER_32 F700_13066 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_)));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.soon_full */
EIF_BOOLEAN F700_13067 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.ht_deleted_item */
EIF_INTEGER_32 F700_13074 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_);
}


/* {HASH_TABLE}.ht_deleted_key */
EIF_INTEGER_32 F700_13075 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_);
}


/* {HASH_TABLE}.deleted_position */
EIF_INTEGER_32 F700_13076 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	/* INLINED CODE (SPECIAL.item) */
	ti4_2 = *((EIF_INTEGER_32 *)tr1 + (arg1));
	/* END INLINED CODE */
	Result = ti4_2;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -Result + ((EIF_INTEGER_32) -2L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	Result = eif_min_int32 (Result,ti4_1);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.occupied */
EIF_BOOLEAN F700_13077 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
		Result = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		if ((EIF_BOOLEAN)(arg1 != ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)tr1 + (arg1));
			/* END INLINED CODE */
			tb1 = tb2;
			Result = (EIF_BOOLEAN) !tb1;
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
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
EIF_BOOLEAN F700_13078 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		tb1 = (EIF_BOOLEAN) (arg1 < ti4_1);
	}
	if (tb1) {
		Result = '\01';
		tb1 = '\0';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
		}
		if (!(tb1)) {
			Result = F700_13077(Current, arg1);
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_off_position */
EIF_BOOLEAN F700_13079 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		Result = (EIF_BOOLEAN) (arg1 >= ti4_1);
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.set_content */
void F700_13080 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_keys */
void F700_13082 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_deleted_marks */
void F700_13083 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_indexes_map */
void F700_13084 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.internal_search */
void F700_13088 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = F700_13015(Current, arg1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc10 + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)loc9 + (loc4));
				/* END INLINED CODE */
				loc12 = ti4_2;
				if (F700_13021(Current, loc12, arg1)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
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
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) loc5;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) loc7;
	RTLE;
}

/* {HASH_TABLE}.search_for_insertion */
void F700_13089 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = F700_13015(Current, arg1);
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
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) loc5;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) loc7;
	RTLE;
}

/* {HASH_TABLE}.set_conflict */
void F700_13094 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {HASH_TABLE}.add_space */
void F700_13107 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
	F700_13002(Current, (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L))));
}

/* {HASH_TABLE}.collection_extend */
void F700_13109 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit580 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

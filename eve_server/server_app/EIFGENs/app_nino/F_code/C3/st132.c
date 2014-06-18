/*
 * Code for class STRING_32_SEARCHER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st132.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_32_SEARCHER}.max_code_point_value */
EIF_INTEGER_32 F173_8388 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2000L);
}

/* {STRING_32_SEARCHER}.substring_index_with_deltas */
EIF_INTEGER_32 F173_8389 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc8);
	RTLR(3,loc7);
	RTLR(4,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
		if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
			RTLE;
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg2)-886])(RTCV(arg2));
		loc8 = *(EIF_REFERENCE *)(RTCV(arg1) + O15146[Dtype(arg1)-886]);
		loc9 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15147[Dtype(arg1)-886])(RTCV(arg1));
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 + loc9);
		loc7 = *(EIF_REFERENCE *)(Current);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L)) + loc9);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) > loc3)) break;
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				if ((EIF_BOOLEAN)(loc2 == loc4)) break;
				/* INLINED CODE (SPECIAL.item) */
				tw2 = *((EIF_CHARACTER_32 *)loc8 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc2) - ((EIF_INTEGER_32) 1L))));
				/* END INLINED CODE */
				tw1 = tw2;
				tu4_1 = (EIF_NATURAL_32) tw1;
				tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg2)-887])(RTCV(arg2), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(tu4_1 != tu4_2)) {
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
				loc2++;
			}
			if (loc5) {
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc9);
				loc1 = (EIF_INTEGER_32) loc3;
			} else {
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) <= arg4)) {
					/* INLINED CODE (SPECIAL.item) */
					tw2 = *((EIF_CHARACTER_32 *)loc8 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L))));
					/* END INLINED CODE */
					tw1 = tw2;
					loc6 = (EIF_INTEGER_32) (tw1);
					if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 2000L))) {
						loc1++;
					} else {
						/* INLINED CODE (SPECIAL.item) */
						ti4_2 = *((EIF_INTEGER_32 *)loc7 + (loc6));
						/* END INLINED CODE */
						ti4_1 = ti4_2;
						loc1 += ti4_1;
					}
				} else {
					loc1++;
				}
			}
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit132 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

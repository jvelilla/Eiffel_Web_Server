/*
 * Code for class STRING_SEARCHER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st131.h"
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

/* {STRING_SEARCHER}.make */
void F172_8375 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R8156[Dtype(Current)-172])(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {954,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STRING_SEARCHER}.initialize_deltas */
void F172_8376 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	tr1 = *(EIF_REFERENCE *)(Current);
	F172_8385(Current, arg1, ti4_1, tr1);
	RTLE;
}

/* {STRING_SEARCHER}.substring_index */
EIF_INTEGER_32 F172_8379 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
		if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
			RTLE;
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg2)-886])(RTCV(arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTLE;
			return (EIF_INTEGER_32) arg3;
		} else {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg2)-886])(RTCV(arg2));
			if ((EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 - arg3) + ((EIF_INTEGER_32) 1L)))) {
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg2)-886])(RTCV(arg2));
				tr1 = *(EIF_REFERENCE *)(Current);
				F172_8385(Current, arg2, ti4_1, tr1);
				RTLE;
				return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R8158[Dtype(Current)-172])(Current, arg1, arg2, arg3, arg4);
			}
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {STRING_SEARCHER}.substring_index_list_with_deltas */
EIF_REFERENCE F172_8381 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R8158[dtype-172])(Current, arg1, arg2, arg3, arg4);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg2)-886])(RTCV(arg2));
		{
			static EIF_TYPE_INDEX typarr0[] = {803,993,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0, 803, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (arg4 - arg3),((EIF_INTEGER_32) 3L));
		ti4_1 = eif_max_int32 (((EIF_INTEGER_32) (((EIF_INTEGER_32) (ti4_1 / (EIF_INTEGER_32) (loc2 + loc1))) / ((EIF_INTEGER_32) 4L))),((EIF_INTEGER_32) 2L));
		F804_12632(RTCV(tr1), ti4_1);
		Result = (EIF_REFERENCE) tr1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			F804_12672(RTCV(Result), loc2);
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R8158[dtype-172])(Current, arg1, arg2, (EIF_INTEGER_32) (loc2 + loc1), arg4);
		}
	}
	RTLE;
	return Result;
}

/* {STRING_SEARCHER}.deltas */
EIF_REFERENCE F172_8383 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {STRING_SEARCHER}.internal_initialize_deltas */
void F172_8385 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R8156[dtype-172])(Current);
	F955_18842(RTCV(arg3), (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), ti4_1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15029[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
		loc2 = (EIF_INTEGER_32) tu4_1;
		if ((EIF_BOOLEAN) (loc2 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R8156[dtype-172])(Current))) {
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_INTEGER_32 *)arg3 + (loc2)) = (EIF_INTEGER_32) (arg2 - loc1);
			/* END INLINED CODE */
			;
		}
		loc1++;
	}
	RTLE;
}

void EIF_Minit131 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

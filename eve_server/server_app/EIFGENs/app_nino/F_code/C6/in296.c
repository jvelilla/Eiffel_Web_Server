/*
 * Code for class INTEGER_INTERVAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in296.h"
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

/* {INTEGER_INTERVAL}.make */
void F721_12254 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) arg2;
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.lower */
EIF_INTEGER_32 F721_12257 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_);
}

/* {INTEGER_INTERVAL}.upper */
EIF_INTEGER_32 F721_12259 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_);
}

/* {INTEGER_INTERVAL}.item */
EIF_INTEGER_32 F721_12260 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_INTEGER_32) arg1;
}

/* {INTEGER_INTERVAL}.valid_index */
EIF_BOOLEAN F721_12263 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_)) {
		tb1 = (EIF_BOOLEAN) (arg1 <= F721_12259(Current));
	}
	if (tb1) {
		tb1 = '\01';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_)) {
			tb1 = (EIF_BOOLEAN) (arg1 >= F721_12257(Current));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.capacity */
EIF_INTEGER_32 F721_12265 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	RTLE;
	return (EIF_INTEGER_32) F721_12266(Current);
}

/* {INTEGER_INTERVAL}.count */
EIF_INTEGER_32 F721_12266 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) && *(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_))) {
		Result = F721_12259(Current);
		ti4_1 = F721_12257(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ti4_1) + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.index_set */
EIF_REFERENCE F721_12267 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

/* {INTEGER_INTERVAL}.is_equal */
EIF_BOOLEAN F721_12268 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	Result = '\0';
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_)) {
		tb2 = '\0';
		tb3 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_1_);
		if (tb3) {
			ti4_1 = F721_12257(RTCV(arg1));
			tb2 = (EIF_BOOLEAN)(F721_12257(Current) == ti4_1);
		}
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = '\01';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_)) {
			tb2 = '\0';
			tb3 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_2_);
			if (tb3) {
				ti4_1 = F721_12259(RTCV(arg1));
				tb2 = (EIF_BOOLEAN)(F721_12259(Current) == ti4_1);
			}
			tb1 = tb2;
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.extendible */
EIF_BOOLEAN F721_12270 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {INTEGER_INTERVAL}.extend */
void F721_12272 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < F721_12257(Current))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) arg1;
	} else {
		if ((EIF_BOOLEAN) (arg1 > F721_12259(Current))) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) arg1;
		}
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.resize */
void F721_12274 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F721_12257(Current);
	ti4_1 = eif_min_int32 (arg1,ti4_1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_1_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F721_12259(Current);
	ti4_1 = eif_max_int32 (arg2,ti4_1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {INTEGER_INTERVAL}.grow */
void F721_12276 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (F721_12265(Current) < arg1)) {
		ti4_1 = F721_12257(Current);
		ti4_2 = F721_12257(Current);
		F721_12274(Current, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg1) - ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.as_array */
EIF_REFERENCE F721_12279 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc1 = F721_12257(Current);
	loc2 = F721_12259(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {722,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 722, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F723_12305(RTCV(tr1), ((EIF_INTEGER_32) 0L), loc1, loc2);
	Result = (EIF_REFERENCE) tr1;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		F723_12330(RTCV(Result), loc1, loc1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.linear_representation */
EIF_REFERENCE F721_12281 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = F723_12357(RTCV(F721_12279(Current)));
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.copy */
void F721_12282 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
	}
	RTLE;
}

void EIF_Minit296 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

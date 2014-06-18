/*
 * Code for class WEL_STRUCTURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we329.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_STRUCTURE}.make */
void F591_14797 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
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
	tp1 = *(EIF_POINTER *)(Current + O12638[dtype-588]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R12992[dtype-591])(Current);
	tp1 = calloc((size_t)((EIF_INTEGER_32) 1L), (size_t) ti4_1);
	*(EIF_POINTER *)(Current + O12638[dtype-588]) = (EIF_POINTER) tp1;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12638[dtype-588]) == loc1)) {
		tr1 = RTLNS(227, 227, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		F228_9359(RTCV(tr1), tr2);
	}
	*(EIF_BOOLEAN *)(Current + O12639[dtype-588]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {WEL_STRUCTURE}.copy */
void F591_14798 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		tb1 = '\01';
		tb2 = '\01';
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O12638[Dtype(arg1)-588]);
		if (!(EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12638[dtype-588]) == tp1)) {
			tb2 = *(EIF_BOOLEAN *)(Current + O12639[dtype-588]);
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12638[dtype-588]) == loc1);
		}
		if (tb1) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R12988[dtype-590])(Current);
		}
		tp1 = *(EIF_POINTER *)(Current + O12638[dtype-588]);
		tp2 = *(EIF_POINTER *)(RTCV(arg1) + O12638[Dtype(arg1)-588]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R12992[dtype-591])(Current);
		memcpy((void *)tp1, (const void *) tp2, (size_t) ti4_1);
	}
	RTLE;
}

/* {WEL_STRUCTURE}.is_equal */
EIF_BOOLEAN F591_14799 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12638[dtype-588]);
	tp2 = *(EIF_POINTER *)(RTCV(arg1) + O12638[Dtype(arg1)-588]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R12992[dtype-591])(Current);
	tr1 = RTLNS(865, 865, _OBJSIZ_0_0_0_0_0_1_0_0_);
	*(EIF_POINTER *)tr1 = tp1;
	
	Result = F834_16925(RTCV(tr1), tp2, ti4_1);
	RTLE;
	return Result;
}

/* {WEL_STRUCTURE}.destroy_item */
void F591_14804 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12638[dtype-588]) != loc1)) {
		tp1 = *(EIF_POINTER *)(Current + O12638[dtype-588]);
		free(tp1);
		*(EIF_POINTER *)(Current + O12638[dtype-588]) = (EIF_POINTER) loc1;
	}
	RTLE;
}

void EIF_Minit329 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

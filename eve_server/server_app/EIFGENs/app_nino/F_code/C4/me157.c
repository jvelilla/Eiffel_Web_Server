/*
 * Code for class MEMORY_STRUCTURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "me157.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MEMORY_STRUCTURE}.make */
void F67_8975 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_) = (EIF_POINTER) loc1;
	tr1 = RTLNSMART(eif_non_attached_type(583));
	ti4_1 = F1022_20071(Current);
	F584_13499(RTCV(tr1), ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {MEMORY_STRUCTURE}.item */
EIF_POINTER F67_8978 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTLE;
		return (EIF_POINTER) *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	} else {
		loc1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
			RTLE;
			return (EIF_POINTER) tp1;
		}
	}
	RTLE;
	return (EIF_POINTER) 0;
}

/* {MEMORY_STRUCTURE}.managed_pointer */
EIF_REFERENCE F67_8982 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit157 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

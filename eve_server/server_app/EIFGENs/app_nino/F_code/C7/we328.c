/*
 * Code for class WEL_DLL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we328.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F9_3730
static int inline_F9_3730 (EIF_POINTER arg1)
{
	return (BOOL) FreeLibrary ((HMODULE) arg1);
	;
}
#define INLINE_F9_3730
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_DLL}.destroy_item */
void F590_14479 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_);
		loc2 = EIF_TEST (inline_F9_3730(tp1));
	}
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_) = (EIF_POINTER) loc1;
	RTLE;
}

void EIF_Minit328 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

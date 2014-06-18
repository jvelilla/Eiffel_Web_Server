/*
 * Code for class WEL_PIPE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we250.h"
#include <winbase.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PIPE}.make */
void F562_11251 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(593));
	F594_16546(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	F594_16548(RTCV(loc1), (EIF_BOOLEAN) 1);
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_0_0_0_);
	tb1 = (EIF_BOOLEAN) EIF_TEST(CreatePipe(((PHANDLE) (EIF_POINTER *) &(*(EIF_POINTER *)(Current+ _PTROFF_2_5_0_2_0_0_))), ((PHANDLE) (EIF_POINTER *) &(*(EIF_POINTER *)(Current+ _PTROFF_2_5_0_2_0_1_))), ((LPSECURITY_ATTRIBUTES) tp1), ((DWORD) ((EIF_INTEGER_32) 0L))));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) tb1;
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	RTLE;
}

/* {WEL_PIPE}.security_attributes */
EIF_REFERENCE F562_11273 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WEL_PIPE}.cwin_create_pipe */
EIF_BOOLEAN F562_11283 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(CreatePipe(((PHANDLE) arg1), ((PHANDLE) arg2), ((LPSECURITY_ATTRIBUTES) arg3), ((DWORD) arg4)));
	return Result;
}

void EIF_Minit250 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

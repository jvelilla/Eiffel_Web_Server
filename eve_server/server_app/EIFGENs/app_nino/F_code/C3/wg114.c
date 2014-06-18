/*
 * Code for class WGI_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg114.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_RESPONSE}.push */
void F154_8173 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_));
		;
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R7994[Dtype(Current)-154])(Current);
	RTLE;
}

/* {WGI_RESPONSE}.post_commit_action */
EIF_REFERENCE F154_8175 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WGI_RESPONSE}.set_post_commit_action */
void F154_8176 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

void EIF_Minit114 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

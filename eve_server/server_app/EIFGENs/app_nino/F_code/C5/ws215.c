/*
 * Code for class WSF_LAUNCHABLE_SERVICE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws215.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_LAUNCHABLE_SERVICE}.make_and_launch */
void F235_9451 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9068[Dtype(Current)-234])(Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	F237_10162(Current, Current, tr1);
	RTLE;
}

/* {WSF_LAUNCHABLE_SERVICE}.initialize */
void F235_9452 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WSF_LAUNCHABLE_SERVICE}.service_options */
EIF_REFERENCE F235_9453 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_LAUNCHABLE_SERVICE}.set_service_option */
void F235_9455 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(680));
		F681_12231(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	}
	tr1 = RTCCL(arg2);
	F681_12238(RTCV(loc1), arg1, tr1);
	RTLE;
}

void EIF_Minit215 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class WSF_TO_WGI_SERVICE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws80.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_TO_WGI_SERVICE}.make_from_service */
void F112_7089 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WSF_TO_WGI_SERVICE}.service */
EIF_REFERENCE F112_7090 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_TO_WGI_SERVICE}.execute */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F112_7091 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTXD;
	
	RTXI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLR(5,Current);
	RTLR(6,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	tr1 = RTLNS(115, 115, _OBJSIZ_3_0_0_1_0_0_1_0_);
	F116_8554(RTCV(tr1), arg2);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(901, 901, _OBJSIZ_20_2_0_0_0_0_1_0_);
	F902_18560(RTCV(tr1), arg1);
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R9062[Dtype(tr1)-233])(RTCV(tr1), loc2, loc1);
	F902_18563(RTCV(loc2));
	RTE_E
	RTXS(7);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb1 = '\01';
		tb2 = F116_8559(RTCV(loc1));
		if (!tb2) {
			tb2 = F116_8560(RTCV(loc1));
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN) !tb1) {
			F116_8564(RTCV(loc1), ((EIF_INTEGER_32) 500L));
		}
		F116_8586(RTCV(loc1));
	}
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		F902_18563(RTCV(loc2));
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit80 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

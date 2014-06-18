/*
 * Code for class WSF_URI_TEMPLATE_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws242.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_URI_TEMPLATE_HANDLER}.new_mapping */
EIF_REFERENCE F515_11072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(971, 971, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F971_18878(RTCV(tr1), arg1, Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit242 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

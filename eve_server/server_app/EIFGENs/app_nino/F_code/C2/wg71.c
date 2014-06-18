/*
 * Code for class WGI_REQUEST
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg71.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_REQUEST}.meta_string_variable */
EIF_REFERENCE F98_6850 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	tr1 = F99_6901(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F889_17176(RTCV(loc1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

void EIF_Minit71 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

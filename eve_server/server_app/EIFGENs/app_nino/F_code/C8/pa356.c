/*
 * Code for class PATH_NAME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pa356.h"
#include "eif_path_name.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PATH_NAME}.is_equal */
EIF_BOOLEAN F894_17461 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			loc1 = *(EIF_REFERENCE *)(RTCV(arg1));
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(eif_path_name_compare((EIF_CHARACTER*) *(EIF_REFERENCE *)(Current), (EIF_CHARACTER*) loc1, (EIF_INTEGER) ti4_1));
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {PATH_NAME}.eif_path_name_compare */
EIF_BOOLEAN F894_17475 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_path_name_compare((EIF_CHARACTER*) arg1, (EIF_CHARACTER*) arg2, (EIF_INTEGER) arg3));
	
	return Result;
}

void EIF_Minit356 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

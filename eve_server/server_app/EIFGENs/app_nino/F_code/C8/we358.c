/*
 * Code for class WEL_BIT_OPERATIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we358.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_BIT_OPERATIONS}.set_flag */
EIF_INTEGER_32 F71_17494 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = eif_bit_or(arg1,arg2);
	return (EIF_INTEGER_32) ti4_1;
}

void EIF_Minit358 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

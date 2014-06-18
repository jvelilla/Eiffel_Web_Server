/*
 * Code for class RAW_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ra324.h"
#include "eif_file.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RAW_FILE}.file_open */
EIF_POINTER F603_14312 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_file_binary_open((EIF_FILENAME) arg1, (int) arg2);
	
	return Result;
}

void EIF_Minit324 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class OPERATING_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "op40.h"
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

/* {OPERATING_ENVIRONMENT}.case_sensitive_path_names */
EIF_BOOLEAN F57_4110 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names());
	
	return Result;
}

void EIF_Minit40 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

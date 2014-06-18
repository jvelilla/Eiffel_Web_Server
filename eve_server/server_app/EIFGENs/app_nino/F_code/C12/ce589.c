/*
 * Code for class CELL [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce589.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CELL}.item */
EIF_BOOLEAN F122_10163 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O9580[Dtype(Current) - 120]);
}


/* {CELL}.put */
void F122_10164 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O9580[Dtype(Current)-120]) = (EIF_BOOLEAN) arg1;
}

/* {CELL}.replace */
void F122_10165 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O9580[Dtype(Current)-120]) = (EIF_BOOLEAN) arg1;
}

void EIF_Minit589 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

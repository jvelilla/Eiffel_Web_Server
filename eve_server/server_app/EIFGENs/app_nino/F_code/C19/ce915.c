/*
 * Code for class CELL [NATURAL_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce915.h"

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
EIF_NATURAL_8 F124_10163 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_8 *)(Current + O9580[Dtype(Current) - 120]);
}


/* {CELL}.put */
void F124_10164 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_8 *)(Current + O9580[Dtype(Current)-120]) = (EIF_NATURAL_8) arg1;
}

/* {CELL}.replace */
void F124_10165 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_8 *)(Current + O9580[Dtype(Current)-120]) = (EIF_NATURAL_8) arg1;
}

void EIF_Minit915 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

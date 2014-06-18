/*
 * Code for class CELL [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce1060.h"

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
EIF_INTEGER_32 F126_10163 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O9580[Dtype(Current) - 120]);
}


/* {CELL}.put */
void F126_10164 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O9580[Dtype(Current)-120]) = (EIF_INTEGER_32) arg1;
}

/* {CELL}.replace */
void F126_10165 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O9580[Dtype(Current)-120]) = (EIF_INTEGER_32) arg1;
}

void EIF_Minit1060 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

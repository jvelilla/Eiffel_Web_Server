/*
 * Code for class CELL [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce454.h"

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
EIF_REFERENCE F121_10163 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O9580[Dtype(Current) - 120]);
}


/* {CELL}.put */
void F121_10164 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O9580[Dtype(Current)-120]) = (EIF_REFERENCE) RTCCL(arg1);
	RTLE;
}

/* {CELL}.replace */
void F121_10165 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O9580[Dtype(Current)-120]) = (EIF_REFERENCE) RTCCL(arg1);
	RTLE;
}

void EIF_Minit454 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

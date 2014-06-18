/*
 * Code for class LINKABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li497.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKABLE}.right */
EIF_REFERENCE F127_10386 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O9690[Dtype(Current) - 126]);
}


/* {LINKABLE}.put_right */
void F127_10387 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O9690[Dtype(Current)-126]) = (EIF_REFERENCE) arg1;
}

/* {LINKABLE}.forget_right */
void F127_10388 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + O9690[Dtype(Current)-126]) = (EIF_REFERENCE) NULL;
}

void EIF_Minit497 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

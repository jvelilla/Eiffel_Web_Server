/*
 * Code for class EXTERNAL_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex313.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXTERNAL_OBJECT}.make_from_external */
void F586_13646 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) arg1;
}

/* {EXTERNAL_OBJECT}.dispose */
void F586_13647 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) != tp1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R12199[Dtype(Current)-586])(Current, *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_));
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) tp2;
	}
	RTLE;
}

void EIF_Minit313 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

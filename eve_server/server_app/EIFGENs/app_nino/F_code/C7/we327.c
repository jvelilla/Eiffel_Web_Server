/*
 * Code for class WEL_ANY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we327.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_ANY}.exists */
EIF_BOOLEAN F589_14401 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12638[Dtype(Current)-588]);
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp3);
	RTLE;
	return Result;
}

/* {WEL_ANY}.dispose */
void F589_14406 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F589_14401(Current)) {
		tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O12639[dtype-588]);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R12645[dtype-589])(Current);
	}
	RTLE;
}

void EIF_Minit327 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

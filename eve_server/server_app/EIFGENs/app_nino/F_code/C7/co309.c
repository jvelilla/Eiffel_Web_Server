/*
 * Code for class CONDITION_VARIABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co309.h"
#include "eif_threads.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CONDITION_VARIABLE}.is_set */
EIF_BOOLEAN F582_13469 (EIF_REFERENCE Current)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
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

/* {CONDITION_VARIABLE}.destroy */
void F582_13474 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	eif_thr_cond_destroy(tp1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) tp2;
	RTLE;
}

/* {CONDITION_VARIABLE}.dispose */
void F582_13476 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F582_13469(Current)) {
		F582_13474(Current);
	}
	RTLE;
}

/* {CONDITION_VARIABLE}.eif_thr_cond_destroy */
void F582_13482 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_thr_cond_destroy(arg1);
	
}

void EIF_Minit309 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

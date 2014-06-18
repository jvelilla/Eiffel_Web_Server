/*
 * Code for class MUTEX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mu310.h"
#include "eif_threads.h"
#include <eif_threads.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F143_7948
static EIF_POINTER inline_F143_7948 (void)
{
	return eif_thr_thread_id();
	;
}
#define INLINE_F143_7948
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MUTEX}.make */
void F583_13483 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) eif_thr_mutex_create();
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {MUTEX}.is_set */
EIF_BOOLEAN F583_13485 (EIF_REFERENCE Current)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
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

/* {MUTEX}.lock */
void F583_13486 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	F583_13495(Current, tp1);
	tp1 = inline_F143_7948();
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {MUTEX}.unlock */
void F583_13488 (EIF_REFERENCE Current)
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
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) tp2;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	eif_thr_mutex_unlock(tp1);
	RTLE;
}

/* {MUTEX}.destroy */
void F583_13489 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	eif_thr_mutex_destroy(tp1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_) = (EIF_POINTER) tp2;
	RTLE;
}

/* {MUTEX}.dispose */
void F583_13492 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F583_13485(Current)) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) == loc1)) {
			tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) == inline_F143_7948());
		}
		if (tb1) {
			F583_13489(Current);
		}
	}
	RTLE;
}

/* {MUTEX}.eif_thr_mutex_create */
EIF_POINTER F583_13494 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_thr_mutex_create();
	
	return Result;
}

/* {MUTEX}.eif_thr_mutex_lock */
void F583_13495 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	EIF_ENTER_C;eif_thr_mutex_lock(arg1);
	
	EIF_EXIT_C;
	RTGC;
}

/* {MUTEX}.eif_thr_mutex_unlock */
void F583_13496 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_thr_mutex_unlock(arg1);
	
}

/* {MUTEX}.eif_thr_mutex_destroy */
void F583_13498 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_thr_mutex_destroy(arg1);
	
}

void EIF_Minit310 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

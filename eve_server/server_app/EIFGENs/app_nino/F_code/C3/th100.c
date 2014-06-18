/*
 * Code for class THREAD_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "th100.h"
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

/* {THREAD_ENVIRONMENT}.current_thread_id */
EIF_POINTER F143_7948 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F143_7948 ();
	return Result;
}

void EIF_Minit100 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

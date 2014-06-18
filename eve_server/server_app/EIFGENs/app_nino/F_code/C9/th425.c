/*
 * Code for class THREAD_ATTRIBUTES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "th425.h"
#include "eif_threads.h"
#include "eif_eiffel.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1022_20067
static void inline_F1022_20067 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	#ifdef EIF_THREADS
	((EIF_THR_ATTR_TYPE *) arg1)->priority = arg2;
#endif
	;
}
#define INLINE_F1022_20067
#endif
#ifndef INLINE_F1022_20071
static EIF_INTEGER_32 inline_F1022_20071 (void)
{
	#ifdef EIF_THREADS
	return sizeof(EIF_THR_ATTR_TYPE);
#else
	return 1L;
#endif
	;
}
#define INLINE_F1022_20071
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {THREAD_ATTRIBUTES}.make */
void F1022_20059 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F67_8975(Current);
	ti4_1 = (EIF_INTEGER_32) eif_thr_default_priority();
	F1022_20060(Current, ti4_1);
	RTLE;
}

/* {THREAD_ATTRIBUTES}.set_priority */
void F1022_20060 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F67_8978(Current);
	inline_F1022_20067(tp1, arg1);
	RTLE;
}

/* {THREAD_ATTRIBUTES}.default_priority */
EIF_INTEGER_32 F1022_20064 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_thr_default_priority();
	
	return Result;
}

/* {THREAD_ATTRIBUTES}.c_set_priority */
void F1022_20067 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F1022_20067 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {THREAD_ATTRIBUTES}.structure_size */
EIF_INTEGER_32 F1022_20071 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F1022_20071 ();
	return Result;
}

void EIF_Minit425 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

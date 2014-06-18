/*
 * Code for class NATIVE_STRING_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na271.h"
#include "eif_eiffel.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F567_11660
static EIF_NATURAL_64 inline_F567_11660 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
				return (EIF_NATURAL_64) wcslen(arg1) * sizeof(wchar_t);
			#else
				return (EIF_NATURAL_64) strlen(arg1) * sizeof(char);
			#endif
	;
}
#define INLINE_F567_11660
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATIVE_STRING_HANDLER}.pointer_length_in_bytes */
EIF_INTEGER_32 F567_11659 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	
	
	RTGC;
	loc1 = inline_F567_11660(arg1);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	if ((EIF_BOOLEAN) (loc1 <= tu8_1)) {
		ti4_1 = (EIF_INTEGER_32) loc1;
		return (EIF_INTEGER_32) ti4_1;
	} else {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483647L);
	}/* NOTREACHED */
	
}

/* {NATIVE_STRING_HANDLER}.c_pointer_length_in_bytes */
EIF_NATURAL_64 F567_11660 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	
	
	Result = inline_F567_11660 ((EIF_POINTER) arg1);
	return Result;
}

void EIF_Minit271 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

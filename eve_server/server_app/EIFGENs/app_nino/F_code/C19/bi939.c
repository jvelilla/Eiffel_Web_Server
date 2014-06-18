/*
 * Code for class BILINEAR [CHARACTER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi939.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BILINEAR}.off */
EIF_BOOLEAN F295_9903 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F778_12452(Current)) {
		Result = F778_12451(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F295_9906 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F778_12452(Current)) {
		tb1 = (EIF_BOOLEAN) !F327_9603(Current);
	}
	if (tb1) {
		F814_12664(Current);
	}
	F280_9731(Current, arg1);
	RTLE;
}

void EIF_Minit939 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

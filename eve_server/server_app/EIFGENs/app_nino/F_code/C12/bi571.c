/*
 * Code for class BILINEAR [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi571.h"

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
EIF_BOOLEAN F286_9903 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F769_12452(Current)) {
		Result = F769_12451(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F286_9906 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F769_12452(Current)) {
		tb1 = (EIF_BOOLEAN) !F318_9603(Current);
	}
	if (tb1) {
		F805_12664(Current);
	}
	F271_9731(Current, arg1);
	RTLE;
}

void EIF_Minit571 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

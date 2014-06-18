/*
 * Code for class BILINEAR [POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi755.h"

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
EIF_BOOLEAN F291_9903 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F774_12452(Current)) {
		Result = F774_12451(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F291_9906 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F774_12452(Current)) {
		tb1 = (EIF_BOOLEAN) !F323_9603(Current);
	}
	if (tb1) {
		F810_12664(Current);
	}
	F276_9731(Current, arg1);
	RTLE;
}

void EIF_Minit755 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

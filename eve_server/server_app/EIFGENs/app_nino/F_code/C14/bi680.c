/*
 * Code for class BILINEAR [INTEGER_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi680.h"

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
EIF_BOOLEAN F289_9903 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F772_12452(Current)) {
		Result = F772_12451(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F289_9906 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F772_12452(Current)) {
		tb1 = (EIF_BOOLEAN) !F321_9603(Current);
	}
	if (tb1) {
		F808_12664(Current);
	}
	F274_9731(Current, arg1);
	RTLE;
}

void EIF_Minit680 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class BILINEAR [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi539.h"

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
EIF_BOOLEAN F285_9903 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9385[dtype-601])(Current)) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[dtype-459])(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F285_9906 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9385[dtype-601])(Current)) {
		tb1 = (EIF_BOOLEAN) !F317_9603(Current);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[dtype-459])(Current);
	}
	F270_9731(Current, arg1);
	RTLE;
}

void EIF_Minit539 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
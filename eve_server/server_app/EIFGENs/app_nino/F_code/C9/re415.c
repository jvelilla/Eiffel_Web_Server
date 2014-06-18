/*
 * Code for class reference REAL_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re415.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_32}.is_less */
EIF_BOOLEAN F1011_19762 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1011, 1011, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	Result = F1010_19732(Current, tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.truncated_to_integer */
EIF_INTEGER_32 F1011_19766 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1010_19743(Current);
}

/* {REAL_32}.out */
EIF_REFERENCE F1011_19778 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F1010_19760(Current);
}

void EIF_Minit415 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

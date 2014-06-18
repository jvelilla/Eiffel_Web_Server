/*
 * Code for class WSF_SERVICE_LAUNCHER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws81.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_SERVICE_LAUNCHER}.make */
void F113_7092 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	
	RTGC;
	F112_7089(Current, arg1);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	F114_7102(Current);
	RTLE;
}

/* {WSF_SERVICE_LAUNCHER}.make_and_launch */
void F113_7093 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	
	RTGC;
	F113_7092(Current, arg1, arg2);
	F114_7103(Current);
	RTLE;
}

/* {WSF_SERVICE_LAUNCHER}.options */
EIF_REFERENCE F113_7101 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit81 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

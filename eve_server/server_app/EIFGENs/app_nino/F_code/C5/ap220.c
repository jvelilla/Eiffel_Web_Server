/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ap220.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {APPLICATION}.initialize */
void F237_10161 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTMS_EX_H("port",4,1886351988);
	tr2 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr2 = ((EIF_INTEGER_32) 9090L);
	F235_9455(Current, tr1, tr2);
	F236_10110(Current);
	RTLE;
}

/* {APPLICATION}.launch */
void F237_10162 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	
	RTGC;
	tr1 = RTLNS(114, 114, _OBJSIZ_7_2_0_1_0_0_0_0_);
	F113_7093(RTCV(tr1), arg1, arg2);
	loc1 = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit220 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

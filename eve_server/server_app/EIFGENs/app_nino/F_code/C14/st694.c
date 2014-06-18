/*
 * Code for class STACK [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st694.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STACK}.fill */
void F457_9680 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {817,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y9214,Y9214_gen_type,Dftype(Current),238);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 817, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11507[Dtype(tr1)-802])(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	loc1 = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(arg1)-459])(RTCV(arg1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9287[Dtype(arg1)-268])(RTCV(arg1));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9286[Dtype(arg1)-459])(RTCV(arg1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(loc1)-459])(RTCV(loc1), tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(arg1)-459])(RTCV(arg1));
	}
	for (;;) {
		tb2 = '\01';
		tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9207[Dtype(loc1)-313])(RTCV(loc1));
		if (!tb3) {
			tb2 = (EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9226[dtype-459])(Current);
		}
		if (tb2) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(loc1)-459])(RTCV(loc1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[dtype-459])(Current, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9247[Dtype(loc1)-736])(RTCV(loc1));
	}
	RTLE;
}

void EIF_Minit694 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

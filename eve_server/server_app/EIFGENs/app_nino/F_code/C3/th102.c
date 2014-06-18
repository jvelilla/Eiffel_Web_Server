/*
 * Code for class THREAD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "th102.h"
#include "eif_threads.h"
#include "../C3/th102.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {THREAD}.make */
void F145_7952 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(582));
	F583_13483(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O7805[Dtype(Current)-144]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {THREAD}.launch */
void F145_7956 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1021, 1021, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1022_20059(RTCV(tr1));
	F145_7957(Current, tr1);
	RTLE;
}

/* {THREAD}.launch_with_attributes */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F145_7957 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTCDT;
	RTXD;
	
	RTXI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	tr1 = *(EIF_REFERENCE *)(Current + O7805[dtype-144]);
	F583_13486(RTCV(tr1));
	if ((EIF_BOOLEAN) !F145_7961(Current)) {
		tr1 = RTOUCR(207,F145_7967,(Current));
		F122_10164(RTCV(tr1), (EIF_BOOLEAN) 0);
	} else {
		tp1 = F67_8978(RTCV(arg1));
		F145_7968(Current, Current, (EIF_POINTER) F145_7965, tp1);
		tp1 = (EIF_POINTER) eif_thr_last_thread();
		*(EIF_POINTER *)(Current + O7792[dtype-144]) = (EIF_POINTER) tp1;
		tr1 = RTOUCR(207,F145_7967,(Current));
		F122_10164(RTCV(tr1), (EIF_BOOLEAN) 1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O7805[dtype-144]);
	F583_13488(RTCV(tr1));
	RTE_E
	RTXS(4);
	tr1 = RTOUCR(207,F145_7967,(Current));
	F122_10164(RTCV(tr1), (EIF_BOOLEAN) 0);
	tr1 = *(EIF_REFERENCE *)(Current + O7805[dtype-144]);
	F583_13488(RTCV(tr1));
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {THREAD}.is_launchable */
EIF_BOOLEAN F145_7961 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + O7805[dtype-144]);
	tb2 = F583_13485(RTCV(tr1));
	if (tb2) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O7792[dtype-144]) == tp1);
	}
	if (tb1) {
		Result = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O7793[dtype-144]);
	}
	RTLE;
	return Result;
}

/* {THREAD}.join */
void F145_7963 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O7793[Dtype(Current)-144])) {
		F145_7969(Current, Current);
	}
	RTLE;
}

/* {THREAD}.join_with_timeout */
EIF_BOOLEAN F145_7964 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O7793[Dtype(Current)-144])) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) F145_7970(Current, Current, arg1);
	}/* NOTREACHED */
	
}

/* {THREAD}.thr_main */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F145_7965 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_POINTER  EIF_VOLATILE tp2;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTCDT;
	RTXD;
	
	RTXI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	tr1 = *(EIF_REFERENCE *)(Current + O7805[dtype-144]);
	F583_13486(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O7805[dtype-144]);
	F583_13488(RTCV(tr1));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R7794[dtype-572])(Current);
	tr1 = *(EIF_REFERENCE *)(Current + O7805[dtype-144]);
	F583_13486(RTCV(tr1));
	*(EIF_BOOLEAN *)(Current + O7793[dtype-144]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O7792[dtype-144]) = (EIF_POINTER) tp2;
	tr1 = *(EIF_REFERENCE *)(Current + O7805[dtype-144]);
	F583_13488(RTCV(tr1));
	RTE_E
	RTXS(3);
	tr1 = *(EIF_REFERENCE *)(Current + O7805[dtype-144]);
	F583_13486(RTCV(tr1));
	*(EIF_BOOLEAN *)(Current + O7793[dtype-144]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O7792[dtype-144]) = (EIF_POINTER) tp2;
	tr1 = *(EIF_REFERENCE *)(Current + O7805[dtype-144]);
	F583_13488(RTCV(tr1));
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {THREAD}.launch_mutex */
EIF_REFERENCE F145_7966 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O7805[Dtype(Current) - 144]);
}


/* {THREAD}.is_last_launch_successful_cell */
static EIF_REFERENCE F145_7967_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(207)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {121,832,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 121, _OBJSIZ_0_1_0_0_0_0_0_0_);
	}
	F122_10164(RTCV(tr1), (EIF_BOOLEAN) 0);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F145_7967 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(207,F145_7967_body,(Current));
}

/* {THREAD}.create_thread_with_attr */
void F145_7968 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	{
		EIF_OBJECT larg1 = RTHP(arg1);
		EIF_POINTER larg2 = arg2;
		EIF_POINTER larg3 = arg3;eif_thr_create_with_attr((EIF_OBJECT) larg1, (EIF_PROCEDURE) larg2, (EIF_POINTER) larg3);
		
		RTHF(1);
	}
	RTLE;
}

/* {THREAD}.thread_wait */
void F145_7969 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	{
		EIF_OBJECT larg1 = RTHP(arg1);eif_thr_wait(larg1);
		
		RTHF(1);
	}
	RTLE;
}

/* {THREAD}.thread_wait_with_timeout */
EIF_BOOLEAN F145_7970 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_NATURAL_64 arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	{
		EIF_OBJECT larg1 = RTHP(arg1);
		EIF_NATURAL_64 larg2 = arg2;Result = (EIF_BOOLEAN) EIF_TEST(eif_thr_wait_with_timeout(larg1, larg2));
		
		RTHF(1);
	}
	RTLE;
	return Result;
}

/* {THREAD}.last_created_thread */
EIF_POINTER F145_7971 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_thr_last_thread();
	
	return Result;
}

void EIF_Minit102 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

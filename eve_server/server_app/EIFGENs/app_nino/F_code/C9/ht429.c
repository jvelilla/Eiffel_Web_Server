/*
 * Code for class HTTP_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht429.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_HANDLER}.make */
void F1026_20236 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_BOOLEAN *)(Current + O17486[Dtype(Current)-1025]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {HTTP_HANDLER}.log */
void F1026_20237 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = RTOUCR(0,F1_24,(Current));
	tr2 = F885_17049(RTCV(arg1));
	F58_4142(RTCV(tr1), tr2);
	F58_4161(RTCV(RTOUCR(0,F1_24,(Current))));
	RTLE;
}

/* {HTTP_HANDLER}.execute */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1026_20238 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTXD;
	
	RTXI(8);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,loc5);
	RTLR(7,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	*(EIF_BOOLEAN *)(Current + O17487[dtype-1025]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current + O17488[dtype-1025]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_BOOLEAN *)(Current + O17486[dtype-1025]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	loc2 = F1026_20248(Current);
	tb1 = '\0';
	tr1 = F1026_20247(Current);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tr1 = RTLNS(486, 486, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr1 = F487_9184(RTCV(tr1), loc3);
		loc4 = tr1;
		tb1 = EIF_TEST(loc4);
	}
	if (tb1) {
		tr1 = RTLNS(600, 600, _OBJSIZ_6_12_2_13_1_0_2_1_);
		F601_14044(RTCV(tr1), loc4, loc2);
		loc1 = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(600, 600, _OBJSIZ_6_12_2_13_1_0_2_1_);
		F600_14007(RTCV(tr1), loc2);
		loc1 = (EIF_REFERENCE) tr1;
	}
	tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_6_8_);
	if ((EIF_BOOLEAN) !tb1) {
		if (F1026_20245(Current)) {
			tr1 = RTMS_EX_H("Socket could not be bound on port ",34,603158816);
			tr2 = c_outi(loc2);
			tr1 = F893_17379(RTCV(tr1), tr2);
			F1026_20237(Current, tr1);
		}
	} else {
		loc2 = F599_13978(RTCV(loc1));
		ti4_1 = F1026_20249(Current);
		F600_14016(RTCV(loc1), ti4_1);
		if (F1026_20245(Current)) {
			tr1 = RTMS_EX_H("\012HTTP Connection Server ready on port ",38,665666848);
			tr2 = c_outi(loc2);
			tr1 = F893_17379(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H(" : http://localhost:",20,783838522);
			tr1 = F893_17379(RTCV(tr1), tr2);
			tr2 = c_outi(loc2);
			tr1 = F893_17379(RTCV(tr1), tr2);
			tr2 = RTMS_EX_H("/",1,47);
			tr1 = F893_17379(RTCV(tr1), tr2);
			F1026_20237(Current, tr1);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R17484[dtype-1025])(Current, loc2);
		for (;;) {
			if (*(EIF_BOOLEAN *)(Current + O17486[dtype-1025])) break;
			F600_14017(RTCV(loc1));
			if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O17486[dtype-1025])) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_5_);
				loc5 = tr1;
				if (EIF_TEST(loc5)) {
					F1026_20239(Current, loc5);
				}
			}
			tb1 = F1026_20251(Current);
			*(EIF_BOOLEAN *)(Current + O17486[dtype-1025]) = (EIF_BOOLEAN) tb1;
		}
		F597_13849(RTCV(loc1));
	}
	if (*(EIF_BOOLEAN *)(Current + O17487[dtype-1025])) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R17485[dtype-1025])(Current);
	}
	if (F1026_20245(Current)) {
		tr1 = RTMS_EX_H("HTTP Connection Server ends.",28,1935789358);
		F1026_20237(Current, tr1);
	}
	RTE_E
	RTXS(8);
	tr1 = RTMS_EX_H("HTTP Connection Server shutdown due to exception. Please relaunch manually.",75,1553659438);
	F1026_20237(Current, tr1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F597_13849(RTCV(loc1));
	}
	if (*(EIF_BOOLEAN *)(Current + O17487[dtype-1025])) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R17485[dtype-1025])(Current);
	}
	*(EIF_BOOLEAN *)(Current + O17486[dtype-1025]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {HTTP_HANDLER}.process_connection */
void F1026_20239 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	if (F1026_20245(Current)) {
		tr1 = RTMS_EX_H("Incoming connection...(socket:",30,1469912122);
		ti4_1 = F599_13970(RTCV(arg1));
		tr2 = c_outi(ti4_1);
		tr1 = F893_17379(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H(")",1,41);
		tr1 = F893_17379(RTCV(tr1), tr2);
		F1026_20237(Current, tr1);
	}
	F1027_20257(Current, arg1);
	F597_13849(RTCV(arg1));
	if (F1026_20245(Current)) {
		tr1 = RTMS_EX_H("connection completed...",23,1033656878);
		F1026_20237(Current, tr1);
	}
	RTLE;
}

/* {HTTP_HANDLER}.on_launched */
void F1026_20240 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O17487[dtype-1025]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_INTEGER_32 *)(Current + O17488[dtype-1025]) = (EIF_INTEGER_32) arg1;
	RTLE;
}

/* {HTTP_HANDLER}.on_stopped */
void F1026_20241 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O17487[Dtype(Current)-1025]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {HTTP_HANDLER}.is_verbose */
EIF_BOOLEAN F1026_20245 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = *(EIF_BOOLEAN *)(RTCV(F1026_20252(Current))+ _CHROFF_2_1_);
	RTLE;
	return Result;
}

/* {HTTP_HANDLER}.http_server_name */
EIF_REFERENCE F1026_20247 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(F1026_20252(Current)) + _REFACS_1_);
	RTLE;
	return Result;
}

/* {HTTP_HANDLER}.http_server_port */
EIF_INTEGER_32 F1026_20248 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(RTCV(F1026_20252(Current))+ _LNGOFF_2_2_0_0_);
	RTLE;
	return Result;
}

/* {HTTP_HANDLER}.max_tcp_clients */
EIF_INTEGER_32 F1026_20249 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(RTCV(F1026_20252(Current))+ _LNGOFF_2_2_0_1_);
	RTLE;
	return Result;
}

/* {HTTP_HANDLER}.server */
EIF_REFERENCE F1026_20250 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {HTTP_HANDLER}.stop_requested_on_server */
EIF_BOOLEAN F1026_20251 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_1_0_);
	RTLE;
	return Result;
}

/* {HTTP_HANDLER}.server_configuration */
EIF_REFERENCE F1026_20252 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_REFERENCE *)(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit429 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

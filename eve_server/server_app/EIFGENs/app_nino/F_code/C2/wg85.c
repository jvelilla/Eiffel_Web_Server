/*
 * Code for class WGI_NINO_CONNECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg85.h"
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

/* {WGI_NINO_CONNECTOR}.make */
void F118_7117 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	tr1 = RTLNS(10, 10, _OBJSIZ_2_2_0_4_0_0_0_0_);
	F11_3738(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(9));
	F10_3732(RTCV(tr1), loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {820,0xFFF9,1,823,116,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F821_12751(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {820,0xFFF9,1,823,116,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F821_12751(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WGI_NINO_CONNECTOR}.service */
EIF_REFERENCE F118_7121 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WGI_NINO_CONNECTOR}.server */
EIF_REFERENCE F118_7122 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WGI_NINO_CONNECTOR}.configuration */
EIF_REFERENCE F118_7123 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REFERENCE *)(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WGI_NINO_CONNECTOR}.base */
EIF_REFERENCE F118_7124 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WGI_NINO_CONNECTOR}.on_launched_actions */
EIF_REFERENCE F118_7127 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WGI_NINO_CONNECTOR}.on_stopped_actions */
EIF_REFERENCE F118_7128 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WGI_NINO_CONNECTOR}.on_launched */
void F118_7129 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_0_) = (EIF_INTEGER_32) arg1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = Dftype(Current);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	F821_12754(RTCV(tr1), tr2);
	RTLE;
}

/* {WGI_NINO_CONNECTOR}.on_stopped */
void F118_7130 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = Dftype(Current);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	F821_12754(RTCV(tr1), tr2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {WGI_NINO_CONNECTOR}.set_base */
void F118_7131 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {WGI_NINO_CONNECTOR}.launch */
void F118_7132 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,tr3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTLNS(1027, 1027, _OBJSIZ_9_3_0_1_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1028_20269(RTCV(tr1), tr2, Current);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = *(EIF_BOOLEAN *)(RTCV(F118_7123(Current))+ _CHROFF_2_1_);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tr1 = RTOUCR(29,F58_4115,(RTCV(RTOUCR(0,F1_24,(Current)))));
			tr2 = RTMS_EX_H("Base=",5,1635459389);
			tr2 = F893_17379(RTCV(tr2), loc2);
			tr3 = RTMS_EX_H("\012",1,10);
			tr2 = F893_17379(RTCV(tr2), tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R12244[Dtype(tr1)-601])(RTCV(tr1), tr2);
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F10_3733(RTCV(tr1), loc1);
	RTLE;
}

/* {WGI_NINO_CONNECTOR}.process_request */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F118_7133 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr4 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTXD;
	
	RTXI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,arg3);
	RTLR(5,Current);
	RTLR(6,loc2);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(9,arg2);
	RTLR(10,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc3) {
		tr1 = RTLNS(98, 98, _OBJSIZ_16_1_0_1_0_0_0_0_);
		tr2 = RTLNS(565, 565, _OBJSIZ_2_1_0_1_0_0_0_0_);
		F566_11353(RTCV(tr2), arg3);
		F99_6893(RTCV(tr1), arg1, tr2, Current);
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(155, 155, _OBJSIZ_4_3_0_1_0_0_0_0_);
		tr2 = RTLNS(164, 164, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F165_8312(RTCV(tr2), arg3);
		tr3 = RTLNS(79, 79, _OBJSIZ_2_0_0_0_0_0_0_0_);
		ti4_1 = F599_13970(RTCV(arg3));
		tr4 = c_outi(ti4_1);
		F80_6657(RTCV(tr3), tr4);
		F155_8191(RTCV(tr1), tr2, tr3);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTMS_EX_H("RAW_HEADER_DATA",15,198827841);
		F99_6903(RTCV(loc1), tr1, arg2);
		tr1 = *(EIF_REFERENCE *)(Current);
		F112_7091(RTCV(tr1), loc1, loc2);
		F154_8173(RTCV(loc2));
	}
	RTE_E
	RTXS(11);
	if ((EIF_BOOLEAN) !loc3) {
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit85 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

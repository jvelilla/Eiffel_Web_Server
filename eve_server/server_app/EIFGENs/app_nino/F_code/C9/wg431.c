/*
 * Code for class WGI_NINO_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg431.h"
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

/* {WGI_NINO_HANDLER}.make_with_callback */
void F1028_20269 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_2_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	F1027_20255(Current, arg1);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {WGI_NINO_HANDLER}.callback */
EIF_REFERENCE F1028_20270 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {WGI_NINO_HANDLER}.base */
EIF_REFERENCE F1028_20271 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {WGI_NINO_HANDLER}.on_launched */
void F1028_20272 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1026_20240(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F118_7129(RTCV(tr1), arg1);
	RTLE;
}

/* {WGI_NINO_HANDLER}.on_stopped */
void F1028_20273 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1026_20241(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F118_7130(RTCV(tr1));
	RTLE;
}

/* {WGI_NINO_HANDLER}.process_request */
void F1028_20275 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCFDT;
	RTLD;
	
	RTLI(22);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,loc9);
	RTLR(3,loc11);
	RTLR(4,tr1);
	RTLR(5,loc13);
	RTLR(6,Current);
	RTLR(7,loc12);
	RTLR(8,loc1);
	RTLR(9,loc14);
	RTLR(10,tr2);
	RTLR(11,loc10);
	RTLR(12,loc4);
	RTLR(13,loc5);
	RTLR(14,loc15);
	RTLR(15,loc7);
	RTLR(16,loc8);
	RTLR(17,loc16);
	RTLR(18,loc17);
	RTLR(19,loc18);
	RTLR(20,loc6);
	RTLR(21,arg2);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_4_);
	loc9 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
	tr1 = RTLNS(571, 571, _OBJSIZ_0_0_0_1_0_0_0_0_);
	loc11 = (EIF_REFERENCE) tr1;
	tr1 = F572_11786(RTCV(loc11));
	loc13 = tr1;
	if (EIF_TEST(loc13)) {
		tr1 = RTLNS(537, 537, _OBJSIZ_0_1_0_0_0_0_0_0_);
		loc12 = (EIF_REFERENCE) tr1;
		{
			static EIF_TYPE_INDEX typarr0[] = {703,888,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0, 703, _OBJSIZ_7_4_0_7_0_0_0_0_);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc13)+ _LNGOFF_7_3_0_6_);
		F697_13001(RTCV(tr1), ti4_1);
		loc1 = (EIF_REFERENCE) tr1;
		loc14 = F697_13013(RTCV(loc13));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc14)-646])(RTCV(loc14));
			if (tb1) break;
			tr1 = F667_12212(RTCV(loc14));
			tr1 = F538_11502(RTCV(loc12), tr1);
			tr2 = F667_12213(RTCV(loc14));
			tr2 = F538_11502(RTCV(loc12), tr2);
			F697_13045(RTCV(loc1), tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc14)-646])(RTCV(loc14));
		}
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {703,888,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0, 703, _OBJSIZ_7_4_0_7_0_0_0_0_);
		}
		F697_13000(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
	}
	F697_13037(RTCV(loc9));
	for (;;) {
		tb2 = F697_13032(RTCV(loc9));
		if (tb2) break;
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = F697_13011(RTCV(loc9));
		tr2 = F893_17412(RTCV(tr2));
		F889_17164(RTCV(tr1), tr2);
		loc10 = (EIF_REFERENCE) tr1;
		tr1 = RTMS_EX_H("-",1,45);
		tr2 = RTMS_EX_H("_",1,95);
		F893_17354(RTCV(loc10), tr1, tr2);
		tb3 = '\0';
		tr1 = RTMS_EX_H("CONTENT_",8,292083039);
		tb4 = F889_17195(RTCV(loc10), tr1);
		if (tb4) {
			tb4 = '\01';
			tr1 = RTOUCR(190,F86_6693,(Current));
			tb5 = F885_17038(RTCV(loc10), tr1);
			if (!tb5) {
				tr1 = RTOUCR(191,F86_6694,(Current));
				tb5 = F885_17038(RTCV(loc10), tr1);
				tb4 = tb5;
			}
			tb3 = tb4;
		}
		if (tb3) {
		} else {
			tr1 = RTMS_EX_H("HTTP_",5,1415364703);
			F893_17369(RTCV(loc10), tr1);
		}
		tr1 = F697_13010(RTCV(loc9));
		F1028_20276(Current, tr1, loc10, loc1);
		F697_13038(RTCV(loc9));
	}
	loc2 = F889_17173(RTCV(loc3), (EIF_CHARACTER_8) '\?', ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc4 = F893_17423(RTCV(loc3), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_1_1_0_2_);
		loc5 = F893_17423(RTCV(loc3), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), ti4_1);
	} else {
		loc4 = F889_17176(RTCV(loc3));
		loc5 = RTMS_EX_H("",0,0);
	}
	tr1 = RTMS_EX_H("Host",4,1215263604);
	tr1 = F697_13004(RTCV(loc9), tr1);
	loc15 = tr1;
	if (EIF_TEST(loc15)) {
		loc2 = F889_17173(RTCV(loc15), (EIF_CHARACTER_8) ':', ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
			loc7 = F893_17423(RTCV(loc15), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc15)+ _LNGOFF_1_1_0_2_);
			loc8 = F893_17423(RTCV(loc15), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), ti4_1);
		} else {
			loc7 = (EIF_REFERENCE) loc15;
			loc8 = RTMS_EX_H("80",2,14384);
		}
	} else {
	}
	tr1 = RTMS_EX_H("Authorization",13,1468366446);
	tr1 = F697_13004(RTCV(loc9), tr1);
	loc16 = tr1;
	if (EIF_TEST(loc16)) {
		loc2 = F889_17173(RTCV(loc16), (EIF_CHARACTER_8) ' ', ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = F893_17423(RTCV(loc16), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
			tr2 = RTMS_EX_H("AUTH_TYPE",9,444895301);
			F1028_20277(Current, tr1, tr2, loc1);
		}
	}
	tr1 = RTMS_EX_H("CGI/1.1",7,294431793);
	tr2 = RTMS_EX_H("GATEWAY_INTERFACE",17,726763077);
	F1028_20277(Current, tr1, tr2, loc1);
	tr1 = RTMS_EX_H("QUERY_STRING",12,900510023);
	F1028_20277(Current, loc5, tr1, loc1);
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_6_);
	loc17 = tr1;
	if (EIF_TEST(loc17)) {
		tr1 = eif_boxed_item(loc17,1);
		tr2 = RTMS_EX_H("REMOTE_ADDR",11,1729447762);
		F1028_20277(Current, tr1, tr2, loc1);
		tr1 = eif_boxed_item(loc17,2);
		tr2 = RTMS_EX_H("REMOTE_HOST",11,1847613012);
		F1028_20277(Current, tr1, tr2, loc1);
		ti4_1 = eif_integer_32_item(RTCV(loc17),3);
		tr1 = c_outi(ti4_1);
		tr2 = RTMS_EX_H("REMOTE_PORT",11,1981830484);
		F1028_20277(Current, tr1, tr2, loc1);
	}
	tr1 = RTMS_EX_H("REQUEST_URI",11,1391326793);
	F1028_20277(Current, loc3, tr1, loc1);
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
	tr2 = RTMS_EX_H("REQUEST_METHOD",14,188401988);
	F1028_20277(Current, tr1, tr2, loc1);
	tr1 = RTMS_EX_H("SCRIPT_NAME",11,129752645);
	F1028_20277(Current, loc4, tr1, loc1);
	tr1 = RTMS_EX_H("SERVER_NAME",11,1169045317);
	F1028_20277(Current, loc7, tr1, loc1);
	tr1 = RTMS_EX_H("SERVER_PORT",11,1203518548);
	F1028_20277(Current, loc8, tr1, loc1);
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_5_);
	tr2 = RTMS_EX_H("SERVER_PROTOCOL",15,955737676);
	F1028_20277(Current, tr1, tr2, loc1);
	tr1 = RTOUCR(205,F11_3739,(Current));
	tr2 = RTMS_EX_H("SERVER_SOFTWARE",15,1710351941);
	F1028_20277(Current, tr1, tr2, loc1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	loc18 = tr1;
	if ((EIF_BOOLEAN) (EIF_TEST(loc18) && (EIF_BOOLEAN)(loc3 != NULL))) {
		tb3 = F889_17195(RTCV(loc3), loc18);
		if (tb3) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc18) + O15187[Dtype(loc18)-888]);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_1_1_0_2_);
			loc6 = F893_17423(RTCV(loc3), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2);
			loc2 = F889_17173(RTCV(loc6), (EIF_CHARACTER_8) '\?', ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				F893_17359(RTCV(loc6), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
			}
			tr1 = RTMS_EX_H("PATH_INFO",9,1139750479);
			F697_13045(RTCV(loc1), loc6, tr1);
			tr1 = RTMS_EX_H("SCRIPT_NAME",11,129752645);
			F697_13045(RTCV(loc1), loc18, tr1);
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	F118_7133(RTCV(tr1), loc1, tr2, arg2);
	RTLE;
}

/* {WGI_NINO_HANDLER}.add_environment_variable */
void F1028_20276 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg2);
	RTLR(3,loc1);
	RTLR(4,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb1 = '\0';
		tb2 = F697_13007(RTCV(arg3), arg2);
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(RTCV(arg3));
			loc1 = tr1;
			tb1 = EIF_TEST(loc1);
		}
		if (tb1) {
			tr1 = RTMS_EX_H(" ",1,32);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R15106[Dtype(loc1)-887])(RTCV(loc1), tr1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R15106[Dtype(tr1)-887])(RTCV(tr1), arg1);
			F697_13045(RTCV(arg3), tr1, arg2);
		} else {
			F697_13045(RTCV(arg3), arg1, arg2);
		}
	}
	RTLE;
}

/* {WGI_NINO_HANDLER}.set_environment_variable */
void F1028_20277 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F697_13045(RTCV(arg3), arg1, arg2);
	}
	RTLE;
}

void EIF_Minit431 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

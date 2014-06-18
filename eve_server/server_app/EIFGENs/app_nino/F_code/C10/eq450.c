/*
 * Code for class EQA_TEST_INVOCATION_EXCEPTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq450.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_TEST_INVOCATION_EXCEPTION}.recipient_name */
EIF_REFERENCE F1092_21090 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.class_name */
EIF_REFERENCE F1092_21091 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.tag_name */
EIF_REFERENCE F1092_21092 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.trace */
EIF_REFERENCE F1092_21093 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.class_attribute_name */

EIF_REFERENCE F1092_21103 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (66,RTMS_EX_H("class_name",10,2132155749));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.recipient_attribute_name */

EIF_REFERENCE F1092_21104 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (67,RTMS_EX_H("internal_exception",18,551747950));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.tag_attribute_name */

EIF_REFERENCE F1092_21105 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (68,RTMS_EX_H("tag_name",8,1511503973));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.trace_attribute_name */

EIF_REFERENCE F1092_21106 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (69,RTMS_EX_H("trace",5,1919875941));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.correct_mismatch */
void F1092_21107 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = RTOUCR(2,F625_11836,(Current));
	tr2 = RTOUCR(66,F1092_21103,(Current));
	tr1 = F697_13004(RTCV(tr1), tr2);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_non_attached_type(888),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = RTOUCR(2,F625_11836,(Current));
		tr2 = RTOUCR(67,F1092_21104,(Current));
		tr1 = F697_13004(RTCV(tr1), tr2);
		loc2 = RTCCL(tr1);
		loc2 = RTRV(eif_non_attached_type(888),loc2);
		tb3 = EIF_TEST(loc2);
	}
	if (tb3) {
		tr1 = RTOUCR(2,F625_11836,(Current));
		tr2 = RTOUCR(68,F1092_21105,(Current));
		tr1 = F697_13004(RTCV(tr1), tr2);
		loc3 = RTCCL(tr1);
		loc3 = RTRV(eif_non_attached_type(886),loc3);
		tb2 = EIF_TEST(loc3);
	}
	if (tb2) {
		tr1 = RTOUCR(2,F625_11836,(Current));
		tr2 = RTOUCR(69,F1092_21106,(Current));
		tr1 = F697_13004(RTCV(tr1), tr2);
		loc4 = RTCCL(tr1);
		loc4 = RTRV(eif_non_attached_type(886),loc4);
		tb1 = EIF_TEST(loc4);
	}
	if (tb1) {
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F889_17164(RTCV(tr1), loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F889_17164(RTCV(tr1), loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(887, 887, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F887_17091(RTCV(tr1), loc3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(887, 887, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F887_17091(RTCV(tr1), loc4);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		F625_11835(Current);
	}
	RTLE;
}

void EIF_Minit450 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

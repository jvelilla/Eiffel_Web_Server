/*
 * Code for class EQA_TEST_INVOCATION_EXCEPTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F437_20870(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F437_20871(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F437_20872(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20873(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20874(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20875(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20876(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20877(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20878(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20879(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20880(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20881(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20882(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20883(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F437_20884(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F437_20885(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20886(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20887(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20888(EIF_REFERENCE);
extern EIF_TYPED_VALUE F437_20889(EIF_REFERENCE);
extern void F437_20890(EIF_REFERENCE);
extern void F437_22741(EIF_REFERENCE, int);
extern void EIF_Minit437(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_TEST_INVOCATION_EXCEPTION}.make */
void F437_20870 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,tr1);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,ur1);
	RTLR(9,loc4);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 436, Current, 4, 3, 15537);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(436, Current, 15537);
	if (arg1) {
		RTCC(arg1, 436, l_feature_name, 1, 166);
	}
	if (arg2) {
		RTCC(arg2, 436, l_feature_name, 2, 337);
	}
	if (arg3) {
		RTCC(arg3, 436, l_feature_name, 3, 337);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_feature_name_attached_implies_a_class_name_attached", EX_PRE);
		RTTE((!((EIF_BOOLEAN)(arg3 != NULL)) || ((EIF_BOOLEAN)(arg2 != NULL))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_feature_name_not_empty", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14830, "is_empty", arg3))(arg3)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 18045, 0x10000000, 1); /* code */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8878, "code", arg1))(arg1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(18045, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8882, "type_name", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 18047, 0xF8000151, 0); /* class_name */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14954, "string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(18047, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(7);
		RTDBGAA(Current, dtype, 18047, 0xF8000151, 0); /* class_name */
		
		tr1 = RTLN(341);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14814, Dtype(tr1)))(tr1);
		RTNHOOK(7,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(18047, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8881, "recipient_name", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(9);
		RTDBGAA(Current, dtype, 18046, 0xF8000151, 0); /* recipient_name */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14954, "string", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(18046, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(10);
		RTDBGAA(Current, dtype, 18046, 0xF8000151, 0); /* recipient_name */
		
		tr1 = RTLN(341);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14814, Dtype(tr1)))(tr1);
		RTNHOOK(10,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(18046, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8875, "description", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = RTCCL(tr1);
	if (EIF_TEST(loc3)) {
		RTHOOK(12);
		RTDBGAA(Current, dtype, 18048, 0xF800014F, 0); /* tag_name */
		
		tr1 = RTLN(336);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14910, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(12,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(18048, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(13);
		RTDBGAA(Current, dtype, 18048, 0xF800014F, 0); /* tag_name */
		
		tr1 = RTLN(336);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14814, Dtype(tr1)))(tr1);
		RTNHOOK(13,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(18048, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(14);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8877, "trace", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = RTCCL(tr1);
	if (EIF_TEST(loc4)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14830, "is_empty", loc4))(loc4)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(15);
		ur1 = RTCCL(loc4);
		ur2 = RTCCL(arg2);
		ur3 = RTCCL(arg3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18044, dtype))(Current, ur1x, ur2x, ur3x);
	} else {
		RTHOOK(16);
		RTDBGAA(Current, dtype, 18049, 0xF800014F, 0); /* trace */
		
		tr1 = RTLN(336);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14814, Dtype(tr1)))(tr1);
		RTNHOOK(16,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(18049, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef arg3
#undef arg2
#undef arg1
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.parse_trace */
void F437_20871 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "parse_trace";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc7);
	RTLR(6,tr1);
	RTLR(7,loc8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 436, Current, 8, 3, 15538);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(436, Current, 15538);
	RTCC(arg1, 436, l_feature_name, 1, RTWCT(18049, dtype, Dftype(Current)));
	if (arg2) {
		RTCC(arg2, 436, l_feature_name, 2, 337);
	}
	if (arg3) {
		RTCC(arg3, 436, l_feature_name, 3, 337);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_trace_not_empty", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14830, "is_empty", arg1))(arg1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_feature_name_attached_implies_a_class_name_attached", EX_PRE);
		RTTE((!((EIF_BOOLEAN)(arg3 != NULL)) || ((EIF_BOOLEAN)(arg2 != NULL))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_feature_name_not_empty", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14830, "is_empty", arg3))(arg3)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("code_valid", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18045, dtype));
		ui4_1 = ti4_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8434, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18056, dtype))(Current, ur1x, ui4_1x)).it_i4);
	RTHOOK(6);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ur1 = RTCCL(arg1);
	ui4_1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18056, dtype))(Current, ur1x, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(9);
			if ((EIF_BOOLEAN) !loc5) {
				RTHOOK(10);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				loc3++;
			}
			RTHOOK(11);
			ur1 = RTCCL(arg1);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18057, dtype))(Current, ur1x, ui4_1x);
			RTHOOK(12);
			if ((EIF_BOOLEAN) !loc6) {
				RTHOOK(13);
				RTDBGAA(Current, dtype, 18050, 0x10000000, 1); /* break_point_slot */
				
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18053, dtype));
				*(EIF_INTEGER_32 *)(Current + RTWA(18050, dtype)) = (EIF_INTEGER_32) ti4_1;
				RTHOOK(14);
				RTDBGAL(Current, 6, 0x04000000, 1, 0); /* loc6 */
				
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(15);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18051, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = RTCCL(tr1);
			if (EIF_TEST(loc7)) {
				RTHOOK(16);
				tb1 = '\0';
				ur1 = RTCCL(arg2);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14860, "starts_with_general", loc7))(loc7, ur1x)).it_b);
				if (tb2) {
					tb2 = '\01';
					if ((EIF_BOOLEAN)(arg3 != NULL)) {
						tb3 = '\0';
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18052, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc8 = RTCCL(tr1);
						if (EIF_TEST(loc8)) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14871, "as_readable_string_32", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14922, "same_string", loc8))(loc8, ur1x)).it_b);
							tb3 = tb4;
						}
						tb2 = tb3;
					}
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(17);
					RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
					
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(18);
					RTDBGAL(Current, 4, 0x04000000, 1, 0); /* loc4 */
					
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(19);
					if (loc4) {
						RTHOOK(20);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
						RTHOOK(21);
						RTDBGAL(Current, 4, 0x04000000, 1, 0); /* loc4 */
						
						loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				}
				RTHOOK(22);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				ur1 = RTCCL(arg1);
				ui4_1 = loc1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18056, dtype))(Current, ur1x, ui4_1x)).it_i4);
				loc1 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(23);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		}
		RTHOOK(24);
		if (loc5) {
			RTHOOK(25);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18045, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8404, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTHOOK(26);
				RTDBGAA(Current, dtype, 18055, 0x04000000, 1); /* is_test_invalid */
				
				*(EIF_BOOLEAN *)(Current + RTWA(18055, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 2L));
			} else {
				RTHOOK(27);
				RTDBGAA(Current, dtype, 18055, 0x04000000, 1); /* is_test_invalid */
				
				*(EIF_BOOLEAN *)(Current + RTWA(18055, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(28);
			if (loc4) {
				RTHOOK(29);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14935, "count", arg1));
				loc2 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(30);
			RTDBGAA(Current, dtype, 18054, 0x04000000, 1); /* is_trace_valid */
			
			*(EIF_BOOLEAN *)(Current + RTWA(18054, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(31);
			RTDBGAA(Current, dtype, 18055, 0x04000000, 1); /* is_test_invalid */
			
			*(EIF_BOOLEAN *)(Current + RTWA(18055, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(32);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14935, "count", arg1));
			loc2 = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(33);
		ur1 = RTCCL(arg1);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18057, dtype))(Current, ur1x, ui4_1x);
		RTHOOK(34);
		RTDBGAA(Current, dtype, 18050, 0x10000000, 1); /* break_point_slot */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18053, dtype));
		*(EIF_INTEGER_32 *)(Current + RTWA(18050, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(35);
		RTDBGAA(Current, dtype, 18054, 0x04000000, 1); /* is_trace_valid */
		
		*(EIF_BOOLEAN *)(Current + RTWA(18054, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
		RTHOOK(36);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14935, "count", arg1));
		loc2 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(37);
	RTDBGAA(Current, dtype, 18049, 0xF800014F, 0); /* trace */
	
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = loc2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14893, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(18049, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.code */
EIF_TYPED_VALUE F437_20872 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(18045,Dtype(Current)));
	return r;
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.recipient_name */
EIF_TYPED_VALUE F437_20873 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18046,Dtype(Current)));
	return r;
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.class_name */
EIF_TYPED_VALUE F437_20874 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18047,Dtype(Current)));
	return r;
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.tag_name */
EIF_TYPED_VALUE F437_20875 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18048,Dtype(Current)));
	return r;
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.trace */
EIF_TYPED_VALUE F437_20876 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18049,Dtype(Current)));
	return r;
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.break_point_slot */
EIF_TYPED_VALUE F437_20877 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(18050,Dtype(Current)));
	return r;
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.last_class_name */
EIF_TYPED_VALUE F437_20878 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18051,Dtype(Current)));
	return r;
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.last_routine_name */
EIF_TYPED_VALUE F437_20879 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18052,Dtype(Current)));
	return r;
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.last_break_point_slot */
EIF_TYPED_VALUE F437_20880 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(18053,Dtype(Current)));
	return r;
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.is_trace_valid */
EIF_TYPED_VALUE F437_20881 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(18054,Dtype(Current)));
	return r;
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.is_test_invalid */
EIF_TYPED_VALUE F437_20882 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(18055,Dtype(Current)));
	return r;
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.go_after_next_dash_line */
EIF_TYPED_VALUE F437_20883 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "go_after_next_dash_line";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 436, Current, 2, 2, 15550);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(436, Current, 15550);
	RTCC(arg1, 436, l_feature_name, 1, RTWCT(18049, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_start_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14935, "count", arg1));
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18058, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(14935, "count", tr1));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18058, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = arg2;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14816, "item", arg1))(arg1, ui4_1x)).it_c4);
		uw1 = tw1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9182, "has", tr1))(tr1, uw1x)).it_b);
		if (tb1) {
			RTHOOK(5);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = eif_max_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - loc2) - ((EIF_INTEGER_32) 1L)),ui4_1);
			loc1 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(6);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1 = (EIF_INTEGER_32) arg2;
		}
		RTHOOK(7);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18058, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14863, "substring_index", arg1))(arg1, ur1x, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc2);
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14935, "count", arg1));
			if ((EIF_BOOLEAN) (Result > ti4_1)) {
				RTHOOK(11);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("result_valid", EX_POST);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) (Result > arg2)) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14935, "count", arg1));
				tb2 = (EIF_BOOLEAN) (Result <= ti4_1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("start_zero_implies_result_zero", EX_POST);
		if ((!((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uw1
#undef arg2
#undef arg1
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.parse_frame */
void F437_20884 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "parse_frame";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc7 = (EIF_CHARACTER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc6);
	RTLR(3,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_CHAR32, &loc7);
	
	RTEAA(l_feature_name, 436, Current, 7, 2, 15551);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(436, Current, 15551);
	RTCC(arg1, 436, l_feature_name, 1, RTWCT(18049, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_trace_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_position_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14935, "count", arg1));
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 18051, 0xF800014F, 0); /* last_class_name */
	
	*(EIF_REFERENCE *)(Current + RTWA(18051, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 18052, 0xF800014F, 0); /* last_routine_name */
	
	*(EIF_REFERENCE *)(Current + RTWA(18052, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 18053, 0x10000000, 1); /* last_break_point_slot */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(18053, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) arg2;
	RTHOOK(7);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14935, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(8);
		if (loc5) break;
		RTHOOK(9);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) loc2;
		for (;;) {
			RTHOOK(10);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc2 > loc3)) {
				tb2 = '\0';
				ui4_1 = loc2;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14816, "item", arg1))(arg1, ui4_1x)).it_c4);
				RTNHOOK(10,1);
				tb3 = EIF_TEST(isspace(tw1));
				if (tb3) {
					tb2 = (EIF_BOOLEAN) (loc1 < loc2);
				}
				tb1 = tb2;
			}
			if (tb1) break;
			RTHOOK(11);
			RTDBGAL(Current, 7, 0x1C000000, 1, 0); /* loc7 */
			
			ui4_1 = loc2;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14816, "item", arg1))(arg1, ui4_1x)).it_c4);
			loc7 = (EIF_CHARACTER_32) tw1;
			RTHOOK(12);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2++;
			RTHOOK(13);
			tb2 = '\01';
			tb3 = EIF_TEST(isspace(loc7));
			if (!tb3) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '@';
				tb2 = (EIF_BOOLEAN)(loc7 == tw1);
			}
			if (tb2) {
				RTHOOK(14);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1 = (EIF_INTEGER_32) loc2;
			}
		}
		RTHOOK(15);
		if ((EIF_BOOLEAN) (loc1 < loc2)) {
			RTHOOK(16);
			RTDBGAL(Current, 6, 0xF800014F, 0, 0); /* loc6 */
			
			ui4_1 = loc1;
			ui4_2 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14893, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18051, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				RTHOOK(18);
				RTDBGAA(Current, dtype, 18051, 0xF800014F, 0); /* last_class_name */
				
				RTAR(Current, loc6);
				*(EIF_REFERENCE *)(Current + RTWA(18051, dtype)) = (EIF_REFERENCE) RTCCL(loc6);
			} else {
				RTHOOK(19);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18052, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				if ((EIF_BOOLEAN)(tr1 == NULL)) {
					RTHOOK(20);
					RTDBGAA(Current, dtype, 18052, 0xF800014F, 0); /* last_routine_name */
					
					RTAR(Current, loc6);
					*(EIF_REFERENCE *)(Current + RTWA(18052, dtype)) = (EIF_REFERENCE) RTCCL(loc6);
				} else {
					RTHOOK(21);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14844, "is_integer", loc6))(loc6)).it_b);
					if (tb2) {
						RTHOOK(22);
						RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
						
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14878, "to_integer", loc6))(loc6)).it_i4);
						loc4 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(23);
						if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
							RTHOOK(24);
							RTDBGAA(Current, dtype, 18053, 0x10000000, 1); /* last_break_point_slot */
							
							*(EIF_INTEGER_32 *)(Current + RTWA(18053, dtype)) = (EIF_INTEGER_32) loc4;
						}
					}
					RTHOOK(25);
					RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
					
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		} else {
			RTHOOK(26);
			RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
			
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.dash_line */
RTOID (F437_20885)


EIF_TYPED_VALUE F437_20885 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F437_20885,15553,RTMS32_EX_H("-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000\012\000\000\000",80,3325706));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.class_attribute_name */
RTOID (F437_20886)


EIF_TYPED_VALUE F437_20886 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F437_20886,15554,RTMS_EX_H("class_name",10,2132155749));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.recipient_attribute_name */
RTOID (F437_20887)


EIF_TYPED_VALUE F437_20887 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F437_20887,15555,RTMS_EX_H("internal_exception",18,551747950));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.tag_attribute_name */
RTOID (F437_20888)


EIF_TYPED_VALUE F437_20888 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F437_20888,15556,RTMS_EX_H("tag_name",8,1511503973));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.trace_attribute_name */
RTOID (F437_20889)


EIF_TYPED_VALUE F437_20889 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F437_20889,15557,RTMS_EX_H("trace",5,1919875941));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.correct_mismatch */
void F437_20890 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "correct_mismatch";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 436, Current, 4, 0, 15557);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(436, Current, 15557);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10811, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18059, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9212, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = RTCCL(tr2);
	loc1 = RTRV(eif_non_attached_type(RTWCT(18047, dtype, Dftype(Current))),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10811, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18060, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9212, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc2 = RTCCL(tr2);
		loc2 = RTRV(eif_non_attached_type(RTWCT(18046, dtype, Dftype(Current))),loc2);
		tb3 = EIF_TEST(loc2);
	}
	if (tb3) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10811, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,3);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18061, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9212, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc3 = RTCCL(tr2);
		loc3 = RTRV(eif_non_attached_type(RTWCT(18048, dtype, Dftype(Current))),loc3);
		tb2 = EIF_TEST(loc3);
	}
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10811, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,4);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18062, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9212, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc4 = RTCCL(tr2);
		loc4 = RTRV(eif_non_attached_type(RTWCT(18049, dtype, Dftype(Current))),loc4);
		tb1 = EIF_TEST(loc4);
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 18047, 0xF8000151, 0); /* class_name */
		
		tr1 = RTLN(341);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14944, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(2,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(18047, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTDBGAA(Current, dtype, 18046, 0xF8000151, 0); /* recipient_name */
		
		tr1 = RTLN(341);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14944, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(3,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(18046, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 18048, 0xF800014F, 0); /* tag_name */
		
		tr1 = RTLN(336);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14909, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(4,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(18048, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 18049, 0xF800014F, 0); /* trace */
		
		tr1 = RTLN(336);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14909, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(18049, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10810, 271))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {EQA_TEST_INVOCATION_EXCEPTION}._invariant */
void F437_22741 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 436, Current, 0, 22740);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("code_valid", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18045, dtype));
	ui4_1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8434, dtype))(Current, ui4_1x)).it_b);
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("recipient_name_attached", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18046, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("class_name_attached", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18047, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("tag_attached", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18048, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("trace_attached", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18049, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("exception_break_point_slot_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18050, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef ui4_1
}

void EIF_Minit437 (void)
{
	GTCX
	RTOTS (20885,F437_20885)
	RTOTS (20886,F437_20886)
	RTOTS (20887,F437_20887)
	RTOTS (20888,F437_20888)
	RTOTS (20889,F437_20889)
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class EIFFEL_WARNINGS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F36_4046(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F36_4047(EIF_REFERENCE);
extern EIF_TYPED_VALUE F36_4048(EIF_REFERENCE);
extern EIF_TYPED_VALUE F36_4049(EIF_REFERENCE);
extern EIF_TYPED_VALUE F36_4050(EIF_REFERENCE);
extern void F36_4051(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F36_4052(EIF_REFERENCE);
extern void EIF_Minit36(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EIFFEL_WARNINGS}.make */
void F36_4046 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 35, Current, 0, 1, 518);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(35, Current, 518);
	if (arg1) {
		RTCC(arg1, 35, l_feature_name, 1, 389);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4046, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4045, 0xF80001C9, 0); /* json_object */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(4045, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17786, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4045, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4047, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {EIFFEL_WARNINGS}.warning_message */
EIF_TYPED_VALUE F36_4047 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4042,Dtype(Current)));
	return r;
}


/* {EIFFEL_WARNINGS}.warning_count */
EIF_TYPED_VALUE F36_4048 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4043,Dtype(Current)));
	return r;
}


/* {EIFFEL_WARNINGS}.json_array */
EIF_TYPED_VALUE F36_4049 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4044,Dtype(Current)));
	return r;
}


/* {EIFFEL_WARNINGS}.json_object */
EIF_TYPED_VALUE F36_4050 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4045,Dtype(Current)));
	return r;
}


/* {EIFFEL_WARNINGS}.initialize */
void F36_4051 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "initialize";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 35, Current, 0, 1, 523);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(35, Current, 523);
	if (arg1) {
		RTCC(arg1, 35, l_feature_name, 1, 389);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_not_empty", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15587, "is_empty", arg1))(arg1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4042, 0xF8000185, 0); /* warning_message */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(4042, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = RTMS_EX_H("\012",1,10);
	ur1 = tr2;
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15814, "replace_substring_all", tr1))(tr1, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("string_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {EIFFEL_WARNINGS}.create_warning_list */
void F36_4052 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_warning_list";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc21 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc22 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc23 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc24 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc25 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc26 = (EIF_BOOLEAN) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 tc3;
	EIF_CHARACTER_8 tc4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(14);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc11);
	RTLR(5,loc12);
	RTLR(6,loc13);
	RTLR(7,loc14);
	RTLR(8,loc15);
	RTLR(9,loc16);
	RTLR(10,loc17);
	RTLR(11,tr3);
	RTLR(12,ur2);
	RTLR(13,tr4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_INT32, &loc19);
	RTLU(SK_INT32, &loc20);
	RTLU(SK_INT32, &loc21);
	RTLU(SK_BOOL, &loc22);
	RTLU(SK_BOOL, &loc23);
	RTLU(SK_BOOL, &loc24);
	RTLU(SK_BOOL, &loc25);
	RTLU(SK_BOOL, &loc26);
	
	RTEAA(l_feature_name, 35, Current, 26, 0, 524);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(35, Current, 524);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4044, 0xF80001C8, 0); /* json_array */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(4044, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17775, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4044, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4043, 0x10000000, 1); /* warning_count */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(4043, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAL(Current, 19, 0x10000000, 1, 0); /* loc19 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = RTMS_EX_H("Warning code",12,530688357);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
	loc19 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc19 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 4045, 0xF80001C9, 0); /* json_object */
		
		tr1 = RTLNSMART(eif_non_attached_type(RTWCT(4045, dtype, Dftype(Current))));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17786, Dtype(tr1)))(tr1);
		RTNHOOK(5,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(4045, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(Current, 22, 0x04000000, 1, 0); /* loc22 */
		
		loc22 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(7);
		RTDBGAL(Current, 23, 0x04000000, 1, 0); /* loc23 */
		
		loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(8);
		RTDBGAL(Current, 24, 0x04000000, 1, 0); /* loc24 */
		
		loc24 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(9);
		RTDBGAL(Current, 25, 0x04000000, 1, 0); /* loc25 */
		
		loc25 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(10);
		RTDBGAL(Current, 26, 0x04000000, 1, 0); /* loc26 */
		
		loc26 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(11);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		tr2 = RTMS_EX_H("Warning code: ",14,756688672);
		ur1 = tr2;
		ui4_1 = loc19;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 14L));
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 14L))) {
			RTHOOK(13);
			RTDBGAL(Current, 22, 0x04000000, 1, 0); /* loc22 */
			
			loc22 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(14);
			RTDBGAL(Current, 21, 0x10000000, 1, 0); /* loc21 */
			
			loc21 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(15);
			RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
			
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
			RTHOOK(16);
			RTDBGAL(Current, 20, 0x10000000, 1, 0); /* loc20 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(15730, "count", tr1));
			loc20 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(17);
			RTDBGAL(Current, 18, 0x10000000, 1, 0); /* loc18 */
			
			loc18 = (EIF_INTEGER_32) loc1;
			for (;;) {
				RTHOOK(18);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(18,1);
				ui4_1 = loc18;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15706, "at", tr1))(tr1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '>')) break;
				RTHOOK(19);
				RTDBGAL(Current, 18, 0x10000000, 1, 0); /* loc18 */
				
				loc18++;
			}
			RTHOOK(20);
			RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
			
			loc6 = (EIF_INTEGER_32) loc18;
			RTHOOK(21);
			RTDBGAL(Current, 21, 0x10000000, 1, 0); /* loc21 */
			
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
			RTHOOK(22);
			RTDBGAL(Current, 20, 0x10000000, 1, 0); /* loc20 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(22,1);
			tr2 = RTMS_EX_H("-----",5,758281005);
			ur1 = tr2;
			ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
			loc20 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(23);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(23,1);
		tr2 = RTMS_EX_H("Warning: ",9,176836128);
		ur1 = tr2;
		ui4_1 = loc19;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 9L));
		RTHOOK(24);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 9L)) || (EIF_BOOLEAN) (loc2 > loc20))) {
			RTHOOK(25);
			RTDBGAL(Current, 23, 0x04000000, 1, 0); /* loc23 */
			
			loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(26);
			RTDBGAL(Current, 21, 0x10000000, 1, 0); /* loc21 */
			
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
			RTHOOK(27);
			RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
			
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(28);
			RTDBGAL(Current, 18, 0x10000000, 1, 0); /* loc18 */
			
			loc18 = (EIF_INTEGER_32) loc2;
			for (;;) {
				RTHOOK(29);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(29,1);
				ui4_1 = loc18;
				tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15706, "at", tr1))(tr1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc2 == (EIF_CHARACTER_8) '>')) break;
				RTHOOK(30);
				RTDBGAL(Current, 18, 0x10000000, 1, 0); /* loc18 */
				
				loc18++;
			}
			RTHOOK(31);
			RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
			
			loc7 = (EIF_INTEGER_32) loc18;
			RTHOOK(32);
			RTDBGAL(Current, 21, 0x10000000, 1, 0); /* loc21 */
			
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(33);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(33,1);
		tr2 = RTMS_EX_H("What to do: ",12,679754016);
		ur1 = tr2;
		ui4_1 = loc19;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 12L));
		RTHOOK(34);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) -12L)) || (EIF_BOOLEAN) (loc3 > loc20))) {
			RTHOOK(35);
			RTDBGAL(Current, 24, 0x04000000, 1, 0); /* loc24 */
			
			loc24 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(36);
			RTDBGAL(Current, 21, 0x10000000, 1, 0); /* loc21 */
			
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
			RTHOOK(37);
			RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
			
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(38);
			RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(38,1);
			tr2 = RTMS_EX_H("Class:",6,1767512890);
			ur1 = tr2;
			ui4_1 = loc19;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			RTHOOK(39);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) -1L)) || (EIF_BOOLEAN) (loc8 > loc20))) {
				RTHOOK(40);
				RTDBGAL(Current, 24, 0x04000000, 1, 0); /* loc24 */
				
				loc24 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(41);
				RTDBGAL(Current, 21, 0x10000000, 1, 0); /* loc21 */
				
				loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 12L));
				RTHOOK(42);
				RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
				
				loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
			}
		}
		RTHOOK(43);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(43,1);
		tr2 = RTMS_EX_H("Class: ",7,1512540192);
		ur1 = tr2;
		ui4_1 = loc19;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 7L));
		RTHOOK(44);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 7L)) || (EIF_BOOLEAN) (loc4 > loc20))) {
			RTHOOK(45);
			RTDBGAL(Current, 25, 0x04000000, 1, 0); /* loc25 */
			
			loc25 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(46);
			RTDBGAL(Current, 21, 0x10000000, 1, 0); /* loc21 */
			
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
			RTHOOK(47);
			RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
			
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(48);
			RTDBGAL(Current, 18, 0x10000000, 1, 0); /* loc18 */
			
			loc18 = (EIF_INTEGER_32) loc4;
			for (;;) {
				RTHOOK(49);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(49,1);
				ui4_1 = loc18;
				tc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15706, "at", tr1))(tr1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc3 == (EIF_CHARACTER_8) '>')) break;
				RTHOOK(50);
				RTDBGAL(Current, 18, 0x10000000, 1, 0); /* loc18 */
				
				loc18++;
			}
			RTHOOK(51);
			RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
			
			loc9 = (EIF_INTEGER_32) loc18;
			RTHOOK(52);
			RTDBGAL(Current, 21, 0x10000000, 1, 0); /* loc21 */
			
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(53);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(53,1);
		tr2 = RTMS_EX_H("Feature: ",9,1434942240);
		ur1 = tr2;
		ui4_1 = loc19;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 9L));
		RTHOOK(54);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 9L)) || (EIF_BOOLEAN) (loc5 > loc20))) {
			RTHOOK(55);
			RTDBGAL(Current, 26, 0x04000000, 1, 0); /* loc26 */
			
			loc26 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(56);
			RTDBGAL(Current, 21, 0x10000000, 1, 0); /* loc21 */
			
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
			RTHOOK(57);
			RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
			
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(58);
			RTDBGAL(Current, 18, 0x10000000, 1, 0); /* loc18 */
			
			loc18 = (EIF_INTEGER_32) loc5;
			for (;;) {
				RTHOOK(59);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(59,1);
				ui4_1 = loc18;
				tc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15706, "at", tr1))(tr1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc4 == (EIF_CHARACTER_8) '>')) break;
				RTHOOK(60);
				RTDBGAL(Current, 18, 0x10000000, 1, 0); /* loc18 */
				
				loc18++;
			}
			RTHOOK(61);
			RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
			
			loc10 = (EIF_INTEGER_32) loc18;
			RTHOOK(62);
			RTDBGAL(Current, 21, 0x10000000, 1, 0); /* loc21 */
			
			loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(63);
		if (loc22) {
			RTHOOK(64);
			RTDBGAL(Current, 11, 0xF8000185, 0, 0); /* loc11 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(64,1);
			ui4_1 = loc1;
			ui4_2 = loc6;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc11 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(65);
			RTDBGAL(Current, 11, 0xF8000185, 0, 0); /* loc11 */
			
			loc11 = RTMS_EX_H("",0,0);
		}
		RTHOOK(66);
		if (loc23) {
			RTHOOK(67);
			RTDBGAL(Current, 12, 0xF8000185, 0, 0); /* loc12 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(67,1);
			ui4_1 = loc2;
			ui4_2 = loc7;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc12 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(68);
			RTDBGAL(Current, 12, 0xF8000185, 0, 0); /* loc12 */
			
			loc12 = RTMS_EX_H("",0,0);
		}
		RTHOOK(69);
		if (loc24) {
			RTHOOK(70);
			RTDBGAL(Current, 13, 0xF8000185, 0, 0); /* loc13 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(70,1);
			ui4_1 = loc3;
			ui4_2 = loc8;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc13 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(71);
			RTDBGAL(Current, 13, 0xF8000185, 0, 0); /* loc13 */
			
			loc13 = RTMS_EX_H("",0,0);
		}
		RTHOOK(72);
		if (loc25) {
			RTHOOK(73);
			RTDBGAL(Current, 14, 0xF8000185, 0, 0); /* loc14 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(73,1);
			ui4_1 = loc4;
			ui4_2 = loc9;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc14 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(74);
			RTDBGAL(Current, 14, 0xF8000185, 0, 0); /* loc14 */
			
			loc14 = RTMS_EX_H("",0,0);
		}
		RTHOOK(75);
		if (loc26) {
			RTHOOK(76);
			RTDBGAL(Current, 15, 0xF8000185, 0, 0); /* loc15 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(76,1);
			ui4_1 = loc5;
			ui4_2 = loc10;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc15 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(77);
			RTDBGAL(Current, 15, 0xF8000185, 0, 0); /* loc15 */
			
			loc15 = RTMS_EX_H("",0,0);
		}
		RTHOOK(78);
		RTDBGAL(Current, 16, 0xF8000185, 0, 0); /* loc16 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(78,1);
		ui4_1 = loc21;
		ui4_2 = loc20;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc16 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(79);
		RTDBGAL(Current, 17, 0xF8000185, 0, 0); /* loc17 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(79,1);
		ui4_1 = loc19;
		ui4_2 = loc20;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc17 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(80);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(80,1);
		ur1 = RTCCL(loc11);
		tr2 = RTLN(424);
		tr3 = RTMS_EX_H("Warning_Code",12,2141781093);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(80,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(81);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(81,1);
		ur1 = RTCCL(loc12);
		tr2 = RTLN(424);
		tr3 = RTMS_EX_H("Warning",7,735446375);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(81,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(82);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(82,1);
		ur1 = RTCCL(loc13);
		tr2 = RTLN(424);
		tr3 = RTMS_EX_H("What_to_do",10,1571397231);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(82,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(83);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(83,1);
		ur1 = RTCCL(loc14);
		tr2 = RTLN(424);
		tr3 = RTMS_EX_H("Class",5,1818840435);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(83,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(84);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(84,1);
		ur1 = RTCCL(loc15);
		tr2 = RTLN(424);
		tr3 = RTMS_EX_H("Feature",7,878169957);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(84,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(85);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(85,1);
		ur1 = RTCCL(loc16);
		tr2 = RTLN(424);
		tr3 = RTMS_EX_H("After_Feature",13,190467685);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(85,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(86);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(86,1);
		ur1 = RTCCL(loc17);
		tr2 = RTLN(424);
		tr3 = RTMS_EX_H("Dump",4,1148546416);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(86,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(87);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4044, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(87,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17780, "add", tr1))(tr1, ur1x);
		RTHOOK(88);
		RTDBGAL(Current, 19, 0x10000000, 1, 0); /* loc19 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(88,1);
		tr2 = RTMS_EX_H("Warning code",12,530688357);
		ur1 = tr2;
		ui4_1 = loc20;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc19 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(89);
		RTDBGAA(Current, dtype, 4043, 0x10000000, 1); /* warning_count */
		
		(*(EIF_INTEGER_32 *)(Current + RTWA(4043, dtype)))++;
	}
	RTHOOK(90);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4044, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(90,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17777, "count", tr1))(tr1)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(91);
		RTDBGAA(Current, dtype, 4045, 0xF80001C9, 0); /* json_object */
		
		tr1 = RTLNSMART(eif_non_attached_type(RTWCT(4045, dtype, Dftype(Current))));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17786, Dtype(tr1)))(tr1);
		RTNHOOK(91,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(4045, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(92);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(92,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tr3 = RTLN(424);
		tr4 = RTMS_EX_H("Warning_Code",12,2141781093);
		ur2 = tr4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr3)))(tr3, ur2x);
		RTNHOOK(92,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(93);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(93,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tr3 = RTLN(424);
		tr4 = RTMS_EX_H("Warning",7,735446375);
		ur2 = tr4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr3)))(tr3, ur2x);
		RTNHOOK(93,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(94);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(94,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tr3 = RTLN(424);
		tr4 = RTMS_EX_H("What_to_do",10,1571397231);
		ur2 = tr4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr3)))(tr3, ur2x);
		RTNHOOK(94,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(95);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(95,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tr3 = RTLN(424);
		tr4 = RTMS_EX_H("Class",5,1818840435);
		ur2 = tr4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr3)))(tr3, ur2x);
		RTNHOOK(95,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(96);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(96,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tr3 = RTLN(424);
		tr4 = RTMS_EX_H("Feature",7,878169957);
		ur2 = tr4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr3)))(tr3, ur2x);
		RTNHOOK(96,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(97);
		RTDBGAL(Current, 16, 0xF8000185, 0, 0); /* loc16 */
		
		loc16 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4042, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(98);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(98,1);
		ur1 = RTCCL(loc16);
		tr2 = RTLN(424);
		tr3 = RTMS_EX_H("After_Feature",13,190467685);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(98,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(99);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(99,1);
		ur1 = RTCCL(loc16);
		tr2 = RTLN(424);
		tr3 = RTMS_EX_H("Dump",4,1148546416);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(99,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(100);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4044, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(100,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4045, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17780, "add", tr1))(tr1, ur1x);
		RTHOOK(101);
		RTDBGAA(Current, dtype, 4043, 0x10000000, 1); /* warning_count */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(4043, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(102);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(28);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
}

void EIF_Minit36 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class EIFFEL_ERRORS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F28_3952(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F28_3953(EIF_REFERENCE);
extern EIF_TYPED_VALUE F28_3954(EIF_REFERENCE);
extern EIF_TYPED_VALUE F28_3955(EIF_REFERENCE);
extern EIF_TYPED_VALUE F28_3956(EIF_REFERENCE);
extern void F28_3957(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F28_3958(EIF_REFERENCE);
extern void F28_3959(EIF_REFERENCE);
extern void EIF_Minit28(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EIFFEL_ERRORS}.make */
void F28_3952 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 27, Current, 0, 1, 442);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(27, Current, 442);
	if (arg1) {
		RTCC(arg1, 27, l_feature_name, 1, 350);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3953, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3952, 0xF80001A2, 0); /* json_object */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(3952, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17180, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3952, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = RTMS_EX_H("Syntax error",12,995637106);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3954, dtype))(Current);
	} else {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3955, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EIFFEL_ERRORS}.error_message */
EIF_TYPED_VALUE F28_3953 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3949,Dtype(Current)));
	return r;
}


/* {EIFFEL_ERRORS}.error_count */
EIF_TYPED_VALUE F28_3954 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3950,Dtype(Current)));
	return r;
}


/* {EIFFEL_ERRORS}.json_array */
EIF_TYPED_VALUE F28_3955 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3951,Dtype(Current)));
	return r;
}


/* {EIFFEL_ERRORS}.json_object */
EIF_TYPED_VALUE F28_3956 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3952,Dtype(Current)));
	return r;
}


/* {EIFFEL_ERRORS}.initialize */
void F28_3957 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 27, Current, 0, 1, 447);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(27, Current, 447);
	if (arg1) {
		RTCC(arg1, 27, l_feature_name, 1, 350);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_not_empty", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14981, "is_empty", arg1))(arg1)).it_b);
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
	RTDBGAA(Current, dtype, 3949, 0xF800015E, 0); /* error_message */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3949, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = RTMS_EX_H("\012",1,10);
	ur1 = tr2;
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15208, "replace_substring_all", tr1))(tr1, ur1x, ur2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("string_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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

/* {EIFFEL_ERRORS}.create_syntax_error_list */
void F28_3958 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_syntax_error_list";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc7);
	RTLR(7,loc8);
	RTLR(8,loc9);
	RTLR(9,loc11);
	RTLR(10,loc12);
	RTLR(11,tr3);
	RTLR(12,ur2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	
	RTEAA(l_feature_name, 27, Current, 14, 0, 448);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(27, Current, 448);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3951, 0xF80001A1, 0); /* json_array */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(3951, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17169, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3951, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3950, 0x10000000, 1); /* error_count */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3950, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr2 = RTMS_EX_H("Syntax error",12,995637106);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
	loc14 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc14 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 3952, 0xF80001A2, 0); /* json_object */
		
		tr1 = RTLNSMART(eif_non_attached_type(RTWCT(3952, dtype, Dftype(Current))));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17180, Dtype(tr1)))(tr1);
		RTNHOOK(6,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(3952, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tr2 = RTMS_EX_H("class ",6,1830427424);
		ur1 = tr2;
		ui4_1 = loc14;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 6L));
		RTHOOK(8);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		tr2 = RTMS_EX_H(">",1,62);
		ur1 = tr2;
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		tr2 = RTMS_EX_H("line ",5,1769671968);
		ur1 = tr2;
		ui4_1 = loc14;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 5L));
		RTHOOK(10);
		RTDBGAL(Current, 13, 0x10000000, 1, 0); /* loc13 */
		
		loc13 = (EIF_INTEGER_32) loc2;
		for (;;) {
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			ui4_1 = loc13;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15100, "at", tr1))(tr1, ui4_1x)).it_c1);
			RTNHOOK(11,2);
			tb1 = EIF_TEST(isdigit(tc1));
			if ((EIF_BOOLEAN) !tb1) break;
			RTHOOK(12);
			RTDBGAL(Current, 13, 0x10000000, 1, 0); /* loc13 */
			
			loc13++;
		}
		RTHOOK(13);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc13 - ((EIF_INTEGER_32) 1L));
		RTHOOK(14);
		RTDBGAL(Current, 5, 0xF800015E, 0, 0); /* loc5 */
		
		loc5 = RTMS_EX_H("Syntax Error<br>",16,590505534);
		RTHOOK(15);
		RTDBGAL(Current, 6, 0xF800015E, 0, 0); /* loc6 */
		
		loc6 = RTMS_EX_H("",0,0);
		RTHOOK(16);
		RTDBGAL(Current, 7, 0xF800015E, 0, 0); /* loc7 */
		
		loc7 = RTMS_EX_H("",0,0);
		RTHOOK(17);
		RTDBGAL(Current, 8, 0xF800015E, 0, 0); /* loc8 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		ui4_1 = loc1;
		ui4_2 = loc3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc8 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(18);
		RTDBGAL(Current, 9, 0xF800015E, 0, 0); /* loc9 */
		
		loc9 = RTMS_EX_H("",0,0);
		RTHOOK(19);
		RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(19,1);
		ui4_1 = loc2;
		ui4_2 = loc4;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(19,2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15029, "to_integer", tr2))(tr2)).it_i4);
		loc10 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(20);
		RTDBGAL(Current, 11, 0xF800015E, 0, 0); /* loc11 */
		
		loc11 = RTMS_EX_H("",0,0);
		RTHOOK(21);
		RTDBGAL(Current, 12, 0xF800015E, 0, 0); /* loc12 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(21,1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 5L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(21,2);
		tr3 = RTMS_EX_H("--^",3,2960734);
		ur1 = tr3;
		ui4_2 = loc14;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr2))(tr2, ur1x, ui4_2x)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc12 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(22);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,1);
		ur1 = RTCCL(loc5);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Error_Code",10,2035117157);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(22,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(23);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(23,1);
		ur1 = RTCCL(loc6);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Error",5,1920632178);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(23,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(24);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(24,1);
		ur1 = RTCCL(loc7);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("What_to_do",10,1571397231);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(24,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(25);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		ur1 = RTCCL(loc8);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Class",5,1818840435);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(25,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(26);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(26,1);
		ur1 = RTCCL(loc9);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Feature",7,878169957);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(26,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(27);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(27,1);
		ti8_1 = (EIF_INTEGER_64) loc10;
		ui8_1 = ti8_1;
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Line",4,1281977957);
		ur1 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur1x);
		RTNHOOK(27,2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17183, "put_integer", tr1))(tr1, ui8_1x, ur1x);
		RTHOOK(28);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(28,1);
		ur1 = RTCCL(loc11);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Before_Line",11,1271208037);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(28,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(29);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(29,1);
		ur1 = RTCCL(loc12);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("After_Line",10,471645285);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(29,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(30);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3951, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(30,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17174, "add", tr1))(tr1, ur1x);
		RTHOOK(31);
		RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(31,1);
		tr2 = RTMS_EX_H("Syntax error",12,995637106);
		ur1 = tr2;
		ui4_1 = loc4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc14 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(32);
		RTDBGAA(Current, dtype, 3950, 0x10000000, 1); /* error_count */
		
		(*(EIF_INTEGER_32 *)(Current + RTWA(3950, dtype)))++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui8_1
#undef ui4_1
#undef ui4_2
}

/* {EIFFEL_ERRORS}.create_error_list */
void F28_3959 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_error_list";
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
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc24 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc25 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc26 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc27 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc28 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc29 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc30 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc31 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc32 = (EIF_BOOLEAN) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 tc3;
	EIF_CHARACTER_8 tc4;
	EIF_CHARACTER_8 tc5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(15);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc15);
	RTLR(5,loc16);
	RTLR(6,loc17);
	RTLR(7,loc18);
	RTLR(8,loc19);
	RTLR(9,loc21);
	RTLR(10,tr3);
	RTLR(11,loc22);
	RTLR(12,loc23);
	RTLR(13,ur2);
	RTLR(14,tr4);
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
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_INT32, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	RTLU(SK_REF, &loc23);
	RTLU(SK_INT32, &loc24);
	RTLU(SK_INT32, &loc25);
	RTLU(SK_BOOL, &loc26);
	RTLU(SK_BOOL, &loc27);
	RTLU(SK_BOOL, &loc28);
	RTLU(SK_BOOL, &loc29);
	RTLU(SK_BOOL, &loc30);
	RTLU(SK_BOOL, &loc31);
	RTLU(SK_BOOL, &loc32);
	
	RTEAA(l_feature_name, 27, Current, 32, 0, 449);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(27, Current, 449);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3951, 0xF80001A1, 0); /* json_array */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(3951, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17169, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3951, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3950, 0x10000000, 1); /* error_count */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3950, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAL(Current, 25, 0x10000000, 1, 0); /* loc25 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = RTMS_EX_H("Error code",10,424024421);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
	loc25 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc25 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 3952, 0xF80001A2, 0); /* json_object */
		
		tr1 = RTLNSMART(eif_non_attached_type(RTWCT(3952, dtype, Dftype(Current))));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17180, Dtype(tr1)))(tr1);
		RTNHOOK(5,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(3952, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(Current, 26, 0x04000000, 1, 0); /* loc26 */
		
		loc26 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(7);
		RTDBGAL(Current, 27, 0x04000000, 1, 0); /* loc27 */
		
		loc27 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(8);
		RTDBGAL(Current, 28, 0x04000000, 1, 0); /* loc28 */
		
		loc28 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(9);
		RTDBGAL(Current, 29, 0x04000000, 1, 0); /* loc29 */
		
		loc29 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(10);
		RTDBGAL(Current, 30, 0x04000000, 1, 0); /* loc30 */
		
		loc30 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(11);
		RTDBGAL(Current, 31, 0x04000000, 1, 0); /* loc31 */
		
		loc31 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(12);
		RTDBGAL(Current, 32, 0x04000000, 1, 0); /* loc32 */
		
		loc32 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(13);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		tr2 = RTMS_EX_H("Error code: ",12,475754016);
		ur1 = tr2;
		ui4_1 = loc25;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 12L));
		RTHOOK(14);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 12L))) {
			RTHOOK(15);
			RTDBGAL(Current, 26, 0x04000000, 1, 0); /* loc26 */
			
			loc26 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(16);
			RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
			
			loc14 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(17);
			RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
			
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
			RTHOOK(18);
			RTDBGAL(Current, 13, 0x10000000, 1, 0); /* loc13 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(15124, "count", tr1));
			loc13 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(19);
			RTDBGAL(Current, 24, 0x10000000, 1, 0); /* loc24 */
			
			loc24 = (EIF_INTEGER_32) loc1;
			for (;;) {
				RTHOOK(20);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(20,1);
				ui4_1 = loc24;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15100, "at", tr1))(tr1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '>')) break;
				RTHOOK(21);
				RTDBGAL(Current, 24, 0x10000000, 1, 0); /* loc24 */
				
				loc24++;
			}
			RTHOOK(22);
			RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
			
			loc7 = (EIF_INTEGER_32) loc24;
			RTHOOK(23);
			RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
			
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
			RTHOOK(24);
			RTDBGAL(Current, 13, 0x10000000, 1, 0); /* loc13 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(24,1);
			tr2 = RTMS_EX_H("-----",5,758281005);
			ur1 = tr2;
			ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
			loc13 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(25);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		tr2 = RTMS_EX_H("Error: ",7,316445984);
		ur1 = tr2;
		ui4_1 = loc25;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 7L));
		RTHOOK(26);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 7L))) {
			RTHOOK(27);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(27,1);
			tr2 = RTMS_EX_H("Type error: ",12,1137547808);
			ur1 = tr2;
			ui4_1 = loc25;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 12L));
		}
		RTHOOK(28);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 12L)) || (EIF_BOOLEAN) (loc2 > loc13))) {
			RTHOOK(29);
			RTDBGAL(Current, 27, 0x04000000, 1, 0); /* loc27 */
			
			loc27 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(30);
			RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
			
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
			RTHOOK(31);
			RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
			
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(32);
			RTDBGAL(Current, 24, 0x10000000, 1, 0); /* loc24 */
			
			loc24 = (EIF_INTEGER_32) loc2;
			for (;;) {
				RTHOOK(33);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(33,1);
				ui4_1 = loc24;
				tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15100, "at", tr1))(tr1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc2 == (EIF_CHARACTER_8) '>')) break;
				RTHOOK(34);
				RTDBGAL(Current, 24, 0x10000000, 1, 0); /* loc24 */
				
				loc24++;
			}
			RTHOOK(35);
			RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
			
			loc8 = (EIF_INTEGER_32) loc24;
			RTHOOK(36);
			RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
			
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(37);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(37,1);
		tr2 = RTMS_EX_H("What to do: ",12,679754016);
		ur1 = tr2;
		ui4_1 = loc25;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 12L));
		RTHOOK(38);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) -12L)) || (EIF_BOOLEAN) (loc3 > loc13))) {
			RTHOOK(39);
			RTDBGAL(Current, 28, 0x04000000, 1, 0); /* loc28 */
			
			loc28 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(40);
			RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
			
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
			RTHOOK(41);
			RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
			
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(42);
			RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(42,1);
			tr2 = RTMS_EX_H("Class:",6,1767512890);
			ur1 = tr2;
			ui4_1 = loc25;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			RTHOOK(43);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc9 == ((EIF_INTEGER_32) -1L)) || (EIF_BOOLEAN) (loc9 > loc13))) {
				RTHOOK(44);
				RTDBGAL(Current, 28, 0x04000000, 1, 0); /* loc28 */
				
				loc28 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(45);
				RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
				
				loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 - ((EIF_INTEGER_32) 12L));
				RTHOOK(46);
				RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
				
				loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
			}
		}
		RTHOOK(47);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(47,1);
		tr2 = RTMS_EX_H("Class: ",7,1512540192);
		ur1 = tr2;
		ui4_1 = loc25;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 7L));
		RTHOOK(48);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 7L)) || (EIF_BOOLEAN) (loc4 > loc13))) {
			RTHOOK(49);
			RTDBGAL(Current, 29, 0x04000000, 1, 0); /* loc29 */
			
			loc29 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(50);
			RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
			
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
			RTHOOK(51);
			RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
			
			loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(52);
			RTDBGAL(Current, 24, 0x10000000, 1, 0); /* loc24 */
			
			loc24 = (EIF_INTEGER_32) loc4;
			for (;;) {
				RTHOOK(53);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(53,1);
				ui4_1 = loc24;
				tc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15100, "at", tr1))(tr1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc3 == (EIF_CHARACTER_8) '>')) break;
				RTHOOK(54);
				RTDBGAL(Current, 24, 0x10000000, 1, 0); /* loc24 */
				
				loc24++;
			}
			RTHOOK(55);
			RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
			
			loc10 = (EIF_INTEGER_32) loc24;
			RTHOOK(56);
			RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
			
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(57);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(57,1);
		tr2 = RTMS_EX_H("Feature: ",9,1434942240);
		ur1 = tr2;
		ui4_1 = loc25;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 9L));
		RTHOOK(58);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 9L)) || (EIF_BOOLEAN) (loc5 > loc13))) {
			RTHOOK(59);
			RTDBGAL(Current, 30, 0x04000000, 1, 0); /* loc30 */
			
			loc30 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(60);
			RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
			
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
			RTHOOK(61);
			RTDBGAL(Current, 11, 0x10000000, 1, 0); /* loc11 */
			
			loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(62);
			RTDBGAL(Current, 24, 0x10000000, 1, 0); /* loc24 */
			
			loc24 = (EIF_INTEGER_32) loc5;
			for (;;) {
				RTHOOK(63);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(63,1);
				ui4_1 = loc24;
				tc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15100, "at", tr1))(tr1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc4 == (EIF_CHARACTER_8) '>')) break;
				RTHOOK(64);
				RTDBGAL(Current, 24, 0x10000000, 1, 0); /* loc24 */
				
				loc24++;
			}
			RTHOOK(65);
			RTDBGAL(Current, 11, 0x10000000, 1, 0); /* loc11 */
			
			loc11 = (EIF_INTEGER_32) loc24;
			RTHOOK(66);
			RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
			
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc11 + ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(67);
		RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(67,1);
		tr2 = RTMS_EX_H("Line:",5,1769426234);
		ur1 = tr2;
		ui4_1 = loc25;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 6L));
		RTHOOK(68);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 6L)) || (EIF_BOOLEAN) (loc6 > loc13))) {
			RTHOOK(69);
			RTDBGAL(Current, 31, 0x04000000, 1, 0); /* loc31 */
			
			loc31 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(70);
			RTDBGAL(Current, 32, 0x04000000, 1, 0); /* loc32 */
			
			loc32 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(71);
			RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
			
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc11 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(72);
			RTDBGAL(Current, 24, 0x10000000, 1, 0); /* loc24 */
			
			loc24 = (EIF_INTEGER_32) loc6;
			for (;;) {
				RTHOOK(73);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(73,1);
				ui4_1 = loc24;
				tc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15100, "at", tr1))(tr1, ui4_1x)).it_c1);
				RTNHOOK(73,2);
				tb1 = EIF_TEST(isdigit(tc5));
				if ((EIF_BOOLEAN) !tb1) break;
				RTHOOK(74);
				RTDBGAL(Current, 24, 0x10000000, 1, 0); /* loc24 */
				
				loc24++;
			}
			RTHOOK(75);
			RTDBGAL(Current, 12, 0x10000000, 1, 0); /* loc12 */
			
			loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc24 - ((EIF_INTEGER_32) 1L));
			RTHOOK(76);
			RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
			
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 5L));
		}
		RTHOOK(77);
		if (loc26) {
			RTHOOK(78);
			RTDBGAL(Current, 15, 0xF800015E, 0, 0); /* loc15 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(78,1);
			ui4_1 = loc1;
			ui4_2 = loc7;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc15 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(79);
			RTDBGAL(Current, 15, 0xF800015E, 0, 0); /* loc15 */
			
			loc15 = RTMS_EX_H("",0,0);
		}
		RTHOOK(80);
		if (loc27) {
			RTHOOK(81);
			RTDBGAL(Current, 16, 0xF800015E, 0, 0); /* loc16 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(81,1);
			ui4_1 = loc2;
			ui4_2 = loc8;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc16 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(82);
			RTDBGAL(Current, 16, 0xF800015E, 0, 0); /* loc16 */
			
			loc16 = RTMS_EX_H("",0,0);
		}
		RTHOOK(83);
		if (loc28) {
			RTHOOK(84);
			RTDBGAL(Current, 17, 0xF800015E, 0, 0); /* loc17 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(84,1);
			ui4_1 = loc3;
			ui4_2 = loc9;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc17 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(85);
			RTDBGAL(Current, 17, 0xF800015E, 0, 0); /* loc17 */
			
			loc17 = RTMS_EX_H("",0,0);
		}
		RTHOOK(86);
		if (loc29) {
			RTHOOK(87);
			RTDBGAL(Current, 18, 0xF800015E, 0, 0); /* loc18 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(87,1);
			ui4_1 = loc4;
			ui4_2 = loc10;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc18 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(88);
			RTDBGAL(Current, 18, 0xF800015E, 0, 0); /* loc18 */
			
			loc18 = RTMS_EX_H("",0,0);
		}
		RTHOOK(89);
		if (loc30) {
			RTHOOK(90);
			RTDBGAL(Current, 19, 0xF800015E, 0, 0); /* loc19 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(90,1);
			ui4_1 = loc5;
			ui4_2 = loc11;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc19 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(91);
			RTDBGAL(Current, 19, 0xF800015E, 0, 0); /* loc19 */
			
			loc19 = RTMS_EX_H("",0,0);
		}
		RTHOOK(92);
		if (loc31) {
			RTHOOK(93);
			RTDBGAL(Current, 20, 0x10000000, 1, 0); /* loc20 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(93,1);
			ui4_1 = loc6;
			ui4_2 = loc12;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(93,2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15029, "to_integer", tr2))(tr2)).it_i4);
			loc20 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(94);
			RTDBGAL(Current, 21, 0xF800015E, 0, 0); /* loc21 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(94,1);
			ui4_1 = (EIF_INTEGER_32) (loc11 + ((EIF_INTEGER_32) 1L));
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(94,2);
			tr3 = RTMS_EX_H("Line:",5,1769426234);
			ur1 = tr3;
			ui4_2 = loc25;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr2))(tr2, ur1x, ui4_2x)).it_i4);
			ui4_2 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc21 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(95);
			RTDBGAL(Current, 20, 0x10000000, 1, 0); /* loc20 */
			
			loc20 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			RTHOOK(96);
			RTDBGAL(Current, 21, 0xF800015E, 0, 0); /* loc21 */
			
			loc21 = RTMS_EX_H("",0,0);
		}
		RTHOOK(97);
		RTDBGAL(Current, 22, 0xF800015E, 0, 0); /* loc22 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(97,1);
		ui4_1 = loc14;
		ui4_2 = loc13;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc22 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(98);
		RTDBGAL(Current, 23, 0xF800015E, 0, 0); /* loc23 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(98,1);
		ui4_1 = loc25;
		ui4_2 = loc13;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc23 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(99);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(99,1);
		ur1 = RTCCL(loc15);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Error_Code",10,2035117157);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(99,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(100);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(100,1);
		ur1 = RTCCL(loc16);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Error",5,1920632178);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(100,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(101);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(101,1);
		ur1 = RTCCL(loc17);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("What_to_do",10,1571397231);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(101,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(102);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(102,1);
		ur1 = RTCCL(loc18);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Class",5,1818840435);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(102,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(103);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(103,1);
		ur1 = RTCCL(loc19);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Feature",7,878169957);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(103,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(104);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(104,1);
		ti8_1 = (EIF_INTEGER_64) loc20;
		ui8_1 = ti8_1;
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Line",4,1281977957);
		ur1 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur1x);
		RTNHOOK(104,2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17183, "put_integer", tr1))(tr1, ui8_1x, ur1x);
		RTHOOK(105);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(105,1);
		ur1 = RTCCL(loc21);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Before_Line",11,1271208037);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(105,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(106);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(106,1);
		ur1 = RTCCL(loc22);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("After_Line",10,471645285);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(106,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(107);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(107,1);
		ur1 = RTCCL(loc23);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Dump",4,1148546416);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(107,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(108);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3951, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(108,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17174, "add", tr1))(tr1, ur1x);
		RTHOOK(109);
		RTDBGAL(Current, 25, 0x10000000, 1, 0); /* loc25 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(109,1);
		tr2 = RTMS_EX_H("Error code:",11,1176261434);
		ur1 = tr2;
		ui4_1 = loc13;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15014, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
		loc25 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(110);
		RTDBGAA(Current, dtype, 3950, 0x10000000, 1); /* error_count */
		
		(*(EIF_INTEGER_32 *)(Current + RTWA(3950, dtype)))++;
	}
	RTHOOK(111);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3951, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(111,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17171, "count", tr1))(tr1)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(112);
		RTDBGAA(Current, dtype, 3952, 0xF80001A2, 0); /* json_object */
		
		tr1 = RTLNSMART(eif_non_attached_type(RTWCT(3952, dtype, Dftype(Current))));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17180, Dtype(tr1)))(tr1);
		RTNHOOK(112,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(3952, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(113);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(113,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tr3 = RTLN(385);
		tr4 = RTMS_EX_H("Error_Code",10,2035117157);
		ur2 = tr4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr3)))(tr3, ur2x);
		RTNHOOK(113,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(114);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(114,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tr3 = RTLN(385);
		tr4 = RTMS_EX_H("Error",5,1920632178);
		ur2 = tr4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr3)))(tr3, ur2x);
		RTNHOOK(114,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(115);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(115,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tr3 = RTLN(385);
		tr4 = RTMS_EX_H("What_to_do",10,1571397231);
		ur2 = tr4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr3)))(tr3, ur2x);
		RTNHOOK(115,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(116);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(116,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tr3 = RTLN(385);
		tr4 = RTMS_EX_H("Class",5,1818840435);
		ur2 = tr4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr3)))(tr3, ur2x);
		RTNHOOK(116,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(117);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(117,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tr3 = RTLN(385);
		tr4 = RTMS_EX_H("Feature",7,878169957);
		ur2 = tr4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr3)))(tr3, ur2x);
		RTNHOOK(117,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(118);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(118,1);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) -1L);
		ui8_1 = ti8_1;
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Line",4,1281977957);
		ur1 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur1x);
		RTNHOOK(118,2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17183, "put_integer", tr1))(tr1, ui8_1x, ur1x);
		RTHOOK(119);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(119,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tr3 = RTLN(385);
		tr4 = RTMS_EX_H("Before_Line",11,1271208037);
		ur2 = tr4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr3)))(tr3, ur2x);
		RTNHOOK(119,2);
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(120);
		RTDBGAL(Current, 22, 0xF800015E, 0, 0); /* loc22 */
		
		loc22 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3949, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(121);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(121,1);
		ur1 = RTCCL(loc22);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("After_Line",10,471645285);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(121,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(122);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(122,1);
		ur1 = RTCCL(loc22);
		tr2 = RTLN(385);
		tr3 = RTMS_EX_H("Dump",4,1148546416);
		ur2 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16691, Dtype(tr2)))(tr2, ur2x);
		RTNHOOK(122,2);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17182, "put_string", tr1))(tr1, ur1x, ur2x);
		RTHOOK(123);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3951, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(123,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3952, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17174, "add", tr1))(tr1, ur1x);
		RTHOOK(124);
		RTDBGAA(Current, dtype, 3950, 0x10000000, 1); /* error_count */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(3950, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(125);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(34);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui8_1
#undef ui4_1
#undef ui4_2
}

void EIF_Minit28 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

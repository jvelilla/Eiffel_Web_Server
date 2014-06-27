/*
 * Code for class EIFFEL_FEATURE_CALLERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F32_3993(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F32_3994(EIF_REFERENCE);
extern EIF_TYPED_VALUE F32_3995(EIF_REFERENCE);
extern EIF_TYPED_VALUE F32_3996(EIF_REFERENCE);
extern EIF_TYPED_VALUE F32_3997(EIF_REFERENCE);
extern EIF_TYPED_VALUE F32_3998(EIF_REFERENCE);
extern EIF_TYPED_VALUE F32_3999(EIF_REFERENCE);
extern void F32_4000(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F32_4001(EIF_REFERENCE);
extern EIF_TYPED_VALUE F32_4002(EIF_REFERENCE);
extern void EIF_Minit32(void);

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

/* {EIFFEL_FEATURE_CALLERS}.make */
void F32_3993 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,ur3);
	RTLR(6,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 31, Current, 0, 3, 469);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(31, Current, 469);
	if (arg1) {
		RTCC(arg1, 31, l_feature_name, 1, 389);
	}
	if (arg2) {
		RTCC(arg2, 31, l_feature_name, 2, 389);
	}
	if (arg3) {
		RTCC(arg3, 31, l_feature_name, 3, 389);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3995, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3996, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef arg3
#undef arg2
#undef arg1
}

/* {EIFFEL_FEATURE_CALLERS}.message */
EIF_TYPED_VALUE F32_3994 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3989,Dtype(Current)));
	return r;
}


/* {EIFFEL_FEATURE_CALLERS}.class_name */
EIF_TYPED_VALUE F32_3995 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3990,Dtype(Current)));
	return r;
}


/* {EIFFEL_FEATURE_CALLERS}.feature_name */
EIF_TYPED_VALUE F32_3996 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3991,Dtype(Current)));
	return r;
}


/* {EIFFEL_FEATURE_CALLERS}.json_array */
EIF_TYPED_VALUE F32_3997 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3992,Dtype(Current)));
	return r;
}


/* {EIFFEL_FEATURE_CALLERS}.class_string */
EIF_TYPED_VALUE F32_3998 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3993,Dtype(Current)));
	return r;
}


/* {EIFFEL_FEATURE_CALLERS}.index */
EIF_TYPED_VALUE F32_3999 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3994,Dtype(Current)));
	return r;
}


/* {EIFFEL_FEATURE_CALLERS}.initialize */
void F32_4000 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "initialize";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
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
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,tr3);
	RTLR(8,ur2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 31, Current, 0, 3, 466);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(31, Current, 466);
	if (arg1) {
		RTCC(arg1, 31, l_feature_name, 1, 389);
	}
	if (arg2) {
		RTCC(arg2, 31, l_feature_name, 2, 389);
	}
	if (arg3) {
		RTCC(arg3, 31, l_feature_name, 3, 389);
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
		RTHOOK(2);
		RTCT("class_string_not_empty", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15587, "is_empty", arg2))(arg2)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("feature_string_not_empty", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15587, "is_empty", arg3))(arg3)).it_b);
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
	RTDBGAA(Current, dtype, 3989, 0xF8000185, 0); /* message */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3989, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3990, 0xF8000185, 0); /* class_name */
	
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(3990, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 3991, 0xF8000185, 0); /* feature_name */
	
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(3991, dtype)) = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	tr2 = RTMS_EX_H("\012",1,10);
	ur1 = tr2;
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15814, "replace_substring_all", tr1))(tr1, ur1x, ur2x);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	tr2 = RTMS_EX_H("\011",1,9);
	ur1 = tr2;
	tr3 = RTMS_EX_H("$",1,36);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15814, "replace_substring_all", tr1))(tr1, ur1x, ur2x);
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(9,1);
	tr2 = RTMS_EX_H("\\t",2,23668);
	ur1 = tr2;
	tr3 = RTMS_EX_H("$",1,36);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15814, "replace_substring_all", tr1))(tr1, ur1x, ur2x);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 3994, 0x10000000, 1); /* index */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("string_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("class_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3990, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("feature_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3991, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg3)) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg3
#undef arg2
#undef arg1
}

/* {EIFFEL_FEATURE_CALLERS}.create_list */
void F32_4001 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_list";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 31, Current, 6, 0, 467);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(31, Current, 467);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3992, 0xF80001C8, 0); /* json_array */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(3992, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17775, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3992, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype));
	ui4_1 = ti4_1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15706, "at", tr1))(tr1, ui4_1x)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<')) {
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype));
		for (;;) {
			RTHOOK(4);
			tb1 = '\01';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(15730, "count", tr1));
			if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(4,2);
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15706, "at", tr1))(tr1, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<');
			}
			if (tb1) break;
			RTHOOK(5);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
		}
		RTHOOK(6);
		RTDBGAA(Current, dtype, 3994, 0x10000000, 1); /* index */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 4L));
		RTHOOK(7);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3997, dtype))(Current)).it_i4);
		RTHOOK(8);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype));
		for (;;) {
			RTHOOK(9);
			tb2 = '\01';
			tb3 = '\01';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(15730, "count", tr1));
			if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(9,2);
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15706, "at", tr1))(tr1, ui4_1x)).it_c1);
				tb3 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '$');
			}
			if (!tb3) {
				tb2 = (EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 1L));
			}
			if (tb2) break;
			RTHOOK(10);
			RTDBGAL(Current, 4, 0xF80001C9, 0, 0); /* loc4 */
			
			tr1 = RTLN(457);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17786, Dtype(tr1)))(tr1);
			RTNHOOK(10,1);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(11);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3997, dtype))(Current)).it_i4);
			RTHOOK(12);
			RTDBGAA(Current, dtype, 3994, 0x10000000, 1); /* index */
			
			(*(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype))) += loc3;
			RTHOOK(13);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype));
			for (;;) {
				RTHOOK(14);
				tb3 = '\01';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(14,1);
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(15730, "count", tr1));
				if (!(EIF_BOOLEAN) (loc2 > ti4_1)) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(14,2);
					ui4_1 = loc2;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15706, "at", tr1))(tr1, ui4_1x)).it_c1);
					tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<');
				}
				if (tb3) break;
				RTHOOK(15);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				loc2++;
			}
			RTHOOK(16);
			RTDBGAA(Current, dtype, 3993, 0xF8000185, 0); /* class_string */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype));
			ui4_1 = ti4_1;
			ui4_2 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(3993, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3993, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr2 = RTLN(424);
			tr3 = RTMS_EX_H("Class_Name",10,1594420837);
			ur2 = tr3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr2)))(tr2, ur2x);
			RTNHOOK(17,1);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", loc4))(loc4, ur1x, ur2x);
			RTHOOK(18);
			RTDBGAA(Current, dtype, 3994, 0x10000000, 1); /* index */
			
			*(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 4L));
			RTHOOK(19);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3997, dtype))(Current)).it_i4);
			RTHOOK(20);
			RTDBGAL(Current, 5, 0xF80001C8, 0, 0); /* loc5 */
			
			tr1 = RTLN(456);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17775, Dtype(tr1)))(tr1);
			RTNHOOK(20,1);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			for (;;) {
				RTHOOK(21);
				if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 2L))) break;
				RTHOOK(22);
				RTDBGAA(Current, dtype, 3994, 0x10000000, 1); /* index */
				
				(*(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype))) += loc3;
				RTHOOK(23);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype));
				for (;;) {
					RTHOOK(24);
					tb4 = '\01';
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(24,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(15730, "count", tr1));
					if (!(EIF_BOOLEAN) (loc2 > ti4_1)) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(24,2);
						ui4_1 = loc2;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15706, "at", tr1))(tr1, ui4_1x)).it_c1);
						tb4 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '<');
					}
					if (tb4) break;
					RTHOOK(25);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					loc2++;
				}
				RTHOOK(26);
				RTDBGAA(Current, dtype, 3991, 0xF8000185, 0); /* feature_name */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(26,1);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype));
				ui4_1 = ti4_1;
				ui4_2 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTAR(Current, tr2);
				*(EIF_REFERENCE *)(Current + RTWA(3991, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
				RTHOOK(27);
				RTDBGAL(Current, 6, 0xF80001C9, 0, 0); /* loc6 */
				
				tr1 = RTLN(457);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17786, Dtype(tr1)))(tr1);
				RTNHOOK(27,1);
				loc6 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(28);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3991, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tr2 = RTLN(424);
				tr3 = RTMS_EX_H("Feature_Name",12,1413962085);
				ur2 = tr3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr2)))(tr2, ur2x);
				RTNHOOK(28,1);
				ur2 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17788, "put_string", loc6))(loc6, ur1x, ur2x);
				RTHOOK(29);
				ur1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17780, "add", loc5))(loc5, ur1x);
				RTHOOK(30);
				RTDBGAA(Current, dtype, 3994, 0x10000000, 1); /* index */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 4L));
				RTHOOK(31);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3997, dtype))(Current)).it_i4);
			}
			RTHOOK(32);
			ur1 = RTCCL(loc5);
			tr1 = RTLN(424);
			tr2 = RTMS_EX_H("Features",8,1473609075);
			ur2 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17297, Dtype(tr1)))(tr1, ur2x);
			RTNHOOK(32,1);
			ur2 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17787, "put", loc4))(loc4, ur1x, ur2x);
			RTHOOK(33);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3992, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(33,1);
			ur1 = RTCCL(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17780, "add", tr1))(tr1, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
}

/* {EIFFEL_FEATURE_CALLERS}.get_count */
EIF_TYPED_VALUE F32_4002 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get_count";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 31, Current, 2, 0, 468);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(31, Current, 468);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(3994, dtype));
	for (;;) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3989, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15706, "at", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '$')) break;
		RTHOOK(4);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTHOOK(6);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (EIF_INTEGER_32) loc2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
}

void EIF_Minit32 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

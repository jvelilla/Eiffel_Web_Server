/*
 * Code for class JSON_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F425_19627(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F425_19628(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F425_19629(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F425_19630(EIF_REFERENCE);
extern EIF_TYPED_VALUE F425_19631(EIF_REFERENCE);
extern EIF_TYPED_VALUE F425_19632(EIF_REFERENCE);
extern EIF_TYPED_VALUE F425_19633(EIF_REFERENCE);
extern void F425_19634(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F425_19635(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F425_19636(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F425_19637(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F425_19638(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F425_19639(EIF_REFERENCE);
extern EIF_TYPED_VALUE F425_19640(EIF_REFERENCE);
extern EIF_TYPED_VALUE F425_19641(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F425_19642(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F425_19643(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F425_19644(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F425_23560(EIF_REFERENCE, int);
extern void EIF_Minit425(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_STRING}.make_json */
void F425_19627 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_json";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	
	RTEAA(l_feature_name, 424, Current, 0, 1, 13827);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13827);
	if (arg1) {
		RTCC(arg1, 424, l_feature_name, 1, 385);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17308, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17299, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {JSON_STRING}.make_json_from_string_32 */
void F425_19628 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_json_from_string_32";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	
	RTEAA(l_feature_name, 424, Current, 0, 1, 13828);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13828);
	if (arg1) {
		RTCC(arg1, 424, l_feature_name, 1, 383);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17309, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17299, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {JSON_STRING}.make_with_escaped_json */
void F425_19629 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_with_escaped_json";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 424, Current, 0, 1, 13829);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13829);
	if (arg1) {
		RTCC(arg1, 424, l_feature_name, 1, 385);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 17300, 0xF8000185, 0); /* item */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15626, "as_string_8", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(17300, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {JSON_STRING}.item */
EIF_TYPED_VALUE F425_19630 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17300,Dtype(Current)));
	return r;
}


/* {JSON_STRING}.unescaped_string_8 */
EIF_TYPED_VALUE F425_19631 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unescaped_string_8";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 424, Current, 1, 0, 13831);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13831);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000185, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF8000185, 0,0); /* Result */
	
	tr1 = RTLN(389);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(15730, "count", loc1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(15570, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17303, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {JSON_STRING}.unescaped_string_32 */
EIF_TYPED_VALUE F425_19632 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unescaped_string_32";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 424, Current, 1, 0, 13832);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13832);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000181, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF8000184, 0,0); /* Result */
	
	tr1 = RTLN(388);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(15730, "count", loc1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(15570, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17304, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {JSON_STRING}.representation */
EIF_TYPED_VALUE F425_19633 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "representation";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 424, Current, 0, 0, 13833);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13833);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000185, 0,0); /* Result */
	
	tr1 = RTLN(389);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(15730, "count", tr2));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(15570, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,2);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	uc1 = (EIF_CHARACTER_8) '\"';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", Result))(Result, uc1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15829, "append", Result))(Result, ur1x);
	RTHOOK(4);
	uc1 = (EIF_CHARACTER_8) '\"';
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", Result))(Result, uc1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
}

/* {JSON_STRING}.unescape_to_string_8 */
void F425_19634 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "unescape_to_string_8";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_CHAR8, &loc4);
	
	RTEAA(l_feature_name, 424, Current, 4, 1, 13834);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(424, Current, 13834);
	if (arg1) {
		RTCC(arg1, 424, l_feature_name, 1, 389);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000185, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17300, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(15730, "count", loc1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(5);
		RTDBGAL(Current, 4, 0x08000000, 1, 0); /* loc4 */
		
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc1))(loc1, ui4_1x)).it_c1);
		loc4 = (EIF_CHARACTER_8) tc1;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\\')) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc2 < loc3)) {
				RTHOOK(8);
				ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc1))(loc1, ui4_1x)).it_c1);
				switch (tc1) {
					case (EIF_CHARACTER_8) '\\':
						RTHOOK(9);
						uc1 = (EIF_CHARACTER_8) '\\';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg1))(arg1, uc1x);
						RTHOOK(10);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) '\"':
						RTHOOK(11);
						uc1 = (EIF_CHARACTER_8) '\"';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg1))(arg1, uc1x);
						RTHOOK(12);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'b':
						RTHOOK(13);
						uc1 = (EIF_CHARACTER_8) '\010';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg1))(arg1, uc1x);
						RTHOOK(14);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'f':
						RTHOOK(15);
						uc1 = (EIF_CHARACTER_8) '\014';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg1))(arg1, uc1x);
						RTHOOK(16);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'n':
						RTHOOK(17);
						uc1 = (EIF_CHARACTER_8) '\012';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg1))(arg1, uc1x);
						RTHOOK(18);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'r':
						RTHOOK(19);
						uc1 = (EIF_CHARACTER_8) '\015';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg1))(arg1, uc1x);
						RTHOOK(20);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 't':
						RTHOOK(21);
						uc1 = (EIF_CHARACTER_8) '\011';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg1))(arg1, uc1x);
						RTHOOK(22);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'u':
						RTHOOK(23);
						uc1 = (EIF_CHARACTER_8) '\\';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg1))(arg1, uc1x);
						RTHOOK(24);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2++;
						break;
					default:
						RTHOOK(25);
						uc1 = (EIF_CHARACTER_8) '\\';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg1))(arg1, uc1x);
						RTHOOK(26);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2++;
						break;
				}
			} else {
				RTHOOK(27);
				uc1 = (EIF_CHARACTER_8) '\\';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg1))(arg1, uc1x);
				RTHOOK(28);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				loc2++;
			}
		} else {
			RTHOOK(29);
			uc1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg1))(arg1, uc1x);
			RTHOOK(30);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {JSON_STRING}.unescape_to_string_32 */
void F425_19635 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "unescape_to_string_32";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc6);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_CHAR8, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 424, Current, 6, 1, 13835);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13835);
	if (arg1) {
		RTCC(arg1, 424, l_feature_name, 1, 388);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000181, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(15730, "count", loc1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(5);
		RTDBGAL(Current, 5, 0x08000000, 1, 0); /* loc5 */
		
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc1))(loc1, ui4_1x)).it_c1);
		loc5 = (EIF_CHARACTER_8) tc1;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc5 == (EIF_CHARACTER_8) '\\')) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc2 < loc3)) {
				RTHOOK(8);
				ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc1))(loc1, ui4_1x)).it_c1);
				switch (tc1) {
					case (EIF_CHARACTER_8) '\\':
						RTHOOK(9);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\\';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15786, "append_character", arg1))(arg1, uw1x);
						RTHOOK(10);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) '\"':
						RTHOOK(11);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\"';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15786, "append_character", arg1))(arg1, uw1x);
						RTHOOK(12);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'b':
						RTHOOK(13);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\010';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15786, "append_character", arg1))(arg1, uw1x);
						RTHOOK(14);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'f':
						RTHOOK(15);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\014';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15786, "append_character", arg1))(arg1, uw1x);
						RTHOOK(16);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'n':
						RTHOOK(17);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15786, "append_character", arg1))(arg1, uw1x);
						RTHOOK(18);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'r':
						RTHOOK(19);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15786, "append_character", arg1))(arg1, uw1x);
						RTHOOK(20);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 't':
						RTHOOK(21);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15786, "append_character", arg1))(arg1, uw1x);
						RTHOOK(22);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'u':
						RTHOOK(23);
						RTDBGAL(Current, 6, 0xF8000181, 0, 0); /* loc6 */
						
						ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L));
						ui4_2 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 5L));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", loc1))(loc1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc6 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(24);
						ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(15730, "count", loc6));
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
							RTHOOK(25);
							ur1 = RTCCL(loc6);
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17307, dtype))(Current, ur1x)).it_n4);
							uu4_1 = tu4_1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15739, "append_code", arg1))(arg1, uu4_1x);
						}
						RTHOOK(26);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 6L);
						break;
					default:
						RTHOOK(27);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\\';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15786, "append_character", arg1))(arg1, uw1x);
						RTHOOK(28);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2++;
						break;
				}
			} else {
				RTHOOK(29);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\\';
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15786, "append_character", arg1))(arg1, uw1x);
				RTHOOK(30);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				loc2++;
			}
		} else {
			RTHOOK(31);
			RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
			
			tu4_1 = (EIF_NATURAL_32) loc5;
			loc4 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(32);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
			if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
				if (RTAL & CK_CHECK) {
					RTHOOK(33);
					RTCT(NULL, EX_CHECK);
					tw1 = (EIF_CHARACTER_32) loc5;
					tw2 = (EIF_CHARACTER_32) loc4;
					if ((EIF_BOOLEAN)(tw1 == tw2)) {
						RTCK;
					} else {
						RTCF;
					}
				}
				RTHOOK(34);
				tw1 = (EIF_CHARACTER_32) loc5;
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15786, "append_character", arg1))(arg1, uw1x);
			} else {
				RTHOOK(35);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 223L);
				if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
					RTHOOK(36);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					loc2++;
					RTHOOK(37);
					if ((EIF_BOOLEAN) (loc2 <= loc3)) {
						RTHOOK(38);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
						uu4_1 = tu4_1;
						tu4_1 = eif_bit_and(loc4,uu4_1);
						ui4_1 = ((EIF_INTEGER_32) 6L);
						tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
						ui4_1 = loc2;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", loc1))(loc1, ui4_1x)).it_n4);
						tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
						uu4_1 = tu4_3;
						tu4_3 = eif_bit_and(tu4_1,uu4_1);
						uu4_1 = tu4_3;
						tu4_1 = eif_bit_or((tu4_2),uu4_1);
						uu4_1 = tu4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15739, "append_code", arg1))(arg1, uu4_1x);
					}
				} else {
					RTHOOK(39);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 239L);
					if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
						RTHOOK(40);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2 += ((EIF_INTEGER_32) 2L);
						RTHOOK(41);
						if ((EIF_BOOLEAN) (loc2 <= loc3)) {
							RTHOOK(42);
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
							uu4_1 = tu4_1;
							tu4_1 = eif_bit_and(loc4,uu4_1);
							ui4_1 = ((EIF_INTEGER_32) 12L);
							tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
							ui4_1 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", loc1))(loc1, ui4_1x)).it_n4);
							tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
							uu4_1 = tu4_3;
							tu4_3 = eif_bit_and(tu4_1,uu4_1);
							ui4_1 = ((EIF_INTEGER_32) 6L);
							tu4_1 = eif_bit_shift_left((tu4_3),ui4_1);
							uu4_1 = tu4_1;
							tu4_1 = eif_bit_or((tu4_2),uu4_1);
							ui4_1 = loc2;
							tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", loc1))(loc1, ui4_1x)).it_n4);
							tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
							uu4_1 = tu4_3;
							tu4_3 = eif_bit_and(tu4_2,uu4_1);
							uu4_1 = tu4_3;
							tu4_2 = eif_bit_or(tu4_1,uu4_1);
							uu4_1 = tu4_2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15739, "append_code", arg1))(arg1, uu4_1x);
						}
					} else {
						RTHOOK(43);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 247L);
						if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
							RTHOOK(44);
							RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
							
							loc2 += ((EIF_INTEGER_32) 3L);
							RTHOOK(45);
							if ((EIF_BOOLEAN) (loc2 <= loc3)) {
								RTHOOK(46);
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_and(loc4,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 18L);
								tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
								ui4_1 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 2L));
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", loc1))(loc1, ui4_1x)).it_n4);
								tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								uu4_1 = tu4_3;
								tu4_3 = eif_bit_and(tu4_1,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 12L);
								tu4_1 = eif_bit_shift_left((tu4_3),ui4_1);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_or((tu4_2),uu4_1);
								ui4_1 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
								tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", loc1))(loc1, ui4_1x)).it_n4);
								tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								uu4_1 = tu4_3;
								tu4_3 = eif_bit_and(tu4_2,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 6L);
								tu4_2 = eif_bit_shift_left((tu4_3),ui4_1);
								uu4_1 = tu4_2;
								tu4_2 = eif_bit_or(tu4_1,uu4_1);
								ui4_1 = loc2;
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", loc1))(loc1, ui4_1x)).it_n4);
								tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								uu4_1 = tu4_3;
								tu4_3 = eif_bit_and(tu4_1,uu4_1);
								uu4_1 = tu4_3;
								tu4_1 = eif_bit_or(tu4_2,uu4_1);
								uu4_1 = tu4_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15739, "append_code", arg1))(arg1, uu4_1x);
							}
						}
					}
				}
			}
			RTHOOK(47);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(48);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef uw1
#undef arg1
}

/* {JSON_STRING}.accept */
void F425_19636 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "accept";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 424, Current, 0, 1, 13836);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(424, Current, 13836);
	if (arg1) {
		RTCC(arg1, 424, l_feature_name, 1, 21);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_visitor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3849, "visit_json_string", arg1))(arg1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {JSON_STRING}.is_equal */
EIF_TYPED_VALUE F425_19637 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
#define arg1 arg1x.it_r
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
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 424, Current, 0, 1, 13837);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13837);
	RTCC(arg1, 424, l_feature_name, 1, 424);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17300, "item", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", tr1))(tr1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12, dtype))(Current, ur1x)).it_b);
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {JSON_STRING}.append */
void F425_19638 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 424, Current, 0, 1, 13838);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13838);
	if (arg1) {
		RTCC(arg1, 424, l_feature_name, 1, 389);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {JSON_STRING}.hash_code */
EIF_TYPED_VALUE F425_19639 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 424, Current, 0, 0, 13839);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13839);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15232, "hash_code", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {JSON_STRING}.debug_output */
EIF_TYPED_VALUE F425_19640 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_output";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 424, Current, 0, 0, 13840);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13840);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000185, 0,0); /* Result */
	
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {JSON_STRING}.is_hexadecimal */
EIF_TYPED_VALUE F425_19641 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_hexadecimal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 424, Current, 1, 1, 13841);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(424, Current, 13841);
	if (arg1) {
		RTCC(arg1, 424, l_feature_name, 1, 385);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(15730, "count", arg1));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
		tr1 = RTLN(373);
		*(EIF_CHARACTER_8 *)tr1 = tc1;
		
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15471, "is_hexa_digit", tr1))(tr1)).it_b);
		Result = (EIF_BOOLEAN) tb2;
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {JSON_STRING}.hexadecimal_to_natural_32 */
EIF_TYPED_VALUE F425_19642 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hexadecimal_to_natural_32";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR8, &loc3);
	
	RTEAA(l_feature_name, 424, Current, 3, 1, 13842);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13842);
	if (arg1) {
		RTCC(arg1, 424, l_feature_name, 1, 385);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_hexadecimal", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17306, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(15730, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 2L))) {
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'x');
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(8);
		RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
		
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 16L);
		Result *= tu4_1;
		RTHOOK(9);
		RTDBGAL(Current, 3, 0x08000000, 1, 0); /* loc3 */
		
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc3 = (EIF_CHARACTER_8) tc1;
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (loc3 <= (EIF_CHARACTER_8) '9'))) {
			RTHOOK(11);
			RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
			
			uc1 = (EIF_CHARACTER_8) '0';
			tr1 = RTLN(373);
			*(EIF_CHARACTER_8 *)tr1 = loc3;
			
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15455, "difference", tr1))(tr1, uc1x)).it_i4);
			tu4_1 = (EIF_NATURAL_32) ti4_1;
			Result += tu4_1;
		} else {
			RTHOOK(12);
			RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
			
			tc1 = (EIF_CHARACTER_8) tolower(loc3);
			uc1 = (EIF_CHARACTER_8) 'a';
			tr1 = RTLN(373);
			*(EIF_CHARACTER_8 *)tr1 = tc1;
			
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15455, "difference", tr1))(tr1, uc1x)).it_i4);
			tu4_1 = (EIF_NATURAL_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 10L));
			Result += tu4_1;
		}
		RTHOOK(13);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {JSON_STRING}.escaped_json_string */
EIF_TYPED_VALUE F425_19643 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "escaped_json_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR8, &loc3);
	
	RTEAA(l_feature_name, 424, Current, 3, 1, 13843);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(424, Current, 13843);
	if (arg1) {
		RTCC(arg1, 424, l_feature_name, 1, 385);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(15730, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF8000185, 0,0); /* Result */
	
	tr1 = RTLN(389);
	ui4_1 = (EIF_INTEGER_32) (loc2 + (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 10L)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(15570, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		RTDBGAL(Current, 3, 0x08000000, 1, 0); /* loc3 */
		
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc3 = (EIF_CHARACTER_8) tc1;
		RTHOOK(7);
		switch (loc3) {
			case (EIF_CHARACTER_8) '\"':
				RTHOOK(8);
				tr1 = RTMS_EX_H("\\\"",2,23586);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
				break;
			case (EIF_CHARACTER_8) '\\':
				RTHOOK(9);
				tr1 = RTMS_EX_H("\\\\",2,23644);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
				break;
			case (EIF_CHARACTER_8) '\010':
				RTHOOK(10);
				tr1 = RTMS_EX_H("\\b",2,23650);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
				break;
			case (EIF_CHARACTER_8) '\014':
				RTHOOK(11);
				tr1 = RTMS_EX_H("\\f",2,23654);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
				break;
			case (EIF_CHARACTER_8) '\012':
				RTHOOK(12);
				tr1 = RTMS_EX_H("\\n",2,23662);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
				break;
			case (EIF_CHARACTER_8) '\015':
				RTHOOK(13);
				tr1 = RTMS_EX_H("\\r",2,23666);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
				break;
			case (EIF_CHARACTER_8) '\011':
				RTHOOK(14);
				tr1 = RTMS_EX_H("\\t",2,23668);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
				break;
			default:
				RTHOOK(15);
				uc1 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", Result))(Result, uc1x);
				break;
		}
		RTHOOK(16);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {JSON_STRING}.escaped_json_string_32 */
EIF_TYPED_VALUE F425_19644 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "escaped_json_string_32";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,loc6);
	RTLR(5,tr2);
	RTLR(6,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_CHAR32, &loc4);
	RTLU(SK_CHAR8, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 424, Current, 6, 1, 13844);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(424, Current, 13844);
	if (arg1) {
		RTCC(arg1, 424, l_feature_name, 1, 383);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(15692, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF8000185, 0,0); /* Result */
	
	tr1 = RTLN(389);
	ui4_1 = (EIF_INTEGER_32) (loc3 + (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 10L)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(15570, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(6);
		RTDBGAL(Current, 4, 0x1C000000, 1, 0); /* loc4 */
		
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15573, "item", arg1))(arg1, ui4_1x)).it_c4);
		loc4 = (EIF_CHARACTER_32) tw1;
		RTHOOK(7);
		tb1 = (loc4 <= 0xFF);
		if (tb1) {
			RTHOOK(8);
			RTDBGAL(Current, 5, 0x08000000, 1, 0); /* loc5 */
			
			tc1 = (EIF_CHARACTER_8) loc4;
			loc5 = (EIF_CHARACTER_8) tc1;
			RTHOOK(9);
			switch (loc5) {
				case (EIF_CHARACTER_8) '\"':
					RTHOOK(10);
					tr1 = RTMS_EX_H("\\\"",2,23586);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
					break;
				case (EIF_CHARACTER_8) '\\':
					RTHOOK(11);
					tr1 = RTMS_EX_H("\\\\",2,23644);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
					break;
				case (EIF_CHARACTER_8) '\010':
					RTHOOK(12);
					tr1 = RTMS_EX_H("\\b",2,23650);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
					break;
				case (EIF_CHARACTER_8) '\014':
					RTHOOK(13);
					tr1 = RTMS_EX_H("\\f",2,23654);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
					break;
				case (EIF_CHARACTER_8) '\012':
					RTHOOK(14);
					tr1 = RTMS_EX_H("\\n",2,23662);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
					break;
				case (EIF_CHARACTER_8) '\015':
					RTHOOK(15);
					tr1 = RTMS_EX_H("\\r",2,23666);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
					break;
				case (EIF_CHARACTER_8) '\011':
					RTHOOK(16);
					tr1 = RTMS_EX_H("\\t",2,23668);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
					break;
				default:
					RTHOOK(17);
					uc1 = loc5;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", Result))(Result, uc1x);
					break;
			}
		} else {
			RTHOOK(18);
			tr1 = RTMS_EX_H("\\u",2,23669);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15829, "append", Result))(Result, ur1x);
			RTHOOK(19);
			RTDBGAL(Current, 6, 0xF8000185, 0, 0); /* loc6 */
			
			ti4_1 = (EIF_INTEGER_32) (loc4);
			RTNHOOK(19,1);
			tr1 = RTLN(430);
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17407, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(20);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(21);
				tb1 = '\01';
				ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(15730, "count", loc6));
				if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					tb2 = '\0';
					ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(15730, "count", loc6));
					if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
						ui4_1 = loc2;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc6))(loc6, ui4_1x)).it_c1);
						tb2 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0');
					}
					tb1 = tb2;
				}
				if (tb1) break;
				RTHOOK(22);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				loc2++;
			}
			RTHOOK(23);
			RTDBGAL(Current, 6, 0xF8000185, 0, 0); /* loc6 */
			
			ui4_1 = loc2;
			ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(15730, "count", loc6));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", loc6))(loc6, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			for (;;) {
				RTHOOK(24);
				ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(15730, "count", loc6));
				if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L))) break;
				RTHOOK(25);
				ui4_1 = ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15826, "prepend_integer", loc6))(loc6, ui4_1x);
			}
			if (RTAL & CK_CHECK) {
				RTHOOK(26);
				RTCT(NULL, EX_CHECK);
				ti4_2 = *(EIF_INTEGER_32 *)(loc6 + RTVA(15730, "count", loc6));
				if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 4L))) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(27);
			ur1 = RTCCL(loc6);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15829, "append", Result))(Result, ur1x);
		}
		RTHOOK(28);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {JSON_STRING}._invariant */
void F425_23560 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 424, Current, 0, 23559);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("item_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit425 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

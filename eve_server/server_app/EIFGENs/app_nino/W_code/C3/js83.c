/*
 * Code for class JSON_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F83_6930(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F83_6931(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6932(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6933(EIF_REFERENCE);
extern void F83_6934(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F83_6935(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6936(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6937(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6938(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6939(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6940(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6941(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6942(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6943(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6944(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6945(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F83_6946(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F83_6947(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6948(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6949(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6950(EIF_REFERENCE);
extern EIF_TYPED_VALUE F83_6951(EIF_REFERENCE);
extern void EIF_Minit83(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>
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

/* {JSON_PARSER}.make_parser */
void F83_6930 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_parser";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 82, Current, 0, 1, 1314);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1314);
	if (arg1) {
		RTCC(arg1, 82, l_feature_name, 1, 389);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("json_not_empty", EX_PRE);
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
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6802, dtype))(Current, ur1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6815, 0x04000000, 1); /* is_parsed */
	
	*(EIF_BOOLEAN *)(Current + RTWA(6815, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6816, 0xF8000211, 0); /* errors */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(6816, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12096, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6816, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {JSON_PARSER}.is_parsed */
EIF_TYPED_VALUE F83_6931 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6815,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.errors */
EIF_TYPED_VALUE F83_6932 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6816,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.current_errors */
EIF_TYPED_VALUE F83_6933 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_errors";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 82, Current, 0, 0, 1317);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1317);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000185, 0,0); /* Result */
	
	tr1 = RTLN(389);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(15571, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6816, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9704, "start", tr1))(tr1);
	for (;;) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6816, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(12106, "after", tr1));
		if (tb1) break;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6816, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9658, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15831, "append_string", Result))(Result, ur1x);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6816, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", tr1))(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
}

/* {JSON_PARSER}.report_error */
void F83_6934 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "report_error";
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
	
	RTEAA(l_feature_name, 82, Current, 0, 1, 1318);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1318);
	if (arg1) {
		RTCC(arg1, 82, l_feature_name, 1, 389);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("e_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6816, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9816, "force", tr1))(tr1, ur1x);
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

/* {JSON_PARSER}.parse_json */
EIF_TYPED_VALUE F83_6935 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_json";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 82, Current, 0, 0, 1319);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1319);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6832, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF80001A4, 0,0); /* Result */
		
		Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6820, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6831, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 6815, 0x04000000, 1); /* is_parsed */
			
			*(EIF_BOOLEAN *)(Current + RTWA(6815, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 6815, 0x04000000, 1); /* is_parsed */
		
		*(EIF_BOOLEAN *)(Current + RTWA(6815, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(6);
		tr1 = RTMS_EX_H("Syntax error unexpected token, expecting `{\' or `[\'",51,555530535);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6818, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {JSON_PARSER}.parse */
EIF_TYPED_VALUE F83_6936 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	
	RTEAA(l_feature_name, 82, Current, 1, 0, 1320);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1320);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6815, dtype));
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6807, dtype))(Current);
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x08000000, 1, 0); /* loc1 */
		
		loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
		RTHOOK(4);
		switch (loc1) {
			case (EIF_CHARACTER_8) '{':
				RTHOOK(5);
				RTDBGAL(Current, 0, 0xF80001A4, 0,0); /* Result */
				
				Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6821, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				break;
			case (EIF_CHARACTER_8) '\"':
				RTHOOK(6);
				RTDBGAL(Current, 0, 0xF80001A4, 0,0); /* Result */
				
				Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6822, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				break;
			case (EIF_CHARACTER_8) '[':
				RTHOOK(7);
				RTDBGAL(Current, 0, 0xF80001A4, 0,0); /* Result */
				
				Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6823, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				break;
			default:
				RTHOOK(8);
				tb1 = '\01';
				tb2 = EIF_TEST(isdigit(loc1));
				if (!tb2) {
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6796, dtype))(Current)).it_c1);
					tb1 = (EIF_BOOLEAN)(loc1 == tc1);
				}
				if (tb1) {
					RTHOOK(9);
					RTDBGAL(Current, 0, 0xF80001A4, 0,0); /* Result */
					
					Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTHOOK(10);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6825, dtype))(Current)).it_b);
					if (tb1) {
						RTHOOK(11);
						RTDBGAL(Current, 0, 0xF80001A4, 0,0); /* Result */
						
						tr1 = RTLN(421);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
						RTNHOOK(11,1);
						Result = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(12);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
						RTHOOK(13);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
						RTHOOK(14);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
					} else {
						RTHOOK(15);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6827, dtype))(Current)).it_b);
						if (tb1) {
							RTHOOK(16);
							RTDBGAL(Current, 0, 0xF80001A4, 0,0); /* Result */
							
							tr1 = RTLN(422);
							ub1 = (EIF_BOOLEAN) 1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17287, Dtype(tr1)))(tr1, ub1x);
							RTNHOOK(16,1);
							Result = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(17);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
							RTHOOK(18);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
							RTHOOK(19);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
						} else {
							RTHOOK(20);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6826, dtype))(Current)).it_b);
							if (tb1) {
								RTHOOK(21);
								RTDBGAL(Current, 0, 0xF80001A4, 0,0); /* Result */
								
								tr1 = RTLN(422);
								ub1 = (EIF_BOOLEAN) 0;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17287, Dtype(tr1)))(tr1, ub1x);
								RTNHOOK(21,1);
								Result = (EIF_REFERENCE) RTCCL(tr1);
								RTHOOK(22);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
								RTHOOK(23);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
								RTHOOK(24);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
								RTHOOK(25);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
							} else {
								RTHOOK(26);
								RTDBGAA(Current, dtype, 6815, 0x04000000, 1); /* is_parsed */
								
								*(EIF_BOOLEAN *)(Current + RTWA(6815, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								RTHOOK(27);
								tr1 = RTMS_EX_H("JSON is not well formed in parse",32,1233185637);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6818, dtype))(Current, ur1x);
								RTHOOK(28);
								RTDBGAL(Current, 0, 0xF80001A4, 0,0); /* Result */
								
								Result = (EIF_REFERENCE) NULL;
							}
						}
					}
				}
				break;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(29);
		RTCT("is_parsed_implies_result_not_void", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6815, dtype));
		if ((!(tb1) || ((EIF_BOOLEAN)(Result != NULL)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ub1
}

/* {JSON_PARSER}.parse_object */
EIF_TYPED_VALUE F83_6937 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_object";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,loc3);
	RTLR(7,ur2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 82, Current, 3, 0, 1321);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1321);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80001C9, 0,0); /* Result */
	
	tr1 = RTLN(457);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17786, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6807, dtype))(Current);
	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6792, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == tc2)) {
	} else {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6806, dtype))(Current);
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) !loc1) break;
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6807, dtype))(Current);
			RTHOOK(10);
			RTDBGAL(Current, 2, 0xF80001A8, 0, 0); /* loc2 */
			
			loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6822, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
			RTHOOK(12);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6807, dtype))(Current);
			RTHOOK(13);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':')) {
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
				RTHOOK(15);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6807, dtype))(Current);
			} else {
				RTHOOK(16);
				RTDBGAA(Current, dtype, 6815, 0x04000000, 1); /* is_parsed */
				
				*(EIF_BOOLEAN *)(Current + RTWA(6815, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(17);
				tr1 = RTMS_EX_H("\012 Input string is a not well formed JSON, expected: : found: ",61,1225215520);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
				RTNHOOK(17,1);
				tr2 = c_outc(tc1);
				ur1 = RTCCL(tr2);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6818, dtype))(Current, ur1x);
				RTHOOK(18);
				RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
				
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(19);
			RTDBGAL(Current, 3, 0xF80001A4, 0, 0); /* loc3 */
			
			loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6820, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(20);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6815, dtype));
			if ((EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) && (EIF_BOOLEAN)(loc2 != NULL)))) {
				RTHOOK(21);
				ur1 = RTCCL(loc3);
				ur2 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17787, "put", Result))(Result, ur1x, ur2x);
				RTHOOK(22);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
				RTHOOK(23);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6807, dtype))(Current);
				RTHOOK(24);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
				tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6792, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN)(tc1 == tc2)) {
					RTHOOK(25);
					RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
					
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(26);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
					if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) ',')) {
						RTHOOK(27);
						RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
						
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(28);
						RTDBGAA(Current, dtype, 6815, 0x04000000, 1); /* is_parsed */
						
						*(EIF_BOOLEAN *)(Current + RTWA(6815, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(29);
						tr1 = RTMS_EX_H("JSON Object syntactically malformed expected , found: [",55,479025243);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
						RTNHOOK(29,1);
						tr2 = c_outc(tc1);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H("]",1,93);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6818, dtype))(Current, ur1x);
					}
				}
			} else {
				RTHOOK(30);
				RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
				
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
}

/* {JSON_PARSER}.parse_string */
EIF_TYPED_VALUE F83_6938 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_string";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_CHAR8, &loc4);
	
	RTEAA(l_feature_name, 82, Current, 4, 0, 1322);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1322);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF8000185, 0, 0); /* loc2 */
	
	tr1 = RTLN(389);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(15571, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6794, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == tc2)) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) !loc1) break;
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
			RTHOOK(6);
			RTDBGAL(Current, 4, 0x08000000, 1, 0); /* loc4 */
			
			loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
			RTHOOK(7);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6794, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN)(loc4 == tc1)) {
				RTHOOK(8);
				RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
				
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(9);
				if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\\')) {
					RTHOOK(10);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
					RTHOOK(11);
					RTDBGAL(Current, 4, 0x08000000, 1, 0); /* loc4 */
					
					loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
					RTHOOK(12);
					if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) 'u')) {
						RTHOOK(13);
						RTDBGAL(Current, 3, 0xF8000185, 0, 0); /* loc3 */
						
						tr1 = RTLN(389);
						tr2 = RTMS_EX_H("\\u",2,23669);
						ur1 = tr2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(15701, Dtype(tr1)))(tr1, ur1x);
						RTNHOOK(13,1);
						loc3 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(14);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6828, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15829, "append", loc3))(loc3, ur1x);
						RTHOOK(15);
						RTDBGAL(Current, 4, 0x08000000, 1, 0); /* loc4 */
						
						loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
						RTHOOK(16);
						ur1 = RTCCL(loc3);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6830, dtype))(Current, ur1x)).it_b);
						if (tb1) {
							RTHOOK(17);
							ur1 = RTCCL(loc3);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15829, "append", loc2))(loc2, ur1x);
						} else {
							RTHOOK(18);
							RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
							
							loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(19);
							RTDBGAA(Current, dtype, 6815, 0x04000000, 1); /* is_parsed */
							
							*(EIF_BOOLEAN *)(Current + RTWA(6815, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(20);
							tr1 = RTMS_EX_H("Input String is not well formed JSON, expected a Unicode value, found [",71,1487629147);
							tr2 = c_outc(loc4);
							ur1 = RTCCL(tr2);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr1 = RTMS_EX_H(" ]",2,8285);
							ur1 = tr1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6818, dtype))(Current, ur1x);
						}
					} else {
						RTHOOK(21);
						tb1 = '\01';
						tb2 = '\0';
						uc1 = loc4;
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6800, dtype))(Current, uc1x)).it_b);
						if ((EIF_BOOLEAN) !tb3) {
							uc1 = loc4;
							tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6801, dtype))(Current, uc1x)).it_b);
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (!(tb2)) {
							tb1 = (EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\012');
						}
						if (tb1) {
							RTHOOK(22);
							RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
							
							loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(23);
							RTDBGAA(Current, dtype, 6815, 0x04000000, 1); /* is_parsed */
							
							*(EIF_BOOLEAN *)(Current + RTWA(6815, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(24);
							tr1 = RTMS_EX_H("Input String is not well formed JSON, found [",45,1611731291);
							tr2 = c_outc(loc4);
							ur1 = RTCCL(tr2);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr1 = RTMS_EX_H(" ]",2,8285);
							ur1 = tr1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6818, dtype))(Current, ur1x);
						} else {
							RTHOOK(25);
							uc1 = (EIF_CHARACTER_8) '\\';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", loc2))(loc2, uc1x);
							RTHOOK(26);
							uc1 = loc4;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", loc2))(loc2, uc1x);
						}
					}
				} else {
					RTHOOK(27);
					tb1 = '\0';
					uc1 = loc4;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6800, dtype))(Current, uc1x)).it_b);
					if (tb2) {
						tb1 = (EIF_BOOLEAN)(loc4 != (EIF_CHARACTER_8) '/');
					}
					if (tb1) {
						RTHOOK(28);
						RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
						
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(29);
						RTDBGAA(Current, dtype, 6815, 0x04000000, 1); /* is_parsed */
						
						*(EIF_BOOLEAN *)(Current + RTWA(6815, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(30);
						tr1 = RTMS_EX_H("Input String is not well formed JSON, found [",45,1611731291);
						tr2 = c_outc(loc4);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(" ]",2,8285);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6818, dtype))(Current, ur1x);
					} else {
						RTHOOK(31);
						uc1 = loc4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", loc2))(loc2, uc1x);
					}
				}
			}
		}
		RTHOOK(32);
		RTDBGAL(Current, 0, 0xF80001A8, 0,0); /* Result */
		
		tr1 = RTLN(424);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17299, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(32,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(33);
		RTDBGAL(Current, 0, 0xF80001A8, 0,0); /* Result */
		
		Result = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef uc1
}

/* {JSON_PARSER}.parse_array */
EIF_TYPED_VALUE F83_6939 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_array";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_CHAR8, &loc3);
	
	RTEAA(l_feature_name, 82, Current, 3, 0, 1323);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1323);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80001C8, 0,0); /* Result */
	
	tr1 = RTLN(456);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17775, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6807, dtype))(Current);
	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6793, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == tc2)) {
	} else {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6806, dtype))(Current);
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) !loc1) break;
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6807, dtype))(Current);
			RTHOOK(10);
			RTDBGAL(Current, 2, 0xF80001A4, 0, 0); /* loc2 */
			
			loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6820, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(11);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6815, dtype));
			if ((EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN)(loc2 != NULL))) {
				RTHOOK(12);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17780, "add", Result))(Result, ur1x);
				RTHOOK(13);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6807, dtype))(Current);
				RTHOOK(15);
				RTDBGAL(Current, 3, 0x08000000, 1, 0); /* loc3 */
				
				loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
				RTHOOK(16);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6793, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN)(loc3 == tc1)) {
					RTHOOK(17);
					RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
					
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(18);
					if ((EIF_BOOLEAN)(loc3 != (EIF_CHARACTER_8) ',')) {
						RTHOOK(19);
						RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
						
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(20);
						RTDBGAA(Current, dtype, 6815, 0x04000000, 1); /* is_parsed */
						
						*(EIF_BOOLEAN *)(Current + RTWA(6815, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(21);
						tr1 = RTMS_EX_H("Array is not well formed JSON,  found [",39,1142695003);
						tr2 = c_outc(loc3);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(" ]",2,8285);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6818, dtype))(Current, ur1x);
					}
				}
			} else {
				RTHOOK(22);
				RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
				
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(23);
				tr1 = RTMS_EX_H("Array is not well formed JSON,  found [",39,1142695003);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
				RTNHOOK(23,1);
				tr2 = c_outc(tc1);
				ur1 = RTCCL(tr2);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTMS_EX_H(" ]",2,8285);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6818, dtype))(Current, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {JSON_PARSER}.parse_number */
EIF_TYPED_VALUE F83_6940 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_number";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_CHAR8, &loc4);
	
	RTEAA(l_feature_name, 82, Current, 4, 0, 1324);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1324);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000185, 0, 0); /* loc1 */
	
	tr1 = RTLN(389);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(15571, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", loc1))(loc1, uc1x);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) !loc2) break;
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
		RTHOOK(6);
		RTDBGAL(Current, 4, 0x08000000, 1, 0); /* loc4 */
		
		loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
		RTHOOK(7);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tb4 = '\01';
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6809, dtype))(Current)).it_b);
		if (!(EIF_BOOLEAN) !tb5) {
			uc1 = loc4;
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6799, dtype))(Current, uc1x)).it_b);
			tb4 = tb5;
		}
		if (!tb4) {
			tb3 = (EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) ',');
		}
		if (!tb3) {
			tb2 = (EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\012');
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\015');
		}
		if (tb1) {
			RTHOOK(8);
			RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
			
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6806, dtype))(Current);
		} else {
			RTHOOK(10);
			uc1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", loc1))(loc1, uc1x);
		}
	}
	RTHOOK(11);
	ur1 = RTCCL(loc1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6829, dtype))(Current, ur1x)).it_b);
	if (tb1) {
		RTHOOK(12);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15601, "is_integer", loc1))(loc1)).it_b);
		if (tb1) {
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF80001A7, 0,0); /* Result */
			
			tr1 = RTLN(423);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15635, "to_integer", loc1))(loc1)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			ui8_1 = ti8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17289, Dtype(tr1)))(tr1, ui8_1x);
			RTNHOOK(13,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(14);
			RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
			
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(15);
			tb1 = '\0';
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15596, "is_double", loc1))(loc1)).it_b);
			if (tb2) {
				tb1 = (EIF_BOOLEAN) !loc3;
			}
			if (tb1) {
				RTHOOK(16);
				RTDBGAL(Current, 0, 0xF80001A7, 0,0); /* Result */
				
				tr1 = RTLN(423);
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15645, "to_double", loc1))(loc1)).it_r8);
				ur8_1 = tr8_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17291, Dtype(tr1)))(tr1, ur8_1x);
				RTNHOOK(16,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
	} else {
		RTHOOK(17);
		RTDBGAA(Current, dtype, 6815, 0x04000000, 1); /* is_parsed */
		
		*(EIF_BOOLEAN *)(Current + RTWA(6815, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(18);
		tr1 = RTMS_EX_H("Expected a number, found: [ ",28,1471623456);
		ur1 = RTCCL(loc1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(" ]",2,8285);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6818, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur8_1
#undef ui8_1
#undef uc1
}

/* {JSON_PARSER}.is_null */
EIF_TYPED_VALUE F83_6941 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_null";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 82, Current, 2, 0, 1325);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1325);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000185, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6835, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF8000185, 0, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6813, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6813, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(loc1 + RTVA(15730, "count", loc1));
	ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + ti4_3) - ((EIF_INTEGER_32) 1L));
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6808, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc2))(loc2, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {JSON_PARSER}.is_false */
EIF_TYPED_VALUE F83_6942 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_false";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 82, Current, 2, 0, 1326);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1326);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000185, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6833, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF8000185, 0, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6813, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6813, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(loc1 + RTVA(15730, "count", loc1));
	ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + ti4_3) - ((EIF_INTEGER_32) 1L));
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6808, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc2))(loc2, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {JSON_PARSER}.is_true */
EIF_TYPED_VALUE F83_6943 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_true";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 82, Current, 2, 0, 1327);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1327);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000185, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6834, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF8000185, 0, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6813, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6813, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(loc1 + RTVA(15730, "count", loc1));
	ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + ti4_3) - ((EIF_INTEGER_32) 1L));
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6808, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc2))(loc2, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {JSON_PARSER}.read_unicode */
EIF_TYPED_VALUE F83_6944 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_unicode";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 82, Current, 1, 0, 1306);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1306);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000185, 0,0); /* Result */
	
	tr1 = RTLN(389);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(15571, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 4L))) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6809, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
		RTHOOK(5);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", Result))(Result, uc1x);
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uc1
}

/* {JSON_PARSER}.is_valid_number */
EIF_TYPED_VALUE F83_6945 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_number";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 82, Current, 4, 1, 1307);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(82, Current, 1307);
	if (arg1) {
		RTCC(arg1, 82, l_feature_name, 1, 389);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000185, 0, 0); /* loc1 */
	
	tr1 = RTLN(389);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(15571, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(15730, "count", arg1));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
		
		ui4_1 = loc3;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc2 = (EIF_CHARACTER_8) tc1;
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '-')) {
			RTHOOK(9);
			uc1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", loc1))(loc1, uc1x);
			RTHOOK(10);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3++;
			RTHOOK(11);
			RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
			
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
		}
		RTHOOK(12);
		tb1 = EIF_TEST(isdigit(loc2));
		if (tb1) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '0')) {
				RTHOOK(14);
				uc1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", loc1))(loc1, uc1x);
				RTHOOK(15);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				loc3++;
				RTHOOK(16);
				RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
				
				ui4_1 = loc3;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
				loc2 = (EIF_CHARACTER_8) tc1;
			} else {
				RTHOOK(17);
				uc1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", loc1))(loc1, uc1x);
				RTHOOK(18);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				loc3++;
				RTHOOK(19);
				RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
				
				ui4_1 = loc3;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
				loc2 = (EIF_CHARACTER_8) tc1;
				for (;;) {
					RTHOOK(20);
					tb1 = '\01';
					if (!(EIF_BOOLEAN) (loc3 > loc4)) {
						tb2 = EIF_TEST(isdigit(loc2));
						tb1 = (EIF_BOOLEAN) !tb2;
					}
					if (tb1) break;
					RTHOOK(21);
					uc1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", loc1))(loc1, uc1x);
					RTHOOK(22);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					loc3++;
					RTHOOK(23);
					RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
					
					ui4_1 = loc3;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc2 = (EIF_CHARACTER_8) tc1;
				}
			}
		}
	}
	RTHOOK(24);
	if (Result) {
		RTHOOK(25);
		if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '.')) {
			RTHOOK(26);
			uc1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", loc1))(loc1, uc1x);
			RTHOOK(27);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3++;
			RTHOOK(28);
			RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
			
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			RTHOOK(29);
			tb2 = EIF_TEST(isdigit(loc2));
			if (tb2) {
				for (;;) {
					RTHOOK(30);
					tb2 = '\01';
					if (!(EIF_BOOLEAN) (loc3 > loc4)) {
						tb3 = EIF_TEST(isdigit(loc2));
						tb2 = (EIF_BOOLEAN) !tb3;
					}
					if (tb2) break;
					RTHOOK(31);
					uc1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", loc1))(loc1, uc1x);
					RTHOOK(32);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					loc3++;
					RTHOOK(33);
					RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
					
					ui4_1 = loc3;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc2 = (EIF_CHARACTER_8) tc1;
				}
			} else {
				RTHOOK(34);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	RTHOOK(35);
	if (Result) {
		RTHOOK(36);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) 'e') || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) 'E'))) {
			RTHOOK(37);
			uc1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", loc1))(loc1, uc1x);
			RTHOOK(38);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3++;
			RTHOOK(39);
			RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
			
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			RTHOOK(40);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '+') || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '-'))) {
				RTHOOK(41);
				uc1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", loc1))(loc1, uc1x);
				RTHOOK(42);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				loc3++;
				RTHOOK(43);
				RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
				
				ui4_1 = loc3;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
				loc2 = (EIF_CHARACTER_8) tc1;
			}
			RTHOOK(44);
			tb3 = EIF_TEST(isdigit(loc2));
			if (tb3) {
				for (;;) {
					RTHOOK(45);
					tb3 = '\01';
					if (!(EIF_BOOLEAN) (loc3 > loc4)) {
						tb4 = EIF_TEST(isdigit(loc2));
						tb3 = (EIF_BOOLEAN) !tb4;
					}
					if (tb3) break;
					RTHOOK(46);
					uc1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", loc1))(loc1, uc1x);
					RTHOOK(47);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					loc3++;
					RTHOOK(48);
					RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
					
					ui4_1 = loc3;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc2 = (EIF_CHARACTER_8) tc1;
				}
			} else {
				RTHOOK(49);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	RTHOOK(50);
	if (Result) {
		for (;;) {
			RTHOOK(51);
			tb4 = '\01';
			if (!(EIF_BOOLEAN) (loc3 > loc4)) {
				tb5 = EIF_TEST(isspace(loc2));
				tb4 = (EIF_BOOLEAN) !tb5;
			}
			if (tb4) break;
			RTHOOK(52);
			uc1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9646, "extend", loc1))(loc1, uc1x);
			RTHOOK(53);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3++;
			RTHOOK(54);
			RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
			
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
		}
		RTHOOK(55);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		tb5 = '\0';
		if ((EIF_BOOLEAN) (loc3 > loc4)) {
			ur1 = RTCCL(arg1);
			tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc1))(loc1, ur1x)).it_b);
			tb5 = tb6;
		}
		Result = (EIF_BOOLEAN) tb5;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(56);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {JSON_PARSER}.is_valid_unicode */
EIF_TYPED_VALUE F83_6946 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_unicode";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 82, Current, 1, 1, 1308);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(82, Current, 1308);
	if (arg1) {
		RTCC(arg1, 82, l_feature_name, 1, 389);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(15730, "count", arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 6L))) {
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
		tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\\');
	}
	if (tb2) {
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'u');
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 6L)) || (EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 0))) break;
			RTHOOK(5);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg1))(arg1, ui4_1x)).it_c1);
			switch (tc1) {
				case (EIF_CHARACTER_8) '0':
				case (EIF_CHARACTER_8) '1':
				case (EIF_CHARACTER_8) '2':
				case (EIF_CHARACTER_8) '3':
				case (EIF_CHARACTER_8) '4':
				case (EIF_CHARACTER_8) '5':
				case (EIF_CHARACTER_8) '6':
				case (EIF_CHARACTER_8) '7':
				case (EIF_CHARACTER_8) '8':
				case (EIF_CHARACTER_8) '9':
				case (EIF_CHARACTER_8) 'A':
				case (EIF_CHARACTER_8) 'B':
				case (EIF_CHARACTER_8) 'C':
				case (EIF_CHARACTER_8) 'D':
				case (EIF_CHARACTER_8) 'E':
				case (EIF_CHARACTER_8) 'F':
				case (EIF_CHARACTER_8) 'a':
				case (EIF_CHARACTER_8) 'b':
				case (EIF_CHARACTER_8) 'c':
				case (EIF_CHARACTER_8) 'd':
				case (EIF_CHARACTER_8) 'e':
				case (EIF_CHARACTER_8) 'f':
					break;
				default:
					RTHOOK(6);
					RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
					
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					break;
			}
			RTHOOK(7);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {JSON_PARSER}.extra_elements */
EIF_TYPED_VALUE F83_6947 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "extra_elements";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	
	RTEAA(l_feature_name, 82, Current, 1, 0, 1309);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(82, Current, 1309);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6809, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
	}
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x08000000, 1, 0); /* loc1 */
	
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)).it_c1);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) ' ') || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\015')) || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\000')) || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\011')) || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\012'))) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6809, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6805, dtype))(Current);
	}
	RTHOOK(6);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6809, dtype))(Current)).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {JSON_PARSER}.is_valid_start_symbol */
EIF_TYPED_VALUE F83_6948 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_start_symbol";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 82, Current, 1, 0, 1310);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(82, Current, 1310);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6811, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(15730, "count", loc1));
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		tb1 = '\01';
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc1))(loc1, ui4_1x)).it_c1);
		if (!(EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '{')) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc1))(loc1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '[');
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
}

/* {JSON_PARSER}.false_id */
RTOID (F83_6949)


EIF_TYPED_VALUE F83_6949 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F83_6949,1312,RTMS_EX_H("false",5,1635280741));
}

/* {JSON_PARSER}.true_id */
RTOID (F83_6950)


EIF_TYPED_VALUE F83_6950 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F83_6950,1313,RTMS_EX_H("true",4,1953658213));
}

/* {JSON_PARSER}.null_id */
RTOID (F83_6951)


EIF_TYPED_VALUE F83_6951 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F83_6951,1314,RTMS_EX_H("null",4,1853189228));
}

void EIF_Minit83 (void)
{
	GTCX
	RTOTS (6949,F83_6949)
	RTOTS (6950,F83_6950)
	RTOTS (6951,F83_6951)
}


#ifdef __cplusplus
}
#endif

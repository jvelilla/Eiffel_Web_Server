/*
 * Code for class WSF_DEFAULT_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F311_13357(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F311_13358(EIF_REFERENCE);
extern void F311_13359(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F311_13360(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F311_13361(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit311(void);

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

/* {WSF_DEFAULT_RESPONSE}.make */
void F311_13357 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 310, Current, 0, 1, 8972);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(310, Current, 8972);
	if (arg1) {
		RTCC(arg1, 310, l_feature_name, 1, 370);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 11930, 0xF8000172, 0); /* request */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(11930, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WSF_DEFAULT_RESPONSE}.request */
EIF_TYPED_VALUE F311_13358 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11930,Dtype(Current)));
	return r;
}


/* {WSF_DEFAULT_RESPONSE}.send_to */
void F311_13359 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "send_to";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 310, Current, 2, 1, 8974);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(310, Current, 8974);
	if (arg1) {
		RTCC(arg1, 310, l_feature_name, 1, 150);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("header_not_committed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8310, "header_committed", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("status_not_committed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8309, "status_committed", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("no_message_committed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8311, "message_committed", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0xF8000172, 0, 0); /* loc2 */
	
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11930, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8039, 121))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16435, "is_request_method", loc2))(loc2, ur1x)).it_b);
	if (tb1) {
		RTHOOK(6);
		RTDBGAL(Current, 1, 0xF800012F, 0, 0); /* loc1 */
		
		ur1 = RTCCL(loc2);
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11931, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTHOOK(7);
		RTDBGAL(Current, 1, 0xF800012F, 0, 0); /* loc1 */
		
		ur1 = RTCCL(loc2);
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11932, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	}
	RTHOOK(8);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8337, "send", arg1))(arg1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("res_status_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8313, "status_is_set", arg1))(arg1)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {WSF_DEFAULT_RESPONSE}.trace_message */
EIF_TYPED_VALUE F311_13360 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "trace_message";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 310, Current, 0, 1, 8975);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(310, Current, 8975);
	if (arg1) {
		RTCC(arg1, 310, l_feature_name, 1, 370);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000130, 0,0); /* Result */
	
	tr1 = RTLN(304);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(11826, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef arg1
}

/* {WSF_DEFAULT_RESPONSE}.not_found_message */
EIF_TYPED_VALUE F311_13361 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "not_found_message";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 310, Current, 0, 1, 8971);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(310, Current, 8971);
	if (arg1) {
		RTCC(arg1, 310, l_feature_name, 1, 370);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000131, 0,0); /* Result */
	
	tr1 = RTLN(305);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(11829, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef arg1
}

void EIF_Minit311 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

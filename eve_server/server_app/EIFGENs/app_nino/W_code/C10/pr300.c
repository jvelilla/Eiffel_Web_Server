/*
 * Code for class PROCESS_THREAD_TIMER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F300_12093(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F300_12094(EIF_REFERENCE);
extern void F300_12095(EIF_REFERENCE);
extern EIF_TYPED_VALUE F300_12096(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F300_12097(EIF_REFERENCE);
extern void F300_12098(EIF_REFERENCE);
extern EIF_TYPED_VALUE F300_12099(EIF_REFERENCE);
extern EIF_TYPED_VALUE F300_12100(EIF_REFERENCE);
extern void F300_23514(EIF_REFERENCE, int);
extern void EIF_Minit300(void);

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

/* {PROCESS_THREAD_TIMER}.make */
void F300_12093 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 299, Current, 0, 1, 4902);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(299, Current, 4902);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("thread_capable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11006, 286))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("interval_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7912, dtype))(Current);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6843, 0x10000000, 1); /* sleep_time */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6843, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11243, 0xF8000157, 0); /* mutex */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(11243, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12577, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11243, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 6840, 0x04000000, 1); /* has_started */
	
	*(EIF_BOOLEAN *)(Current + RTWA(6840, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("sleep_time_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6843, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("destroyed_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6842, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {PROCESS_THREAD_TIMER}.start */
void F300_12094 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 299, Current, 0, 0, 4903);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(299, Current, 4903);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("thread_capable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11006, 286))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("process_launcher_not_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6844, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("timer_destroyed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6842, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12580, "lock", tr1))(tr1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11242, 0x04000000, 1); /* is_destroy_requested */
	
	*(EIF_BOOLEAN *)(Current + RTWA(11242, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7916, dtype))(Current);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 6840, 0x04000000, 1); /* has_started */
	
	*(EIF_BOOLEAN *)(Current + RTWA(6840, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12582, "unlock", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {PROCESS_THREAD_TIMER}.destroy */
void F300_12095 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 299, Current, 0, 0, 4904);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(299, Current, 4904);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("thread_capable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11006, 286))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("process_launcher_not_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6844, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12580, "lock", tr1))(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11242, 0x04000000, 1); /* is_destroy_requested */
	
	*(EIF_BOOLEAN *)(Current + RTWA(11242, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12582, "unlock", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {PROCESS_THREAD_TIMER}.wait */
EIF_TYPED_VALUE F300_12096 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "wait";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 299, Current, 0, 1, 4905);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(299, Current, 4905);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("thread_capable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11006, 286))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("process_launcher_not_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6844, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_timeout_not_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("timer_started", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6840, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7923, dtype))(Current);
		RTHOOK(7);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(8);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		tu8_1 = (EIF_NATURAL_64) arg1;
		uu8_1 = tu8_1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7924, dtype))(Current, uu8_1x)).it_b);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu8_1
#undef arg1
}

/* {PROCESS_THREAD_TIMER}.is_destroyed */
EIF_TYPED_VALUE F300_12097 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_destroyed";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 299, Current, 0, 0, 4906);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(299, Current, 4906);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12580, "lock", tr1))(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = *(EIF_BOOLEAN *)(Current + RTWA(6840, dtype));
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6840, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7914, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) !Result || (EIF_BOOLEAN) (tb1 && tb2));
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12582, "unlock", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {PROCESS_THREAD_TIMER}.execute */
void F300_12098 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "execute";
	RTEX;
	EIF_INTEGER_64 loc1 = (EIF_INTEGER_64) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT64, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 299, Current, 2, 0, 4907);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(299, Current, 4907);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6844, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	loc2 = RTRV(eif_non_attached_type(106),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0x24000000, 1, 0); /* loc1 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6843, dtype));
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6845, dtype))(Current)).it_i4);
		ti8_2 = (EIF_INTEGER_64) ti4_1;
		loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) (ti8_1 * ti8_2);
		for (;;) {
			RTHOOK(3);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11242, dtype));
			if (tb1) break;
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7876, "check_exit", loc2))(loc2);
			RTHOOK(5);
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11242, dtype));
			if ((EIF_BOOLEAN) !tb2) {
				RTHOOK(6);
				ui8_1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11224, dtype))(Current, ui8_1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui8_1
}

/* {PROCESS_THREAD_TIMER}.is_destroy_requested */
EIF_TYPED_VALUE F300_12099 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11242,Dtype(Current)));
	return r;
}


/* {PROCESS_THREAD_TIMER}.mutex */
EIF_TYPED_VALUE F300_12100 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11243,Dtype(Current)));
	return r;
}


/* {PROCESS_THREAD_TIMER}._invariant */
void F300_23514 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 299, Current, 0, 23513);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("mutex_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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

void EIF_Minit300 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

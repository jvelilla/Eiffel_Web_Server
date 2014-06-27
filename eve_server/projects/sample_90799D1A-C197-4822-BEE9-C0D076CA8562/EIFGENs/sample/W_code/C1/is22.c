/*
 * Code for class ISE_EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F22_483(EIF_REFERENCE);
extern void F22_484(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_485(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_486(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_487(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F22_488(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F22_489(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F22_490(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F22_491(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F22_492(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F22_493(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F22_494(EIF_REFERENCE);
extern void F22_495(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_496(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F22_497(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_498(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_499(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_500(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F22_501(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_502(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_503(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_504(EIF_REFERENCE);
extern void F22_505(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_506(EIF_REFERENCE);
extern void F22_507(EIF_REFERENCE);
extern void F22_508(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F22_509(EIF_REFERENCE);
extern void EIF_Minit22(void);

#ifdef __cplusplus
}
#endif

#include "eif_except.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_EXCEPTION_MANAGER}.last_exception */
EIF_TYPED_VALUE F22_483 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "last_exception";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 576);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 576);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(494, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(535, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {ISE_EXCEPTION_MANAGER}.raise */
void F22_484 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "raise";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,loc3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 21, Current, 3, 1, 577);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 577);
	RTCC(arg1, 21, l_feature_name, 1, eif_attached_type(43));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_exception_is_raisable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(811, "is_raisable", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(812, "is_ignored", arg1))(arg1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(501, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(475, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(815, "set_throwing_exception", arg1))(arg1, ur1x);
		}
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(487, dtype))(Current, ur1x);
		RTHOOK(7);
		RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
		
		loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(819, "c_description", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(9);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1066, "item", loc3))(loc3)).it_p);
			loc2 = (EIF_POINTER) tp1;
		} else {
			RTHOOK(10);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		}
		RTHOOK(11);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(801, "code", arg1))(arg1)).it_i4);
		ui4_1 = ti4_1;
		up1 = loc1;
		up2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(500, dtype))(Current, ui4_1x, up1x, up2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.ignore */
void F22_485 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "ignore";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
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
	EIF_BOOLEAN tb1;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 21, Current, 1, 1, 578);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 578);
	{
		static EIF_TYPE_INDEX typarr0[] = {180,43,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 21, l_feature_name, 1, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_ignorable", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(480, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2043, "type_id", arg1))(arg1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(489, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ui4_1 = loc1;
	ui4_2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1023, "force", tr1))(tr1, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_caught", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(482, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.catch */
void F22_486 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "catch";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 21, Current, 1, 1, 579);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 579);
	{
		static EIF_TYPE_INDEX typarr0[] = {180,43,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 21, l_feature_name, 1, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2043, "type_id", arg1))(arg1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(489, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1914, "remove", tr1))(tr1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_ignored", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(482, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.set_is_ignored */
void F22_487 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_is_ignored";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 2, 580);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 580);
	{
		static EIF_TYPE_INDEX typarr0[] = {180,43,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 21, l_feature_name, 1, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_ignored_implies_is_ignorable", EX_PRE);
		tb1 = '\01';
		if (arg2) {
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(480, dtype))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (arg2) {
		RTHOOK(4);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(477, dtype))(Current, ur1x);
	} else {
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(478, dtype))(Current, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_ignored_set", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(482, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN)(tb1 == arg2)) {
			RTCK;
		} else {
			RTCF;
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
#undef ur1
#undef arg2
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.is_ignorable */
EIF_TYPED_VALUE F22_488 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_ignorable";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 581);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 581);
	{
		static EIF_TYPE_INDEX typarr0[] = {180,43,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 21, l_feature_name, 1, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(490, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2043, "type_id", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1884, "has", tr1))(tr1, ui4_1x)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.is_raisable */
EIF_TYPED_VALUE F22_489 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_raisable";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 582);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 582);
	{
		static EIF_TYPE_INDEX typarr0[] = {180,43,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 21, l_feature_name, 1, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(491, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2043, "type_id", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1884, "has", tr1))(tr1, ui4_1x)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.is_ignored */
EIF_TYPED_VALUE F22_490 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_ignored";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 583);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 583);
	{
		static EIF_TYPE_INDEX typarr0[] = {180,43,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 21, l_feature_name, 1, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(489, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2043, "type_id", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1884, "has", tr1))(tr1, ui4_1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_is_caught", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(483, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.is_caught */
EIF_TYPED_VALUE F22_491 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_caught";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 584);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 584);
	{
		static EIF_TYPE_INDEX typarr0[] = {180,43,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 21, l_feature_name, 1, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(489, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2043, "type_id", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1884, "has", tr1))(tr1, ui4_1x)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_is_ignored", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(482, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.type_of_code */
EIF_TYPED_VALUE F22_492 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "type_of_code";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 585);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 585);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(71));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			RTHOOK(3);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(62));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 3L:
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(81));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(80));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(47));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(79));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(78));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(70));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(69));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(77));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(76));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(51));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(58));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 14L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(55));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			RTHOOK(16);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(62));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 16L:
			RTHOOK(17);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(54));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(74));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			RTHOOK(19);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(61));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			RTHOOK(20);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(68));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			RTHOOK(21);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(53));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			RTHOOK(22);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(65));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 22L:
			RTHOOK(23);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(50));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			RTHOOK(24);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(64));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			RTHOOK(25);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(44));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			RTHOOK(26);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(58));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 26L:
			RTHOOK(27);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(73));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			RTHOOK(28);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(65));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 28L:
			RTHOOK(29);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(49));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			RTHOOK(30);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(78));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			RTHOOK(31);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(57));
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			RTHOOK(32);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			tr1 = RTLNTY(eif_attached_type(66));
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			RTHOOK(33);
			RTDBGAL(Current, 0, 0xF80000B4, 0,0); /* Result */
			
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_code */
EIF_TYPED_VALUE F22_493 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "exception_from_code";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 21, Current, 3, 1, 586);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 586);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(71);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(2,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 2L:
			RTHOOK(3);
			RTDBGAL(Current, 3, 0xF800003E, 0, 0); /* loc3 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(495, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(535, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(4);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(503, 22))(Current)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(847, "set_code", loc3))(loc3, ui4_1x);
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			Result = (EIF_REFERENCE) RTCCL(loc3);
			break;
		case 3L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(81);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 4L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(80);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(7,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 5L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(47);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(8,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 6L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(79);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(9,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 7L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(78);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(10,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 8L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(70);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 9L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(69);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(12,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 10L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(77);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(13,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 11L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(76);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(14,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 12L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(51);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(15,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 13L:
			RTHOOK(16);
			RTDBGAL(Current, 1, 0xF800003A, 0, 0); /* loc1 */
			
			tr1 = RTLN(58);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(16,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(17);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(514, 22))(Current)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(845, "set_code", loc1))(loc1, ui4_1x);
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			Result = (EIF_REFERENCE) RTCCL(loc1);
			break;
		case 14L:
			RTHOOK(19);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(55);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(19,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 15L:
			RTHOOK(20);
			RTDBGAL(Current, 3, 0xF800003E, 0, 0); /* loc3 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(495, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(20,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(535, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(21);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(516, 22))(Current)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(847, "set_code", loc3))(loc3, ui4_1x);
			RTHOOK(22);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			Result = (EIF_REFERENCE) RTCCL(loc3);
			break;
		case 16L:
			RTHOOK(23);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(54);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(23,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 17L:
			RTHOOK(24);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(74);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(24,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 18L:
			RTHOOK(25);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(61);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(25,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 19L:
			RTHOOK(26);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(68);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(26,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 20L:
			RTHOOK(27);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(53);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(27,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 21L:
			RTHOOK(28);
			RTDBGAL(Current, 2, 0xF8000041, 0, 0); /* loc2 */
			
			tr1 = RTLN(65);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(28,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(29);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(522, 22))(Current)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(851, "set_code", loc2))(loc2, ui4_1x);
			RTHOOK(30);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			Result = (EIF_REFERENCE) RTCCL(loc2);
			break;
		case 22L:
			RTHOOK(31);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(50);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(31,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 23L:
			RTHOOK(32);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(64);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(32,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 24L:
			RTHOOK(33);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(44);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(33,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 25L:
			RTHOOK(34);
			RTDBGAL(Current, 1, 0xF800003A, 0, 0); /* loc1 */
			
			tr1 = RTLN(58);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(34,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(35);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(526, 22))(Current)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(845, "set_code", loc1))(loc1, ui4_1x);
			RTHOOK(36);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			Result = (EIF_REFERENCE) RTCCL(loc1);
			break;
		case 26L:
			RTHOOK(37);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(73);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(37,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 27L:
			RTHOOK(38);
			RTDBGAL(Current, 2, 0xF8000041, 0, 0); /* loc2 */
			
			tr1 = RTLN(65);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(38,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(39);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(528, 22))(Current)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(851, "set_code", loc2))(loc2, ui4_1x);
			RTHOOK(40);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			Result = (EIF_REFERENCE) RTCCL(loc2);
			break;
		case 28L:
			RTHOOK(41);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(49);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(41,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 29L:
			RTHOOK(42);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(78);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(42,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 30L:
			RTHOOK(43);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(57);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(43,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 31L:
			RTHOOK(44);
			RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
			
			tr1 = RTLN(66);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(44,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.exception_data */
EIF_TYPED_VALUE F22_494 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exception_data";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 587);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 587);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000077, 0,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(493, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(535, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {ISE_EXCEPTION_MANAGER}.set_last_exception */
void F22_495 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_last_exception";
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 588);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 588);
	if (arg1) {
		RTCC(arg1, 21, l_feature_name, 1, eif_non_attached_type(43));
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(494, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(536, "put", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("last_exception_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(494, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(535, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		if (RTCEQ(tr2, arg1)) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.set_exception_data */
void F22_496 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x, EIF_TYPED_VALUE arg11x, EIF_TYPED_VALUE arg12x)
{
	GTCX
	char *l_feature_name = "set_exception_data";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_b
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_r
#define arg7 arg7x.it_r
#define arg8 arg8x.it_r
#define arg9 arg9x.it_r
#define arg10 arg10x.it_r
#define arg11 arg11x.it_i4
#define arg12 arg12x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg12x.type & SK_HEAD) == SK_REF) arg12x.it_b = * (EIF_BOOLEAN *) arg12x.it_r;
	if ((arg11x.type & SK_HEAD) == SK_REF) arg11x.it_i4 = * (EIF_INTEGER_32 *) arg11x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(12);
	RTLR(0,arg5);
	RTLR(1,arg6);
	RTLR(2,arg7);
	RTLR(3,arg8);
	RTLR(4,arg9);
	RTLR(5,arg10);
	RTLR(6,Current);
	RTLR(7,tr1);
	RTLR(8,tr2);
	RTLR(9,ur1);
	RTLR(10,loc1);
	RTLR(11,loc2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU(SK_REF,&arg10);
	RTLU(SK_INT32,&arg11);
	RTLU(SK_BOOL,&arg12);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 21, Current, 2, 12, 589);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 589);
	RTCC(arg5, 21, l_feature_name, 5, eif_attached_type(170));
	RTCC(arg6, 21, l_feature_name, 6, eif_attached_type(170));
	RTCC(arg7, 21, l_feature_name, 7, eif_attached_type(170));
	RTCC(arg8, 21, l_feature_name, 8, eif_attached_type(170));
	RTCC(arg9, 21, l_feature_name, 9, eif_attached_type(170));
	RTCC(arg10, 21, l_feature_name, 10, eif_attached_type(170));
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(493, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,11,119,121,121,121,0xFF11,170,0xFF11,170,0xFF11,170,0xFF11,170,0xFF11,170,0xFF11,170,121,157,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 12, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr2+4)->it_r = arg5;
	RTAR(tr2,arg5);
	((EIF_TYPED_VALUE *)tr2+5)->it_r = arg6;
	RTAR(tr2,arg6);
	((EIF_TYPED_VALUE *)tr2+6)->it_r = arg7;
	RTAR(tr2,arg7);
	((EIF_TYPED_VALUE *)tr2+7)->it_r = arg8;
	RTAR(tr2,arg8);
	((EIF_TYPED_VALUE *)tr2+8)->it_r = arg9;
	RTAR(tr2,arg9);
	((EIF_TYPED_VALUE *)tr2+9)->it_r = arg10;
	RTAR(tr2,arg10);
	((EIF_TYPED_VALUE *)tr2+10)->it_i4 = arg11;
	((EIF_TYPED_VALUE *)tr2+11)->it_b = arg12;
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(536, "put", tr1))(tr1, ur1x);
	RTHOOK(2);
	if (arg2) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(496, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTHOOK(4);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(487, dtype))(Current, ur1x);
		}
	} else {
		RTHOOK(5);
		RTCT0("last_exception_attached", EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(475, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		ur1 = RTCCL(arg10);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(822, "set_exception_trace", loc2))(loc2, ur1x);
		RTHOOK(7);
		ur1 = RTCCL(arg6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(816, "set_recipient_name", loc2))(loc2, ur1x);
		RTHOOK(8);
		ur1 = RTCCL(arg7);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(820, "set_type_name", loc2))(loc2, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
#undef up1
#undef ur1
#undef arg12
#undef arg11
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.ignored_exceptions */
RTOID (F22_497)
EIF_TYPED_VALUE F22_497 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ignored_exceptions";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F22_497);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 563);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 563);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800010D, 0,0); /* Result */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {269,121,121,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1880, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {ISE_EXCEPTION_MANAGER}.unignorable_exceptions */
RTOID (F22_498)
EIF_TYPED_VALUE F22_498 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unignorable_exceptions";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F22_498);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 21, Current, 1, 0, 564);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 564);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800010D, 0,0); /* Result */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {269,121,121,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1880, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	tr1 = RTLNTY(eif_attached_type(71));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2043, "type_id", tr1))(tr1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ui4_1 = loc1;
	ui4_2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1023, "force", Result))(Result, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef Result
}

/* {ISE_EXCEPTION_MANAGER}.unraisable_exceptions */
RTOID (F22_499)
EIF_TYPED_VALUE F22_499 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unraisable_exceptions";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F22_499);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 21, Current, 1, 0, 565);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 565);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800010D, 0,0); /* Result */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {269,121,121,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1880, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	tr1 = RTLNTY(eif_attached_type(70));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2043, "type_id", tr1))(tr1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ui4_1 = loc1;
	ui4_2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1023, "force", Result))(Result, ui4_1x, ui4_2x);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	tr1 = RTLNTY(eif_attached_type(57));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2043, "type_id", tr1))(tr1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	ui4_1 = loc1;
	ui4_2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1023, "force", Result))(Result, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef Result
}

/* {ISE_EXCEPTION_MANAGER}.is_code_ignored */
EIF_TYPED_VALUE F22_500 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_code_ignored";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 21, Current, 1, 1, 566);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 566);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(484, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		ur1 = RTCCL(loc1);
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(482, dtype))(Current, ur1x)).it_b);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.exception_data_cell */
RTOID (F22_501)
EIF_TYPED_VALUE F22_501 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exception_data_cell";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F22_501);

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 567);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 567);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000D5, 0,0); /* Result */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {213,0xFFF9,11,119,121,121,121,0xFF11,170,0xFF11,170,0xFF11,170,0xFF11,170,0xFF11,170,0xFF11,170,121,157,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ur1 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(536, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {ISE_EXCEPTION_MANAGER}.last_exception_cell */
RTOID (F22_502)
EIF_TYPED_VALUE F22_502 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "last_exception_cell";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F22_502);

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 568);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 568);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000D5, 0,0); /* Result */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {213,43,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ur1 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(536, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {ISE_EXCEPTION_MANAGER}.no_memory_exception_object_cell */
RTOID (F22_503)
EIF_TYPED_VALUE F22_503 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_memory_exception_object_cell";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F22_503);

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 21, Current, 1, 0, 569);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 569);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800003E, 0, 0); /* loc1 */
	
	tr1 = RTLN(62);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTLN(170);
	ui4_1 = ((EIF_INTEGER_32) 4096L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2839, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(822, "set_exception_trace", loc1))(loc1, ur1x);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF80000D5, 0,0); /* Result */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {213,0xFF11,62,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(536, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef Result
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_data */
EIF_TYPED_VALUE F22_504 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exception_from_data";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(14);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,ur1);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,loc9);
	RTLR(12,loc10);
	RTLR(13,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 21, Current, 10, 0, 570);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 570);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(486, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		ti4_1 = eif_integer_32_item(RTCV(loc2),1);
		ui4_1 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(485, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		RTHOOK(2);
		loc4 = RTCCL(loc3);
		loc4 = RTRV(eif_non_attached_type(70),loc4);
		if (EIF_TEST(loc4)) {
			RTHOOK(3);
			RTDBGAL(Current, 1, 0xF800002B, 0, 0); /* loc1 */
			
			loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(475, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(4);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(5);
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(815, "set_throwing_exception", loc3))(loc3, ur1x);
			}
			RTHOOK(6);
			tr1 = eif_boxed_item(loc2,7);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(855, "set_routine_name", loc4))(loc4, ur1x);
			RTHOOK(7);
			tr1 = eif_boxed_item(loc2,8);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(856, "set_class_name", loc4))(loc4, ur1x);
		} else {
			RTHOOK(8);
			loc5 = RTCCL(loc3);
			loc5 = RTRV(eif_non_attached_type(57),loc5);
			if (EIF_TEST(loc5)) {
				RTHOOK(9);
				RTDBGAL(Current, 1, 0xF800002B, 0, 0); /* loc1 */
				
				loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(475, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(11);
					ur1 = RTCCL(loc1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(815, "set_throwing_exception", loc3))(loc3, ur1x);
				}
			} else {
				RTHOOK(12);
				loc6 = RTCCL(loc3);
				loc6 = RTRV(eif_non_attached_type(79),loc6);
				if (EIF_TEST(loc6)) {
					RTHOOK(13);
					tb1 = eif_boolean_item(RTCV(loc2),11);
					ub1 = tb1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(857, "set_is_entry", loc6))(loc6, ub1x);
				} else {
					RTHOOK(14);
					loc7 = RTCCL(loc3);
					loc7 = RTRV(eif_non_attached_type(51),loc7);
					if (EIF_TEST(loc7)) {
						RTHOOK(15);
						ti4_1 = eif_integer_32_item(RTCV(loc2),2);
						ui4_1 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(844, "set_signal_code", loc7))(loc7, ui4_1x);
					} else {
						RTHOOK(16);
						loc8 = RTCCL(loc3);
						loc8 = RTRV(eif_non_attached_type(65),loc8);
						if (EIF_TEST(loc8)) {
							RTHOOK(17);
							ti4_1 = eif_integer_32_item(RTCV(loc2),3);
							ui4_1 = ti4_1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(850, "set_error_code", loc8))(loc8, ui4_1x);
						} else {
							RTHOOK(18);
							loc9 = RTCCL(loc3);
							loc9 = RTRV(eif_non_attached_type(50),loc9);
							if (EIF_TEST(loc9)) {
								RTHOOK(19);
								ti4_1 = eif_integer_32_item(RTCV(loc2),3);
								ui4_1 = ti4_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(842, "set_error_code", loc9))(loc9, ui4_1x);
							} else {
								RTHOOK(20);
								loc10 = RTCCL(loc3);
								loc10 = RTRV(eif_non_attached_type(49),loc10);
								if (EIF_TEST(loc10)) {
									RTHOOK(21);
									ti4_1 = eif_integer_32_item(RTCV(loc2),2);
									ui4_1 = ti4_1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(826, "set_hresult_code", loc10))(loc10, ui4_1x);
									RTHOOK(22);
									tr1 = eif_boxed_item(loc2,4);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(831, "set_exception_information", loc10))(loc10, ur1x);
								}
							}
						}
					}
				}
				RTHOOK(23);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(501, dtype))(Current)).it_b);
				if (tb1) {
					RTHOOK(24);
					RTDBGAL(Current, 1, 0xF800002B, 0, 0); /* loc1 */
					
					loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(475, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				}
				RTHOOK(25);
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					RTHOOK(26);
					RTDBGAL(Current, 1, 0xF800002B, 0, 0); /* loc1 */
					
					loc1 = (EIF_REFERENCE) RTCCL(loc3);
				}
				RTHOOK(27);
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(815, "set_throwing_exception", loc3))(loc3, ur1x);
			}
		}
		RTHOOK(28);
		tr1 = eif_boxed_item(loc2,9);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(822, "set_exception_trace", loc3))(loc3, ur1x);
		RTHOOK(29);
		tr1 = eif_boxed_item(loc2,4);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(809, "set_description", loc3))(loc3, ur1x);
		RTHOOK(30);
		tr1 = eif_boxed_item(loc2,5);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(816, "set_recipient_name", loc3))(loc3, ur1x);
		RTHOOK(31);
		tr1 = eif_boxed_item(loc2,6);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(820, "set_type_name", loc3))(loc3, ur1x);
		RTHOOK(32);
		RTDBGAL(Current, 0, 0xF800002B, 0,0); /* Result */
		
		Result = (EIF_REFERENCE) RTCCL(loc3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
}

/* {ISE_EXCEPTION_MANAGER}.once_raise */
void F22_505 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "once_raise";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 21, Current, 3, 1, 571);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 571);
	RTCC(arg1, 21, l_feature_name, 1, eif_attached_type(43));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(812, "is_ignored", arg1))(arg1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(501, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(802, "original", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(475, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(815, "set_throwing_exception", tr1))(tr1, ur1x);
		}
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(487, dtype))(Current, ur1x);
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
		
		loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(819, "c_description", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(8);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1066, "item", loc3))(loc3)).it_p);
			loc2 = (EIF_POINTER) tp1;
		} else {
			RTHOOK(9);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		}
		RTHOOK(10);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(801, "code", arg1))(arg1)).it_i4);
		ui4_1 = ti4_1;
		up1 = loc1;
		up2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(500, dtype))(Current, ui4_1x, up1x, up2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.init_exception_manager */
void F22_506 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "init_exception_manager";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 21, Current, 4, 0, 572);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 572);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800010D, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(489, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800010D, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(490, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800010D, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(491, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0xF80000D5, 0, 0); /* loc2 */
	
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(493, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	RTDBGAL(Current, 3, 0xF80000D5, 0, 0); /* loc3 */
	
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(494, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(6);
	RTDBGAL(Current, 4, 0xF80000D5, 0, 0); /* loc4 */
	
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(495, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
}

/* {ISE_EXCEPTION_MANAGER}.free_preallocated_trace */
void F22_507 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "free_preallocated_trace";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 21, Current, 1, 0, 573);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(21, Current, 573);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800002B, 0, 0); /* loc1 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(495, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(535, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(809, "set_description", loc1))(loc1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {ISE_EXCEPTION_MANAGER}.developer_raise */
void F22_508 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "developer_raise";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 3, 574);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(21, Current, 574);
	RTIV(Current, RTAL);
	eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {ISE_EXCEPTION_MANAGER}.in_rescue */
EIF_TYPED_VALUE F22_509 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "in_rescue";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 575);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(21, Current, 575);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

void EIF_Minit22 (void)
{
	GTCX
	RTOTS (497,F22_497)
	RTOTS (498,F22_498)
	RTOTS (499,F22_499)
	RTOTS (501,F22_501)
	RTOTS (502,F22_502)
	RTOTS (503,F22_503)
}


#ifdef __cplusplus
}
#endif

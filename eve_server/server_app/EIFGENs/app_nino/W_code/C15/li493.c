/*
 * Code for class LINKED_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F493_12681(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12682(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12683(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12684(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12685(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12686(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12687(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12688(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12689(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12690(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12691(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12692(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12693(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12694(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12695(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12696(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F493_12697(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12698(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12699(EIF_REFERENCE);
extern void F493_12700(EIF_REFERENCE);
extern void F493_12701(EIF_REFERENCE);
extern void F493_12702(EIF_REFERENCE);
extern void F493_12703(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12704(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12705(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12706(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12707(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12708(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12709(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12710(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12711(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12712(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12713(EIF_REFERENCE);
extern void F493_12714(EIF_REFERENCE);
extern void F493_12715(EIF_REFERENCE);
extern void F493_12716(EIF_REFERENCE);
extern void F493_12717(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F493_12718(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12719(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F493_12720(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12721(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12722(EIF_REFERENCE);
extern EIF_TYPED_VALUE F493_12723(EIF_REFERENCE);
extern void F493_12724(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F493_12725(EIF_REFERENCE);
extern void F493_22786(EIF_REFERENCE, int);
extern void EIF_Minit493(void);

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

/* {LINKED_LIST}.make */
void F493_12681 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7927);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7927);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
	
	*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_before", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
		if (tb1) {
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
}

/* {LINKED_LIST}.item */
EIF_TYPED_VALUE F493_12682 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "item";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 0, 7928);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7928);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9250, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("readable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9206, dtype))(Current)).it_b);
		RTTE(tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTCT0(NULL, EX_CHECK);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9526, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {LINKED_LIST}.first */
EIF_TYPED_VALUE F493_12683 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "first";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 0, 7929);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7929);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTCT0(NULL, EX_CHECK);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9526, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
}

/* {LINKED_LIST}.last */
EIF_TYPED_VALUE F493_12684 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "last";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 0, 7930);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7930);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTCT0(NULL, EX_CHECK);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11470, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9526, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
}

/* {LINKED_LIST}.index */
EIF_TYPED_VALUE F493_12685 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "index";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 492, Current, 2, 0, 7931);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7931);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		
		Result = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(5);
			RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
			
			loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(6);
			RTDBGAL(Current, 2, 0xF80001EB, 0, 0); /* loc2 */
			
			loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) (RTCEQ(loc2, loc1) || (EIF_BOOLEAN)(loc2 == NULL))) break;
				RTHOOK(8);
				RTDBGAL(Current, 2, 0xF80001EB, 0, 0); /* loc2 */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(9);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				Result++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {LINKED_LIST}.cursor */
EIF_TYPED_VALUE F493_12686 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cursor";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE ub2x = {{0}, SK_BOOL};
#define ub2 ub2x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7932);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7932);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80001ED, 0,0); /* Result */
	
	{
		EIF_TYPE_INDEX typarr0[] = {493,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = RTWCT(9177, dtype, Dftype(Current));
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0);
	}
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
	ub1 = tb1;
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
	ub2 = tb2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10646, Dtype(tr1)))(tr1, ur1x, ub1x, ub2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("cursor_not_void", EX_POST);
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
#undef ur1
#undef ub1
#undef ub2
}

/* {LINKED_LIST}.new_cursor */
EIF_TYPED_VALUE F493_12687 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "new_cursor";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7933);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7933);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80001EA, 0,0); /* Result */
	
	{
		EIF_TYPE_INDEX typarr0[] = {490,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = RTWCT(9177, dtype, Dftype(Current));
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0);
	}
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(11202, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11219, "start", Result))(Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
}

/* {LINKED_LIST}.first_element */
EIF_TYPED_VALUE F493_12688 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11465,Dtype(Current)));
	return r;
}


/* {LINKED_LIST}.count */
EIF_TYPED_VALUE F493_12689 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11475,Dtype(Current)));
	return r;
}


/* {LINKED_LIST}.readable */
EIF_TYPED_VALUE F493_12690 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "readable";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7936);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(492, Current, 7936);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9250, Dtype(Current)))(Current)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {LINKED_LIST}.after */
EIF_TYPED_VALUE F493_12691 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11474,Dtype(Current)));
	return r;
}


/* {LINKED_LIST}.before */
EIF_TYPED_VALUE F493_12692 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11473,Dtype(Current)));
	return r;
}


/* {LINKED_LIST}.off */
EIF_TYPED_VALUE F493_12693 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "off";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7939);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7939);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result || tb1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {LINKED_LIST}.isfirst */
EIF_TYPED_VALUE F493_12694 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "isfirst";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7940);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7940);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
	tb3 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !tb2 && (EIF_BOOLEAN) !tb3)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tb1 = RTCEQ(tr1, tr2);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_position", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
}

/* {LINKED_LIST}.islast */
EIF_TYPED_VALUE F493_12695 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "islast";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 0, 7941);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7941);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !tb1 && (EIF_BOOLEAN) !tb2)) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
		
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 == NULL);
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_position", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
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
}

/* {LINKED_LIST}.valid_cursor */
EIF_TYPED_VALUE F493_12696 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_cursor";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 492, Current, 3, 1, 7942);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(492, Current, 7942);
	if (arg1) {
		RTCC(arg1, 492, l_feature_name, 1, 256);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = RTCCL(arg1);
	loc3 = RTRV(eif_non_attached_type(RTWCT(9211, Dtype(Current), Dftype(Current))),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
		
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF80001EB, 0, 0); /* loc2 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10647, "active", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(loc3 + RTVA(10648, "after", loc3));
		if (!tb2) {
			tb2 = *(EIF_BOOLEAN *)(loc3 + RTVA(10649, "before", loc3));
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (Result || (EIF_BOOLEAN)(loc1 == NULL))) break;
			RTHOOK(6);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) RTCEQ(loc1, loc2);
			RTHOOK(7);
			RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef arg1
}

/* {LINKED_LIST}.full */
EIF_TYPED_VALUE F493_12697 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {LINKED_LIST}.is_inserted */
EIF_TYPED_VALUE F493_12698 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_inserted";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 1, 7944);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7944);
	RTCC(arg1, 492, l_feature_name, 1, RTWCT(9177, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11470, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		if (RTAL & CK_CHECK) {
			RTHOOK(3);
			RTCT("put_constraint", EX_CHECK);
			tb1 = '\01';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9526, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if (!RTCEQ(arg1, tr1)) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9250, dtype))(Current)).it_b);
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9526, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (!(RTCEQ(arg1, tr1))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9205, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = RTCEQ(arg1, tr1);
		}
		Result = (EIF_BOOLEAN) tb1;
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
#undef arg1
}

/* {LINKED_LIST}.start */
void F493_12699 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7945);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7945);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
		
		*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
		
		*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
	
	*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("at_first", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11319, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("empty_convention", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {LINKED_LIST}.finish */
void F493_12700 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "finish";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 0, 7946);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7946);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTHOOK(3);
		RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
	
	*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == NULL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("at_last", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11320, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("empty_convention", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
			tb1 = tb2;
		}
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
#undef up1
}

/* {LINKED_LIST}.forth */
void F493_12701 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "forth";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 0, 7947);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7947);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
	if (tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
		
		*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(5);
			RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
			
			*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
		
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(7);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr2 != NULL);
		}
		if (tb1) {
			RTHOOK(8);
			RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
			
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(9);
			RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
			
			*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("moved_forth", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
}

/* {LINKED_LIST}.back */
void F493_12702 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "back";
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
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7948);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7948);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_before", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
		
		*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
		
		*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
		if (tb1) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
			
			*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(7);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11319, dtype))(Current)).it_b);
			if (tb1) {
				RTHOOK(8);
				RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
				
				*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(9);
				RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11467, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {LINKED_LIST}.move */
void F493_12703 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "move";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,tr7);
	RTLR(8,tr8);
	RTLR(9,loc3);
	RTLR(10,tr9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 492, Current, 3, 1, 7949);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7949);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_4 = ti4_5;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_5 = ti4_6;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ti4_7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_6 = ti4_7;
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		RTE_OT
		ti4_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_7 = ti4_8;
		tr7 = NULL;
		RTE_O
		tr7 = RTLA;
		RTE_OE
		RTE_OT
		ti4_9 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_8 = ti4_9;
		tr8 = NULL;
		RTE_O
		tr8 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
		if (tb1) {
			RTHOOK(3);
			RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
			
			*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(4);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
		RTHOOK(5);
		RTDBGAL(Current, 3, 0xF80001EB, 0, 0); /* loc3 */
		
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg1) || (EIF_BOOLEAN)(loc3 == NULL))) break;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
			
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(loc3);
			RTHOOK(8);
			RTDBGAL(Current, 3, 0xF80001EB, 0, 0); /* loc3 */
			
			tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr9);
			RTHOOK(9);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			RTHOOK(11);
			RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
			
			*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(12);
			RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
			
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(loc3);
		}
	} else {
		RTHOOK(13);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(14);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + arg1);
			RTHOOK(15);
			RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
			
			*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(16);
			RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
			
			*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(17);
			RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
			
			tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr9);
			*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr9);
			RTHOOK(18);
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(19);
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11317, dtype))(Current, ui4_1x);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("too_far_right", EX_POST);
		tb1 = '\01';
		RTCO(tr6);
		ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_6 + arg1) > ti4_9)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9264, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("too_far_left", EX_POST);
		tb1 = '\01';
		RTCO(tr7);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_7 + arg1) < ((EIF_INTEGER_32) 1L))) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9264, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("expected_index", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9264, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			ti4_9 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
			RTCO(tr8);
			tb1 = (EIF_BOOLEAN)(ti4_9 == (EIF_INTEGER_32) (ti4_8 + arg1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("moved_if_inbounds", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		RTCO(tr1);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + arg1) >= ((EIF_INTEGER_32) 0L))) {
			RTCO(tr2);
			ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
			tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_2 + arg1) <= (EIF_INTEGER_32) (ti4_9 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			ti4_9 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
			RTCO(tr3);
			tb1 = (EIF_BOOLEAN)(ti4_9 == (EIF_INTEGER_32) (ti4_3 + arg1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("before_set", EX_POST);
		tb1 = '\01';
		RTCO(tr4);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_4 + arg1) <= ((EIF_INTEGER_32) 0L))) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("after_set", EX_POST);
		tb1 = '\01';
		RTCO(tr5);
		ti4_9 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_5 + arg1) >= (EIF_INTEGER_32) (ti4_9 + ((EIF_INTEGER_32) 1L)))) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {LINKED_LIST}.go_i_th */
void F493_12704 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "go_i_th";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 492, Current, 0, 1, 7950);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7950);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_cursor_index", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11321, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
		
		*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
		
		*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
			
			*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(8);
			RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
			
			*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(9);
			RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11470, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(10);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (arg1 - ti4_1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11317, dtype))(Current, ui4_1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("position_expected", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {LINKED_LIST}.go_to */
void F493_12705 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "go_to";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 1, 7951);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7951);
	if (arg1) {
		RTCC(arg1, 492, l_feature_name, 1, 256);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("cursor_position_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9212, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_non_attached_type(RTWCT(9211, dtype, Dftype(Current))),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
		
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(10648, "after", loc1));
		*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) tb1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
		
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(10649, "before", loc1));
		*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) tb1;
		RTHOOK(5);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
		if (tb1) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(7);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
			if (tb1) {
				RTHOOK(8);
				RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11470, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(9);
				RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10647, "active", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(10);
			RTCT("correct_cursor_type", EX_CHECK);
				RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {LINKED_LIST}.put_front */
void F493_12706 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put_front";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 1, 7952);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7952);
	RTCC(arg1, 492, l_feature_name, 1, RTWCT(9205, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9189, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
	
	ur1 = RTCCL(arg1);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11466, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc1))(loc1, ur1x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11465, 0xF80001EB, 0); /* first_element */
	
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + RTWA(11465, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	RTHOOK(5);
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
	if (!tb2) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	}
	RTHOOK(7);
	RTDBGAA(Current, dtype, 11475, 0x10000000, 1); /* count */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype)))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("item_inserted", EX_POST);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11315, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr2, arg1)) {
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
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {LINKED_LIST}.extend */
void F493_12707 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "extend";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 492, Current, 2, 1, 7953);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7953);
	RTCC(arg1, 492, l_feature_name, 1, RTWCT(9205, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9189, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
	
	ur1 = RTCCL(arg1);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11466, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 11465, 0xF80001EB, 0); /* first_element */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(11465, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 2, 0xF80001EB, 0, 0); /* loc2 */
		
		loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11470, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(8);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc2))(loc2, ur1x);
			RTHOOK(9);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
			if (tb1) {
				RTHOOK(10);
				RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
				
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
			}
		}
	}
	RTHOOK(11);
	RTDBGAA(Current, dtype, 11475, 0x10000000, 1); /* count */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype)))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("item_inserted", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9191, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {LINKED_LIST}.put_left */
void F493_12708 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put_left";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,loc3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 492, Current, 3, 1, 7954);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7954);
	RTCC(arg1, 492, l_feature_name, 1, RTWCT(9205, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9189, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_before", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF80001EB, 0, 0); /* loc2 */
	
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11345, dtype))(Current, ur1x);
	} else {
		RTHOOK(6);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
		if (tb1) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9349, dtype))(Current);
			RTHOOK(8);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11347, dtype))(Current, ur1x);
			RTHOOK(9);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11317, dtype))(Current, ui4_1x);
		} else {
			RTHOOK(10);
			RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
			
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9526, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11466, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(11);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc1))(loc1, ur1x);
			RTHOOK(12);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9527, "put", loc2))(loc2, ur1x);
			RTHOOK(13);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc2))(loc2, ur1x);
			RTHOOK(14);
			RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
			
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
			RTHOOK(15);
			RTDBGAA(Current, dtype, 11475, 0x10000000, 1); /* count */
			
			(*(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype)))++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("new_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("new_index", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("previous_exists", EX_POST);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11467, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr3 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("item_inserted", EX_POST);
		tb1 = '\0';
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11467, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr3);
		if (EIF_TEST(loc3)) {
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9526, "item", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = RTCEQ(tr3, arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {LINKED_LIST}.put_right */
void F493_12709 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put_right";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,loc1);
	RTLR(7,ur1);
	RTLR(8,tr5);
	RTLR(9,loc2);
	RTLR(10,loc3);
	RTLR(11,loc4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 492, Current, 4, 1, 7909);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7909);
	RTCC(arg1, 492, l_feature_name, 1, RTWCT(9205, dtype, dftype));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9189, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_after", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
		tb1 = tb2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
		tb2 = tb3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		ti4_1 = ti4_2;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_2 = ti4_3;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
	
	ur1 = RTCCL(arg1);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11466, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTAL & CK_CHECK) {
		RTHOOK(4);
		RTCT(NULL, EX_CHECK);
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		if (tb4) {
			tb4 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
			tb3 = tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(5);
	tb3 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
	if (tb3) {
		RTHOOK(6);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc1))(loc1, ur1x);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 11465, 0xF80001EB, 0); /* first_element */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(11465, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
		RTHOOK(8);
		RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	} else {
		RTHOOK(9);
		RTDBGAL(Current, 2, 0xF80001EB, 0, 0); /* loc2 */
		
		loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(11);
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc1))(loc1, ur1x);
			RTHOOK(12);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc2))(loc2, ur1x);
		}
	}
	RTHOOK(13);
	RTDBGAA(Current, dtype, 11475, 0x10000000, 1); /* count */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype)))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("new_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		RTCO(tr3);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("same_index", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		RTCO(tr4);
		if ((EIF_BOOLEAN)(ti4_3 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("next_exists", EX_POST);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11468, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr5 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("item_inserted", EX_POST);
		tb3 = '\01';
		RTCO(tr1);
		if ((EIF_BOOLEAN) !tb1) {
			tb4 = '\0';
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11468, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = RTCCL(tr5);
			if (EIF_TEST(loc3)) {
				tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9526, "item", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb4 = RTCEQ(tr5, arg1);
			}
			tb3 = tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("item_inserted_before", EX_POST);
		tb3 = '\01';
		RTCO(tr2);
		if (tb2) {
			tb4 = '\0';
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = RTCCL(tr5);
			if (EIF_TEST(loc4)) {
				tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9526, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb4 = RTCEQ(tr5, arg1);
			}
			tb3 = tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {LINKED_LIST}.replace */
void F493_12710 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "replace";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 1, 7910);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7910);
	RTCC(arg1, 492, l_feature_name, 1, RTWCT(9205, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("writable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9207, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replaceable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9208, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9527, "put", loc1))(loc1, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("item_replaced", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9205, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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
#undef up1
#undef ur1
#undef arg1
}

/* {LINKED_LIST}.merge_left */
void F493_12711 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "merge_left";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,loc2);
	RTLR(7,tr5);
	RTLR(8,loc1);
	RTLR(9,ur1);
	RTLR(10,loc4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 492, Current, 4, 1, 7911);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7911);
	RTCC(arg1, 492, l_feature_name, 1, Dftype(Current));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9189, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_before", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_current", EX_PRE);
		RTTE(!RTCEQ(arg1, Current), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(11475, "count", arg1));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVA(11475, "count", arg1));
		ti4_4 = ti4_5;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	RTDBGAL(Current, 2, 0xF80001EB, 0, 0); /* loc2 */
	
	tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11470, "last_element", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr5);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(7);
		RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
		
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11465, "first_element", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr5);
		RTHOOK(8);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVA(11475, "count", arg1));
		loc3 = (EIF_INTEGER_32) ti4_5;
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9197, "wipe_out", arg1))(arg1);
		if (RTAL & CK_CHECK) {
			RTHOOK(10);
			RTCT(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(11);
			RTCT(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(12);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(13);
			RTDBGAA(Current, dtype, 11465, 0xF80001EB, 0); /* first_element */
			
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + RTWA(11465, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
			RTHOOK(14);
			RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
			
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr5);
			*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr5);
		} else {
			RTHOOK(15);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11319, dtype))(Current)).it_b);
			if (tb1) {
				RTHOOK(16);
				tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc2))(loc2, ur1x);
				RTHOOK(17);
				RTDBGAA(Current, dtype, 11465, 0xF80001EB, 0); /* first_element */
				
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + RTWA(11465, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
			} else {
				RTHOOK(18);
				RTDBGAL(Current, 4, 0xF80001EB, 0, 0); /* loc4 */
				
				loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11467, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTHOOK(19);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTHOOK(20);
					ur1 = RTCCL(loc1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc4))(loc4, ur1x);
				}
				RTHOOK(21);
				tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc2))(loc2, ur1x);
			}
		}
		RTHOOK(22);
		RTDBGAA(Current, dtype, 11475, 0x10000000, 1); /* count */
		
		(*(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype))) += loc3;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("new_count", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		RTCO(tr1);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("new_index", EX_POST);
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		RTCO(tr3);
		RTCO(tr4);
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_3 + ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("other_is_empty", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9170, "is_empty", arg1))(arg1)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {LINKED_LIST}.merge_right */
void F493_12712 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "merge_right";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc2);
	RTLR(6,tr4);
	RTLR(7,loc1);
	RTLR(8,loc4);
	RTLR(9,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 492, Current, 4, 1, 7912);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7912);
	RTCC(arg1, 492, l_feature_name, 1, Dftype(Current));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9189, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_after", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_current", EX_PRE);
		RTTE(!RTCEQ(arg1, Current), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(11475, "count", arg1));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	RTDBGAL(Current, 2, 0xF80001EB, 0, 0); /* loc2 */
	
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11470, "last_element", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr4);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(7);
		RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
		
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11465, "first_element", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr4);
		RTHOOK(8);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(11475, "count", arg1));
		loc3 = (EIF_INTEGER_32) ti4_4;
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9197, "wipe_out", arg1))(arg1);
		if (RTAL & CK_CHECK) {
			RTHOOK(10);
			RTCT(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(11);
			RTCT(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(12);
		RTDBGAL(Current, 4, 0xF80001EB, 0, 0); /* loc4 */
		
		loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(13);
		if ((EIF_BOOLEAN)(loc4 == NULL)) {
			RTHOOK(14);
			RTDBGAA(Current, dtype, 11465, 0xF80001EB, 0); /* first_element */
			
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + RTWA(11465, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
			RTHOOK(15);
			RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
			
			tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr4);
			*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr4);
		} else {
			RTHOOK(16);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11320, dtype))(Current)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(17);
				tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc2))(loc2, ur1x);
			}
			RTHOOK(18);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc4))(loc4, ur1x);
		}
		RTHOOK(19);
		RTDBGAA(Current, dtype, 11475, 0x10000000, 1); /* count */
		
		(*(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype))) += loc3;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("new_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		RTCO(tr1);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("same_index", EX_POST);
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		RTCO(tr3);
		if ((EIF_BOOLEAN)(ti4_4 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("other_is_empty", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9170, "is_empty", arg1))(arg1)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {LINKED_LIST}.remove */
void F493_12713 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,loc4);
	RTLR(6,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 492, Current, 4, 0, 7913);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7913);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9190, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("writable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9207, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF80001EB, 0, 0); /* loc2 */
	
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11319, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 11465, 0xF80001EB, 0); /* first_element */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11465, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9638, "forget_right", loc2))(loc2);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				if (RTAL & CK_CHECK) {
					RTHOOK(10);
					RTCT("no_active", EX_CHECK);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					if ((EIF_BOOLEAN)(tr1 == NULL)) {
						RTCK;
					} else {
						RTCF;
					}
				}
				RTHOOK(11);
				RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
				
				*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			RTHOOK(12);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11320, dtype))(Current)).it_b);
			if (tb1) {
				RTHOOK(13);
				RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11467, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(14);
				RTDBGAL(Current, 3, 0xF80001EB, 0, 0); /* loc3 */
				
				loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTHOOK(15);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTHOOK(16);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9638, "forget_right", loc3))(loc3);
				}
				RTHOOK(17);
				RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
				
				*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(18);
				RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(19);
				RTDBGAL(Current, 4, 0xF80001EB, 0, 0); /* loc4 */
				
				loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11467, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTHOOK(20);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTHOOK(21);
					ur1 = RTCCL(loc1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc4))(loc4, ur1x);
				}
				RTHOOK(22);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9638, "forget_right", loc2))(loc2);
				RTHOOK(23);
				RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
				
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
			}
		}
		RTHOOK(24);
		RTDBGAA(Current, dtype, 11475, 0x10000000, 1); /* count */
		
		(*(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype)))--;
		RTHOOK(25);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11471, dtype))(Current, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("after_when_empty", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
}

/* {LINKED_LIST}.remove_left */
void F493_12714 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove_left";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7914);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7914);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("left_exists", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) -2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11317, dtype))(Current, ui4_1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11351, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9267, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("new_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("new_index", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)))) {
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
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {LINKED_LIST}.remove_right */
void F493_12715 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove_right";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,tr3);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 492, Current, 4, 0, 7915);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7915);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("right_exists", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 < ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF80001EB, 0, 0); /* loc2 */
		
		loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(5);
			RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
			
			loc1 = (EIF_REFERENCE) RTCCL(loc2);
			RTHOOK(6);
			RTDBGAA(Current, dtype, 11465, 0xF80001EB, 0); /* first_element */
			
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr3);
			*(EIF_REFERENCE *)(Current + RTWA(11465, dtype)) = (EIF_REFERENCE) RTCCL(tr3);
			RTHOOK(7);
			RTDBGAL(Current, 3, 0xF80001EB, 0, 0); /* loc3 */
			
			loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9638, "forget_right", loc3))(loc3);
			}
			RTHOOK(10);
			RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
			
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr3);
			*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) RTCCL(tr3);
		}
	} else {
		RTHOOK(11);
		RTDBGAL(Current, 3, 0xF80001EB, 0, 0); /* loc3 */
		
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(13);
			RTDBGAL(Current, 4, 0xF80001EB, 0, 0); /* loc4 */
			
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr3);
			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				RTHOOK(15);
				RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
				
				loc1 = (EIF_REFERENCE) RTCCL(loc4);
				RTHOOK(16);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9637, "put_right", loc3))(loc3, ur1x);
				RTHOOK(17);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9638, "forget_right", loc4))(loc4);
			}
		}
	}
	RTHOOK(18);
	RTDBGAA(Current, dtype, 11475, 0x10000000, 1); /* count */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype)))--;
	RTHOOK(19);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11471, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("new_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("same_index", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9261, dtype))(Current)).it_i4);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_3 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
}

/* {LINKED_LIST}.wipe_out */
void F493_12716 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wipe_out";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7916);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7916);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9190, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11472, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("wiped_out", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_before", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
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
	RTLO(2);
	RTEE;
}

/* {LINKED_LIST}.copy */
void F493_12717 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "copy";
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
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 492, Current, 2, 1, 7917);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7917);
	RTCC(arg1, 492, l_feature_name, 1, dftype);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (!RTCEQ(arg1, Current)) {
		RTHOOK(4);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19, dtype))(Current, ur1x);
		RTHOOK(5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9170, "is_empty", arg1))(arg1)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11472, dtype))(Current);
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9211, "cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			if (EIF_TEST(loc2)) {
				RTHOOK(8);
				RTDBGAL(Current, 1, 0xF80001ED, 0, 0); /* loc1 */
				
				loc1 = (EIF_REFERENCE) RTCCL(loc2);
			}
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9251, "start", arg1))(arg1);
			for (;;) {
				RTHOOK(10);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9250, "off", arg1))(arg1)).it_b);
				if (tb1) break;
				RTHOOK(11);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9205, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9193, dtype))(Current, ur1x);
				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9266, dtype))(Current);
				RTHOOK(13);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9267, "forth", arg1))(arg1);
			}
			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(15);
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9213, "go_to", arg1))(arg1, ur1x);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {LINKED_LIST}.new_chain */
EIF_TYPED_VALUE F493_12718 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "new_chain";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7918);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7918);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80001EC, 0,0); /* Result */
	
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(11464, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
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
}

/* {LINKED_LIST}.new_cell */
EIF_TYPED_VALUE F493_12719 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_cell";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 1, 7919);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7919);
	RTCC(arg1, 492, l_feature_name, 1, RTWCT(9205, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80001EB, 0,0); /* Result */
	
	{
		EIF_TYPE_INDEX typarr0[] = {491,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = RTWCT(9205, dtype, Dftype(Current));
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0);
	}
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(9527, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef arg1
}

/* {LINKED_LIST}.previous */
EIF_TYPED_VALUE F493_12720 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "previous";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 0, 7920);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7920);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF80001EB, 0,0); /* Result */
		
		Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTHOOK(3);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11319, dtype))(Current)).it_b);
		if (!tb2) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(4);
			RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
			
			loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			for (;;) {
				RTHOOK(5);
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == NULL)) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tb1 = RTCEQ(tr1, tr2);
				}
				if (tb1) break;
				RTHOOK(6);
				RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
			}
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF80001EB, 0,0); /* Result */
			
			Result = (EIF_REFERENCE) RTCCL(loc1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {LINKED_LIST}.next */
EIF_TYPED_VALUE F493_12721 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 0, 7921);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7921);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF80001EB, 0,0); /* Result */
		
		Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
		
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF80001EB, 0,0); /* Result */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {LINKED_LIST}.active */
EIF_TYPED_VALUE F493_12722 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11469,Dtype(Current)));
	return r;
}


/* {LINKED_LIST}.last_element */
EIF_TYPED_VALUE F493_12723 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "last_element";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 492, Current, 1, 0, 7923);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(492, Current, 7923);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF80001EB, 0,0); /* Result */
		
		Result = (EIF_REFERENCE) RTCCL(loc1);
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80001EB, 0, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9636, "right", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {LINKED_LIST}.cleanup_after_remove */
void F493_12724 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cleanup_after_remove";
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
	
	RTEAA(l_feature_name, 492, Current, 0, 1, 7924);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(492, Current, 7924);
	RTCC(arg1, 492, l_feature_name, 1, RTWCT(11465, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void_cell", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
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

/* {LINKED_LIST}.internal_wipe_out */
void F493_12725 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "internal_wipe_out";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 492, Current, 0, 0, 7925);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(492, Current, 7925);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9190, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11469, 0xF80001EB, 0); /* active */
	
	*(EIF_REFERENCE *)(Current + RTWA(11469, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11465, 0xF80001EB, 0); /* first_element */
	
	*(EIF_REFERENCE *)(Current + RTWA(11465, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11473, 0x04000000, 1); /* before */
	
	*(EIF_BOOLEAN *)(Current + RTWA(11473, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11474, 0x04000000, 1); /* after */
	
	*(EIF_BOOLEAN *)(Current + RTWA(11474, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11475, 0x10000000, 1); /* count */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(11475, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("wiped_out", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_before", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
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
	RTLO(2);
	RTEE;
}

/* {LINKED_LIST}._invariant */
void F493_22786 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 492, Current, 0, 22785);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("prunable", Current);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9190, dtype))(Current)).it_b);
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("empty_constraint", Current);
	tb1 = '\01';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
	if (tb2) {
		tb2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = (EIF_BOOLEAN)(tr1 == NULL);
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("not_void_unless_empty", Current);
	tb1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9170, dtype))(Current)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("before_constraint", Current);
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11473, dtype));
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tb1 = RTCEQ(tr1, tr2);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("after_constraint", Current);
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11474, dtype));
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11469, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11470, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tb1 = RTCEQ(tr1, tr2);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef up2
}

void EIF_Minit493 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

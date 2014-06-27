/*
 * Code for class WS_FRAME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F460_20644(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F460_20645(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F460_20646(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20647(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20648(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20649(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20650(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20651(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20652(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20653(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20654(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20655(EIF_REFERENCE);
extern void F460_20656(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F460_20657(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F460_20658(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F460_20659(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20660(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20661(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20662(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20663(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20664(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20665(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20666(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20667(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20668(EIF_REFERENCE);
extern void F460_20669(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20670(EIF_REFERENCE);
extern void F460_20671(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F460_20672(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F460_20673(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20674(EIF_REFERENCE);
extern EIF_TYPED_VALUE F460_20675(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F460_20676(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit460(void);

#ifdef __cplusplus
}
#endif

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

/* {WS_FRAME}.make */
void F460_20644 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 2, 15043);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15043);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 17911, 0x04000000, 1); /* is_incomplete */
	
	*(EIF_BOOLEAN *)(Current + RTWA(17911, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 17890, 0x10000000, 1); /* opcode */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(17890, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 17891, 0x04000000, 1); /* is_fin */
	
	*(EIF_BOOLEAN *)(Current + RTWA(17891, dtype)) = (EIF_BOOLEAN) arg2;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(17890, dtype));
	switch (ti4_1) {
		case 0L:
		case 1L:
		case 2L:
			break;
		case 8L:
		case 9L:
		case 10L:
			RTHOOK(5);
			if (arg2) {
			} else {
				RTHOOK(6);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7798, dtype))(Current)).it_i4);
				ui4_1 = ti4_1;
				tr1 = RTMS_EX_H("Control frames MUST NOT be fragmented.",38,1914465326);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17916, dtype))(Current, ui4_1x, ur1x);
			}
			break;
		default:
			RTHOOK(7);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7798, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tr1 = RTMS_EX_H("Unknown opcode",14,49004645);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17916, dtype))(Current, ui4_1x, ur1x);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {WS_FRAME}.make_as_injected_control */
void F460_20645 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_as_injected_control";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 2, 15044);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15044);
	if (arg2) {
		RTCC(arg2, 459, l_feature_name, 2, 459);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("parent_is_not_control_frame", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17907, "is_control", arg2))(arg2)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_opcode_is_control_frame", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7794, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ui4_1 = arg1;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17888, dtype))(Current, ui4_1x, ub1x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 17898, 0xF80001CB, 0); /* parent */
	
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(17898, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(5);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17901, "add_injected_control_frame", arg2))(arg2, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {WS_FRAME}.opcode */
EIF_TYPED_VALUE F460_20646 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(17890,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.is_fin */
EIF_TYPED_VALUE F460_20647 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(17891,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.fragment_count */
EIF_TYPED_VALUE F460_20648 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(17892,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.payload_length */
EIF_TYPED_VALUE F460_20649 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(17893,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.payload_data */
EIF_TYPED_VALUE F460_20650 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17894,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.uncoded_payload_data */
EIF_TYPED_VALUE F460_20651 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "uncoded_payload_data";
	RTEX;
	struct eif_ex_40 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 0);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 40);
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 459, Current, 2, 0, 15050);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(459, Current, 15050);
	RTIV(Current, RTAL);
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17894, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000184, 0,0); /* Result */
		
		ur1 = RTCCL(loc2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4107, "utf_8_string_8_to_string_32", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {WS_FRAME}.error */
EIF_TYPED_VALUE F460_20652 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17896,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.injected_control_frames */
EIF_TYPED_VALUE F460_20653 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17897,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.parent */
EIF_TYPED_VALUE F460_20654 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17898,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.is_injected_control */
EIF_TYPED_VALUE F460_20655 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_injected_control";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 459, Current, 0, 0, 15054);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15054);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17898, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT(NULL, EX_POST);
		tb1 = '\01';
		if (Result) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(17890, dtype));
			ui4_1 = ti4_1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7794, dtype))(Current, ui4_1x)).it_b);
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
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
}

/* {WS_FRAME}.update_fin */
void F460_20656 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_fin";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 1, 15055);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(459, Current, 15055);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 17891, 0x04000000, 1); /* is_fin */
	
	*(EIF_BOOLEAN *)(Current + RTWA(17891, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {WS_FRAME}.add_injected_control_frame */
void F460_20657 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "add_injected_control_frame";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 459, Current, 1, 1, 15056);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15056);
	if (arg1) {
		RTCC(arg1, 459, l_feature_name, 1, 459);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("current_is_not_control", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17907, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("f_is_control_frame", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17907, "is_control", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("parented_to_current", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17898, "parent", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE(RTCEQ(tr1, Current), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 1, 0xF800020D, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17897, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(6);
		RTDBGAL(Current, 1, 0xF800020D, 0, 0); /* loc1 */
		
		{
			static EIF_TYPE_INDEX typarr0[] = {516,459,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLN(typres0);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12032, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(6,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 17897, 0xF800020D, 0); /* injected_control_frames */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(17897, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	}
	RTHOOK(8);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9816, "force", loc1))(loc1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("parented_to_current", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17898, "parent", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, Current)) {
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
#undef ui4_1
#undef arg1
}

/* {WS_FRAME}.remove_injected_control_frame */
void F460_20658 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove_injected_control_frame";
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
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 459, Current, 1, 1, 15057);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15057);
	if (arg1) {
		RTCC(arg1, 459, l_feature_name, 1, 459);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("current_is_not_control", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17907, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("f_is_control_frame", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17907, "is_control", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("parented_to_current", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17898, "parent", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE(RTCEQ(tr1, Current), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 1, 0xF800020D, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17897, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9648, "prune", loc1))(loc1, ur1x);
		RTHOOK(7);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9623, "is_empty", loc1))(loc1)).it_b);
		if (tb1) {
			RTHOOK(8);
			RTDBGAA(Current, dtype, 17897, 0xF800020D, 0); /* injected_control_frames */
			
			*(EIF_REFERENCE *)(Current + RTWA(17897, dtype)) = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {WS_FRAME}.is_binary */
EIF_TYPED_VALUE F460_20659 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_binary";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 0, 15058);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15058);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(17890, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7790, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {WS_FRAME}.is_text */
EIF_TYPED_VALUE F460_20660 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_text";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 0, 15059);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15059);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(17890, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7789, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {WS_FRAME}.is_continuation */
EIF_TYPED_VALUE F460_20661 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_continuation";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 0, 15027);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15027);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(17890, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7788, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {WS_FRAME}.is_connection_close */
EIF_TYPED_VALUE F460_20662 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_connection_close";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 0, 15028);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15028);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(17890, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7791, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {WS_FRAME}.is_control */
EIF_TYPED_VALUE F460_20663 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_control";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 0, 15029);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(459, Current, 15029);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(17890, Dtype(Current)));
	switch (ti4_1) {
		case 8L:
		case 9L:
		case 10L:
			RTHOOK(2);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
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
}

/* {WS_FRAME}.is_ping */
EIF_TYPED_VALUE F460_20664 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_ping";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 0, 15030);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15030);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(17890, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {WS_FRAME}.is_pong */
EIF_TYPED_VALUE F460_20665 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_pong";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 0, 15031);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15031);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(17890, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7793, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {WS_FRAME}.is_valid */
EIF_TYPED_VALUE F460_20666 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 0, 15032);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(459, Current, 15032);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17912, Dtype(Current)))(Current)).it_b);
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

/* {WS_FRAME}.is_incomplete */
EIF_TYPED_VALUE F460_20667 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(17911,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.has_error */
EIF_TYPED_VALUE F460_20668 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_error";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 0, 15034);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(459, Current, 15034);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17896, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {WS_FRAME}.increment_fragment_count */
void F460_20669 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "increment_fragment_count";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 0, 15035);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15035);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 17892, 0x10000000, 1); /* fragment_count */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(17892, dtype)))++;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WS_FRAME}.check_utf_8_validity_on_chop */
EIF_TYPED_VALUE F460_20670 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {WS_FRAME}.append_payload_data_chop */
void F460_20671 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "append_payload_data_chop";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 459, Current, 2, 3, 15037);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15037);
	if (arg1) {
		RTCC(arg1, 459, l_feature_name, 1, 389);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg3) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(17913, dtype))(Current);
	}
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17894, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15829, "append", loc1))(loc1, ur1x);
	} else {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 17894, 0xF8000185, 0); /* payload_data */
		
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + RTWA(17894, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	}
	RTHOOK(6);
	RTDBGAA(Current, dtype, 17893, 0x3C000000, 1); /* payload_length */
	
	tu8_2 = (EIF_NATURAL_64) arg2;
	(*(EIF_NATURAL_64 *)(Current + RTWA(17893, dtype))) += tu8_2;
	RTHOOK(7);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17904, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(8);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(17891, dtype));
		if ((EIF_BOOLEAN) (tb1 && arg3)) {
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17894, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			if (EIF_TEST(loc2)) {
				RTHOOK(10);
				ur1 = RTCCL(loc2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17919, dtype))(Current, ur1x)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(11);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7800, dtype))(Current)).it_i4);
					ui4_1 = ti4_1;
					tr1 = RTMS_EX_H("The text message is not a valid UTF-8 text!",43,2097175585);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17916, dtype))(Current, ui4_1x, ur1x);
				}
			}
		} else {
			RTHOOK(12);
			if (arg3) {
				RTHOOK(13);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17918, dtype))(Current)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(14);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7800, dtype))(Current)).it_i4);
					ui4_1 = ti4_1;
					tr1 = RTMS_EX_H("This is not a valid UTF-8 stream!",33,959641633);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17916, dtype))(Current, ui4_1x, ur1x);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {WS_FRAME}.report_error */
void F460_20672 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "report_error";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 2, 15038);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15038);
	if (arg2) {
		RTCC(arg2, 459, l_feature_name, 2, 385);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17912, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 17896, 0xF8000004, 0); /* error */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(17896, dtype, Dftype(Current))));
	ui4_1 = arg1;
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3613, Dtype(tr1)))(tr1, ui4_1x, ur1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(17896, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("has_error", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17912, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_not_valid", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17910, dtype))(Current)).it_b);
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
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {WS_FRAME}.last_utf_8_stream_validation_position */
EIF_TYPED_VALUE F460_20673 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(17917,Dtype(Current)));
	return r;
}


/* {WS_FRAME}.is_valid_text_payload_stream */
EIF_TYPED_VALUE F460_20674 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_text_payload_stream";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 459, Current, 1, 0, 15040);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15040);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_text_frame", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17904, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17894, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		ur1 = RTCCL(loc1);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(17891, dtype));
		ub1 = (EIF_BOOLEAN) !tb1;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17920, dtype))(Current, ur1x, ub1x)).it_b);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ub1
}

/* {WS_FRAME}.is_valid_utf_8_string */
EIF_TYPED_VALUE F460_20675 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_utf_8_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 459, Current, 0, 1, 15041);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(459, Current, 15041);
	if (arg1) {
		RTCC(arg1, 459, l_feature_name, 1, 385);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ur1 = RTCCL(arg1);
	ub1 = (EIF_BOOLEAN) 0;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17920, Dtype(Current)))(Current, ur1x, ub1x)).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ub1
#undef arg1
}

/* {WS_FRAME}.is_valid_utf_8 */
EIF_TYPED_VALUE F460_20676 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "is_valid_utf_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_BOOL, &loc8);
	
	RTEAA(l_feature_name, 459, Current, 8, 2, 15042);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(459, Current, 15042);
	if (arg1) {
		RTCC(arg1, 459, l_feature_name, 1, 385);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_text_frame", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17904, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	if (arg2) {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(17917, dtype));
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTHOOK(6);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(15730, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= loc2) || (EIF_BOOLEAN) !Result)) break;
		RTHOOK(8);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
		RTHOOK(9);
		RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
		
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
			RTHOOK(11);
			RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
			
			loc7 = (EIF_NATURAL_32) loc3;
		} else {
			RTHOOK(12);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 193L);
			if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
				RTHOOK(13);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(14);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_and(loc3,uu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
				if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
					RTHOOK(15);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					
					loc1++;
					RTHOOK(16);
					if ((EIF_BOOLEAN) (loc1 <= loc2)) {
						RTHOOK(17);
						RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
						
						ui4_1 = loc1;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", arg1))(arg1, ui4_1x)).it_n4);
						loc4 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(18);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
						uu4_1 = tu4_1;
						tu4_1 = eif_bit_and(loc4,uu4_1);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
						if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
							RTHOOK(19);
							RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
							
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
							uu4_1 = tu4_1;
							tu4_1 = eif_bit_and(loc3,uu4_1);
							ui4_1 = ((EIF_INTEGER_32) 6L);
							tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
							uu4_1 = tu4_1;
							tu4_1 = eif_bit_and(loc4,uu4_1);
							uu4_1 = tu4_1;
							tu4_1 = eif_bit_or((tu4_2),uu4_1);
							loc7 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(20);
							RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
							
							tb1 = '\0';
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
							if ((EIF_BOOLEAN) (tu4_1 <= loc7)) {
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
								tb1 = (EIF_BOOLEAN) (loc7 <= tu4_1);
							}
							Result = (EIF_BOOLEAN) tb1;
						} else {
							RTHOOK(21);
							RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
							
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						}
					} else {
						RTHOOK(22);
						RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
						
						loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				} else {
					RTHOOK(23);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
					uu4_1 = tu4_1;
					tu4_1 = eif_bit_and(loc3,uu4_1);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
					if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
						RTHOOK(24);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						
						loc1 += ((EIF_INTEGER_32) 2L);
						RTHOOK(25);
						if ((EIF_BOOLEAN) (loc1 <= loc2)) {
							RTHOOK(26);
							RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
							
							ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", arg1))(arg1, ui4_1x)).it_n4);
							loc4 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(27);
							RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
							
							ui4_1 = loc1;
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", arg1))(arg1, ui4_1x)).it_n4);
							loc5 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(28);
							tb1 = '\0';
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
							uu4_1 = tu4_1;
							tu4_1 = eif_bit_and(loc4,uu4_1);
							tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
							if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_and(loc5,uu4_1);
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
								tb1 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
							}
							if (tb1) {
								RTHOOK(29);
								RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
								
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_and(loc3,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 12L);
								tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_and(loc4,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 6L);
								tu4_3 = eif_bit_shift_left((tu4_1),ui4_1);
								uu4_1 = tu4_3;
								tu4_1 = eif_bit_or((tu4_2),uu4_1);
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								uu4_1 = tu4_2;
								tu4_2 = eif_bit_and(loc5,uu4_1);
								uu4_1 = tu4_2;
								tu4_2 = eif_bit_or(tu4_1,uu4_1);
								loc7 = (EIF_NATURAL_32) tu4_2;
								RTHOOK(30);
								tb1 = '\0';
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2048L);
								if ((EIF_BOOLEAN) (tu4_1 <= loc7)) {
									tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
									tb1 = (EIF_BOOLEAN) (loc7 <= tu4_1);
								}
								if (tb1) {
									RTHOOK(31);
									tb1 = '\0';
									tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L);
									if ((EIF_BOOLEAN) (tu4_1 <= loc7)) {
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L);
										tb1 = (EIF_BOOLEAN) (loc7 <= tu4_1);
									}
									if (tb1) {
										RTHOOK(32);
										RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
										
										Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									}
								} else {
									RTHOOK(33);
									RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
									
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
							} else {
								RTHOOK(34);
								RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
								
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							}
						} else {
							RTHOOK(35);
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) <= loc2)) {
								RTHOOK(36);
								RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
								
								ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", arg1))(arg1, ui4_1x)).it_n4);
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
								uu4_1 = tu4_2;
								tu4_2 = eif_bit_and(tu4_1,uu4_1);
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 == tu4_1);
							}
							RTHOOK(37);
							RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
							
							loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
					} else {
						RTHOOK(38);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 248L);
						uu4_1 = tu4_1;
						tu4_1 = eif_bit_and(loc3,uu4_1);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
						if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
							RTHOOK(39);
							tb1 = '\0';
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 245L);
							if ((EIF_BOOLEAN) (tu4_1 <= loc3)) {
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
								tb1 = (EIF_BOOLEAN) (loc3 <= tu4_1);
							}
							if (tb1) {
								RTHOOK(40);
								RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
								
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							} else {
								RTHOOK(41);
								RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
								
								loc1 += ((EIF_INTEGER_32) 3L);
								RTHOOK(42);
								if ((EIF_BOOLEAN) (loc1 <= loc2)) {
									RTHOOK(43);
									RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
									
									ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L));
									tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", arg1))(arg1, ui4_1x)).it_n4);
									loc4 = (EIF_NATURAL_32) tu4_1;
									RTHOOK(44);
									RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
									
									ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
									tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", arg1))(arg1, ui4_1x)).it_n4);
									loc5 = (EIF_NATURAL_32) tu4_1;
									RTHOOK(45);
									RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
									
									ui4_1 = loc1;
									tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", arg1))(arg1, ui4_1x)).it_n4);
									loc6 = (EIF_NATURAL_32) tu4_1;
									RTHOOK(46);
									tb1 = '\0';
									tb2 = '\0';
									tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
									uu4_1 = tu4_1;
									tu4_1 = eif_bit_and(loc4,uu4_1);
									tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
									if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc5,uu4_1);
										tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
										tb2 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
									}
									if (tb2) {
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc6,uu4_1);
										tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
										tb1 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
									}
									if (tb1) {
										RTHOOK(47);
										RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
										
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc3,uu4_1);
										ui4_1 = ((EIF_INTEGER_32) 18L);
										tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc4,uu4_1);
										ui4_1 = ((EIF_INTEGER_32) 12L);
										tu4_3 = eif_bit_shift_left((tu4_1),ui4_1);
										uu4_1 = tu4_3;
										tu4_1 = eif_bit_or((tu4_2),uu4_1);
										tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
										uu4_1 = tu4_2;
										tu4_2 = eif_bit_and(loc5,uu4_1);
										ui4_1 = ((EIF_INTEGER_32) 6L);
										tu4_3 = eif_bit_shift_left((tu4_2),ui4_1);
										uu4_1 = tu4_3;
										tu4_2 = eif_bit_or(tu4_1,uu4_1);
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc6,uu4_1);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_or(tu4_2,uu4_1);
										loc7 = (EIF_NATURAL_32) tu4_1;
										RTHOOK(48);
										RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
										
										tb1 = '\0';
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65536L);
										if ((EIF_BOOLEAN) (tu4_1 <= loc7)) {
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1114111L);
											tb1 = (EIF_BOOLEAN) (loc7 <= tu4_1);
										}
										Result = (EIF_BOOLEAN) tb1;
									} else {
										RTHOOK(49);
										RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
										
										Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									}
								} else {
									RTHOOK(50);
									if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L)) <= loc2)) {
										RTHOOK(51);
										RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
										
										ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L));
										tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", arg1))(arg1, ui4_1x)).it_n4);
										loc4 = (EIF_NATURAL_32) tu4_1;
										RTHOOK(52);
										RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
										
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
										uu4_1 = tu4_1;
										tu4_1 = eif_bit_and(loc4,uu4_1);
										tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
										Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 == tu4_2);
										RTHOOK(53);
										if (Result) {
											RTHOOK(54);
											tb1 = '\0';
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 244L);
											if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
												tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 144L);
												tb1 = (EIF_BOOLEAN) (loc4 >= tu4_1);
											}
											if (tb1) {
												RTHOOK(55);
												RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
												
												Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
											} else {
												RTHOOK(56);
												if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) <= loc2)) {
													RTHOOK(57);
													RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
													
													ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
													tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15572, "code", arg1))(arg1, ui4_1x)).it_n4);
													tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
													uu4_1 = tu4_2;
													tu4_2 = eif_bit_and(tu4_1,uu4_1);
													tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
													Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_2 == tu4_1);
												}
											}
										}
									}
									RTHOOK(58);
									RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
									
									loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								}
							}
						} else {
							RTHOOK(59);
							RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
							
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						}
					}
				}
			}
		}
		RTHOOK(60);
		if (Result) {
			RTHOOK(61);
			if (loc8) {
				RTHOOK(62);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) arg2;
			} else {
				RTHOOK(63);
				if (arg2) {
					RTHOOK(64);
					RTDBGAA(Current, dtype, 17917, 0x10000000, 1); /* last_utf_8_stream_validation_position */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(17917, dtype)) = (EIF_INTEGER_32) loc1;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(65);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

void EIF_Minit460 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class IO_MEDIUM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F321_13731(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13732(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13733(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13734(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13735(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13736(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13737(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13738(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13739(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13740(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13741(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13742(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13743(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13744(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13745(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13746(EIF_REFERENCE);
extern void F321_13758(EIF_REFERENCE);
extern void F321_13802(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F321_13805(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13807(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13808(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13809(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13810(EIF_REFERENCE);
extern EIF_TYPED_VALUE F321_13811(EIF_REFERENCE);
extern void EIF_Minit321(void);

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

/* {IO_MEDIUM}.is_plain_text */
EIF_TYPED_VALUE F321_13731 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_plain_text";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 320, Current, 0, 0, 9212);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(320, Current, 9212);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {IO_MEDIUM}.last_character */
EIF_TYPED_VALUE F321_13732 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(12271,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.last_string */
EIF_TYPED_VALUE F321_13733 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12272,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.last_integer */
EIF_TYPED_VALUE F321_13734 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(12273,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.last_integer_32 */
EIF_TYPED_VALUE F321_13735 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "last_integer_32";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 320, Current, 0, 0, 9192);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(320, Current, 9192);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(12273, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {IO_MEDIUM}.last_integer_64 */
EIF_TYPED_VALUE F321_13736 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = *(EIF_INTEGER_64 *)(Current + RTWA(12275,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.last_integer_16 */
EIF_TYPED_VALUE F321_13737 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT16;
	r.it_i2 = *(EIF_INTEGER_16 *)(Current + RTWA(12276,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.last_integer_8 */
EIF_TYPED_VALUE F321_13738 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT8;
	r.it_i1 = *(EIF_INTEGER_8 *)(Current + RTWA(12277,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.last_natural_64 */
EIF_TYPED_VALUE F321_13739 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(12278,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.last_natural */
EIF_TYPED_VALUE F321_13740 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(12279,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.last_natural_32 */
EIF_TYPED_VALUE F321_13741 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "last_natural_32";
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 320, Current, 0, 0, 9198);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(320, Current, 9198);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
	
	Result = *(EIF_NATURAL_32 *)(Current + RTWA(12279, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {IO_MEDIUM}.last_natural_16 */
EIF_TYPED_VALUE F321_13742 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT16;
	r.it_n2 = *(EIF_NATURAL_16 *)(Current + RTWA(12281,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.last_natural_8 */
EIF_TYPED_VALUE F321_13743 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(12282,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.last_real */
EIF_TYPED_VALUE F321_13744 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(12283,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.last_double */
EIF_TYPED_VALUE F321_13745 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(12284,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.bytes_read */
EIF_TYPED_VALUE F321_13746 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(12285,Dtype(Current)));
	return r;
}


/* {IO_MEDIUM}.dispose */
void F321_13758 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
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
	
	RTEAA(l_feature_name, 320, Current, 0, 0, 9211);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(320, Current, 9211);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12294, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12296, dtype))(Current);
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

/* {IO_MEDIUM}.read_stream_thread_aware */
void F321_13802 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "read_stream_thread_aware";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 320, Current, 0, 1, 9197);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(320, Current, 9197);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12292, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12338, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("last_string_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12272, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {IO_MEDIUM}.read_line_thread_aware */
void F321_13805 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_line_thread_aware";
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
	
	RTEAA(l_feature_name, 320, Current, 0, 0, 9200);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(320, Current, 9200);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12292, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12341, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("last_string_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12272, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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
#undef up1
}

/* {IO_MEDIUM}.lastchar */
EIF_TYPED_VALUE F321_13807 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "lastchar";
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 320, Current, 0, 0, 9202);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(320, Current, 9202);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x08000000, 1,0); /* Result */
	
	Result = *(EIF_CHARACTER_8 *)(Current + RTWA(12271, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {IO_MEDIUM}.laststring */
EIF_TYPED_VALUE F321_13808 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "laststring";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 320, Current, 0, 0, 9203);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(320, Current, 9203);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000167, 0,0); /* Result */
	
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12272, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
}

/* {IO_MEDIUM}.lastint */
EIF_TYPED_VALUE F321_13809 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "lastint";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 320, Current, 0, 0, 9204);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(320, Current, 9204);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(12273, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {IO_MEDIUM}.lastreal */
EIF_TYPED_VALUE F321_13810 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "lastreal";
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 320, Current, 0, 0, 9205);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(320, Current, 9205);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x18000000, 1,0); /* Result */
	
	Result = *(EIF_REAL_32 *)(Current + RTWA(12283, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
}

/* {IO_MEDIUM}.lastdouble */
EIF_TYPED_VALUE F321_13811 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "lastdouble";
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 320, Current, 0, 0, 9206);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(320, Current, 9206);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	
	Result = *(EIF_REAL_64 *)(Current + RTWA(12284, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

void EIF_Minit321 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
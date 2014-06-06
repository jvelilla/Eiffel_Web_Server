/*
 * Code for class UUID_GENERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F32_3985(EIF_REFERENCE);
extern EIF_TYPED_VALUE F32_3986(EIF_REFERENCE);
extern EIF_TYPED_VALUE F32_3987(EIF_REFERENCE);
extern EIF_TYPED_VALUE F32_3988(EIF_REFERENCE);
extern EIF_TYPED_VALUE F32_3989(EIF_REFERENCE);
extern void EIF_Minit32(void);

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

/* {UUID_GENERATOR}.generate_uuid */
EIF_TYPED_VALUE F32_3985 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "generate_uuid";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 31, Current, 2, 0, 475);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(31, Current, 475);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000360, 0, 0); /* loc1 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {864,415,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	uu1_1 = ((EIF_NATURAL_8) 0U);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 16L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11311, Dtype(tr1)))(tr1, uu1_1x, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 16L))) break;
		RTHOOK(4);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3982, dtype))(Current)).it_n1);
		uu1_1 = tu1_1;
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9210, "put", loc1))(loc1, uu1_1x, ui4_1x);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
	}
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 7L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", loc1))(loc1, ui4_1x)).it_n1);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 15L);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 64L);
	uu1_1 = tu1_1;
	tu1_1 = eif_bit_or(tu1_2,uu1_1);
	uu1_1 = tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9210, "put", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 9L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", loc1))(loc1, ui4_1x)).it_n1);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
	uu1_1 = tu1_2;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
	uu1_1 = tu1_1;
	tu1_1 = eif_bit_or(tu1_2,uu1_1);
	uu1_1 = tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 9L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9210, "put", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(8);
	RTDBGAL(Current, 0, 0xF8000148, 0,0); /* Result */
	
	tr1 = RTLN(328);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14630, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(8,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("uuid_not_null", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14636, "is_null", Result))(Result)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu1_1
}

/* {UUID_GENERATOR}.rand_byte */
EIF_TYPED_VALUE F32_3986 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rand_byte";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 31, Current, 1, 0, 476);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(31, Current, 476);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3984, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9545, "item", tr1))(tr1)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3984, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9545, "item", tr2))(tr2)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16769, 391))(Current)).it_i4);
	if ((EIF_BOOLEAN)(loc1 == ti4_2)) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(4);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3983, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3985, dtype))(Current)).it_i4);
		ui4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9380, "set_seed", tr2))(tr2, ui4_1x);
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTHOOK(6);
	RTDBGAL(Current, 0, 0x30000000, 1,0); /* Result */
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3983, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	ui4_1 = loc1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9187, "i_th", tr2))(tr2, ui4_1x)).it_i4);
	RTNHOOK(6,2);
	tu1_1 = (EIF_NATURAL_8) ti4_2;
	Result = (EIF_NATURAL_8) tu1_1;
	RTHOOK(7);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3984, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9546, "put", tr2))(tr2, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("rand_count_changed", EX_POST);
		RTCO(tr1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3984, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9545, "item", tr2))(tr2)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {UUID_GENERATOR}.rand */
RTOID (F32_3987)
EIF_TYPED_VALUE F32_3987 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rand";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F32_3987);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 31, Current, 0, 0, 477);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(31, Current, 477);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000D5, 0,0); /* Result */
	
	tr1 = RTLN(213);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(9379, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3985, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9380, "set_seed", Result))(Result, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("rand_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {UUID_GENERATOR}.rand_count */
RTOID (F32_3988)
EIF_TYPED_VALUE F32_3988 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rand_count";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F32_3988);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 31, Current, 0, 0, 478);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(31, Current, 478);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800041A, 0,0); /* Result */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {1050,391,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(9546, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("rand_count_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {UUID_GENERATOR}.seed */
EIF_TYPED_VALUE F32_3989 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "seed";
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_NATURAL_64 tu8_4;
	EIF_NATURAL_64 tu8_5;
	EIF_NATURAL_64 tu8_6;
	EIF_NATURAL_64 tu8_7;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT64, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 31, Current, 2, 0, 479);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(31, Current, 479);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("rand_not_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3983, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF8000013, 0, 0); /* loc2 */
	
	tr1 = RTLN(19);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x3C000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3805, "year_now", loc2))(loc2)).it_i4);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1970L));
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 12L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 30L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 24L);
	tu8_5 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_6 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_7 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3) * tu8_4) * tu8_5) * tu8_6) * tu8_7);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x3C000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3806, "month_now", loc2))(loc2)).it_i4);
	RTNHOOK(4,1);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 30L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 24L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_5 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_6 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3) * tu8_4) * tu8_5) * tu8_6);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x3C000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3807, "day_now", loc2))(loc2)).it_i4);
	RTNHOOK(5,1);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 24L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_5 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3) * tu8_4) * tu8_5);
	RTHOOK(6);
	RTDBGAL(Current, 1, 0x3C000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3808, "hour_now", loc2))(loc2)).it_i4);
	RTNHOOK(6,1);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_4 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3) * tu8_4);
	RTHOOK(7);
	RTDBGAL(Current, 1, 0x3C000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3809, "minute_now", loc2))(loc2)).it_i4);
	RTNHOOK(7,1);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 60L);
	tu8_3 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) * tu8_3);
	RTHOOK(8);
	RTDBGAL(Current, 1, 0x3C000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3810, "second_now", loc2))(loc2)).it_i4);
	RTNHOOK(8,1);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1000L);
	loc1 += (EIF_NATURAL_64) (tu8_1 * tu8_2);
	RTHOOK(9);
	RTDBGAL(Current, 1, 0x3C000000, 1, 0); /* loc1 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(3811, "millisecond_now", loc2));
	RTNHOOK(9,1);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	loc1 += tu8_1;
	RTHOOK(10);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	ui4_1 = ((EIF_INTEGER_32) 32L);
	tu8_1 = eif_bit_shift_right(loc1,ui4_1);
	uu8_1 = loc1;
	tu8_2 = eif_bit_xor(tu8_1,uu8_1);
	RTNHOOK(10,1);
	ti4_1 = (EIF_INTEGER_32) tu8_2;
	ui4_1 = ((EIF_INTEGER_32) 2147483647L);
	ti4_2 = eif_bit_and(ti4_1,ui4_1);
	Result = (EIF_INTEGER_32) ti4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef uu8_1
#undef ui4_1
}

void EIF_Minit32 (void)
{
	GTCX
	RTOTS (3987,F32_3987)
	RTOTS (3988,F32_3988)
}


#ifdef __cplusplus
}
#endif

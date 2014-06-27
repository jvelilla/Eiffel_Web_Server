/*
 * Code for class SHA1
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F61_6637(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6638(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6639(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6640(EIF_REFERENCE);
extern void F61_6641(EIF_REFERENCE);
extern void F61_6642(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F61_6643(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6644(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6645(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6646(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6647(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6648(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6649(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6650(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6651(EIF_REFERENCE);
extern void F61_6652(EIF_REFERENCE);
extern void F61_6653(EIF_REFERENCE);
extern void F61_6654(EIF_REFERENCE);
extern void F61_6655(EIF_REFERENCE);
extern void F61_6656(EIF_REFERENCE);
extern void F61_6657(EIF_REFERENCE);
extern void F61_6658(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F61_6659(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6660(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6661(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6662(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6663(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6664(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6665(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6666(EIF_REFERENCE);
extern EIF_TYPED_VALUE F61_6667(EIF_REFERENCE);
extern void EIF_Minit61(void);

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

/* {SHA1}.make */
void F61_6637 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 60, Current, 0, 0, 1036);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1036);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6544, 0xF8000274, 0); /* schedule */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	uu4_1 = tu4_1;
	ui4_1 = ((EIF_INTEGER_32) 80L);
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(eif_non_attached_type(RTWCT(6544, dtype, Dftype(Current))),0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17151, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6544, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6542, 0xF800033D, 0); /* buffer */
	
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_1 = tu1_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6528, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(eif_non_attached_type(RTWCT(6542, dtype, Dftype(Current))),0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17151, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6542, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6529, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef uu1_1
}

/* {SHA1}.digest */
EIF_TYPED_VALUE F61_6638 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "digest";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT64, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	
	RTEAA(l_feature_name, 60, Current, 7, 0, 1037);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1037);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(6543, dtype));
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x3C000000, 1, 0); /* loc2 */
	
	loc2 = *(EIF_NATURAL_64 *)(Current + RTWA(6535, dtype));
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
	
	loc3 = *(EIF_NATURAL_32 *)(Current + RTWA(6556, dtype));
	RTHOOK(4);
	RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
	
	loc4 = *(EIF_NATURAL_32 *)(Current + RTWA(6557, dtype));
	RTHOOK(5);
	RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
	
	loc5 = *(EIF_NATURAL_32 *)(Current + RTWA(6558, dtype));
	RTHOOK(6);
	RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
	
	loc6 = *(EIF_NATURAL_32 *)(Current + RTWA(6559, dtype));
	RTHOOK(7);
	RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
	
	loc7 = *(EIF_NATURAL_32 *)(Current + RTWA(6560, dtype));
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6538, dtype))(Current);
	RTHOOK(9);
	RTDBGAL(Current, 0, 0xF800033D, 0,0); /* Result */
	
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	uu1_1 = tu1_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6527, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	{
		static EIF_TYPE_INDEX typarr0[] = {829,454,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17151, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(9,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6556, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6515, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(11);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6557, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6515, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(12);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6558, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6515, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(13);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6559, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6515, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(14);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6560, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 16L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6515, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(15);
	RTDBGAA(Current, dtype, 6543, 0x10000000, 1); /* buffer_offset */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6543, dtype)) = (EIF_INTEGER_32) loc1;
	RTHOOK(16);
	RTDBGAA(Current, dtype, 6535, 0x3C000000, 1); /* byte_count */
	
	*(EIF_NATURAL_64 *)(Current + RTWA(6535, dtype)) = (EIF_NATURAL_64) loc2;
	RTHOOK(17);
	RTDBGAA(Current, dtype, 6556, 0x38000000, 1); /* h1 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(6556, dtype)) = (EIF_NATURAL_32) loc3;
	RTHOOK(18);
	RTDBGAA(Current, dtype, 6557, 0x38000000, 1); /* h2 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(6557, dtype)) = (EIF_NATURAL_32) loc4;
	RTHOOK(19);
	RTDBGAA(Current, dtype, 6558, 0x38000000, 1); /* h3 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(6558, dtype)) = (EIF_NATURAL_32) loc5;
	RTHOOK(20);
	RTDBGAA(Current, dtype, 6559, 0x38000000, 1); /* h4 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(6559, dtype)) = (EIF_NATURAL_32) loc6;
	RTHOOK(21);
	RTDBGAA(Current, dtype, 6560, 0x38000000, 1); /* h5 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(6560, dtype)) = (EIF_NATURAL_32) loc7;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu1_1
}

/* {SHA1}.digest_count */
EIF_TYPED_VALUE F61_6639 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	return r;
}

/* {SHA1}.block_size */
EIF_TYPED_VALUE F61_6640 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {SHA1}.reset */
void F61_6641 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 60, Current, 0, 0, 1040);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1040);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6535, 0x3C000000, 1); /* byte_count */
	
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current + RTWA(6535, dtype)) = (EIF_NATURAL_64) tu8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6543, 0x10000000, 1); /* buffer_offset */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(6543, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6556, 0x38000000, 1); /* h1 */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1732584193L);
	*(EIF_NATURAL_32 *)(Current + RTWA(6556, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6557, 0x38000000, 1); /* h2 */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4023233417));
	*(EIF_NATURAL_32 *)(Current + RTWA(6557, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 6558, 0x38000000, 1); /* h3 */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2562383102));
	*(EIF_NATURAL_32 *)(Current + RTWA(6558, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 6559, 0x38000000, 1); /* h4 */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 271733878L);
	*(EIF_NATURAL_32 *)(Current + RTWA(6559, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 6560, 0x38000000, 1); /* h5 */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3285377520));
	*(EIF_NATURAL_32 *)(Current + RTWA(6560, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SHA1}.update_from_byte */
void F61_6642 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_from_byte";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 60, Current, 1, 1, 1041);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1041);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6543, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800033D, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6542, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	uu1_1 = arg1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6543, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17163, "put", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6543, 0x10000000, 1); /* buffer_offset */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(6543, dtype)))++;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6535, 0x3C000000, 1); /* byte_count */
	
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 1L);
	(*(EIF_NATURAL_64 *)(Current + RTWA(6535, dtype))) += tu8_2;
	RTHOOK(5);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6543, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17160, "upper", loc1))(loc1)).it_i4);
	if ((EIF_BOOLEAN) (ti4_2 > ti4_3)) {
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6550, dtype))(Current);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 6543, 0x10000000, 1); /* buffer_offset */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(6543, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("buffer_offset_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6543, dtype));
		RTCO(tr1);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6528, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) % ti4_3))) {
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
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu1_1
#undef arg1
}

/* {SHA1}.schedule_buffer */
void F61_6643 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "schedule_buffer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,loc5);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 60, Current, 5, 0, 1042);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1042);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("buffer_offset_reset", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6543, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 4, 0xF800033D, 0, 0); /* loc4 */
	
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6542, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 5, 0xF8000274, 0, 0); /* loc5 */
	
	loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17159, "lower", loc5))(loc5)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17159, "lower", loc4))(loc4)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17160, "upper", loc4))(loc4)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(8);
		ur1 = loc4;
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6513, dtype))(Current, ur1x, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17163, "put", loc5))(loc5, uu4_1x, ui4_1x);
		RTHOOK(9);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 += ((EIF_INTEGER_32) 4L);
		RTHOOK(10);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
}

/* {SHA1}.buffer */
EIF_TYPED_VALUE F61_6644 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6542,Dtype(Current)));
	return r;
}


/* {SHA1}.buffer_offset */
EIF_TYPED_VALUE F61_6645 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6543,Dtype(Current)));
	return r;
}


/* {SHA1}.schedule */
EIF_TYPED_VALUE F61_6646 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6544,Dtype(Current)));
	return r;
}


/* {SHA1}.a */
EIF_TYPED_VALUE F61_6647 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6545,Dtype(Current)));
	return r;
}


/* {SHA1}.b */
EIF_TYPED_VALUE F61_6648 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6546,Dtype(Current)));
	return r;
}


/* {SHA1}.c */
EIF_TYPED_VALUE F61_6649 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6547,Dtype(Current)));
	return r;
}


/* {SHA1}.d */
EIF_TYPED_VALUE F61_6650 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6548,Dtype(Current)));
	return r;
}


/* {SHA1}.e */
EIF_TYPED_VALUE F61_6651 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6549,Dtype(Current)));
	return r;
}


/* {SHA1}.process_block */
void F61_6652 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "process_block";
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 60, Current, 0, 0, 1051);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1051);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6541, dtype))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6555, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6545, 0x38000000, 1); /* a */
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6556, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6546, 0x38000000, 1); /* b */
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6557, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 6547, 0x38000000, 1); /* c */
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6558, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 6548, 0x38000000, 1); /* d */
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6559, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 6549, 0x38000000, 1); /* e */
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6560, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6554, dtype))(Current);
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6553, dtype))(Current);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6552, dtype))(Current);
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6551, dtype))(Current);
	RTHOOK(12);
	RTDBGAA(Current, dtype, 6556, 0x38000000, 1); /* h1 */
	
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(6556, dtype))) += tu4_2;
	RTHOOK(13);
	RTDBGAA(Current, dtype, 6557, 0x38000000, 1); /* h2 */
	
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(6557, dtype))) += tu4_2;
	RTHOOK(14);
	RTDBGAA(Current, dtype, 6558, 0x38000000, 1); /* h3 */
	
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(6558, dtype))) += tu4_2;
	RTHOOK(15);
	RTDBGAA(Current, dtype, 6559, 0x38000000, 1); /* h4 */
	
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(6559, dtype))) += tu4_2;
	RTHOOK(16);
	RTDBGAA(Current, dtype, 6560, 0x38000000, 1); /* h5 */
	
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(6560, dtype))) += tu4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SHA1}.do_round_4 */
void F61_6653 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_4";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 60, Current, 2, 0, 1052);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1052);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 60L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 6549, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6518, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6564, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 6546, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 6548, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6518, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6564, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 6545, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 6547, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6518, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6564, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 6549, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 6546, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6518, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6564, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 6548, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 6545, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6518, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6564, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 6547, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.do_round_3 */
void F61_6654 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_3";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 60, Current, 2, 0, 1053);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1053);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 6549, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6517, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6563, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 6546, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 6548, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6517, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6563, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 6545, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 6547, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6517, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6563, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 6549, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 6546, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6517, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6563, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 6548, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 6545, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6517, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6563, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 6547, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.do_round_2 */
void F61_6655 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_2";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 60, Current, 2, 0, 1054);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1054);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 6549, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6518, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6562, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 6546, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 6548, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6518, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6562, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 6545, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 6547, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6518, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6562, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 6549, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 6546, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6518, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6562, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 6548, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 6545, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6518, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6562, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 6547, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.do_round_1 */
void F61_6656 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_1";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 60, Current, 2, 0, 1055);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1055);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 6549, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6516, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6561, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 6546, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 6548, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6516, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6561, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 6545, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 6547, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6516, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6561, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 6549, 0x38000000, 1); /* e */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 6546, 0x38000000, 1); /* b */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6516, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6561, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 6548, 0x38000000, 1); /* d */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 6545, 0x38000000, 1); /* a */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(6546, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(6548, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(6549, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6516, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6561, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6545, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 6547, 0x38000000, 1); /* c */
		
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(6547, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.expand_word_block */
void F61_6657 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "expand_word_block";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 60, Current, 2, 0, 1056);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1056);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 80L))) break;
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 3L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 8L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_2 = eif_bit_xor(tu4_1,uu4_1);
		RTNHOOK(3,1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 14L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		tu4_1 = eif_bit_xor(tu4_2,uu4_1);
		RTNHOOK(3,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 16L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_2 = eif_bit_xor(tu4_1,uu4_1);
		loc2 = (EIF_NATURAL_32) tu4_2;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		uu4_1 = loc2;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6510, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17163, "put", tr1))(tr1, uu4_1x, ui4_1x);
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
#undef up1
#undef ui4_1
#undef uu4_1
}

/* {SHA1}.process_length */
void F61_6658 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "process_length";
	RTEX;
#define arg1 arg1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 60, Current, 0, 1, 1057);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(60, Current, 1057);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 56L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6530, dtype))(Current, uu1_1x);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 48L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6530, dtype))(Current, uu1_1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 40L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6530, dtype))(Current, uu1_1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6530, dtype))(Current, uu1_1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6530, dtype))(Current, uu1_1x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6530, dtype))(Current, uu1_1x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6530, dtype))(Current, uu1_1x);
	RTHOOK(8);
	tu1_1 = (EIF_NATURAL_8) arg1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6530, dtype))(Current, uu1_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef uu1_1
#undef arg1
}

/* {SHA1}.h1 */
EIF_TYPED_VALUE F61_6659 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6556,Dtype(Current)));
	return r;
}


/* {SHA1}.h2 */
EIF_TYPED_VALUE F61_6660 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6557,Dtype(Current)));
	return r;
}


/* {SHA1}.h3 */
EIF_TYPED_VALUE F61_6661 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6558,Dtype(Current)));
	return r;
}


/* {SHA1}.h4 */
EIF_TYPED_VALUE F61_6662 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6559,Dtype(Current)));
	return r;
}


/* {SHA1}.h5 */
EIF_TYPED_VALUE F61_6663 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(6560,Dtype(Current)));
	return r;
}


/* {SHA1}.k1 */
EIF_TYPED_VALUE F61_6664 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 1518500249U);
	return r;
}

/* {SHA1}.k2 */
EIF_TYPED_VALUE F61_6665 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 1859775393U);
	return r;
}

/* {SHA1}.k3 */
EIF_TYPED_VALUE F61_6666 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 2400959708U);
	return r;
}

/* {SHA1}.k4 */
EIF_TYPED_VALUE F61_6667 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 3395469782U);
	return r;
}

void EIF_Minit61 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

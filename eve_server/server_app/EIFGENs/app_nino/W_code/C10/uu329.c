/*
 * Code for class UUID
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F329_16548(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F329_16549(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F329_16550(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F329_16551(EIF_REFERENCE);
extern EIF_TYPED_VALUE F329_16552(EIF_REFERENCE);
extern EIF_TYPED_VALUE F329_16553(EIF_REFERENCE);
extern EIF_TYPED_VALUE F329_16554(EIF_REFERENCE);
extern EIF_TYPED_VALUE F329_16555(EIF_REFERENCE);
extern EIF_TYPED_VALUE F329_16556(EIF_REFERENCE);
extern EIF_TYPED_VALUE F329_16557(EIF_REFERENCE);
extern EIF_TYPED_VALUE F329_16558(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F329_16559(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F329_16560(EIF_REFERENCE);
extern EIF_TYPED_VALUE F329_16561(EIF_REFERENCE);
extern EIF_TYPED_VALUE F329_16562(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F329_16563(EIF_REFERENCE);
extern EIF_TYPED_VALUE F329_16564(EIF_REFERENCE);
extern void EIF_Minit329(void);

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

/* {UUID}.make */
void F329_16548 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n2
#define arg3 arg3x.it_n2
#define arg4 arg4x.it_n2
#define arg5 arg5x.it_n8
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_n8 = * (EIF_NATURAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n2 = * (EIF_NATURAL_16 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n2 = * (EIF_NATURAL_16 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n2 = * (EIF_NATURAL_16 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT16,&arg2);
	RTLU(SK_UINT16,&arg3);
	RTLU(SK_UINT16,&arg4);
	RTLU(SK_UINT64,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 328, Current, 0, 5, 9786);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(328, Current, 9786);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 14631, 0x38000000, 1); /* data_1 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(14631, dtype)) = (EIF_NATURAL_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 14632, 0x34000000, 1); /* data_2 */
	
	*(EIF_NATURAL_16 *)(Current + RTWA(14632, dtype)) = (EIF_NATURAL_16) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 14633, 0x34000000, 1); /* data_3 */
	
	*(EIF_NATURAL_16 *)(Current + RTWA(14633, dtype)) = (EIF_NATURAL_16) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 14634, 0x34000000, 1); /* data_4 */
	
	*(EIF_NATURAL_16 *)(Current + RTWA(14634, dtype)) = (EIF_NATURAL_16) arg4;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 14635, 0x3C000000, 1); /* data_5 */
	
	*(EIF_NATURAL_64 *)(Current + RTWA(14635, dtype)) = (EIF_NATURAL_64) arg5;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("data_1_set", EX_POST);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(14631, dtype));
		if ((EIF_BOOLEAN)(tu4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("data_2_set", EX_POST);
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14632, dtype));
		if ((EIF_BOOLEAN)(tu2_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("data_3_set", EX_POST);
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14633, dtype));
		if ((EIF_BOOLEAN)(tu2_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("data_4_set", EX_POST);
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14634, dtype));
		if ((EIF_BOOLEAN)(tu2_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("data_5_set", EX_POST);
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(14635, dtype));
		if ((EIF_BOOLEAN)(tu8_1 == arg5)) {
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
	RTLO(7);
	RTEE;
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {UUID}.make_from_string */
void F329_16549 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
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
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 328, Current, 4, 1, 9787);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(328, Current, 9787);
	if (arg1) {
		RTCC(arg1, 328, l_feature_name, 1, 342);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_uuid_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_valid_uuid", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14637, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
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
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15003, "count", arg1))(arg1)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(8);
		ui4_1 = loc2;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14967, "item", arg1))(arg1, ui4_1x)).it_c4);
		tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14640, dtype))(Current)).it_c4);
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			RTHOOK(9);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2++;
		} else {
			if (RTAL & CK_CHECK) {
				RTHOOK(10);
				RTCT("enough_char_to_read", EX_CHECK);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) <= loc3)) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(11);
			ui4_1 = loc2;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14967, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14639, dtype))(Current, uw1x)).it_n1);
			ui4_1 = ((EIF_INTEGER_32) 4L);
			tu1_2 = eif_bit_shift_left(tu1_1,ui4_1);
			ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14967, "item", arg1))(arg1, ui4_1x)).it_c4);
			uw1 = tw1;
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14639, dtype))(Current, uw1x)).it_n1);
			uu1_1 = tu1_1;
			tu1_1 = eif_bit_or((tu1_2),uu1_1);
			uu1_1 = tu1_1;
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9210, "put", loc1))(loc1, uu1_1x, ui4_1x);
			RTHOOK(12);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			
			loc4++;
			RTHOOK(13);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2 += ((EIF_INTEGER_32) 2L);
		}
	}
	RTHOOK(14);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14630, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uw1
#undef uu1_1
#undef arg1
}

/* {UUID}.make_from_array */
void F329_16550 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_array";
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc3 = (EIF_NATURAL_64) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT16, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT64, &loc3);
	
	RTEAA(l_feature_name, 328, Current, 3, 1, 9788);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(328, Current, 9788);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {864,415,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg1, 328, l_feature_name, 1, typres0);
		}
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_segs_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_segs_one_based", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(11317, "lower", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_segs_has_16_elements", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9188, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
	
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu4_1 = eif_bit_shift_left(loc2,ui4_1);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
	
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	loc2 += tu4_1;
	RTHOOK(7);
	RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu4_1 = eif_bit_shift_left(loc2,ui4_1);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
	
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	loc2 += tu4_1;
	RTHOOK(9);
	RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu4_1 = eif_bit_shift_left(loc2,ui4_1);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(10);
	RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
	
	ui4_1 = ((EIF_INTEGER_32) 4L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu4_1 = (EIF_NATURAL_32) tu1_1;
	loc2 += tu4_1;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 14631, 0x38000000, 1); /* data_1 */
	
	*(EIF_NATURAL_32 *)(Current + RTWA(14631, dtype)) = (EIF_NATURAL_32) loc2;
	RTHOOK(12);
	RTDBGAL(Current, 1, 0x34000000, 1, 0); /* loc1 */
	
	ui4_1 = ((EIF_INTEGER_32) 5L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu2_1 = (EIF_NATURAL_16) tu1_1;
	loc1 = (EIF_NATURAL_16) tu2_1;
	RTHOOK(13);
	RTDBGAL(Current, 1, 0x34000000, 1, 0); /* loc1 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu2_1 = eif_bit_shift_left(loc1,ui4_1);
	loc1 = (EIF_NATURAL_16) tu2_1;
	RTHOOK(14);
	RTDBGAL(Current, 1, 0x34000000, 1, 0); /* loc1 */
	
	ui4_1 = ((EIF_INTEGER_32) 6L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu2_1 = (EIF_NATURAL_16) tu1_1;
	loc1 += tu2_1;
	RTHOOK(15);
	RTDBGAA(Current, dtype, 14632, 0x34000000, 1); /* data_2 */
	
	*(EIF_NATURAL_16 *)(Current + RTWA(14632, dtype)) = (EIF_NATURAL_16) loc1;
	RTHOOK(16);
	RTDBGAL(Current, 1, 0x34000000, 1, 0); /* loc1 */
	
	ui4_1 = ((EIF_INTEGER_32) 7L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu2_1 = (EIF_NATURAL_16) tu1_1;
	loc1 = (EIF_NATURAL_16) tu2_1;
	RTHOOK(17);
	RTDBGAL(Current, 1, 0x34000000, 1, 0); /* loc1 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu2_1 = eif_bit_shift_left(loc1,ui4_1);
	loc1 = (EIF_NATURAL_16) tu2_1;
	RTHOOK(18);
	RTDBGAL(Current, 1, 0x34000000, 1, 0); /* loc1 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu2_1 = (EIF_NATURAL_16) tu1_1;
	loc1 += tu2_1;
	RTHOOK(19);
	RTDBGAA(Current, dtype, 14633, 0x34000000, 1); /* data_3 */
	
	*(EIF_NATURAL_16 *)(Current + RTWA(14633, dtype)) = (EIF_NATURAL_16) loc1;
	RTHOOK(20);
	RTDBGAL(Current, 1, 0x34000000, 1, 0); /* loc1 */
	
	ui4_1 = ((EIF_INTEGER_32) 9L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu2_1 = (EIF_NATURAL_16) tu1_1;
	loc1 = (EIF_NATURAL_16) tu2_1;
	RTHOOK(21);
	RTDBGAL(Current, 1, 0x34000000, 1, 0); /* loc1 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu2_1 = eif_bit_shift_left(loc1,ui4_1);
	loc1 = (EIF_NATURAL_16) tu2_1;
	RTHOOK(22);
	RTDBGAL(Current, 1, 0x34000000, 1, 0); /* loc1 */
	
	ui4_1 = ((EIF_INTEGER_32) 10L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu2_1 = (EIF_NATURAL_16) tu1_1;
	loc1 += tu2_1;
	RTHOOK(23);
	RTDBGAA(Current, dtype, 14634, 0x34000000, 1); /* data_4 */
	
	*(EIF_NATURAL_16 *)(Current + RTWA(14634, dtype)) = (EIF_NATURAL_16) loc1;
	RTHOOK(24);
	RTDBGAL(Current, 3, 0x3C000000, 1, 0); /* loc3 */
	
	ui4_1 = ((EIF_INTEGER_32) 11L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	loc3 = (EIF_NATURAL_64) tu8_1;
	RTHOOK(25);
	RTDBGAL(Current, 3, 0x3C000000, 1, 0); /* loc3 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu8_1 = eif_bit_shift_left(loc3,ui4_1);
	loc3 = (EIF_NATURAL_64) tu8_1;
	RTHOOK(26);
	RTDBGAL(Current, 3, 0x3C000000, 1, 0); /* loc3 */
	
	ui4_1 = ((EIF_INTEGER_32) 12L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	loc3 += tu8_1;
	RTHOOK(27);
	RTDBGAL(Current, 3, 0x3C000000, 1, 0); /* loc3 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu8_1 = eif_bit_shift_left(loc3,ui4_1);
	loc3 = (EIF_NATURAL_64) tu8_1;
	RTHOOK(28);
	RTDBGAL(Current, 3, 0x3C000000, 1, 0); /* loc3 */
	
	ui4_1 = ((EIF_INTEGER_32) 13L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	loc3 += tu8_1;
	RTHOOK(29);
	RTDBGAL(Current, 3, 0x3C000000, 1, 0); /* loc3 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu8_1 = eif_bit_shift_left(loc3,ui4_1);
	loc3 = (EIF_NATURAL_64) tu8_1;
	RTHOOK(30);
	RTDBGAL(Current, 3, 0x3C000000, 1, 0); /* loc3 */
	
	ui4_1 = ((EIF_INTEGER_32) 14L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	loc3 += tu8_1;
	RTHOOK(31);
	RTDBGAL(Current, 3, 0x3C000000, 1, 0); /* loc3 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu8_1 = eif_bit_shift_left(loc3,ui4_1);
	loc3 = (EIF_NATURAL_64) tu8_1;
	RTHOOK(32);
	RTDBGAL(Current, 3, 0x3C000000, 1, 0); /* loc3 */
	
	ui4_1 = ((EIF_INTEGER_32) 15L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	loc3 += tu8_1;
	RTHOOK(33);
	RTDBGAL(Current, 3, 0x3C000000, 1, 0); /* loc3 */
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu8_1 = eif_bit_shift_left(loc3,ui4_1);
	loc3 = (EIF_NATURAL_64) tu8_1;
	RTHOOK(34);
	RTDBGAL(Current, 3, 0x3C000000, 1, 0); /* loc3 */
	
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9207, "item", arg1))(arg1, ui4_1x)).it_n1);
	tu8_1 = (EIF_NATURAL_64) tu1_1;
	loc3 += tu8_1;
	RTHOOK(35);
	RTDBGAA(Current, dtype, 14635, 0x3C000000, 1); /* data_5 */
	
	*(EIF_NATURAL_64 *)(Current + RTWA(14635, dtype)) = (EIF_NATURAL_64) loc3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {UUID}.data_1 */
EIF_TYPED_VALUE F329_16551 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(14631,Dtype(Current)));
	return r;
}


/* {UUID}.data_2 */
EIF_TYPED_VALUE F329_16552 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT16;
	r.it_n2 = *(EIF_NATURAL_16 *)(Current + RTWA(14632,Dtype(Current)));
	return r;
}


/* {UUID}.data_3 */
EIF_TYPED_VALUE F329_16553 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT16;
	r.it_n2 = *(EIF_NATURAL_16 *)(Current + RTWA(14633,Dtype(Current)));
	return r;
}


/* {UUID}.data_4 */
EIF_TYPED_VALUE F329_16554 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT16;
	r.it_n2 = *(EIF_NATURAL_16 *)(Current + RTWA(14634,Dtype(Current)));
	return r;
}


/* {UUID}.data_5 */
EIF_TYPED_VALUE F329_16555 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(14635,Dtype(Current)));
	return r;
}


/* {UUID}.hash_code */
EIF_TYPED_VALUE F329_16556 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 328, Current, 0, 0, 9777);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(328, Current, 9777);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(14635, dtype));
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu8_1)));
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
}

/* {UUID}.is_null */
EIF_TYPED_VALUE F329_16557 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_null";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 328, Current, 0, 0, 9778);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(328, Current, 9778);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(14631, dtype));
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14632, dtype));
		tu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L);
		tb4 = (EIF_BOOLEAN)(tu2_1 == tu2_2);
	}
	if (tb4) {
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14633, dtype));
		tu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L);
		tb3 = (EIF_BOOLEAN)(tu2_1 == tu2_2);
	}
	if (tb3) {
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14634, dtype));
		tu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L);
		tb2 = (EIF_BOOLEAN)(tu2_1 == tu2_2);
	}
	if (tb2) {
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(14635, dtype));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
		tb1 = (EIF_BOOLEAN)(tu8_1 == tu8_2);
	}
	Result = (EIF_BOOLEAN) tb1;
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

/* {UUID}.is_valid_uuid */
EIF_TYPED_VALUE F329_16558 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_uuid";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 328, Current, 1, 1, 9779);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(328, Current, 9779);
	if (arg1) {
		RTCC(arg1, 328, l_feature_name, 1, 342);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_uuid_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15003, "count", arg1))(arg1)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 36L))) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result || (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 36L)))) break;
			RTHOOK(7);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 9L)) || (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 14L))) || (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 19L))) || (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 24L)))) {
				RTHOOK(8);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				ui4_1 = loc1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14967, "item", arg1))(arg1, ui4_1x)).it_c4);
				tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14640, dtype))(Current)).it_c4);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tw1 == tw2);
			} else {
				RTHOOK(9);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				ui4_1 = loc1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14967, "item", arg1))(arg1, ui4_1x)).it_c4);
				RTNHOOK(9,1);
				tr1 = RTLN(331);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14835, "is_hexa_digit", tr1))(tr1)).it_b);
				Result = (EIF_BOOLEAN) tb1;
			}
			RTHOOK(10);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {UUID}.is_less */
EIF_TYPED_VALUE F329_16559 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_less";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 328, Current, 0, 1, 9780);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(328, Current, 9780);
	RTCC(arg1, 328, l_feature_name, 1, 328);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(14631, dtype));
	tu4_2 = *(EIF_NATURAL_32 *)(arg1 + RTVA(14631, "data_1", arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	RTHOOK(3);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(14631, dtype));
	tu4_2 = *(EIF_NATURAL_32 *)(arg1 + RTVA(14631, "data_1", arg1));
	if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14632, dtype));
		tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(14632, "data_2", arg1));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu2_1 < tu2_2);
		RTHOOK(5);
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14632, dtype));
		tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(14632, "data_2", arg1));
		if ((EIF_BOOLEAN)(tu2_1 == tu2_2)) {
			RTHOOK(6);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14633, dtype));
			tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(14633, "data_3", arg1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu2_1 < tu2_2);
			RTHOOK(7);
			tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14633, dtype));
			tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(14633, "data_3", arg1));
			if ((EIF_BOOLEAN)(tu2_1 == tu2_2)) {
				RTHOOK(8);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14634, dtype));
				tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(14634, "data_4", arg1));
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu2_1 < tu2_2);
				RTHOOK(9);
				tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14634, dtype));
				tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(14634, "data_4", arg1));
				if ((EIF_BOOLEAN)(tu2_1 == tu2_2)) {
					RTHOOK(10);
					RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
					
					tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(14635, dtype));
					tu8_2 = *(EIF_NATURAL_64 *)(arg1 + RTVA(14635, "data_5", arg1));
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu8_1 < tu8_2);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9665, "is_less", arg1))(arg1, ur1x)).it_b);
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
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {UUID}.string */
EIF_TYPED_VALUE F329_16560 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "string";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
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
	
	RTEAA(l_feature_name, 328, Current, 0, 0, 9781);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(328, Current, 9781);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800015D, 0,0); /* Result */
	
	tr1 = RTLN(349);
	ui4_1 = ((EIF_INTEGER_32) 37L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14964, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(14631, dtype));
	tr1 = RTLN(403);
	*(EIF_NATURAL_32 *)tr1 = tu4_1;
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17002, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15134, "append_string_general", Result))(Result, ur1x);
	RTHOOK(3);
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14640, dtype))(Current)).it_c4);
	uw1 = tw1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15180, "append_character", Result))(Result, uw1x);
	RTHOOK(4);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14632, dtype));
	tr1 = RTLN(406);
	*(EIF_NATURAL_16 *)tr1 = tu2_1;
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17051, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15134, "append_string_general", Result))(Result, ur1x);
	RTHOOK(5);
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14640, dtype))(Current)).it_c4);
	uw1 = tw1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15180, "append_character", Result))(Result, uw1x);
	RTHOOK(6);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14633, dtype));
	tr1 = RTLN(406);
	*(EIF_NATURAL_16 *)tr1 = tu2_1;
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17051, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15134, "append_string_general", Result))(Result, ur1x);
	RTHOOK(7);
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14640, dtype))(Current)).it_c4);
	uw1 = tw1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15180, "append_character", Result))(Result, uw1x);
	RTHOOK(8);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14634, dtype));
	tr1 = RTLN(406);
	*(EIF_NATURAL_16 *)tr1 = tu2_1;
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17051, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15134, "append_string_general", Result))(Result, ur1x);
	RTHOOK(9);
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14640, dtype))(Current)).it_c4);
	uw1 = tw1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15180, "append_character", Result))(Result, uw1x);
	RTHOOK(10);
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(14635, dtype));
	tr1 = RTLN(400);
	*(EIF_NATURAL_64 *)tr1 = tu8_1;
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16954, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	ui4_2 = ((EIF_INTEGER_32) 16L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr2))(tr2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15134, "append_string_general", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("result_is_valid_uuid", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14637, dtype))(Current, ur1x)).it_b);
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uw1
}

/* {UUID}.out */
EIF_TYPED_VALUE F329_16561 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
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
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 328, Current, 0, 0, 9782);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(328, Current, 9782);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800015E, 0,0); /* Result */
	
	tr1 = RTLN(350);
	ui4_1 = ((EIF_INTEGER_32) 37L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14964, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(14631, dtype));
	tr1 = RTLN(403);
	*(EIF_NATURAL_32 *)tr1 = tu4_1;
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17002, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15134, "append_string_general", Result))(Result, ur1x);
	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14641, dtype))(Current)).it_c1);
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15236, "append_character", Result))(Result, uc1x);
	RTHOOK(4);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14632, dtype));
	tr1 = RTLN(406);
	*(EIF_NATURAL_16 *)tr1 = tu2_1;
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17051, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15134, "append_string_general", Result))(Result, ur1x);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14641, dtype))(Current)).it_c1);
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15236, "append_character", Result))(Result, uc1x);
	RTHOOK(6);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14633, dtype));
	tr1 = RTLN(406);
	*(EIF_NATURAL_16 *)tr1 = tu2_1;
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17051, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15134, "append_string_general", Result))(Result, ur1x);
	RTHOOK(7);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14641, dtype))(Current)).it_c1);
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15236, "append_character", Result))(Result, uc1x);
	RTHOOK(8);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(14634, dtype));
	tr1 = RTLN(406);
	*(EIF_NATURAL_16 *)tr1 = tu2_1;
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17051, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15134, "append_string_general", Result))(Result, ur1x);
	RTHOOK(9);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14641, dtype))(Current)).it_c1);
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15236, "append_character", Result))(Result, uc1x);
	RTHOOK(10);
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(14635, dtype));
	tr1 = RTLN(400);
	*(EIF_NATURAL_64 *)tr1 = tu8_1;
	
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16954, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	ui4_2 = ((EIF_INTEGER_32) 16L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15044, "substring", tr2))(tr2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15134, "append_string_general", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("result_is_valid_uuid", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14637, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
}

/* {UUID}.hex_to_natural_8 */
EIF_TYPED_VALUE F329_16562 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hex_to_natural_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 328, Current, 1, 1, 9783);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(328, Current, 9783);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_char_is_hexa_digit", EX_PRE);
		tr1 = RTLN(331);
		*(EIF_CHARACTER_32 *)tr1 = arg1;
		
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14835, "is_hexa_digit", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
		tb1 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		ti4_1 = (EIF_INTEGER_32) (arg1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	} else {
		RTHOOK(4);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
		if ((EIF_BOOLEAN) (arg1 >= tw1)) {
			RTHOOK(5);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 10L)));
		} else {
			RTHOOK(6);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 10L)));
		}
	}
	RTHOOK(7);
	RTDBGAL(Current, 0, 0x30000000, 1,0); /* Result */
	
	tu1_1 = (EIF_NATURAL_8) loc1;
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

/* {UUID}.separator_char */
EIF_TYPED_VALUE F329_16563 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR32;
	r.it_c4 = (EIF_CHARACTER_32) (EIF_CHARACTER_32) 45U;
	return r;
}

/* {UUID}.separator_char_8 */
EIF_TYPED_VALUE F329_16564 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '-';
	return r;
}

void EIF_Minit329 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

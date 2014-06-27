/*
 * Code for class STRING_TO_REAL_CONVERTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F41_783(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_784(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F41_785(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_786(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_787(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_788(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F41_789(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_790(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_791(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_792(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_793(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_794(EIF_REFERENCE);
extern void F41_795(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F41_796(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F41_797(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F41_798(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_799(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_800(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_801(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_802(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_803(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_804(EIF_REFERENCE);
extern EIF_TYPED_VALUE F41_805(EIF_REFERENCE);
extern void EIF_Minit41(void);

#ifdef __cplusplus
}
#endif

#include <math.h>
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_TO_REAL_CONVERTOR}.make */
void F41_783 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 868);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 868);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 699, 0xF80000AA, 0); /* leading_separators */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(699, dtype, Dftype(Current))));
	tr2 = RTMS_EX_H(" ",1,32);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3040, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(699, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 700, 0xF80000AA, 0); /* trailing_separators */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(700, dtype, Dftype(Current))));
	tr2 = RTMS_EX_H(" ",1,32);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3040, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(700, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("leading_separators_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(699, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, RTMS_EX_H(" ",1,32))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("trailing_separators_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, RTMS_EX_H(" ",1,32))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("leading_separators_not_acceptable", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(698, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("trailing_separatorsnot_acceptable", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(697, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
#undef up1
#undef ur1
}

/* {STRING_TO_REAL_CONVERTOR}.conversion_type_valid */
EIF_TYPED_VALUE F41_784 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "conversion_type_valid";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 1, 869);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(40, Current, 869);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ui4_1 = arg1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(688, Dtype(Current)))(Current, ui4_1x)).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {STRING_TO_REAL_CONVERTOR}.overflowed */
EIF_TYPED_VALUE F41_785 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "overflowed";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 870);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(40, Current, 870);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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

/* {STRING_TO_REAL_CONVERTOR}.underflowed */
EIF_TYPED_VALUE F41_786 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "underflowed";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 871);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(40, Current, 871);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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

/* {STRING_TO_REAL_CONVERTOR}.parse_successful */
EIF_TYPED_VALUE F41_787 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_successful";
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
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 872);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(40, Current, 872);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(714, Dtype(Current)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 9L));
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

/* {STRING_TO_REAL_CONVERTOR}.separators_valid */
EIF_TYPED_VALUE F41_788 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "separators_valid";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
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
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	
	RTEAA(l_feature_name, 40, Current, 4, 1, 873);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(40, Current, 873);
	RTCC(arg1, 40, l_feature_name, 1, eif_attached_type(170));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("separators_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3069, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 4, 0x04000000, 1, 0); /* loc4 */
	
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc3) || loc4)) break;
		RTHOOK(7);
		RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
		
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1712, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc2 = (EIF_CHARACTER_8) tc1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (loc2 <= (EIF_CHARACTER_8) '9')) || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '+')) || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '-')) || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) 'E')) || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) 'e'))) {
			RTHOOK(9);
			RTDBGAL(Current, 4, 0x04000000, 1, 0); /* loc4 */
			
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(10);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(11);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {STRING_TO_REAL_CONVERTOR}.is_integral_double */
EIF_TYPED_VALUE F41_789 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_integral_double";
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
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 874);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 874);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(714, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(714, dtype));
	Result = *(EIF_BOOLEAN *)(Current + RTWA(765, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (ti4_2 < ((EIF_INTEGER_32) 9L))) && (EIF_BOOLEAN) !Result);
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

/* {STRING_TO_REAL_CONVERTOR}.is_integral_real */
EIF_TYPED_VALUE F41_790 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_integral_real";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 875);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(40, Current, 875);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(752, Dtype(Current)))(Current)).it_b);
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

/* {STRING_TO_REAL_CONVERTOR}.is_part_of_double */
EIF_TYPED_VALUE F41_791 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_part_of_double";
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
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 876);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(40, Current, 876);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(714, Dtype(Current)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 9L));
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

/* {STRING_TO_REAL_CONVERTOR}.is_part_of_real */
EIF_TYPED_VALUE F41_792 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_part_of_real";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 877);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(40, Current, 877);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(754, Dtype(Current)))(Current)).it_b);
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

/* {STRING_TO_REAL_CONVERTOR}.parsed_double */
EIF_TYPED_VALUE F41_793 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_double";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 878);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 878);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(763, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 761, 0x10000000, 1); /* exponent */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(761, dtype));
		*(EIF_INTEGER_32 *)(Current + RTWA(761, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
	}
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(764, dtype));
	if (tb1) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 758, 0x20000000, 1); /* natural_part */
		
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(759, dtype));
		tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(760, dtype));
		(*(EIF_REAL_64 *)(Current + RTWA(758, dtype))) += (EIF_REAL_64) ((EIF_REAL_64) (tr8_2) /  (EIF_REAL_64) (tr8_3));
	}
	RTHOOK(5);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(762, dtype));
	if (tb1) {
		RTHOOK(6);
		RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
		
		Result = *(EIF_REAL_64 *)(Current + RTWA(758, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(761, dtype));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) -Result * (EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64) 10.0), (EIF_REAL_64) (tr8_1)));
	} else {
		RTHOOK(7);
		RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
		
		Result = *(EIF_REAL_64 *)(Current + RTWA(758, dtype));
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(761, dtype));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		Result = (EIF_REAL_64) (EIF_REAL_64) (Result * (EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64) 10.0), (EIF_REAL_64) (tr8_1)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {STRING_TO_REAL_CONVERTOR}.parsed_real */
EIF_TYPED_VALUE F41_794 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_real";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 0, 879);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(40, Current, 879);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x18000000, 1,0); /* Result */
	
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(756, Dtype(Current)))(Current)).it_r8);
	RTNHOOK(1,1);
	tr4_1 = (EIF_REAL_32) (tr8_1);
	Result = (EIF_REAL_32) tr4_1;
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

/* {STRING_TO_REAL_CONVERTOR}.reset */
void F41_795 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 1, 880);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 880);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_valid", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(702, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 706, 0x10000000, 1); /* conversion_type */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(706, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 715, 0x10000000, 1); /* sign */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 758, 0x20000000, 1); /* natural_part */
	
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(758, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 759, 0x20000000, 1); /* fractional_part */
	
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(759, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 760, 0x20000000, 1); /* fractional_divider */
	
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(760, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 761, 0x10000000, 1); /* exponent */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(761, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 762, 0x04000000, 1); /* is_negative */
	
	*(EIF_BOOLEAN *)(Current + RTWA(762, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 763, 0x04000000, 1); /* has_negative_exponent */
	
	*(EIF_BOOLEAN *)(Current + RTWA(763, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 764, 0x04000000, 1); /* has_fractional_part */
	
	*(EIF_BOOLEAN *)(Current + RTWA(764, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 765, 0x04000000, 1); /* needs_digit */
	
	*(EIF_BOOLEAN *)(Current + RTWA(765, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("last_state_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(714, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("sign_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(715, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("conversion_type_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(706, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("not_overflowed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(703, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("not_underflowed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(704, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("parse_successful", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(705, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("natural_part_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(758, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(tr8_1 == tr8_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("fractional_part_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(759, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(tr8_1 == tr8_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("fractional_divider_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(760, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(tr8_1 == tr8_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("exponent_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(761, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("is_negative_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(762, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("has_negative_exponent_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(763, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("has_fractional_part_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(764, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("needs_digit_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(765, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
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
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {STRING_TO_REAL_CONVERTOR}.parse_string_with_type */
void F41_796 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "parse_string_with_type";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc8);
	RTLR(6,loc4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_CHAR32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 40, Current, 8, 2, 881);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 881);
	RTCC(arg1, 40, l_feature_name, 1, eif_attached_type(162));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_valid", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(702, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(707, dtype))(Current, ui4_1x);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2877, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	loc7 = RTCCL(arg1);
	loc7 = RTRV(eif_non_attached_type(168),loc7);
	if (EIF_TEST(loc7)) {
		RTHOOK(7);
		RTDBGAL(Current, 3, 0xF80001E0, 0, 0); /* loc3 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3066, "area", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) tr1;
		for (;;) {
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(714, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 9L)))) break;
			RTHOOK(9);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1712, "item", loc3))(loc3, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, uc1x);
			RTHOOK(10);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
		}
	} else {
		RTHOOK(11);
		loc8 = RTCCL(arg1);
		loc8 = RTRV(eif_non_attached_type(165),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(12);
			RTDBGAL(Current, 4, 0xF80001EB, 0, 0); /* loc4 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2972, "area", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) tr1;
			for (;;) {
				RTHOOK(13);
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(714, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 9L)))) break;
				RTHOOK(14);
				RTDBGAL(Current, 5, 0x1C000000, 1, 0); /* loc5 */
				
				ui4_1 = loc1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1712, "item", loc4))(loc4, ui4_1x)).it_c4);
				loc5 = (EIF_CHARACTER_32) tw1;
				RTHOOK(15);
				tb1 = (loc5 <= 0xFF);
				if (tb1) {
					RTHOOK(16);
					tc1 = (EIF_CHARACTER_8) loc5;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, uc1x);
				} else {
					RTHOOK(17);
					RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
				RTHOOK(18);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1++;
			}
		} else {
			RTHOOK(19);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(20);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2877, "count", arg1))(arg1)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_3;
			for (;;) {
				RTHOOK(21);
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(714, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 9L)))) break;
				RTHOOK(22);
				RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
				
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2840, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc6 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(23);
				tr1 = RTLN(133);
				*(EIF_NATURAL_32 *)tr1 = loc6;
				
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2439, "is_valid_character_8_code", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(24);
					tc1 = (EIF_CHARACTER_8) loc6;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(713, dtype))(Current, uc1x);
				} else {
					RTHOOK(25);
					RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
				RTHOOK(26);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {STRING_TO_REAL_CONVERTOR}.parse_character */
void F41_797 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "parse_character";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 40, Current, 0, 1, 882);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(40, Current, 882);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(714, dtype));
	switch (ti4_1) {
		case 0L:
			RTHOOK(2);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(3);
				RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				RTHOOK(4);
				RTDBGAA(Current, dtype, 758, 0x20000000, 1); /* natural_part */
				
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L)));
				*(EIF_REAL_64 *)(Current + RTWA(758, dtype)) = (EIF_REAL_64) tr8_1;
			} else {
				RTHOOK(5);
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+')) {
					RTHOOK(6);
					RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(7);
					if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
						RTHOOK(8);
						RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(9);
						RTDBGAA(Current, dtype, 762, 0x04000000, 1); /* is_negative */
						
						*(EIF_BOOLEAN *)(Current + RTWA(762, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						RTHOOK(10);
						tb1 = '\0';
						tb2 = *(EIF_BOOLEAN *)(Current + RTWA(698, dtype));
						if (tb2) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(699, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(10,1);
							uc1 = arg1;
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(968, "has", tr1))(tr1, uc1x)).it_b);
							tb1 = tb2;
						}
						if (tb1) {
						} else {
							RTHOOK(11);
							if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '.')) {
								RTHOOK(12);
								RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
								
								*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
								RTHOOK(13);
								RTDBGAA(Current, dtype, 765, 0x04000000, 1); /* needs_digit */
								
								*(EIF_BOOLEAN *)(Current + RTWA(765, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							} else {
								RTHOOK(14);
								RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
								
								*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
							}
						}
					}
				}
			}
			break;
		case 1L:
			RTHOOK(15);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(16);
				RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				RTHOOK(17);
				RTDBGAA(Current, dtype, 758, 0x20000000, 1); /* natural_part */
				
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L)));
				*(EIF_REAL_64 *)(Current + RTWA(758, dtype)) = (EIF_REAL_64) tr8_1;
			} else {
				RTHOOK(18);
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '.')) {
					RTHOOK(19);
					RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					RTHOOK(20);
					RTDBGAA(Current, dtype, 765, 0x04000000, 1); /* needs_digit */
					
					*(EIF_BOOLEAN *)(Current + RTWA(765, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(21);
					RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
			}
			break;
		case 2L:
			RTHOOK(22);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(23);
				RTDBGAA(Current, dtype, 758, 0x20000000, 1); /* natural_part */
				
				tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(758, dtype));
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 48L));
				*(EIF_REAL_64 *)(Current + RTWA(758, dtype)) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * (EIF_REAL_64) 10.0) + tr8_2) - tr8_3);
			} else {
				RTHOOK(24);
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '.')) {
					RTHOOK(25);
					RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					RTHOOK(26);
					RTDBGAA(Current, dtype, 765, 0x04000000, 1); /* needs_digit */
					
					*(EIF_BOOLEAN *)(Current + RTWA(765, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(27);
					tb1 = '\0';
					tb2 = *(EIF_BOOLEAN *)(Current + RTWA(697, dtype));
					if (tb2) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(27,1);
						uc1 = arg1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(968, "has", tr1))(tr1, uc1x)).it_b);
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(28);
						RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
					} else {
						RTHOOK(29);
						tc1 = (EIF_CHARACTER_8) tolower(arg1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'e')) {
							RTHOOK(30);
							RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
							
							*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
						} else {
							RTHOOK(31);
							RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
							
							*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
						}
					}
				}
			}
			break;
		case 3L:
			RTHOOK(32);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(33);
				RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				RTHOOK(34);
				RTDBGAA(Current, dtype, 764, 0x04000000, 1); /* has_fractional_part */
				
				*(EIF_BOOLEAN *)(Current + RTWA(764, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(35);
				RTDBGAA(Current, dtype, 759, 0x20000000, 1); /* fractional_part */
				
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L)));
				*(EIF_REAL_64 *)(Current + RTWA(759, dtype)) = (EIF_REAL_64) tr8_1;
				RTHOOK(36);
				RTDBGAA(Current, dtype, 760, 0x20000000, 1); /* fractional_divider */
				
				*(EIF_REAL_64 *)(Current + RTWA(760, dtype)) = (EIF_REAL_64) (EIF_REAL_64) 10.0;
				RTHOOK(37);
				RTDBGAA(Current, dtype, 765, 0x04000000, 1); /* needs_digit */
				
				*(EIF_BOOLEAN *)(Current + RTWA(765, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(38);
				tb1 = '\0';
				tc1 = (EIF_CHARACTER_8) tolower(arg1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'e')) {
					tb2 = *(EIF_BOOLEAN *)(Current + RTWA(765, dtype));
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					RTHOOK(39);
					RTDBGAA(Current, dtype, 765, 0x04000000, 1); /* needs_digit */
					
					*(EIF_BOOLEAN *)(Current + RTWA(765, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(40);
					RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				} else {
					RTHOOK(41);
					tb1 = '\0';
					tb2 = *(EIF_BOOLEAN *)(Current + RTWA(697, dtype));
					if (tb2) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(41,1);
						uc1 = arg1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(968, "has", tr1))(tr1, uc1x)).it_b);
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(42);
						RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
					} else {
						RTHOOK(43);
						RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
					}
				}
			}
			break;
		case 4L:
			RTHOOK(44);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(45);
				RTDBGAA(Current, dtype, 759, 0x20000000, 1); /* fractional_part */
				
				tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(759, dtype));
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L))));
				*(EIF_REAL_64 *)(Current + RTWA(759, dtype)) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * (EIF_REAL_64) 10.0) + tr8_2);
				RTHOOK(46);
				RTDBGAA(Current, dtype, 760, 0x20000000, 1); /* fractional_divider */
				
				(*(EIF_REAL_64 *)(Current + RTWA(760, dtype))) *= (EIF_REAL_64) 10.0;
			} else {
				RTHOOK(47);
				tc1 = (EIF_CHARACTER_8) tolower(arg1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'e')) {
					RTHOOK(48);
					RTDBGAA(Current, dtype, 765, 0x04000000, 1); /* needs_digit */
					
					*(EIF_BOOLEAN *)(Current + RTWA(765, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(49);
					RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				} else {
					RTHOOK(50);
					tb1 = '\0';
					tb2 = *(EIF_BOOLEAN *)(Current + RTWA(697, dtype));
					if (tb2) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(50,1);
						uc1 = arg1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(968, "has", tr1))(tr1, uc1x)).it_b);
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(51);
						RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
					} else {
						RTHOOK(52);
						RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
					}
				}
			}
			break;
		case 5L:
			RTHOOK(53);
			if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
				RTHOOK(54);
				RTDBGAA(Current, dtype, 763, 0x04000000, 1); /* has_negative_exponent */
				
				*(EIF_BOOLEAN *)(Current + RTWA(763, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(55);
				RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
			} else {
				RTHOOK(56);
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+')) {
					RTHOOK(57);
					RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
				} else {
					RTHOOK(58);
					tb1 = EIF_TEST(isdigit(arg1));
					if (tb1) {
						RTHOOK(59);
						RTDBGAA(Current, dtype, 765, 0x04000000, 1); /* needs_digit */
						
						*(EIF_BOOLEAN *)(Current + RTWA(765, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(60);
						RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
						RTHOOK(61);
						RTDBGAA(Current, dtype, 761, 0x10000000, 1); /* exponent */
						
						ti4_1 = (EIF_INTEGER_32) (arg1);
						*(EIF_INTEGER_32 *)(Current + RTWA(761, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					} else {
						RTHOOK(62);
						RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
					}
				}
			}
			break;
		case 6L:
			RTHOOK(63);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(64);
				RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
				RTHOOK(65);
				RTDBGAA(Current, dtype, 761, 0x10000000, 1); /* exponent */
				
				ti4_1 = (EIF_INTEGER_32) (arg1);
				*(EIF_INTEGER_32 *)(Current + RTWA(761, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
				RTHOOK(66);
				RTDBGAA(Current, dtype, 765, 0x04000000, 1); /* needs_digit */
				
				*(EIF_BOOLEAN *)(Current + RTWA(765, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(67);
				RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			}
			break;
		case 7L:
			RTHOOK(68);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(69);
				RTDBGAA(Current, dtype, 761, 0x10000000, 1); /* exponent */
				
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(761, dtype));
				ti4_2 = (EIF_INTEGER_32) (arg1);
				*(EIF_INTEGER_32 *)(Current + RTWA(761, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 10L)) + ti4_2) - ((EIF_INTEGER_32) 48L));
			} else {
				RTHOOK(70);
				tb1 = '\0';
				tb2 = *(EIF_BOOLEAN *)(Current + RTWA(697, dtype));
				if (tb2) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(70,1);
					uc1 = arg1;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(968, "has", tr1))(tr1, uc1x)).it_b);
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(71);
					RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
				} else {
					RTHOOK(72);
					RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
			}
			break;
		case 8L:
			RTHOOK(73);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(700, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(73,1);
			uc1 = arg1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(968, "has", tr1))(tr1, uc1x)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(74);
				RTDBGAA(Current, dtype, 714, 0x10000000, 1); /* last_state */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(714, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			}
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(75);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef uc1
#undef arg1
}

/* {STRING_TO_REAL_CONVERTOR}.natural_part */
EIF_TYPED_VALUE F41_798 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(758,Dtype(Current)));
	return r;
}


/* {STRING_TO_REAL_CONVERTOR}.fractional_part */
EIF_TYPED_VALUE F41_799 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(759,Dtype(Current)));
	return r;
}


/* {STRING_TO_REAL_CONVERTOR}.fractional_divider */
EIF_TYPED_VALUE F41_800 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(760,Dtype(Current)));
	return r;
}


/* {STRING_TO_REAL_CONVERTOR}.exponent */
EIF_TYPED_VALUE F41_801 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(761,Dtype(Current)));
	return r;
}


/* {STRING_TO_REAL_CONVERTOR}.is_negative */
EIF_TYPED_VALUE F41_802 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(762,Dtype(Current)));
	return r;
}


/* {STRING_TO_REAL_CONVERTOR}.has_negative_exponent */
EIF_TYPED_VALUE F41_803 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(763,Dtype(Current)));
	return r;
}


/* {STRING_TO_REAL_CONVERTOR}.has_fractional_part */
EIF_TYPED_VALUE F41_804 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(764,Dtype(Current)));
	return r;
}


/* {STRING_TO_REAL_CONVERTOR}.needs_digit */
EIF_TYPED_VALUE F41_805 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(765,Dtype(Current)));
	return r;
}


void EIF_Minit41 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

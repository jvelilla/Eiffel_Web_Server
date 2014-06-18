/*
 * Code for class URI_TEMPLATE_EXPRESSION_VARIABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F424_20042(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F424_20043(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20044(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20045(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20046(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20047(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20048(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20049(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20050(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20051(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20052(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F424_20053(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20054(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20055(EIF_REFERENCE);
extern EIF_TYPED_VALUE F424_20056(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F424_20057(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F424_20058(EIF_REFERENCE);
extern void EIF_Minit424(void);

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

/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.make */
void F424_20042 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 423, Current, 0, 4, 14484);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(423, Current, 14484);
	RTCC(arg1, 423, l_feature_name, 1, RTWCT(17329, dtype, Dftype(Current)));
	RTCC(arg2, 423, l_feature_name, 2, RTWCT(17331, dtype, Dftype(Current)));
	RTCC(arg3, 423, l_feature_name, 3, RTWCT(17332, dtype, Dftype(Current)));
	if (arg4) {
		RTCC(arg4, 423, l_feature_name, 4, 354);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 17329, 0xF80001B7, 0); /* expression */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(17329, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 17330, 0x08000000, 1); /* operator */
	
	tc1 = *(EIF_CHARACTER_8 *)(arg1 + RTVA(17970, "operator", arg1));
	*(EIF_CHARACTER_8 *)(Current + RTWA(17330, dtype)) = (EIF_CHARACTER_8) tc1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 17331, 0xF8000162, 0); /* name */
	
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(17331, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 17332, 0xF8000162, 0); /* default_value */
	
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(17332, dtype)) = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(5);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(15187, "count", arg4));
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(6);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11343, "item", arg4))(arg4, ui4_1x)).it_c1);
		switch (tc1) {
			case (EIF_CHARACTER_8) '*':
			case (EIF_CHARACTER_8) '+':
				RTHOOK(7);
				RTDBGAA(Current, dtype, 17336, 0x08000000, 1); /* explode */
				
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11343, "item", arg4))(arg4, ui4_1x)).it_c1);
				*(EIF_CHARACTER_8 *)(Current + RTWA(17336, dtype)) = (EIF_CHARACTER_8) tc1;
				break;
			case (EIF_CHARACTER_8) ':':
			case (EIF_CHARACTER_8) '^':
				RTHOOK(8);
				RTDBGAA(Current, dtype, 17337, 0xF8000162, 0); /* modifier */
				
				RTAR(Current, arg4);
				*(EIF_REFERENCE *)(Current + RTWA(17337, dtype)) = (EIF_REFERENCE) RTCCL(arg4);
				break;
		}
	}
	RTHOOK(9);
	RTDBGAA(Current, dtype, 17334, 0x08000000, 1); /* op_prefix */
	
	*(EIF_CHARACTER_8 *)(Current + RTWA(17334, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	RTHOOK(10);
	RTDBGAA(Current, dtype, 17335, 0x08000000, 1); /* op_separator */
	
	*(EIF_CHARACTER_8 *)(Current + RTWA(17335, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
	RTHOOK(11);
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17330, dtype));
	switch (tc1) {
		case (EIF_CHARACTER_8) '+':
			RTHOOK(12);
			RTDBGAA(Current, dtype, 17333, 0x04000000, 1); /* reserved */
			
			*(EIF_BOOLEAN *)(Current + RTWA(17333, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
		case (EIF_CHARACTER_8) '\?':
			RTHOOK(13);
			RTDBGAA(Current, dtype, 17334, 0x08000000, 1); /* op_prefix */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17334, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\?';
			RTHOOK(14);
			RTDBGAA(Current, dtype, 17335, 0x08000000, 1); /* op_separator */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17335, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
			break;
		case (EIF_CHARACTER_8) '&':
			RTHOOK(15);
			RTDBGAA(Current, dtype, 17334, 0x08000000, 1); /* op_prefix */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17334, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
			RTHOOK(16);
			RTDBGAA(Current, dtype, 17335, 0x08000000, 1); /* op_separator */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17335, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
			break;
		case (EIF_CHARACTER_8) ';':
			RTHOOK(17);
			RTDBGAA(Current, dtype, 17334, 0x08000000, 1); /* op_prefix */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17334, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ';';
			RTHOOK(18);
			RTDBGAA(Current, dtype, 17335, 0x08000000, 1); /* op_separator */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17335, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ';';
			break;
		case (EIF_CHARACTER_8) '/':
			RTHOOK(19);
			RTDBGAA(Current, dtype, 17334, 0x08000000, 1); /* op_prefix */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17334, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
			RTHOOK(20);
			RTDBGAA(Current, dtype, 17335, 0x08000000, 1); /* op_separator */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17335, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
			break;
		case (EIF_CHARACTER_8) '#':
			RTHOOK(21);
			RTDBGAA(Current, dtype, 17333, 0x04000000, 1); /* reserved */
			
			*(EIF_BOOLEAN *)(Current + RTWA(17333, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(22);
			RTDBGAA(Current, dtype, 17334, 0x08000000, 1); /* op_prefix */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17334, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '#';
			RTHOOK(23);
			RTDBGAA(Current, dtype, 17335, 0x08000000, 1); /* op_separator */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17335, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
			break;
		case (EIF_CHARACTER_8) '.':
			RTHOOK(24);
			RTDBGAA(Current, dtype, 17334, 0x08000000, 1); /* op_prefix */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17334, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
			RTHOOK(25);
			RTDBGAA(Current, dtype, 17335, 0x08000000, 1); /* op_separator */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(17335, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ui4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.expression */
EIF_TYPED_VALUE F424_20043 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17329,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.operator */
EIF_TYPED_VALUE F424_20044 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17330,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.name */
EIF_TYPED_VALUE F424_20045 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17331,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.default_value */
EIF_TYPED_VALUE F424_20046 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17332,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.reserved */
EIF_TYPED_VALUE F424_20047 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(17333,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.op_prefix */
EIF_TYPED_VALUE F424_20048 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17334,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.op_separator */
EIF_TYPED_VALUE F424_20049 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17335,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.explode */
EIF_TYPED_VALUE F424_20050 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17336,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.modifier */
EIF_TYPED_VALUE F424_20051 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17337,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.modified_string */
EIF_TYPED_VALUE F424_20052 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "modified_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,loc4);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 423, Current, 4, 1, 14494);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(423, Current, 14494);
	if (arg1) {
		RTCC(arg1, 423, l_feature_name, 1, 346);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800015A, 0,0); /* Result */
	
	Result = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17337, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = RTCCL(tr1);
	if (EIF_TEST(loc4)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(15187, "count", loc4));
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L));
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15066, "count", arg1))(arg1)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF8000162, 0, 0); /* loc1 */
		
		ui4_1 = ((EIF_INTEGER_32) 2L);
		ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(15187, "count", loc4));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15107, "substring", loc4))(loc4, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15058, "is_integer", loc1))(loc1)).it_b);
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15092, "to_integer", loc1))(loc1)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11343, "item", loc4))(loc4, ui4_1x)).it_c1);
			switch (tc1) {
				case (EIF_CHARACTER_8) ':':
					RTHOOK(8);
					if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(9);
						if ((EIF_BOOLEAN) (loc2 < loc3)) {
							RTHOOK(10);
							RTDBGAL(Current, 0, 0xF800015A, 0,0); /* Result */
							
							ui4_1 = ((EIF_INTEGER_32) 1L);
							ui4_2 = loc2;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15107, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							Result = (EIF_REFERENCE) RTCCL(tr1);
						}
					} else {
						RTHOOK(11);
						if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L))) {
							RTHOOK(12);
							RTDBGAL(Current, 0, 0xF800015A, 0,0); /* Result */
							
							ui4_1 = (EIF_INTEGER_32) (loc3 - loc2);
							ui4_2 = loc3;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15107, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							Result = (EIF_REFERENCE) RTCCL(tr1);
						}
					}
					break;
				case (EIF_CHARACTER_8) '^':
					RTHOOK(13);
					if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(14);
						if ((EIF_BOOLEAN) (loc2 < loc3)) {
							RTHOOK(15);
							RTDBGAL(Current, 0, 0xF800015A, 0,0); /* Result */
							
							ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
							ui4_2 = loc3;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15107, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							Result = (EIF_REFERENCE) RTCCL(tr1);
						}
					} else {
						RTHOOK(16);
						if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L))) {
							RTHOOK(17);
							RTDBGAL(Current, 0, 0xF800015A, 0,0); /* Result */
							
							ui4_1 = ((EIF_INTEGER_32) 1L);
							ui4_2 = (EIF_INTEGER_32) (loc3 + loc2);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15107, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							Result = (EIF_REFERENCE) RTCCL(tr1);
						}
					}
					break;
				default:
					if (RTAL & CK_CHECK) {
						RTHOOK(18);
						RTCT("known_modified", EX_CHECK);
							RTCF;
					}
					break;
			}
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.has_explode */
EIF_TYPED_VALUE F424_20053 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_explode";
	RTEX;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 tc3;
	EIF_CHARACTER_8 tc4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 423, Current, 0, 0, 14495);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(423, Current, 14495);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17336, dtype));
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7599, dtype))(Current)).it_c1);
	tc3 = *(EIF_CHARACTER_8 *)(Current + RTWA(17336, dtype));
	tc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7600, dtype))(Current)).it_c1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(tc1 == tc2) || (EIF_BOOLEAN)(tc3 == tc4));
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

/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.has_explode_plus */
EIF_TYPED_VALUE F424_20054 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_explode_plus";
	RTEX;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 423, Current, 0, 0, 14496);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(423, Current, 14496);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17336, dtype));
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7599, dtype))(Current)).it_c1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
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

/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.has_explode_star */
EIF_TYPED_VALUE F424_20055 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_explode_star";
	RTEX;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 423, Current, 0, 0, 14497);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(423, Current, 14497);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17336, dtype));
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7600, dtype))(Current)).it_c1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
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

/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.expanded_string */
EIF_TYPED_VALUE F424_20056 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "expanded_string";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc12 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 tc3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,loc10);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc13);
	RTLR(5,arg1);
	RTLR(6,loc2);
	RTLR(7,ur1);
	RTLR(8,loc14);
	RTLR(9,loc4);
	RTLR(10,loc15);
	RTLR(11,loc3);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_BOOL, &loc7);
	RTLU(SK_BOOL, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_BOOL, &loc11);
	RTLU(SK_CHAR8, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	
	RTEAA(l_feature_name, 423, Current, 15, 1, 14498);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(423, Current, 14498);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
	
	loc9 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17339, dtype))(Current)).it_b);
	RTHOOK(2);
	if (loc9) {
		RTHOOK(3);
		RTDBGAL(Current, 7, 0x04000000, 1, 0); /* loc7 */
		
		loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17340, dtype))(Current)).it_b);
		RTHOOK(4);
		RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
		
		loc8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17341, dtype))(Current)).it_b);
	}
	RTHOOK(5);
	RTDBGAL(Current, 12, 0x08000000, 1, 0); /* loc12 */
	
	loc12 = *(EIF_CHARACTER_8 *)(Current + RTWA(17330, dtype));
	RTHOOK(6);
	RTDBGAL(Current, 11, 0x04000000, 1, 0); /* loc11 */
	
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7591, dtype))(Current)).it_c1);
	loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc12 != (EIF_CHARACTER_8) '\000') && (EIF_BOOLEAN)(loc12 != tc1));
	RTHOOK(7);
	RTDBGAL(Current, 10, 0xF8000000, 0, 0); /* loc10 */
	
	loc10 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17332, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(8);
	RTDBGAL(Current, 0, 0xF8000162, 0,0); /* Result */
	
	tr1 = RTLN(354);
	ui4_1 = ((EIF_INTEGER_32) 20L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(15027, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(8,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	loc13 = RTCCL(arg1);
	loc13 = RTRV(eif_non_attached_type(346),loc13);
	if (EIF_TEST(loc13)) {
		RTHOOK(10);
		RTDBGAL(Current, 2, 0xF8000162, 0, 0); /* loc2 */
		
		ur1 = RTCCL(loc13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17338, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(17333, dtype));
		ub1 = (EIF_BOOLEAN) !tb1;
		loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17343, dtype))(Current, ur1x, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(11);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7592, dtype))(Current)).it_c1);
		tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7593, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc12 == tc1) || (EIF_BOOLEAN)(loc12 == tc2))) {
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
			RTHOOK(13);
			uc1 = (EIF_CHARACTER_8) '=';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
		} else {
			RTHOOK(14);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7594, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN)(loc12 == tc1)) {
				RTHOOK(15);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
				RTHOOK(16);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15044, "is_empty", loc2))(loc2)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(17);
					uc1 = (EIF_CHARACTER_8) '=';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
				}
			}
		}
		RTHOOK(18);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
	} else {
		RTHOOK(19);
		loc14 = RTCCL(arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {467,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc14 = RTRV(eif_non_attached_type(typres0),loc14);
		}
		if (EIF_TEST(loc14)) {
			RTHOOK(20);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9207, "is_empty", loc14))(loc14)).it_b);
			if (tb1) {
				RTHOOK(21);
				if ((EIF_BOOLEAN)(loc10 != NULL)) {
					RTHOOK(22);
					switch (loc12) {
						case (EIF_CHARACTER_8) '&':
						case (EIF_CHARACTER_8) ';':
						case (EIF_CHARACTER_8) '\?':
							RTHOOK(23);
							if ((EIF_BOOLEAN) !loc9) {
								RTHOOK(24);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
								RTHOOK(25);
								uc1 = (EIF_CHARACTER_8) '=';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
								RTHOOK(26);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
							} else {
								RTHOOK(27);
								if (loc7) {
									RTHOOK(28);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
									RTHOOK(29);
									uc1 = (EIF_CHARACTER_8) '.';
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
								}
								RTHOOK(30);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
							}
							break;
						case (EIF_CHARACTER_8) '/':
							RTHOOK(31);
							if (loc7) {
								RTHOOK(32);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
								RTHOOK(33);
								uc1 = (EIF_CHARACTER_8) '.';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
							}
							RTHOOK(34);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
							break;
						case (EIF_CHARACTER_8) '.':
							break;
						default:
							RTHOOK(35);
							if (loc9) {
								RTHOOK(36);
								if (loc7) {
									RTHOOK(37);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
									RTHOOK(38);
									uc1 = (EIF_CHARACTER_8) '.';
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
								}
								RTHOOK(39);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
							}
							break;
					}
				}
			} else {
				RTHOOK(40);
				if (loc9) {
					RTHOOK(41);
					RTDBGAL(Current, 1, 0x08000000, 1, 0); /* loc1 */
					
					loc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17335, dtype));
				} else {
					RTHOOK(42);
					RTDBGAL(Current, 1, 0x08000000, 1, 0); /* loc1 */
					
					loc1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
					RTHOOK(43);
					switch (loc12) {
						case (EIF_CHARACTER_8) '&':
						case (EIF_CHARACTER_8) ';':
						case (EIF_CHARACTER_8) '\?':
							RTHOOK(44);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
							RTHOOK(45);
							uc1 = (EIF_CHARACTER_8) '=';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
							break;
					}
				}
				RTHOOK(46);
				RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
				
				ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(11380, "lower", loc14));
				loc5 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(47);
				RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
				
				ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(11381, "upper", loc14));
				loc6 = (EIF_INTEGER_32) ti4_1;
				for (;;) {
					RTHOOK(48);
					if ((EIF_BOOLEAN) (loc5 > loc6)) break;
					RTHOOK(49);
					RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
					
					ui4_1 = loc5;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9236, "item", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc4 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(50);
					if ((EIF_BOOLEAN)(loc4 != NULL)) {
						RTHOOK(51);
						RTDBGAL(Current, 2, 0xF8000162, 0, 0); /* loc2 */
						
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						tb1 = *(EIF_BOOLEAN *)(Current + RTWA(17333, dtype));
						ub1 = (EIF_BOOLEAN) !tb1;
						loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17343, dtype))(Current, ur1x, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					} else {
						RTHOOK(52);
						RTDBGAL(Current, 2, 0xF8000162, 0, 0); /* loc2 */
						
						loc2 = RTMS_EX_H("",0,0);
					}
					RTHOOK(53);
					if (loc7) {
						RTHOOK(54);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7592, dtype))(Current)).it_c1);
						tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7593, dtype))(Current)).it_c1);
						tc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7594, dtype))(Current)).it_c1);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc12 == tc1) && loc7) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc12 == tc2) && loc7)) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc12 == tc3) && loc9))) {
							RTHOOK(55);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
							RTHOOK(56);
							uc1 = (EIF_CHARACTER_8) '=';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
						} else {
							RTHOOK(57);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
							RTHOOK(58);
							uc1 = (EIF_CHARACTER_8) '.';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
						}
					} else {
						RTHOOK(59);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7592, dtype))(Current)).it_c1);
						tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7593, dtype))(Current)).it_c1);
						tc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7594, dtype))(Current)).it_c1);
						if ((EIF_BOOLEAN) (loc8 && (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc12 == tc1) || (EIF_BOOLEAN)(loc12 == tc2)) || (EIF_BOOLEAN)(loc12 == tc3)))) {
							RTHOOK(60);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
							RTHOOK(61);
							uc1 = (EIF_CHARACTER_8) '=';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
						}
					}
					RTHOOK(62);
					ur1 = RTCCL(loc2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
					RTHOOK(63);
					if ((EIF_BOOLEAN) (loc5 < loc6)) {
						RTHOOK(64);
						uc1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
					}
					RTHOOK(65);
					RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
					
					loc5++;
				}
			}
			RTHOOK(66);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15044, "is_empty", Result))(Result)).it_b);
			if (tb1) {
				RTHOOK(67);
				RTDBGAL(Current, 0, 0xF8000162, 0,0); /* Result */
				
				Result = (EIF_REFERENCE) NULL;
			}
		} else {
			RTHOOK(68);
			loc15 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {502,0,354,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc15 = RTRV(eif_non_attached_type(typres0),loc15);
			}
			if (EIF_TEST(loc15)) {
				RTHOOK(69);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9207, "is_empty", loc15))(loc15)).it_b);
				if (tb1) {
					RTHOOK(70);
					if ((EIF_BOOLEAN)(loc10 != NULL)) {
						RTHOOK(71);
						switch (loc12) {
							case (EIF_CHARACTER_8) '&':
							case (EIF_CHARACTER_8) ';':
							case (EIF_CHARACTER_8) '\?':
								RTHOOK(72);
								if ((EIF_BOOLEAN) !loc9) {
									RTHOOK(73);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
									RTHOOK(74);
									uc1 = (EIF_CHARACTER_8) '=';
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
									RTHOOK(75);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
								} else {
									RTHOOK(76);
									if (loc7) {
										RTHOOK(77);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr1);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
										RTHOOK(78);
										uc1 = (EIF_CHARACTER_8) '.';
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
									}
									RTHOOK(79);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
								}
								break;
							case (EIF_CHARACTER_8) '/':
								RTHOOK(80);
								if (loc7) {
									RTHOOK(81);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
									RTHOOK(82);
									uc1 = (EIF_CHARACTER_8) '.';
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
								}
								RTHOOK(83);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
								break;
							case (EIF_CHARACTER_8) '.':
								break;
							default:
								RTHOOK(84);
								if (loc9) {
									RTHOOK(85);
									if (loc7) {
										RTHOOK(86);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr1);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
										RTHOOK(87);
										uc1 = (EIF_CHARACTER_8) '.';
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
									}
									RTHOOK(88);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
								}
								break;
						}
					}
				} else {
					RTHOOK(89);
					if (loc9) {
						RTHOOK(90);
						RTDBGAL(Current, 1, 0x08000000, 1, 0); /* loc1 */
						
						loc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17335, dtype));
					} else {
						RTHOOK(91);
						RTDBGAL(Current, 1, 0x08000000, 1, 0); /* loc1 */
						
						loc1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
						RTHOOK(92);
						switch (loc12) {
							case (EIF_CHARACTER_8) '&':
							case (EIF_CHARACTER_8) ';':
							case (EIF_CHARACTER_8) '\?':
								RTHOOK(93);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
								RTHOOK(94);
								uc1 = (EIF_CHARACTER_8) '=';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
								break;
						}
					}
					RTHOOK(95);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11647, "start", loc15))(loc15);
					for (;;) {
						RTHOOK(96);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11644, "after", loc15))(loc15)).it_b);
						if (tb1) break;
						RTHOOK(97);
						RTDBGAL(Current, 3, 0xF8000162, 0, 0); /* loc3 */
						
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11632, "key_for_iteration", loc15))(loc15)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						tb2 = *(EIF_BOOLEAN *)(Current + RTWA(17333, dtype));
						ub1 = (EIF_BOOLEAN) !tb2;
						loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17343, dtype))(Current, ur1x, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTHOOK(98);
						RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
						
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11631, "item_for_iteration", loc15))(loc15)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc4 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(99);
						if ((EIF_BOOLEAN)(loc4 != NULL)) {
							RTHOOK(100);
							RTDBGAL(Current, 2, 0xF8000162, 0, 0); /* loc2 */
							
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							tb2 = *(EIF_BOOLEAN *)(Current + RTWA(17333, dtype));
							ub1 = (EIF_BOOLEAN) !tb2;
							loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17343, dtype))(Current, ur1x, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						} else {
							RTHOOK(101);
							RTDBGAL(Current, 2, 0xF8000162, 0, 0); /* loc2 */
							
							loc2 = RTMS_EX_H("",0,0);
						}
						RTHOOK(102);
						if (loc7) {
							RTHOOK(103);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
							RTHOOK(104);
							uc1 = (EIF_CHARACTER_8) '.';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
						}
						RTHOOK(105);
						if (loc9) {
							RTHOOK(106);
							ur1 = RTCCL(loc3);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
							RTHOOK(107);
							uc1 = (EIF_CHARACTER_8) '=';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
						} else {
							RTHOOK(108);
							ur1 = RTCCL(loc3);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
							RTHOOK(109);
							uc1 = loc1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
						}
						RTHOOK(110);
						ur1 = RTCCL(loc2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
						RTHOOK(111);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11648, "forth", loc15))(loc15);
						RTHOOK(112);
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11644, "after", loc15))(loc15)).it_b);
						if ((EIF_BOOLEAN) !tb2) {
							RTHOOK(113);
							uc1 = loc1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
						}
					}
				}
				RTHOOK(114);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15044, "is_empty", Result))(Result)).it_b);
				if (tb2) {
					RTHOOK(115);
					RTDBGAL(Current, 0, 0xF8000162, 0,0); /* Result */
					
					Result = (EIF_REFERENCE) NULL;
				}
			} else {
				RTHOOK(116);
				if ((EIF_BOOLEAN)(arg1 != NULL)) {
					RTHOOK(117);
					RTDBGAL(Current, 2, 0xF8000162, 0, 0); /* loc2 */
					
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					tb2 = *(EIF_BOOLEAN *)(Current + RTWA(17333, dtype));
					ub1 = (EIF_BOOLEAN) !tb2;
					loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17343, dtype))(Current, ur1x, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTHOOK(118);
					if ((EIF_BOOLEAN)(loc10 != NULL)) {
						RTHOOK(119);
						RTDBGAL(Current, 2, 0xF8000162, 0, 0); /* loc2 */
						
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						tb2 = *(EIF_BOOLEAN *)(Current + RTWA(17333, dtype));
						ub1 = (EIF_BOOLEAN) !tb2;
						loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17343, dtype))(Current, ur1x, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					} else {
						RTHOOK(120);
						RTDBGAL(Current, 2, 0xF8000162, 0, 0); /* loc2 */
						
						loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17332, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					}
				}
				RTHOOK(121);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7592, dtype))(Current)).it_c1);
				tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7593, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc12 == tc1) || (EIF_BOOLEAN)(loc12 == tc2))) {
					RTHOOK(122);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
					RTHOOK(123);
					if ((EIF_BOOLEAN)(loc2 != NULL)) {
						RTHOOK(124);
						uc1 = (EIF_CHARACTER_8) '=';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
					}
				} else {
					RTHOOK(125);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7594, dtype))(Current)).it_c1);
					if ((EIF_BOOLEAN)(loc12 == tc1)) {
						RTHOOK(126);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17331, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
						RTHOOK(127);
						tb2 = '\0';
						if ((EIF_BOOLEAN)(loc2 != NULL)) {
							tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15044, "is_empty", loc2))(loc2)).it_b);
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (tb2) {
							RTHOOK(128);
							uc1 = (EIF_CHARACTER_8) '=';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15299, "append_character", Result))(Result, uc1x);
						}
					}
				}
				RTHOOK(129);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTHOOK(130);
					ur1 = RTCCL(loc2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15286, "append", Result))(Result, ur1x);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(131);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef uc1
#undef arg1
}

/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.url_encoded_string */
EIF_TYPED_VALUE F424_20057 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "url_encoded_string";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 423, Current, 0, 2, 14482);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(423, Current, 14482);
	if (arg1) {
		RTCC(arg1, 423, l_feature_name, 1, 346);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg2) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000162, 0,0); /* Result */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17344, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15086, "as_string_32", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7706, "encoded_string", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF8000162, 0,0); /* Result */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17344, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15086, "as_string_32", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		ui4_1 = ((EIF_INTEGER_32) 10L);
		{
			static EIF_TYPE_INDEX typarr0[] = {769,338,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr4 = RTLNSP2(eif_non_attached_type(typres0),0,ui4_1,sizeof(EIF_CHARACTER_8), EIF_TRUE);
			RT_SPECIAL_COUNT(tr4) = 10L;
			memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
		}
		*((EIF_CHARACTER_8 *)tr4+0) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ':';
		*((EIF_CHARACTER_8 *)tr4+1) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7591, dtype))(Current)).it_c1);
		*((EIF_CHARACTER_8 *)tr4+2) = (EIF_CHARACTER_8) tc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7597, dtype))(Current)).it_c1);
		*((EIF_CHARACTER_8 *)tr4+3) = (EIF_CHARACTER_8) tc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7595, dtype))(Current)).it_c1);
		*((EIF_CHARACTER_8 *)tr4+4) = (EIF_CHARACTER_8) tc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7594, dtype))(Current)).it_c1);
		*((EIF_CHARACTER_8 *)tr4+5) = (EIF_CHARACTER_8) tc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7592, dtype))(Current)).it_c1);
		*((EIF_CHARACTER_8 *)tr4+6) = (EIF_CHARACTER_8) tc1;
		*((EIF_CHARACTER_8 *)tr4+7) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '|';
		*((EIF_CHARACTER_8 *)tr4+8) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '!';
		*((EIF_CHARACTER_8 *)tr4+9) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '@';
		tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(16615, Dtype(tr4)))(tr4).it_r;
		ur2 = tr3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7823, "partial_encoded_string", tr1))(tr1, ur1x, ur2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {URI_TEMPLATE_EXPRESSION_VARIABLE}.url_encoder */
RTOID (F424_20058)
EIF_TYPED_VALUE F424_20058 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "url_encoder";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F424_20058);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 423, Current, 0, 0, 14483);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(423, Current, 14483);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000103, 0,0); /* Result */
	
	tr1 = RTLN(259);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
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
#undef Result
}

void EIF_Minit424 (void)
{
	GTCX
	RTOTS (20058,F424_20058)
}


#ifdef __cplusplus
}
#endif

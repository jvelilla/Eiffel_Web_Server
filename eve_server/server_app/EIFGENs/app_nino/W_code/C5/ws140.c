/*
 * Code for class WSF_MULTIPART_FORM_DATA_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F140_8492(EIF_REFERENCE);
extern EIF_TYPED_VALUE F140_8493(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F140_8494(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F140_8495(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F140_8496(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F140_8497(EIF_REFERENCE);
extern void EIF_Minit140(void);

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

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.make */
void F140_8492 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 139, Current, 0, 0, 2076);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(139, Current, 2076);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.valid_content_type */
EIF_TYPED_VALUE F140_8493 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_content_type";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
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
	
	RTEAA(l_feature_name, 139, Current, 0, 1, 2077);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(139, Current, 2077);
	if (arg1) {
		RTCC(arg1, 139, l_feature_name, 1, 404);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8196, 131))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17138, "same_simple_type", arg1))(arg1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
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
#undef ur1
#undef arg1
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.handle */
void F140_8494 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "handle";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,loc1);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLR(9,ur4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 139, Current, 1, 4, 2072);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(139, Current, 2072);
	if (arg1) {
		RTCC(arg1, 139, l_feature_name, 1, 404);
	}
	if (arg2) {
		RTCC(arg2, 139, l_feature_name, 2, 400);
	}
	if (arg3) {
		{
			static EIF_TYPE_INDEX typarr0[] = {586,414,381,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg3, 139, l_feature_name, 3, typres0);
		}
	}
	if (arg4) {
		{
			static EIF_TYPE_INDEX typarr0[] = {489,389,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg4, 139, l_feature_name, 4, typres0);
		}
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_content_type", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8256, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000185, 0, 0); /* loc1 */
	
	ur1 = RTCCL(arg2);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8064, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		RTHOOK(4);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9949, "replace", arg4))(arg4, ur1x);
	}
	RTHOOK(5);
	ur1 = RTCCL(arg2);
	ur2 = RTCCL(arg1);
	ur3 = RTCCL(loc1);
	ur4 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8259, dtype))(Current, ur1x, ur2x, ur3x, ur4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.analyze_multipart_form */
void F140_8495 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "analyze_multipart_form";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,loc6);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLR(7,loc4);
	RTLR(8,tr2);
	RTLR(9,loc7);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLR(12,Current);
	RTLR(13,tr3);
	RTLR(14,tr4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_BOOL, &loc8);
	
	RTEAA(l_feature_name, 139, Current, 8, 4, 2073);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(139, Current, 2073);
	if (arg1) {
		RTCC(arg1, 139, l_feature_name, 1, 400);
	}
	if (arg2) {
		RTCC(arg2, 139, l_feature_name, 2, 404);
	}
	if (arg3) {
		RTCC(arg3, 139, l_feature_name, 3, 385);
	}
	if (arg4) {
		{
			static EIF_TYPE_INDEX typarr0[] = {586,414,381,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg4, 139, l_feature_name, 4, typres0);
		}
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_content_type_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tb2 = *(EIF_BOOLEAN *)(arg2 + RTVA(17129, "has_error", arg2));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("same_content_length", EX_PRE);
		tb1 = '\01';
		tu8_1 = *(EIF_NATURAL_64 *)(arg1 + RTVA(16958, "content_length_value", arg1));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN) (tu8_1 > tu8_2)) {
			tu8_1 = *(EIF_NATURAL_64 *)(arg1 + RTVA(16958, "content_length_value", arg1));
			RTNHOOK(3,1);
			ti4_1 = (EIF_INTEGER_32) tu8_1;
			ti4_2 = *(EIF_INTEGER_32 *)(arg3 + RTVA(15730, "count", arg3));
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("vars_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(Current, 6, 0xF8000181, 0, 0); /* loc6 */
	
	tr1 = RTMS_EX_H("boundary",8,1971217529);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17133, "parameter", arg2))(arg2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15587, "is_empty", loc6))(loc6)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(7);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		ur1 = RTCCL(loc6);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", arg3))(arg3, ur1x, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L))) {
			RTHOOK(9);
			RTDBGAL(Current, 4, 0xF8000185, 0, 0); /* loc4 */
			
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", arg3))(arg3, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15626, "as_string_8", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(10);
			RTDBGAL(Current, 6, 0xF8000181, 0, 0); /* loc6 */
			
			ur1 = RTCCL(loc6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15649, "plus", loc4))(loc4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(11);
			RTDBGAL(Current, 4, 0xF8000185, 0, 0); /* loc4 */
			
			tr1 = RTLN(389);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(15571, Dtype(tr1)))(tr1);
			RTNHOOK(11,1);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(12);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(15730, "count", loc6));
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(13);
		RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
		
		ui4_1 = (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg3))(arg3, ui4_1x)).it_c1);
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015');
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc5) + ((EIF_INTEGER_32) 1L));
		RTHOOK(15);
		if (loc8) {
			RTHOOK(16);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2++;
		}
		RTHOOK(17);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3 = (EIF_INTEGER_32) loc2;
		for (;;) {
			RTHOOK(18);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(19);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			ur1 = RTCCL(loc6);
			ui4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", arg3))(arg3, ur1x, ui4_1x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(20);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(21);
				if (loc8) {
					RTHOOK(22);
					RTDBGAL(Current, 7, 0xF8000185, 0, 0); /* loc7 */
					
					ui4_1 = loc2;
					ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)) - ((EIF_INTEGER_32) 2L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", arg3))(arg3, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15626, "as_string_8", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = (EIF_REFERENCE) RTCCL(tr2);
				} else {
					RTHOOK(23);
					RTDBGAL(Current, 7, 0xF8000185, 0, 0); /* loc7 */
					
					ui4_1 = loc2;
					ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)) - ((EIF_INTEGER_32) 1L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", arg3))(arg3, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15626, "as_string_8", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = (EIF_REFERENCE) RTCCL(tr2);
				}
				RTHOOK(24);
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(loc7);
				ur3 = RTCCL(arg4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8260, dtype))(Current, ur1x, ur2x, ur3x);
				RTHOOK(25);
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L));
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11870, "valid_index", arg3))(arg3, ui4_1x)).it_b);
				if (tb1) {
					RTHOOK(26);
					if (loc8) {
						RTHOOK(27);
						tb1 = '\0';
						ui4_1 = (EIF_INTEGER_32) (loc3 + loc5);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg3))(arg3, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) {
							ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L));
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg3))(arg3, ui4_1x)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
						}
						if (tb1) {
						} else {
							RTHOOK(28);
							RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
							
							loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					} else {
						RTHOOK(29);
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L));
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg3))(arg3, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012')) {
						} else {
							RTHOOK(30);
							RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
							
							loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					}
				} else {
					RTHOOK(31);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(32);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16918, "error_handler", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(32,1);
					ui4_1 = ((EIF_INTEGER_32) 0L);
					tr2 = RTMS_EX_H("Invalid form data",17,534563937);
					ur1 = tr2;
					tr3 = RTMS_EX_H("Invalid ending for form data from input",39,714666356);
					tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15629, "as_string_32", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur2 = RTCCL(tr4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17966, "add_custom_error", tr1))(tr1, ui4_1x, ur1x, ur2x);
				}
				RTHOOK(33);
				if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(34);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ((EIF_INTEGER_32) 1L));
					RTHOOK(35);
					if (loc8) {
						RTHOOK(36);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						loc2++;
					}
				}
			} else {
				RTHOOK(37);
				if (loc8) {
					RTHOOK(38);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					loc2++;
				}
				RTHOOK(39);
				RTDBGAL(Current, 7, 0xF8000185, 0, 0); /* loc7 */
				
				ui4_1 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(15730, "count", arg3));
				ui4_2 = ti4_1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", arg3))(arg3, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15626, "as_string_8", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = (EIF_REFERENCE) RTCCL(tr2);
				RTHOOK(40);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(15747, "right_adjust", loc7))(loc7);
				RTHOOK(41);
				tb1 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(15730, "count", arg3));
				if ((EIF_BOOLEAN) (loc2 >= ti4_1)) {
					ur1 = RTCCL(loc7);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc4))(loc4, ur1x)).it_b);
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					RTHOOK(42);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16918, "error_handler", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(42,1);
					ui4_1 = ((EIF_INTEGER_32) 0L);
					tr2 = RTMS_EX_H("Invalid form data",17,534563937);
					ur1 = tr2;
					tr3 = RTMS_EX_H("Invalid ending for form data from input",39,714666356);
					tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15629, "as_string_32", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur2 = RTCCL(tr4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17966, "add_custom_error", tr1))(tr1, ui4_1x, ur1x, ur2x);
				}
				RTHOOK(43);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				loc2 = (EIF_INTEGER_32) loc3;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.analyze_multipart_form_input */
void F140_8496 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "analyze_multipart_form_input";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(16);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc9);
	RTLR(4,tr1);
	RTLR(5,loc10);
	RTLR(6,loc11);
	RTLR(7,ur1);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,Current);
	RTLR(12,loc12);
	RTLR(13,ur2);
	RTLR(14,ur3);
	RTLR(15,tr2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 139, Current, 12, 3, 2074);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(139, Current, 2074);
	if (arg1) {
		RTCC(arg1, 139, l_feature_name, 1, 400);
	}
	if (arg2) {
		RTCC(arg2, 139, l_feature_name, 2, 389);
	}
	if (arg3) {
		{
			static EIF_TYPE_INDEX typarr0[] = {586,414,381,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg3, 139, l_feature_name, 3, typres0);
		}
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_empty", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15587, "is_empty", arg2))(arg2)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(15730, "count", arg2));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > loc1) || (EIF_BOOLEAN)(loc9 != NULL))) break;
		RTHOOK(5);
		ui4_1 = loc3;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg2))(arg2, ui4_1x)).it_c1);
		switch (tc1) {
			case (EIF_CHARACTER_8) '\015':
				RTHOOK(6);
				tb1 = '\0';
				tb2 = '\0';
				tb3 = '\0';
				if ((EIF_BOOLEAN) (loc1 >= (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L)))) {
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg2))(arg2, ui4_1x)).it_c1);
					tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb3) {
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg2))(arg2, ui4_1x)).it_c1);
					tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015');
				}
				if (tb2) {
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L));
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg2))(arg2, ui4_1x)).it_c1);
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb1) {
					RTHOOK(7);
					RTDBGAL(Current, 9, 0xF8000185, 0, 0); /* loc9 */
					
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ui4_2 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc9 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(8);
					RTDBGAL(Current, 10, 0xF8000185, 0, 0); /* loc10 */
					
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 4L));
					ui4_2 = loc1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc10 = (EIF_REFERENCE) RTCCL(tr1);
				}
				break;
			case (EIF_CHARACTER_8) '\012':
				RTHOOK(9);
				tb1 = '\0';
				if ((EIF_BOOLEAN) (loc1 >= (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)))) {
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", arg2))(arg2, ui4_1x)).it_c1);
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012');
				}
				if (tb1) {
					RTHOOK(10);
					RTDBGAL(Current, 9, 0xF8000185, 0, 0); /* loc9 */
					
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ui4_2 = loc3;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc9 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(11);
					RTDBGAL(Current, 10, 0xF8000185, 0, 0); /* loc10 */
					
					ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
					ui4_2 = loc1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc10 = (EIF_REFERENCE) RTCCL(tr1);
				}
				break;
		}
		RTHOOK(12);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3++;
	}
	RTHOOK(13);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc9 != NULL) && (EIF_BOOLEAN)(loc10 != NULL))) {
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(15);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(15730, "count", loc9));
		loc1 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(16);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc2 > loc1))) break;
			RTHOOK(17);
			RTDBGAL(Current, 11, 0xF8000185, 0, 0); /* loc11 */
			
			loc11 = (EIF_REFERENCE) NULL;
			RTHOOK(18);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			
			loc4 = (EIF_INTEGER_32) loc2;
			RTHOOK(19);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			uc1 = (EIF_CHARACTER_8) '\012';
			ui4_1 = loc4;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15709, "index_of", loc9))(loc9, uc1x, ui4_1x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(20);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(21);
				ui4_1 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc9))(loc9, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) {
					RTHOOK(22);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					loc3--;
					RTHOOK(23);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
				} else {
					RTHOOK(24);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				}
			}
			RTHOOK(25);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(26);
				RTDBGAL(Current, 11, 0xF8000185, 0, 0); /* loc11 */
				
				ui4_1 = loc4;
				ui4_2 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", loc9))(loc9, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc11 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(27);
				tr1 = RTMS_EX_H("Content-Disposition: form-data",30,1482817121);
				ur1 = tr1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15719, "starts_with", loc11))(loc11, ur1x)).it_b);
				if (tb1) {
					RTHOOK(28);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					tr1 = RTMS_EX_H("name=",5,1635404093);
					ur1 = tr1;
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", loc11))(loc11, ur1x, ui4_1x)).it_i4);
					loc3 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(29);
					if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(30);
						RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
						
						loc3 += ((EIF_INTEGER_32) 4L);
						RTHOOK(31);
						tb1 = '\0';
						ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11870, "valid_index", loc11))(loc11, ui4_1x)).it_b);
						if (tb2) {
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc11))(loc11, ui4_1x)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\"');
						}
						if (tb1) {
							RTHOOK(32);
							RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
							
							loc3++;
							RTHOOK(33);
							RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
							
							uc1 = (EIF_CHARACTER_8) '\"';
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15709, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
							loc5 = (EIF_INTEGER_32) ti4_1;
						} else {
							RTHOOK(34);
							RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
							
							uc1 = (EIF_CHARACTER_8) ';';
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15709, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
							loc5 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(35);
							if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
								RTHOOK(36);
								RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
								
								ti4_1 = *(EIF_INTEGER_32 *)(loc11 + RTVA(15730, "count", loc11));
								loc5 = (EIF_INTEGER_32) ti4_1;
							}
						}
						RTHOOK(37);
						RTDBGAL(Current, 6, 0xF8000185, 0, 0); /* loc6 */
						
						ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
						ui4_2 = (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", loc9))(loc9, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc6 = (EIF_REFERENCE) RTCCL(tr1);
					}
					RTHOOK(38);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					tr1 = RTMS_EX_H("filename=",9,2103120189);
					ur1 = tr1;
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15620, "substring_index", loc11))(loc11, ur1x, ui4_1x)).it_i4);
					loc3 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(39);
					if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(40);
						RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
						
						loc3 += ((EIF_INTEGER_32) 8L);
						RTHOOK(41);
						tb1 = '\0';
						ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11870, "valid_index", loc11))(loc11, ui4_1x)).it_b);
						if (tb2) {
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc11))(loc11, ui4_1x)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\"');
						}
						if (tb1) {
							RTHOOK(42);
							RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
							
							loc3++;
							RTHOOK(43);
							RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
							
							uc1 = (EIF_CHARACTER_8) '\"';
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15709, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
							loc5 = (EIF_INTEGER_32) ti4_1;
						} else {
							RTHOOK(44);
							RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
							
							uc1 = (EIF_CHARACTER_8) ';';
							ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15709, "index_of", loc11))(loc11, uc1x, ui4_1x)).it_i4);
							loc5 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(45);
							if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
								RTHOOK(46);
								RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
								
								ti4_1 = *(EIF_INTEGER_32 *)(loc11 + RTVA(15730, "count", loc11));
								loc5 = (EIF_INTEGER_32) ti4_1;
							}
						}
						RTHOOK(47);
						RTDBGAL(Current, 7, 0xF8000185, 0, 0); /* loc7 */
						
						ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
						ui4_2 = (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", loc9))(loc9, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc7 = (EIF_REFERENCE) RTCCL(tr1);
					}
				} else {
					RTHOOK(48);
					tr1 = RTMS_EX_H("Content-Type: ",14,597285920);
					ur1 = tr1;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15719, "starts_with", loc11))(loc11, ur1x)).it_b);
					if (tb1) {
						RTHOOK(49);
						RTDBGAL(Current, 8, 0xF8000185, 0, 0); /* loc8 */
						
						ui4_1 = ((EIF_INTEGER_32) 15L);
						ti4_1 = *(EIF_INTEGER_32 *)(loc11 + RTVA(15730, "count", loc11));
						ui4_2 = ti4_1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", loc11))(loc11, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc8 = (EIF_REFERENCE) RTCCL(tr1);
					}
				}
			} else {
				RTHOOK(50);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		}
		RTHOOK(51);
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			RTHOOK(52);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc7 != NULL)) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15587, "is_empty", loc7))(loc7)).it_b);
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(53);
				if ((EIF_BOOLEAN)(loc8 == NULL)) {
					RTHOOK(54);
					RTDBGAL(Current, 8, 0xF8000185, 0, 0); /* loc8 */
					
					loc8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8261, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				}
				RTHOOK(55);
				RTDBGAL(Current, 12, 0xF80001A2, 0, 0); /* loc12 */
				
				tr1 = RTLN(418);
				ur1 = RTCCL(loc6);
				ur2 = RTCCL(loc7);
				ur3 = RTCCL(loc8);
				ti4_1 = *(EIF_INTEGER_32 *)(loc10 + RTVA(15730, "count", loc10));
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17258, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ui4_1x);
				RTNHOOK(55,1);
				loc12 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(56);
				ur1 = RTCCL(loc6);
				ur2 = RTCCL(loc12);
				ur3 = RTCCL(arg3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8066, dtype))(Current, ur1x, ur2x, ur3x);
				RTHOOK(57);
				ur1 = RTCCL(loc12);
				ur2 = RTCCL(loc10);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17032, "save_uploaded_file", arg1))(arg1, ur1x, ur2x);
			} else {
				RTHOOK(58);
				ur1 = RTCCL(loc6);
				ur2 = RTCCL(loc10);
				ur3 = RTCCL(arg3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8065, dtype))(Current, ur1x, ur2x, ur3x);
			}
		} else {
			RTHOOK(59);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16918, "error_handler", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(59,1);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tr2 = RTMS_EX_H("unamed multipart entry",22,97040249);
			ur1 = tr2;
			ur2 = NULL;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17966, "add_custom_error", tr1))(tr1, ui4_1x, ur1x, ur2x);
		}
	} else {
		RTHOOK(60);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16918, "error_handler", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(60,1);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr2 = RTMS_EX_H("missformed multipart entry",26,1788966777);
		ur1 = tr2;
		ur2 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17966, "add_custom_error", tr1))(tr1, ui4_1x, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(61);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_MULTIPART_FORM_DATA_HANDLER}.default_content_type */
RTOID (F140_8497)


EIF_TYPED_VALUE F140_8497 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F140_8497,2076,RTMS_EX_H("text/plain",10,1054604142));
}

void EIF_Minit140 (void)
{
	GTCX
	RTOTS (8497,F140_8497)
}


#ifdef __cplusplus
}
#endif

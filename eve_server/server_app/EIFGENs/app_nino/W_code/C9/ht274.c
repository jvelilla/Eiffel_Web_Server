/*
 * Code for class HTTP_ACCEPT_MEDIA_TYPE_UTILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F274_11545(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F274_11546(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F274_11547(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F274_11548(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F274_11549(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit274(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_ACCEPT_MEDIA_TYPE_UTILITIES}.media_type */
EIF_TYPED_VALUE F274_11545 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "media_type";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLR(7,ur2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	
	RTEAA(l_feature_name, 273, Current, 2, 1, 4392);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(273, Current, 4392);
	if (arg1) {
		RTCC(arg1, 273, l_feature_name, 1, 385);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("Improve the code!!!",19,837582369);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10723, Dtype(Current)))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF8000193, 0,0); /* Result */
	
	tr1 = RTLN(403);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17128, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("q",1,113);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17133, "parameter", Result))(Result, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15596, "is_double", loc1))(loc1)).it_b);
		if (tb3) {
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15646, "to_real_64", loc1))(loc1)).it_r8);
			loc2 = tr8_1;
			tb2 = (EIF_TRUE);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= (EIF_REAL_64) 0.0) && (EIF_BOOLEAN) (loc2 <= (EIF_REAL_64) 1.0));
		}
		if (tb1) {
			RTHOOK(5);
			tr1 = RTMS_EX_H("1",1,49);
			ur1 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc1))(loc1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(6);
				tr1 = RTMS_EX_H("q",1,113);
				ur1 = tr1;
				tr2 = RTMS_EX_H("1.0",3,3223088);
				ur2 = tr2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17140, "add_parameter", Result))(Result, ur1x, ur2x);
			}
		} else {
			RTHOOK(7);
			tr1 = RTMS_EX_H("q",1,113);
			ur1 = tr1;
			tr2 = RTMS_EX_H("1.0",3,3223088);
			ur2 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17140, "add_parameter", Result))(Result, ur1x, ur2x);
		}
	} else {
		RTHOOK(8);
		tr1 = RTMS_EX_H("q",1,113);
		ur1 = tr1;
		tr2 = RTMS_EX_H("1.0",3,3223088);
		ur2 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17140, "add_parameter", Result))(Result, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {HTTP_ACCEPT_MEDIA_TYPE_UTILITIES}.quality */
EIF_TYPED_VALUE F274_11546 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "quality";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,loc3);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 273, Current, 3, 2, 4393);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(273, Current, 4393);
	if (arg1) {
		RTCC(arg1, 273, l_feature_name, 1, 385);
	}
	if (arg2) {
		RTCC(arg2, 273, l_feature_name, 2, 385);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800020D, 0, 0); /* loc1 */
	
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ',';
	uw1 = tw1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15648, "split", arg2))(arg2, uw1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF8000204, 0, 0); /* loc2 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {516,403,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12032, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9704, "start", loc1))(loc1);
	for (;;) {
		RTHOOK(4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9718, "after", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(5);
		RTDBGAL(Current, 3, 0xF8000193, 0, 0); /* loc3 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9716, "item_for_iteration", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10749, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(6);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9816, "force", loc2))(loc2, ur1x);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", loc1))(loc1);
	}
	RTHOOK(8);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(loc2);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10753, dtype))(Current, ur1x, ur2x)).it_r8);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uw1
#undef arg2
#undef arg1
}

/* {HTTP_ACCEPT_MEDIA_TYPE_UTILITIES}.best_match */
EIF_TYPED_VALUE F274_11547 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "best_match";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(16);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,Current);
	RTLR(6,ur1);
	RTLR(7,loc4);
	RTLR(8,loc2);
	RTLR(9,loc8);
	RTLR(10,loc5);
	RTLR(11,ur2);
	RTLR(12,loc6);
	RTLR(13,Result);
	RTLR(14,loc7);
	RTLR(15,tr2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 273, Current, 8, 2, 4394);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(273, Current, 4394);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {495,385,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			RTCC(arg1, 273, l_feature_name, 1, typres0);
		}
	}
	if (arg2) {
		RTCC(arg2, 273, l_feature_name, 2, 385);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0xF800020D, 0, 0); /* loc3 */
	
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ',';
	uw1 = tw1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15648, "split", arg2))(arg2, uw1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800020D, 0, 0); /* loc1 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {516,403,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9633, "count", loc3))(loc3)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12032, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("Extract method!!!",17,1444270625);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10723, dtype))(Current, ur1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9704, "start", loc3))(loc3);
	for (;;) {
		RTHOOK(5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9718, "after", loc3))(loc3)).it_b);
		if (tb1) break;
		RTHOOK(6);
		RTDBGAL(Current, 4, 0xF8000193, 0, 0); /* loc4 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9716, "item_for_iteration", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10749, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(7);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9816, "force", loc1))(loc1, ur1x);
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", loc3))(loc3);
	}
	RTHOOK(9);
	RTDBGAL(Current, 2, 0xF800020D, 0, 0); /* loc2 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {516,396,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12032, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(9,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(Current, 1, 0xF80001F0, 0, 0); /* loc8 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11521, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10166, "after", loc8))(loc8)).it_b);
		if (tb2) break;
		RTHOOK(11);
		RTDBGAL(Current, 5, 0xF800018C, 0, 0); /* loc5 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10165, "item", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(loc1);
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10752, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10165, "item", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10748, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16835, "set_entity", loc5))(loc5, ur1x);
		RTHOOK(13);
		ur1 = RTCCL(loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9816, "force", loc2))(loc2, ur1x);
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10167, "forth", loc8))(loc8);
	}
	RTHOOK(15);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9704, "start", loc2))(loc2);
	RTHOOK(16);
	RTDBGAL(Current, 6, 0xF800018C, 0, 0); /* loc6 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9658, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", loc2))(loc2);
	for (;;) {
		RTHOOK(18);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9718, "after", loc2))(loc2)).it_b);
		if (tb3) break;
		RTHOOK(19);
		RTDBGAL(Current, 5, 0xF800018C, 0, 0); /* loc5 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9658, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(20);
		ur1 = RTCCL(loc5);
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10067, "is_less", loc6))(loc6, ur1x)).it_b);
		if (tb4) {
			RTHOOK(21);
			RTDBGAL(Current, 6, 0xF800018C, 0, 0); /* loc6 */
			
			loc6 = (EIF_REFERENCE) RTCCL(loc5);
			RTHOOK(22);
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11951, "isfirst", loc2))(loc2)).it_b);
			if ((EIF_BOOLEAN) !tb4) {
				RTHOOK(23);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9802, "back", loc2))(loc2);
				for (;;) {
					RTHOOK(24);
					tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9801, "before", loc2))(loc2)).it_b);
					if (tb4) break;
					RTHOOK(25);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9663, "remove", loc2))(loc2);
					RTHOOK(26);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9802, "back", loc2))(loc2);
				}
				RTHOOK(27);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", loc2))(loc2);
			}
			if (RTAL & CK_CHECK) {
				RTHOOK(28);
				RTCT(NULL, EX_CHECK);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9658, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				if (RTCEQ(tr1, loc5)) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(29);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", loc2))(loc2);
		} else {
			RTHOOK(30);
			ur1 = RTCCL(loc5);
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc6))(loc6, ur1x)).it_b);
			if (tb5) {
				RTHOOK(31);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", loc2))(loc2);
			} else {
				if (RTAL & CK_CHECK) {
					RTHOOK(32);
					RTCT(NULL, EX_CHECK);
					ur1 = RTCCL(loc5);
					tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10069, "is_greater", loc6))(loc6, ur1x)).it_b);
					if (tb5) {
						RTCK;
					} else {
						RTCF;
					}
				}
				RTHOOK(33);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9663, "remove", loc2))(loc2);
			}
		}
	}
	RTHOOK(34);
	tb5 = '\0';
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		tr8_1 = *(EIF_REAL_64 *)(loc6 + RTVA(16833, "quality", loc6));
		tb5 = (EIF_BOOLEAN)(tr8_1 != (EIF_REAL_64) 0.0);
	}
	if (tb5) {
		RTHOOK(35);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9633, "count", loc2))(loc2)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(36);
			RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16834, "entity", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(37);
			RTDBGAL(Current, 5, 0xF800018C, 0, 0); /* loc5 */
			
			loc5 = (EIF_REFERENCE) NULL;
			RTHOOK(38);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9704, "start", loc1))(loc1);
			for (;;) {
				RTHOOK(39);
				tb5 = '\01';
				tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9718, "after", loc1))(loc1)).it_b);
				if (!tb6) {
					tb5 = (EIF_BOOLEAN)(loc5 != NULL);
				}
				if (tb5) break;
				RTHOOK(40);
				RTDBGAL(Current, 7, 0xF8000181, 0, 0); /* loc7 */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9658, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(40,1);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17136, "simple_type", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = (EIF_REFERENCE) RTCCL(tr2);
				RTHOOK(41);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9704, "start", loc2))(loc2);
				for (;;) {
					RTHOOK(42);
					tb6 = '\01';
					tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9718, "after", loc2))(loc2)).it_b);
					if (!tb7) {
						tb6 = (EIF_BOOLEAN)(loc5 != NULL);
					}
					if (tb6) break;
					RTHOOK(43);
					RTDBGAL(Current, 5, 0xF800018C, 0, 0); /* loc5 */
					
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9658, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc5 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(44);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16834, "entity", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(44,1);
					ur1 = RTCCL(loc7);
					tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", tr1))(tr1, ur1x)).it_b);
					if (tb7) {
					} else {
						RTHOOK(45);
						RTDBGAL(Current, 5, 0xF800018C, 0, 0); /* loc5 */
						
						loc5 = (EIF_REFERENCE) NULL;
						RTHOOK(46);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", loc2))(loc2);
					}
				}
				RTHOOK(47);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", loc1))(loc1);
			}
			RTHOOK(48);
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				RTHOOK(49);
				RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16834, "entity", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(50);
				RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16834, "entity", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
	} else {
		RTHOOK(51);
		RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
		
		Result = RTMS_EX_H("",0,0);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(52);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uw1
#undef arg2
#undef arg1
}

/* {HTTP_ACCEPT_MEDIA_TYPE_UTILITIES}.fitness_and_quality_from_list */
EIF_TYPED_VALUE F274_11548 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "fitness_and_quality_from_list";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(18);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc4);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,loc9);
	RTLR(6,tr1);
	RTLR(7,loc10);
	RTLR(8,loc11);
	RTLR(9,loc5);
	RTLR(10,loc12);
	RTLR(11,loc13);
	RTLR(12,loc14);
	RTLR(13,loc15);
	RTLR(14,loc7);
	RTLR(15,loc16);
	RTLR(16,loc17);
	RTLR(17,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	
	RTEAA(l_feature_name, 273, Current, 17, 2, 4395);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(273, Current, 4395);
	if (arg1) {
		RTCC(arg1, 273, l_feature_name, 1, 385);
	}
	if (arg2) {
		{
			static EIF_TYPE_INDEX typarr0[] = {525,403,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg2, 273, l_feature_name, 2, typres0);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x20000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
	RTHOOK(3);
	RTDBGAL(Current, 4, 0xF8000193, 0, 0); /* loc4 */
	
	ur1 = RTCCL(arg1);
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10749, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	tb1 = '\0';
	tr1 = RTMS_EX_H("q",1,113);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17133, "parameter", loc4))(loc4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc9 = RTCCL(tr1);
	if (EIF_TEST(loc9)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15596, "is_double", loc9))(loc9)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
		
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15645, "to_double", loc9))(loc9)).it_r8);
		loc2 = (EIF_REAL_64) tr8_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 < (EIF_REAL_64) 0.0)) {
			RTHOOK(7);
			RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
			
			loc2 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
		} else {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc2 > (EIF_REAL_64) 1.0)) {
				RTHOOK(9);
				RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
				
				loc2 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
			}
		}
	} else {
		RTHOOK(10);
		RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
		
		loc2 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
	}
	RTHOOK(11);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17130, "type", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc10 = RTCCL(tr1);
	if (EIF_TEST(loc10)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17131, "subtype", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc11 = RTCCL(tr1);
		tb1 = EIF_TEST(loc11);
	}
	if (tb1) {
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9704, "start", arg2))(arg2);
		for (;;) {
			RTHOOK(13);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9718, "after", arg2))(arg2)).it_b);
			if (tb1) break;
			RTHOOK(14);
			RTDBGAL(Current, 5, 0xF8000193, 0, 0); /* loc5 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9716, "item_for_iteration", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(15);
			tb2 = '\0';
			tb3 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17130, "type", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc12 = RTCCL(tr1);
			if (EIF_TEST(loc12)) {
				tb4 = '\01';
				tb5 = '\01';
				ur1 = RTCCL(loc12);
				tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc10))(loc10, ur1x)).it_b);
				if (!tb6) {
					tr1 = RTMS_EX_H("*",1,42);
					ur1 = tr1;
					tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc12))(loc12, ur1x)).it_b);
					tb5 = tb6;
				}
				if (!tb5) {
					tr1 = RTMS_EX_H("*",1,42);
					ur1 = tr1;
					tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc10))(loc10, ur1x)).it_b);
					tb4 = tb5;
				}
				tb3 = tb4;
			}
			if (tb3) {
				tb3 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17131, "subtype", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc13 = RTCCL(tr1);
				if (EIF_TEST(loc13)) {
					tb4 = '\01';
					tb5 = '\01';
					ur1 = RTCCL(loc13);
					tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc11))(loc11, ur1x)).it_b);
					if (!tb6) {
						tr1 = RTMS_EX_H("*",1,42);
						ur1 = tr1;
						tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc13))(loc13, ur1x)).it_b);
						tb5 = tb6;
					}
					if (!tb5) {
						tr1 = RTMS_EX_H("*",1,42);
						ur1 = tr1;
						tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc11))(loc11, ur1x)).it_b);
						tb4 = tb5;
					}
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			if (tb2) {
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17134, "parameters", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc14 = RTCCL(tr1);
				if (EIF_TEST(loc14)) {
					RTHOOK(17);
					RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
					
					loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(18);
					RTDBGAL(Current, 7, 0xF800024C, 0, 0); /* loc15 */
					
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11521, "new_cursor", loc14))(loc14)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc15 = (EIF_REFERENCE) RTCCL(tr1);
					for (;;) {
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10166, "after", loc15))(loc15)).it_b);
						if (tb2) break;
						RTHOOK(19);
						RTDBGAL(Current, 7, 0xF8000181, 0, 0); /* loc7 */
						
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10171, "key", loc15))(loc15)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc7 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(20);
						tb3 = '\0';
						tb4 = '\0';
						tb5 = '\0';
						tr1 = RTMS_EX_H("q",1,113);
						ur1 = tr1;
						tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc7))(loc7, ur1x)).it_b);
						if ((EIF_BOOLEAN) !tb6) {
							ur1 = RTCCL(loc7);
							tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17132, "has_parameter", loc5))(loc5, ur1x)).it_b);
							tb5 = tb6;
						}
						if (tb5) {
							tb5 = '\0';
							ur1 = RTCCL(loc7);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17133, "parameter", loc4))(loc4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc16 = RTCCL(tr1);
							if (EIF_TEST(loc16)) {
								ur1 = RTCCL(loc7);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17133, "parameter", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								loc17 = RTCCL(tr1);
								tb5 = EIF_TEST(loc17);
							}
							tb4 = tb5;
						}
						if (tb4) {
							ur1 = RTCCL(loc17);
							tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc16))(loc16, ur1x)).it_b);
							tb3 = tb4;
						}
						if (tb3) {
							RTHOOK(21);
							RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
							
							loc6++;
						}
						RTHOOK(22);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10167, "forth", loc15))(loc15);
					}
				}
				RTHOOK(23);
				ur1 = RTCCL(loc10);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc12))(loc12, ur1x)).it_b);
				if (tb3) {
					RTHOOK(24);
					RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
					
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
				} else {
					RTHOOK(25);
					RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
					
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				RTHOOK(26);
				ur1 = RTCCL(loc11);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15716, "same_string", loc13))(loc13, ur1x)).it_b);
				if (tb3) {
					RTHOOK(27);
					RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
					
					loc8 += ((EIF_INTEGER_32) 10L);
				}
				RTHOOK(28);
				RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
				
				loc8 += loc6;
				RTHOOK(29);
				if ((EIF_BOOLEAN) (loc8 > loc1)) {
					RTHOOK(30);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					
					loc1 = (EIF_INTEGER_32) loc8;
					RTHOOK(31);
					RTDBGAL(Current, 7, 0xF8000181, 0, 0); /* loc7 */
					
					tr1 = RTMS_EX_H("q",1,113);
					ur1 = tr1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17133, "parameter", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(32);
					if ((EIF_BOOLEAN)(loc7 != NULL)) {
						RTHOOK(33);
						RTDBGAL(Current, 3, 0x20000000, 1, 0); /* loc3 */
						
						tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15645, "to_double", loc7))(loc7)).it_r8);
						RTNHOOK(33,1);
						ur8_1 = loc2;
						tr8_2 = eif_min_real64 (tr8_1,ur8_1);
						loc3 = (EIF_REAL_64) tr8_2;
					} else {
						RTHOOK(34);
						RTDBGAL(Current, 3, 0x20000000, 1, 0); /* loc3 */
						
						loc3 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
					}
				}
			}
			RTHOOK(35);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", arg2))(arg2);
		}
	}
	RTHOOK(36);
	RTDBGAL(Current, 0, 0xF800018C, 0,0); /* Result */
	
	tr1 = RTLN(396);
	ui4_1 = loc1;
	ur8_1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(16831, Dtype(tr1)))(tr1, ui4_1x, ur8_1x);
	RTNHOOK(36,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(21);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur8_1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {HTTP_ACCEPT_MEDIA_TYPE_UTILITIES}.quality_from_list */
EIF_TYPED_VALUE F274_11549 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "quality_from_list";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 273, Current, 0, 2, 4396);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(273, Current, 4396);
	if (arg1) {
		RTCC(arg1, 273, l_feature_name, 1, 385);
	}
	if (arg2) {
		{
			static EIF_TYPE_INDEX typarr0[] = {525,403,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg2, 273, l_feature_name, 2, typres0);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10752, Dtype(Current)))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(16833, "quality", tr1));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

void EIF_Minit274 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

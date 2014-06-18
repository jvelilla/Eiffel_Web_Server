/*
 * Code for class OPERATING_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F40_4106(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_4107(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_4108(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_4109(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_4110(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_4111(EIF_REFERENCE);
extern EIF_TYPED_VALUE F40_4112(EIF_REFERENCE);
extern void EIF_Minit40(void);

#ifdef __cplusplus
}
#endif

#include "eif_dir.h"
#include "eif_path_name.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OPERATING_ENVIRONMENT}.directory_separator */
RTOID (F40_4106)
EIF_TYPED_VALUE F40_4106 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "directory_separator";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_CHARACTER_8)
	RTOTDB(EIF_CHARACTER_8, F40_4106);

	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 39, Current, 0, 0, 672);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(39, Current, 672);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x08000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4108, Dtype(Current)))(Current)).it_c1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef Result
}

/* {OPERATING_ENVIRONMENT}.current_directory_name_representation */
RTOID (F40_4107)
EIF_TYPED_VALUE F40_4107 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_directory_name_representation";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F40_4107);

	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 39, Current, 0, 0, 673);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(39, Current, 673);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000162, 0,0); /* Result */
	
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4109, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef up1
#undef Result
}

/* {OPERATING_ENVIRONMENT}.home_directory_supported */
EIF_TYPED_VALUE F40_4108 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "home_directory_supported";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 39, Current, 0, 0, 674);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(39, Current, 674);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_home_dir_supported());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {OPERATING_ENVIRONMENT}.root_directory_supported */
EIF_TYPED_VALUE F40_4109 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "root_directory_supported";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 39, Current, 0, 0, 675);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(39, Current, 675);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_root_dir_supported());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {OPERATING_ENVIRONMENT}.case_sensitive_path_names */
EIF_TYPED_VALUE F40_4110 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "case_sensitive_path_names";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 39, Current, 0, 0, 676);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(39, Current, 676);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {OPERATING_ENVIRONMENT}.c_dir_separator */
EIF_TYPED_VALUE F40_4111 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_dir_separator";
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 39, Current, 0, 0, 677);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(39, Current, 677);
	RTIV(Current, RTAL);Result = (EIF_CHARACTER_8) eif_dir_separator();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {OPERATING_ENVIRONMENT}.eif_current_dir_representation */
EIF_TYPED_VALUE F40_4112 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "eif_current_dir_representation";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 39, Current, 0, 0, 678);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(39, Current, 678);
	RTIV(Current, RTAL);Result = (EIF_REFERENCE) eif_current_dir_representation();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

void EIF_Minit40 (void)
{
	GTCX
	RTOTS (4106,F40_4106)
	RTOTS (4107,F40_4107)
}


#ifdef __cplusplus
}
#endif

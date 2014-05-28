/*
 * Code for class JSON_TOKENS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F64_6751(EIF_REFERENCE);
extern EIF_TYPED_VALUE F64_6752(EIF_REFERENCE);
extern EIF_TYPED_VALUE F64_6753(EIF_REFERENCE);
extern EIF_TYPED_VALUE F64_6754(EIF_REFERENCE);
extern EIF_TYPED_VALUE F64_6755(EIF_REFERENCE);
extern EIF_TYPED_VALUE F64_6756(EIF_REFERENCE);
extern EIF_TYPED_VALUE F64_6757(EIF_REFERENCE);
extern EIF_TYPED_VALUE F64_6758(EIF_REFERENCE);
extern EIF_TYPED_VALUE F64_6759(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F64_6760(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F64_6761(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F64_6762(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit64(void);

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

/* {JSON_TOKENS}.j_object_open */
EIF_TYPED_VALUE F64_6751 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '{';
	return r;
}

/* {JSON_TOKENS}.j_array_open */
EIF_TYPED_VALUE F64_6752 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '[';
	return r;
}

/* {JSON_TOKENS}.j_object_close */
EIF_TYPED_VALUE F64_6753 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '}';
	return r;
}

/* {JSON_TOKENS}.j_array_close */
EIF_TYPED_VALUE F64_6754 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ']';
	return r;
}

/* {JSON_TOKENS}.j_string */
EIF_TYPED_VALUE F64_6755 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\"';
	return r;
}

/* {JSON_TOKENS}.j_plus */
EIF_TYPED_VALUE F64_6756 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '+';
	return r;
}

/* {JSON_TOKENS}.j_minus */
EIF_TYPED_VALUE F64_6757 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '-';
	return r;
}

/* {JSON_TOKENS}.j_dot */
EIF_TYPED_VALUE F64_6758 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
	return r;
}

/* {JSON_TOKENS}.is_open_token */
EIF_TYPED_VALUE F64_6759 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_open_token";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 63, Current, 0, 1, 1160);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(63, Current, 1160);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '-':
		case (EIF_CHARACTER_8) '.':
		case (EIF_CHARACTER_8) '[':
		case (EIF_CHARACTER_8) '{':
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {JSON_TOKENS}.is_close_token */
EIF_TYPED_VALUE F64_6760 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_close_token";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 63, Current, 0, 1, 1161);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(63, Current, 1161);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) ']':
		case (EIF_CHARACTER_8) '}':
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {JSON_TOKENS}.is_special_character */
EIF_TYPED_VALUE F64_6761 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_special_character";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 63, Current, 0, 1, 1162);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(63, Current, 1162);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\010':
		case (EIF_CHARACTER_8) '\011':
		case (EIF_CHARACTER_8) '\012':
		case (EIF_CHARACTER_8) '\014':
		case (EIF_CHARACTER_8) '\015':
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) '/':
		case (EIF_CHARACTER_8) '\\':
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {JSON_TOKENS}.is_special_control */
EIF_TYPED_VALUE F64_6762 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_special_control";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 63, Current, 0, 1, 1163);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(63, Current, 1163);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) 'b':
		case (EIF_CHARACTER_8) 'f':
		case (EIF_CHARACTER_8) 'n':
		case (EIF_CHARACTER_8) 'r':
		case (EIF_CHARACTER_8) 't':
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit64 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

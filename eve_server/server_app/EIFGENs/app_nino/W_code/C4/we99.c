/*
 * Code for class WEL_PROCESS_TOOLHELP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F99_7868(EIF_REFERENCE);
extern EIF_TYPED_VALUE F99_7869(EIF_REFERENCE);
extern EIF_TYPED_VALUE F99_7870(EIF_REFERENCE);
extern EIF_TYPED_VALUE F99_7871(EIF_REFERENCE);
extern EIF_TYPED_VALUE F99_7872(EIF_REFERENCE);
extern EIF_TYPED_VALUE F99_7873(EIF_REFERENCE);
extern EIF_TYPED_VALUE F99_7874(EIF_REFERENCE);
extern EIF_TYPED_VALUE F99_7875(EIF_REFERENCE);
extern EIF_TYPED_VALUE F99_7876(EIF_REFERENCE);
extern EIF_TYPED_VALUE F99_7877(EIF_REFERENCE);
extern EIF_TYPED_VALUE F99_7878(EIF_REFERENCE);
extern void EIF_Minit99(void);

#ifdef __cplusplus
}
#endif

#include <Tlhelp32.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F99_7868
static EIF_INTEGER_32 inline_F99_7868 (void)
{
	return (EIF_INTEGER_32) (PROCESS_ALL_ACCESS)
	;
}
#define INLINE_F99_7868
#endif
#ifndef INLINE_F99_7869
static EIF_INTEGER_32 inline_F99_7869 (void)
{
	return (EIF_INTEGER_32) (PROCESS_TERMINATE)
	;
}
#define INLINE_F99_7869
#endif
#ifndef INLINE_F99_7870
static EIF_INTEGER_32 inline_F99_7870 (void)
{
	return (EIF_INTEGER_32) (PROCESS_CREATE_PROCESS)
	;
}
#define INLINE_F99_7870
#endif
#ifndef INLINE_F99_7871
static EIF_INTEGER_32 inline_F99_7871 (void)
{
	return (EIF_INTEGER_32) (PROCESS_DUP_HANDLE)
	;
}
#define INLINE_F99_7871
#endif
#ifndef INLINE_F99_7872
static EIF_INTEGER_32 inline_F99_7872 (void)
{
	return (EIF_INTEGER_32) (PROCESS_QUERY_INFORMATION)
	;
}
#define INLINE_F99_7872
#endif
#ifndef INLINE_F99_7873
static EIF_INTEGER_32 inline_F99_7873 (void)
{
	return (EIF_INTEGER_32) (PROCESS_SET_QUOTA)
	;
}
#define INLINE_F99_7873
#endif
#ifndef INLINE_F99_7874
static EIF_INTEGER_32 inline_F99_7874 (void)
{
	return (EIF_INTEGER_32) (PROCESS_SET_INFORMATION)
	;
}
#define INLINE_F99_7874
#endif
#ifndef INLINE_F99_7875
static EIF_INTEGER_32 inline_F99_7875 (void)
{
	return (EIF_INTEGER_32) (PROCESS_VM_OPERATION)
	;
}
#define INLINE_F99_7875
#endif
#ifndef INLINE_F99_7876
static EIF_INTEGER_32 inline_F99_7876 (void)
{
	return (EIF_INTEGER_32) (PROCESS_VM_READ)
	;
}
#define INLINE_F99_7876
#endif
#ifndef INLINE_F99_7877
static EIF_INTEGER_32 inline_F99_7877 (void)
{
	return (EIF_INTEGER_32) (PROCESS_VM_WRITE)
	;
}
#define INLINE_F99_7877
#endif
#ifndef INLINE_F99_7878
static EIF_INTEGER_32 inline_F99_7878 (void)
{
	return (EIF_INTEGER_32) (SYNCHRONIZE)
	;
}
#define INLINE_F99_7878
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_all_access */
EIF_TYPED_VALUE F99_7868 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_all_access";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 98, Current, 0, 0, 1592);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(98, Current, 1592);
	RTIV(Current, RTAL);
	Result = inline_F99_7868 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_terminate */
EIF_TYPED_VALUE F99_7869 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_terminate";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 98, Current, 0, 0, 1593);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(98, Current, 1593);
	RTIV(Current, RTAL);
	Result = inline_F99_7869 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_create_process */
EIF_TYPED_VALUE F99_7870 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_create_process";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 98, Current, 0, 0, 1594);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(98, Current, 1594);
	RTIV(Current, RTAL);
	Result = inline_F99_7870 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_dup_handle */
EIF_TYPED_VALUE F99_7871 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_dup_handle";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 98, Current, 0, 0, 1595);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(98, Current, 1595);
	RTIV(Current, RTAL);
	Result = inline_F99_7871 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_query_information */
EIF_TYPED_VALUE F99_7872 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_query_information";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 98, Current, 0, 0, 1596);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(98, Current, 1596);
	RTIV(Current, RTAL);
	Result = inline_F99_7872 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_set_quota */
EIF_TYPED_VALUE F99_7873 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_set_quota";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 98, Current, 0, 0, 1597);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(98, Current, 1597);
	RTIV(Current, RTAL);
	Result = inline_F99_7873 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_set_information */
EIF_TYPED_VALUE F99_7874 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_set_information";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 98, Current, 0, 0, 1587);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(98, Current, 1587);
	RTIV(Current, RTAL);
	Result = inline_F99_7874 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_vm_operation */
EIF_TYPED_VALUE F99_7875 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_vm_operation";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 98, Current, 0, 0, 1588);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(98, Current, 1588);
	RTIV(Current, RTAL);
	Result = inline_F99_7875 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_vm_read */
EIF_TYPED_VALUE F99_7876 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_vm_read";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 98, Current, 0, 0, 1589);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(98, Current, 1589);
	RTIV(Current, RTAL);
	Result = inline_F99_7876 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_vm_write */
EIF_TYPED_VALUE F99_7877 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_vm_write";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 98, Current, 0, 0, 1590);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(98, Current, 1590);
	RTIV(Current, RTAL);
	Result = inline_F99_7877 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_synchronize */
EIF_TYPED_VALUE F99_7878 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwin_process_synchronize";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 98, Current, 0, 0, 1591);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(98, Current, 1591);
	RTIV(Current, RTAL);
	Result = inline_F99_7878 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit99 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

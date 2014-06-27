/*
 * Code for class WEL_PROCESS_TOOLHELP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F105_7990(EIF_REFERENCE);
extern EIF_TYPED_VALUE F105_7991(EIF_REFERENCE);
extern EIF_TYPED_VALUE F105_7992(EIF_REFERENCE);
extern EIF_TYPED_VALUE F105_7993(EIF_REFERENCE);
extern EIF_TYPED_VALUE F105_7994(EIF_REFERENCE);
extern EIF_TYPED_VALUE F105_7995(EIF_REFERENCE);
extern EIF_TYPED_VALUE F105_7996(EIF_REFERENCE);
extern EIF_TYPED_VALUE F105_7997(EIF_REFERENCE);
extern EIF_TYPED_VALUE F105_7998(EIF_REFERENCE);
extern EIF_TYPED_VALUE F105_7999(EIF_REFERENCE);
extern EIF_TYPED_VALUE F105_8000(EIF_REFERENCE);
extern void EIF_Minit105(void);

#ifdef __cplusplus
}
#endif

#include <Tlhelp32.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F105_7990
static EIF_INTEGER_32 inline_F105_7990 (void)
{
	return (EIF_INTEGER_32) (PROCESS_ALL_ACCESS)
	;
}
#define INLINE_F105_7990
#endif
#ifndef INLINE_F105_7991
static EIF_INTEGER_32 inline_F105_7991 (void)
{
	return (EIF_INTEGER_32) (PROCESS_TERMINATE)
	;
}
#define INLINE_F105_7991
#endif
#ifndef INLINE_F105_7992
static EIF_INTEGER_32 inline_F105_7992 (void)
{
	return (EIF_INTEGER_32) (PROCESS_CREATE_PROCESS)
	;
}
#define INLINE_F105_7992
#endif
#ifndef INLINE_F105_7993
static EIF_INTEGER_32 inline_F105_7993 (void)
{
	return (EIF_INTEGER_32) (PROCESS_DUP_HANDLE)
	;
}
#define INLINE_F105_7993
#endif
#ifndef INLINE_F105_7994
static EIF_INTEGER_32 inline_F105_7994 (void)
{
	return (EIF_INTEGER_32) (PROCESS_QUERY_INFORMATION)
	;
}
#define INLINE_F105_7994
#endif
#ifndef INLINE_F105_7995
static EIF_INTEGER_32 inline_F105_7995 (void)
{
	return (EIF_INTEGER_32) (PROCESS_SET_QUOTA)
	;
}
#define INLINE_F105_7995
#endif
#ifndef INLINE_F105_7996
static EIF_INTEGER_32 inline_F105_7996 (void)
{
	return (EIF_INTEGER_32) (PROCESS_SET_INFORMATION)
	;
}
#define INLINE_F105_7996
#endif
#ifndef INLINE_F105_7997
static EIF_INTEGER_32 inline_F105_7997 (void)
{
	return (EIF_INTEGER_32) (PROCESS_VM_OPERATION)
	;
}
#define INLINE_F105_7997
#endif
#ifndef INLINE_F105_7998
static EIF_INTEGER_32 inline_F105_7998 (void)
{
	return (EIF_INTEGER_32) (PROCESS_VM_READ)
	;
}
#define INLINE_F105_7998
#endif
#ifndef INLINE_F105_7999
static EIF_INTEGER_32 inline_F105_7999 (void)
{
	return (EIF_INTEGER_32) (PROCESS_VM_WRITE)
	;
}
#define INLINE_F105_7999
#endif
#ifndef INLINE_F105_8000
static EIF_INTEGER_32 inline_F105_8000 (void)
{
	return (EIF_INTEGER_32) (SYNCHRONIZE)
	;
}
#define INLINE_F105_8000
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PROCESS_TOOLHELP_CONSTANTS}.cwin_process_all_access */
EIF_TYPED_VALUE F105_7990 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 104, Current, 0, 0, 1697);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(104, Current, 1697);
	RTIV(Current, RTAL);
	Result = inline_F105_7990 ();
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
EIF_TYPED_VALUE F105_7991 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 104, Current, 0, 0, 1698);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(104, Current, 1698);
	RTIV(Current, RTAL);
	Result = inline_F105_7991 ();
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
EIF_TYPED_VALUE F105_7992 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 104, Current, 0, 0, 1699);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(104, Current, 1699);
	RTIV(Current, RTAL);
	Result = inline_F105_7992 ();
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
EIF_TYPED_VALUE F105_7993 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 104, Current, 0, 0, 1700);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(104, Current, 1700);
	RTIV(Current, RTAL);
	Result = inline_F105_7993 ();
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
EIF_TYPED_VALUE F105_7994 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 104, Current, 0, 0, 1701);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(104, Current, 1701);
	RTIV(Current, RTAL);
	Result = inline_F105_7994 ();
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
EIF_TYPED_VALUE F105_7995 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 104, Current, 0, 0, 1702);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(104, Current, 1702);
	RTIV(Current, RTAL);
	Result = inline_F105_7995 ();
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
EIF_TYPED_VALUE F105_7996 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 104, Current, 0, 0, 1703);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(104, Current, 1703);
	RTIV(Current, RTAL);
	Result = inline_F105_7996 ();
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
EIF_TYPED_VALUE F105_7997 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 104, Current, 0, 0, 1704);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(104, Current, 1704);
	RTIV(Current, RTAL);
	Result = inline_F105_7997 ();
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
EIF_TYPED_VALUE F105_7998 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 104, Current, 0, 0, 1694);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(104, Current, 1694);
	RTIV(Current, RTAL);
	Result = inline_F105_7998 ();
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
EIF_TYPED_VALUE F105_7999 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 104, Current, 0, 0, 1695);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(104, Current, 1695);
	RTIV(Current, RTAL);
	Result = inline_F105_7999 ();
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
EIF_TYPED_VALUE F105_8000 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 104, Current, 0, 0, 1696);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(104, Current, 1696);
	RTIV(Current, RTAL);
	Result = inline_F105_8000 ();
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

void EIF_Minit105 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class PLATFORM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F287_11829(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11830(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11831(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11832(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11833(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11834(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11835(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11836(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11837(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11838(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11839(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11840(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11841(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11842(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11843(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11844(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11845(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11846(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11847(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11848(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11849(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11850(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11851(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11852(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11853(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11854(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11855(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11856(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11857(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11858(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11859(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11860(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11861(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11862(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11863(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11864(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11865(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11866(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11867(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11868(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11869(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11870(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11871(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11872(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11873(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11874(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11875(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11876(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11877(EIF_REFERENCE);
extern EIF_TYPED_VALUE F287_11878(EIF_REFERENCE);
extern void EIF_Minit287(void);

#ifdef __cplusplus
}
#endif

#include <string.h>
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PLATFORM}.is_thread_capable */
EIF_TYPED_VALUE F287_11829 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_thread_capable";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4704);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4704);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable;
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

/* {PLATFORM}.is_scoop_capable */
EIF_TYPED_VALUE F287_11830 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_scoop_capable";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4705);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4705);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_scoop_capable;
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

/* {PLATFORM}.is_dotnet */
EIF_TYPED_VALUE F287_11831 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_dotnet";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4706);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4706);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_dotnet;
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

/* {PLATFORM}.is_windows */
EIF_TYPED_VALUE F287_11832 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_windows";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4707);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4707);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows;
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

/* {PLATFORM}.is_unix */
EIF_TYPED_VALUE F287_11833 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_unix";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4708);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4708);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_unix;
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

/* {PLATFORM}.is_vms */
EIF_TYPED_VALUE F287_11834 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_vms";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4709);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4709);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_vms;
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

/* {PLATFORM}.is_mac */
EIF_TYPED_VALUE F287_11835 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_mac";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4710);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4710);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_mac;
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

/* {PLATFORM}.is_vxworks */
EIF_TYPED_VALUE F287_11836 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_vxworks";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4711);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4711);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_vxworks;
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

/* {PLATFORM}.is_little_endian */
RTOID (F287_11837)
EIF_TYPED_VALUE F287_11837 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_little_endian";
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOTDB(EIF_BOOLEAN, F287_11837);

	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT16, &loc1);
	RTLU(SK_UINT8, &loc2);
	RTLU(SK_UINT8, &loc3);
	
	RTEAA(l_feature_name, 286, Current, 3, 0, 4712);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(286, Current, 4712);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x34000000, 1, 0); /* loc1 */
	
	tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 17185L);
	loc1 = (EIF_NATURAL_16) tu2_1;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x30000000, 1, 0); /* loc2 */
	
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 33L);
	loc2 = (EIF_NATURAL_8) tu1_1;
	RTHOOK(3);
	up1 = (EIF_NATURAL_16 *) &(loc1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	memcpy((void *)(EIF_NATURAL_8 *) &(loc3), (const void *) up1, (size_t) ui4_1);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef Result
}

/* {PLATFORM}.boolean_bytes */
EIF_TYPED_VALUE F287_11838 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "boolean_bytes";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4713);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4713);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_boolean_bytes;
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

/* {PLATFORM}.character_8_bytes */
EIF_TYPED_VALUE F287_11839 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {PLATFORM}.character_32_bytes */
EIF_TYPED_VALUE F287_11840 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.natural_8_bytes */
EIF_TYPED_VALUE F287_11841 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {PLATFORM}.natural_16_bytes */
EIF_TYPED_VALUE F287_11842 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {PLATFORM}.natural_32_bytes */
EIF_TYPED_VALUE F287_11843 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.natural_64_bytes */
EIF_TYPED_VALUE F287_11844 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.integer_8_bytes */
EIF_TYPED_VALUE F287_11845 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {PLATFORM}.integer_16_bytes */
EIF_TYPED_VALUE F287_11846 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {PLATFORM}.integer_32_bytes */
EIF_TYPED_VALUE F287_11847 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.integer_64_bytes */
EIF_TYPED_VALUE F287_11848 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.real_32_bytes */
EIF_TYPED_VALUE F287_11849 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.real_64_bytes */
EIF_TYPED_VALUE F287_11850 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.pointer_bytes */
EIF_TYPED_VALUE F287_11851 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pointer_bytes";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4726);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4726);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_pointer_bytes;
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

/* {PLATFORM}.boolean_bits */
EIF_TYPED_VALUE F287_11852 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "boolean_bits";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4727);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(286, Current, 4727);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11015, Dtype(Current)))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.character_8_bits */
EIF_TYPED_VALUE F287_11853 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.character_32_bits */
EIF_TYPED_VALUE F287_11854 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.natural_8_bits */
EIF_TYPED_VALUE F287_11855 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.natural_16_bits */
EIF_TYPED_VALUE F287_11856 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {PLATFORM}.natural_32_bits */
EIF_TYPED_VALUE F287_11857 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.natural_64_bits */
EIF_TYPED_VALUE F287_11858 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {PLATFORM}.integer_8_bits */
EIF_TYPED_VALUE F287_11859 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.integer_16_bits */
EIF_TYPED_VALUE F287_11860 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {PLATFORM}.integer_32_bits */
EIF_TYPED_VALUE F287_11861 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.integer_64_bits */
EIF_TYPED_VALUE F287_11862 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {PLATFORM}.real_32_bits */
EIF_TYPED_VALUE F287_11863 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.real_64_bits */
EIF_TYPED_VALUE F287_11864 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {PLATFORM}.pointer_bits */
EIF_TYPED_VALUE F287_11865 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pointer_bits";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4690);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(286, Current, 4690);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11028, Dtype(Current)))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.character_bytes */
EIF_TYPED_VALUE F287_11866 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "character_bytes";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4691);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4691);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_character_bytes;
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

/* {PLATFORM}.wide_character_bytes */
EIF_TYPED_VALUE F287_11867 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wide_character_bytes";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4692);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4692);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_wide_character_bytes;
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

/* {PLATFORM}.integer_bytes */
EIF_TYPED_VALUE F287_11868 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "integer_bytes";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4693);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4693);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_integer_bytes;
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

/* {PLATFORM}.real_bytes */
EIF_TYPED_VALUE F287_11869 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "real_bytes";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4694);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4694);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_real_bytes;
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

/* {PLATFORM}.double_bytes */
EIF_TYPED_VALUE F287_11870 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "double_bytes";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4695);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(286, Current, 4695);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_double_bytes;
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

/* {PLATFORM}.character_bits */
EIF_TYPED_VALUE F287_11871 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "character_bits";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4696);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(286, Current, 4696);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.integer_bits */
EIF_TYPED_VALUE F287_11872 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "integer_bits";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4697);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(286, Current, 4697);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.real_bits */
EIF_TYPED_VALUE F287_11873 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "real_bits";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4698);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(286, Current, 4698);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.double_bits */
EIF_TYPED_VALUE F287_11874 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "double_bits";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4699);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(286, Current, 4699);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.maximum_character_code */
EIF_TYPED_VALUE F287_11875 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "maximum_character_code";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4700);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(286, Current, 4700);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15451, 373))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 127L))) {
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

/* {PLATFORM}.maximum_integer */
EIF_TYPED_VALUE F287_11876 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "maximum_integer";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4701);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(286, Current, 4701);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17375, 430))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
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

/* {PLATFORM}.minimum_character_code */
EIF_TYPED_VALUE F287_11877 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "minimum_character_code";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4702);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(286, Current, 4702);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15450, 373))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
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

/* {PLATFORM}.minimum_integer */
EIF_TYPED_VALUE F287_11878 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "minimum_integer";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 286, Current, 0, 0, 4703);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(286, Current, 4703);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17374, 430))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
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

void EIF_Minit287 (void)
{
	GTCX
	RTOTS (11837,F287_11837)
}


#ifdef __cplusplus
}
#endif

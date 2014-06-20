/*
 * Code for class PLATFORM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F259_11357(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11358(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11359(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11360(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11361(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11362(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11363(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11364(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11365(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11366(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11367(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11368(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11369(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11370(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11371(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11372(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11373(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11374(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11375(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11376(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11377(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11378(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11379(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11380(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11381(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11382(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11383(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11384(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11385(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11386(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11387(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11388(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11389(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11390(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11391(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11392(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11393(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11394(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11395(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11396(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11397(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11398(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11399(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11400(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11401(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11402(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11403(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11404(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11405(EIF_REFERENCE);
extern EIF_TYPED_VALUE F259_11406(EIF_REFERENCE);
extern void EIF_Minit259(void);

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
EIF_TYPED_VALUE F259_11357 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4320);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4320);
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
EIF_TYPED_VALUE F259_11358 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4321);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4321);
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
EIF_TYPED_VALUE F259_11359 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4322);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4322);
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
EIF_TYPED_VALUE F259_11360 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4273);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4273);
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
EIF_TYPED_VALUE F259_11361 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4274);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4274);
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
EIF_TYPED_VALUE F259_11362 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4275);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4275);
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
EIF_TYPED_VALUE F259_11363 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4276);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4276);
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
EIF_TYPED_VALUE F259_11364 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4277);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4277);
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
RTOID (F259_11365)
EIF_TYPED_VALUE F259_11365 (EIF_REFERENCE Current)
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
	RTOTDB(EIF_BOOLEAN, F259_11365);

	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT16, &loc1);
	RTLU(SK_UINT8, &loc2);
	RTLU(SK_UINT8, &loc3);
	
	RTEAA(l_feature_name, 258, Current, 3, 0, 4278);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(258, Current, 4278);
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
EIF_TYPED_VALUE F259_11366 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4279);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4279);
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
EIF_TYPED_VALUE F259_11367 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {PLATFORM}.character_32_bytes */
EIF_TYPED_VALUE F259_11368 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.natural_8_bytes */
EIF_TYPED_VALUE F259_11369 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {PLATFORM}.natural_16_bytes */
EIF_TYPED_VALUE F259_11370 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {PLATFORM}.natural_32_bytes */
EIF_TYPED_VALUE F259_11371 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.natural_64_bytes */
EIF_TYPED_VALUE F259_11372 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.integer_8_bytes */
EIF_TYPED_VALUE F259_11373 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {PLATFORM}.integer_16_bytes */
EIF_TYPED_VALUE F259_11374 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {PLATFORM}.integer_32_bytes */
EIF_TYPED_VALUE F259_11375 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.integer_64_bytes */
EIF_TYPED_VALUE F259_11376 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.real_32_bytes */
EIF_TYPED_VALUE F259_11377 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.real_64_bytes */
EIF_TYPED_VALUE F259_11378 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.pointer_bytes */
EIF_TYPED_VALUE F259_11379 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4292);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4292);
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
EIF_TYPED_VALUE F259_11380 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4293);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(258, Current, 4293);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10581, Dtype(Current)))(Current)).it_i4);
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
EIF_TYPED_VALUE F259_11381 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.character_32_bits */
EIF_TYPED_VALUE F259_11382 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.natural_8_bits */
EIF_TYPED_VALUE F259_11383 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.natural_16_bits */
EIF_TYPED_VALUE F259_11384 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {PLATFORM}.natural_32_bits */
EIF_TYPED_VALUE F259_11385 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.natural_64_bits */
EIF_TYPED_VALUE F259_11386 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {PLATFORM}.integer_8_bits */
EIF_TYPED_VALUE F259_11387 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.integer_16_bits */
EIF_TYPED_VALUE F259_11388 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {PLATFORM}.integer_32_bits */
EIF_TYPED_VALUE F259_11389 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.integer_64_bits */
EIF_TYPED_VALUE F259_11390 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {PLATFORM}.real_32_bits */
EIF_TYPED_VALUE F259_11391 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.real_64_bits */
EIF_TYPED_VALUE F259_11392 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {PLATFORM}.pointer_bits */
EIF_TYPED_VALUE F259_11393 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4306);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(258, Current, 4306);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10594, Dtype(Current)))(Current)).it_i4);
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
EIF_TYPED_VALUE F259_11394 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4307);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4307);
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
EIF_TYPED_VALUE F259_11395 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4308);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4308);
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
EIF_TYPED_VALUE F259_11396 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4309);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4309);
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
EIF_TYPED_VALUE F259_11397 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4310);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4310);
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
EIF_TYPED_VALUE F259_11398 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4311);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(258, Current, 4311);
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
EIF_TYPED_VALUE F259_11399 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4312);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(258, Current, 4312);
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
EIF_TYPED_VALUE F259_11400 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4313);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(258, Current, 4313);
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
EIF_TYPED_VALUE F259_11401 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4314);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(258, Current, 4314);
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
EIF_TYPED_VALUE F259_11402 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4315);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(258, Current, 4315);
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
EIF_TYPED_VALUE F259_11403 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4316);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(258, Current, 4316);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14970, 343))(Current)).it_i4);
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
EIF_TYPED_VALUE F259_11404 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4317);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(258, Current, 4317);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16894, 400))(Current)).it_i4);
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
EIF_TYPED_VALUE F259_11405 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4318);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(258, Current, 4318);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14969, 343))(Current)).it_i4);
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
EIF_TYPED_VALUE F259_11406 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 258, Current, 0, 0, 4319);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(258, Current, 4319);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16893, 400))(Current)).it_i4);
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

void EIF_Minit259 (void)
{
	GTCX
	RTOTS (11365,F259_11365)
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class RT_DBG_INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F432_20305(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20306(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20307(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20308(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20309(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20310(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20311(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20312(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20313(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20314(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20315(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20316(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20317(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20318(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20319(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20320(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F432_20321(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20322(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20323(EIF_REFERENCE);
extern EIF_TYPED_VALUE F432_20324(EIF_REFERENCE);
extern EIF_TYPED_VALUE F432_20325(EIF_REFERENCE);
extern EIF_TYPED_VALUE F432_20326(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20327(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20328(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20329(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20330(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20331(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20332(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20333(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20334(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20335(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20336(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20337(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20338(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20339(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20340(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20341(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20342(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F432_20343(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F432_20344(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F432_20345(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F432_20346(EIF_REFERENCE);
extern EIF_TYPED_VALUE F432_20347(EIF_REFERENCE);
extern void EIF_Minit432(void);

#ifdef __cplusplus
}
#endif

#include "eif_eiffel.h"
#include "eif_debug.h"
#include "eif_macros.h"
#include "eif_internal.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F432_20317
static int inline_F432_20317 (EIF_POINTER arg1)
{
	return (int) (eif_is_expanded(HEADER(arg1)->ov_flags))
	;
}
#define INLINE_F432_20317
#endif
#ifndef INLINE_F432_20318
static EIF_INTEGER_32 inline_F432_20318 (EIF_NATURAL_32 arg1)
{
	return (EIF_INTEGER_32) (ei_eif_type((uint32) arg1))
	;
}
#define INLINE_F432_20318
#endif
#ifndef INLINE_F432_20319
static EIF_NATURAL_32 inline_F432_20319 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_NATURAL_32) (System(To_dtype(arg2)).cn_types[arg1])
	;
}
#define INLINE_F432_20319
#endif
#ifndef INLINE_F432_20322
static EIF_REFERENCE inline_F432_20322 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	return (EIF_REFERENCE) rt_dbg_stack_value((uint32)arg1, (uint32)arg2, (uint32)arg3, (uint32)arg4);
#else
	return NULL;
#endif
	;
}
#define INLINE_F432_20322
#endif
#ifndef INLINE_F432_20327
static EIF_INTEGER_32 inline_F432_20327 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_BOOL; a_val.it_bool = (EIF_BOOLEAN) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20327
#endif
#ifndef INLINE_F432_20328
static EIF_INTEGER_32 inline_F432_20328 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_CHAR; a_val.it_c1 = (EIF_CHARACTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20328
#endif
#ifndef INLINE_F432_20329
static EIF_INTEGER_32 inline_F432_20329 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_WCHAR; a_val.it_c4 = (EIF_WIDE_CHAR) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20329
#endif
#ifndef INLINE_F432_20330
static EIF_INTEGER_32 inline_F432_20330 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT8; a_val.it_n1 = (EIF_NATURAL_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20330
#endif
#ifndef INLINE_F432_20331
static EIF_INTEGER_32 inline_F432_20331 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT16; a_val.it_n2 = (EIF_NATURAL_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20331
#endif
#ifndef INLINE_F432_20332
static EIF_INTEGER_32 inline_F432_20332 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT32; a_val.it_n4 = (EIF_NATURAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20332
#endif
#ifndef INLINE_F432_20333
static EIF_INTEGER_32 inline_F432_20333 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT64; a_val.it_n8 = (EIF_NATURAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20333
#endif
#ifndef INLINE_F432_20334
static EIF_INTEGER_32 inline_F432_20334 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT8; a_val.it_i1 = (EIF_INTEGER_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20334
#endif
#ifndef INLINE_F432_20335
static EIF_INTEGER_32 inline_F432_20335 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT16; a_val.it_i2 = (EIF_INTEGER_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20335
#endif
#ifndef INLINE_F432_20336
static EIF_INTEGER_32 inline_F432_20336 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT32; a_val.it_i4 = (EIF_INTEGER_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20336
#endif
#ifndef INLINE_F432_20337
static EIF_INTEGER_32 inline_F432_20337 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT64; a_val.it_i8 = (EIF_INTEGER_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20337
#endif
#ifndef INLINE_F432_20338
static EIF_INTEGER_32 inline_F432_20338 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL32; a_val.it_r4 = (EIF_REAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20338
#endif
#ifndef INLINE_F432_20339
static EIF_INTEGER_32 inline_F432_20339 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL64; a_val.it_r8 = (EIF_REAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20339
#endif
#ifndef INLINE_F432_20340
static EIF_INTEGER_32 inline_F432_20340 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_POINTER; a_val.it_p = (EIF_POINTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20340
#endif
#ifndef INLINE_F432_20341
static EIF_INTEGER_32 inline_F432_20341 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_REF; 
	a_val.it_ref = (EIF_REFERENCE) &(arg4);
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20341
#endif
#ifndef INLINE_F432_20342
static EIF_INTEGER_32 inline_F432_20342 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_VOID; 
	a_val.it_ref = (char*) 0;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F432_20342
#endif
#ifndef INLINE_F432_20343
static void inline_F432_20343 (EIF_INTEGER_32 arg1)
{
	#ifdef WORKBENCH
	EIF_GET_CONTEXT; is_inside_rt_eiffel_code = arg1;
#endif
	;
}
#define INLINE_F432_20343
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_DBG_INTERNAL}.object_field_count */
EIF_TYPED_VALUE F432_20305 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "object_field_count";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 1, 14667);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14667);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10236, "set_object", tr1))(tr1, ur1x);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10122, "field_count", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {RT_DBG_INTERNAL}.object_records */
EIF_TYPED_VALUE F432_20306 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "object_records";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLR(6,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 431, Current, 4, 1, 14625);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14625);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ur1 = RTCCL(arg1);
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17533, dtype))(Current, ur1x)).it_i4);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(Current, 3, 0xF80001DC, 0, 0); /* loc3 */
		
		tr1 = RTLNSMART(eif_non_attached_type(RTWCT(17534, dtype, Dftype(Current))));
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(11444, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(7);
			ui4_1 = loc1;
			ur1 = RTCCL(arg1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17542, dtype))(Current, ui4_1x, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = RTCCL(tr1);
			if (EIF_TEST(loc4)) {
				RTHOOK(8);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9201, "extend", loc3))(loc3, ur1x);
			}
			RTHOOK(9);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
		}
		RTHOOK(10);
		RTDBGAL(Current, 0, 0xF80001DC, 0,0); /* Result */
		
		Result = (EIF_REFERENCE) RTCCL(loc3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {RT_DBG_INTERNAL}.object_is_expanded */
EIF_TYPED_VALUE F432_20307 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "object_is_expanded";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 1, 14626);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14626);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	up1 = arg1;
	Result = EIF_TEST ((((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17545, dtype))(Current, up1x))).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef arg1
}

/* {RT_DBG_INTERNAL}.field_index_at */
EIF_TYPED_VALUE F432_20308 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "field_index_at";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 431, Current, 2, 2, 14627);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14627);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80000E7, 0, 0); /* loc2 */
	
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10236, "set_object", loc2))(loc2, ur1x);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10122, "field_count", loc2))(loc2)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L)))) break;
		RTHOOK(6);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10083, "field_offset", loc2))(loc2, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			RTHOOK(7);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (EIF_INTEGER_32) loc1;
		}
		RTHOOK(8);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.field_name_at */
EIF_TYPED_VALUE F432_20309 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "field_name_at";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 431, Current, 1, 2, 14628);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14628);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ui4_1 = arg1;
	ur1 = RTCCL(arg2);
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17536, dtype))(Current, ui4_1x, ur1x)).it_i4);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10236, "set_object", tr1))(tr1, ur1x);
		RTHOOK(5);
		RTDBGAL(Current, 0, 0xF800015E, 0,0); /* Result */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = loc1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10082, "field_name", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.field_at */
EIF_TYPED_VALUE F432_20310 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "field_at";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 431, Current, 1, 3, 14629);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14629);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	uu4_1 = arg2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17540, dtype))(Current, uu4_1x)).it_i4);
	RTHOOK(4);
	switch (loc1) {
		case 3L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4203, 39))(Current, ui4_1x, up1x, ui4_2x)).it_b);
			Result = RTLN(337);
			*(EIF_BOOLEAN *)Result = tb1;
			break;
		case 2L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4201, 39))(Current, ui4_1x, up1x, ui4_2x)).it_c1);
			Result = RTLN(334);
			*(EIF_CHARACTER_8 *)Result = tc1;
			break;
		case 12L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4202, 39))(Current, ui4_1x, up1x, ui4_2x)).it_c4);
			Result = RTLN(331);
			*(EIF_CHARACTER_32 *)Result = tw1;
			break;
		case 13L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4204, 39))(Current, ui4_1x, up1x, ui4_2x)).it_n1);
			Result = RTLN(415);
			*(EIF_NATURAL_8 *)Result = tu1_1;
			break;
		case 14L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tu2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4205, 39))(Current, ui4_1x, up1x, ui4_2x)).it_n2);
			Result = RTLN(406);
			*(EIF_NATURAL_16 *)Result = tu2_1;
			break;
		case 15L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4206, 39))(Current, ui4_1x, up1x, ui4_2x)).it_n4);
			Result = RTLN(403);
			*(EIF_NATURAL_32 *)Result = tu4_1;
			break;
		case 16L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4207, 39))(Current, ui4_1x, up1x, ui4_2x)).it_n8);
			Result = RTLN(400);
			*(EIF_NATURAL_64 *)Result = tu8_1;
			break;
		case 9L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4208, 39))(Current, ui4_1x, up1x, ui4_2x)).it_i1);
			Result = RTLN(397);
			*(EIF_INTEGER_8 *)Result = ti1_1;
			break;
		case 10L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4209, 39))(Current, ui4_1x, up1x, ui4_2x)).it_i2);
			Result = RTLN(394);
			*(EIF_INTEGER_16 *)Result = ti2_1;
			break;
		case 4L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4210, 39))(Current, ui4_1x, up1x, ui4_2x)).it_i4);
			Result = RTLN(391);
			*(EIF_INTEGER_32 *)Result = ti4_1;
			break;
		case 11L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4211, 39))(Current, ui4_1x, up1x, ui4_2x)).it_i8);
			Result = RTLN(388);
			*(EIF_INTEGER_64 *)Result = ti8_1;
			break;
		case 5L:
			RTHOOK(16);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4212, 39))(Current, ui4_1x, up1x, ui4_2x)).it_r4);
			Result = RTLN(409);
			*(EIF_REAL_32 *)Result = tr4_1;
			break;
		case 6L:
			RTHOOK(17);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4214, 39))(Current, ui4_1x, up1x, ui4_2x)).it_r8);
			Result = RTLN(412);
			*(EIF_REAL_64 *)Result = tr8_1;
			break;
		case 0L:
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4213, 39))(Current, ui4_1x, up1x, ui4_2x)).it_p);
			Result = RTLN(340);
			*(EIF_POINTER *)Result = tp1;
			break;
		case 1L:
			RTHOOK(19);
			RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
			
			ui4_1 = arg1;
			up1 = arg3;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4200, 39))(Current, ui4_1x, up1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.stack_value_at */
EIF_TYPED_VALUE F432_20311 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "stack_value_at";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14630);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14630);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (
		WDBG(431,"rt_dbg_internal")
	) {
		RTHOOK(2);
		tr1 = RTMS_EX_H("\012stack_value_at (",17,878674216);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", ",2,11296);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg3);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", 0x",4,740307064);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = RTLN(403);
		*(EIF_NATURAL_32 *)tr2 = arg4;
		
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17002, "to_hex_string", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(")\012",2,10506);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	}
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF8000000, 0,0); /* Result */
	
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	uu4_1 = arg4;
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17550, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (
		WDBG(431,"rt_dbg_internal")
	) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("stack_value_at -> ",18,348891168);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(5);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H(" = ",3,2112800);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16511, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		} else {
			RTHOOK(7);
			tr1 = RTMS_EX_H("Void Result",11,255691380);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		}
		RTHOOK(8);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.eif_type */
EIF_TYPED_VALUE F432_20312 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_type";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 1, 14631);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(431, Current, 14631);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	uu4_1 = arg1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17546, Dtype(Current)))(Current, uu4_1x)).it_i4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uu4_1
#undef arg1
}

/* {RT_DBG_INTERNAL}.rt_dynamic_type */
EIF_TYPED_VALUE F432_20313 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "rt_dynamic_type";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 1, 14632);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14632);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	up1 = arg1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17548, dtype))(Current, up1x)).it_i4);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("rt_dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef arg1
}

/* {RT_DBG_INTERNAL}.object_record */
EIF_TYPED_VALUE F432_20314 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "object_record";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,ur2);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 431, Current, 2, 2, 14633);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14633);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80000E7, 0, 0); /* loc2 */
	
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10236, "set_object", loc2))(loc2, ur1x);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10084, "field_type", loc2))(loc2, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
	
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10083, "field_offset", loc2))(loc2, ui4_1x)).it_i4);
	ui4_1 = ti4_1;
	ui4_2 = arg1;
	ui4_3 = loc1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17547, dtype))(Current, ui4_2x, ui4_3x)).it_n4);
	uu4_1 = tu4_1;
	ur1 = RTCCL(arg2);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17543, dtype))(Current, ui4_1x, uu4_1x, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(6);
	switch (loc1) {
		case 9L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1063,397,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10096, "integer_8_field", loc2))(loc2, ui4_3x)).it_i1);
			ui1_1 = ti1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ui1_1x);
			RTNHOOK(7,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 10L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {820,394,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10097, "integer_16_field", loc2))(loc2, ui4_3x)).it_i2);
			ui2_1 = ti2_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ui2_1x);
			RTNHOOK(8,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 4L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1086,391,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10098, "integer_32_field", loc2))(loc2, ui4_3x)).it_i4);
			ui4_3 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
			RTNHOOK(9,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 11L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {796,388,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10099, "integer_64_field", loc2))(loc2, ui4_3x)).it_i8);
			ui8_1 = ti8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ui8_1x);
			RTNHOOK(10,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 13L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {816,415,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10092, "natural_8_field", loc2))(loc2, ui4_3x)).it_n1);
			uu1_1 = tu1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu1_1x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 14L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1046,406,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tu2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10093, "natural_16_field", loc2))(loc2, ui4_3x)).it_n2);
			uu2_1 = tu2_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu2_1x);
			RTNHOOK(12,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 15L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {750,403,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10094, "natural_32_field", loc2))(loc2, ui4_3x)).it_n4);
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x);
			RTNHOOK(13,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 16L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {968,400,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10095, "natural_64_field", loc2))(loc2, ui4_3x)).it_n8);
			uu8_1 = tu8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu8_1x);
			RTNHOOK(14,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 0L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {965,340,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10101, "pointer_field", loc2))(loc2, ui4_3x)).it_p);
			up1 = tp1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, up1x);
			RTNHOOK(15,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 1L:
			RTHOOK(16);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {926,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10069, "reference_field", loc2))(loc2, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ur2x);
			RTNHOOK(16,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 7L:
			RTHOOK(17);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {926,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10068, "field", loc2))(loc2, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ur2x);
			RTNHOOK(17,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 3L:
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {889,337,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10091, "boolean_field", loc2))(loc2, ui4_3x)).it_b);
			ub1 = tb1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ub1x);
			RTNHOOK(18,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 5L:
			RTHOOK(19);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1084,409,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10100, "real_32_field", loc2))(loc2, ui4_3x)).it_r4);
			ur4_1 = tr4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ur4_1x);
			RTNHOOK(19,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 6L:
			RTHOOK(20);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {972,412,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10102, "real_64_field", loc2))(loc2, ui4_3x)).it_r8);
			ur8_1 = tr8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, ur8_1x);
			RTNHOOK(20,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 2L:
			RTHOOK(21);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {854,334,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10089, "character_8_field", loc2))(loc2, ui4_3x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uc1x);
			RTNHOOK(21,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 12L:
			RTHOOK(22);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1052,331,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg2);
			ui4_1 = arg1;
			ui4_2 = loc1;
			ui4_3 = arg1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10090, "character_32_field", loc2))(loc2, ui4_3x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17709, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uw1x);
			RTNHOOK(22,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ui8_1
#undef uu8_1
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef uw1
#undef ui2_1
#undef uu2_1
#undef ui1_1
#undef uu1_1
#undef ub1
#undef uc1
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.object_attribute_record */
EIF_TYPED_VALUE F432_20315 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "object_attribute_record";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLR(6,ur2);
	RTLR(7,loc2);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 431, Current, 2, 3, 14634);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14634);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	uu4_1 = arg2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17540, dtype))(Current, uu4_1x)).it_i4);
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {890,337,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4203, 39))(Current, ui4_3x, up1x, ui4_4x)).it_b);
			ub1 = tb1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ub1x);
			RTNHOOK(4,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 2L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1059,334,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4201, 39))(Current, ui4_3x, up1x, ui4_4x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uc1x);
			RTNHOOK(5,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 12L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1056,331,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4202, 39))(Current, ui4_3x, up1x, ui4_4x)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uw1x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 9L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {810,397,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4208, 39))(Current, ui4_3x, up1x, ui4_4x)).it_i1);
			ui1_1 = ti1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ui1_1x);
			RTNHOOK(7,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 10L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {984,394,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4209, 39))(Current, ui4_3x, up1x, ui4_4x)).it_i2);
			ui2_1 = ti2_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ui2_1x);
			RTNHOOK(8,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 4L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1087,391,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4210, 39))(Current, ui4_3x, up1x, ui4_4x)).it_i4);
			ui4_3 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ui4_3x);
			RTNHOOK(9,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 11L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {800,388,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4211, 39))(Current, ui4_3x, up1x, ui4_4x)).it_i8);
			ui8_1 = ti8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ui8_1x);
			RTNHOOK(10,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 13L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {975,415,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4204, 39))(Current, ui4_3x, up1x, ui4_4x)).it_n1);
			uu1_1 = tu1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uu1_1x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 14L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1064,406,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tu2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4205, 39))(Current, ui4_3x, up1x, ui4_4x)).it_n2);
			uu2_1 = tu2_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uu2_1x);
			RTNHOOK(12,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 15L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {751,403,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4204, 39))(Current, ui4_3x, up1x, ui4_4x)).it_n1);
			tu4_1 = (EIF_NATURAL_32) tu1_1;
			uu4_2 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uu4_2x);
			RTNHOOK(13,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 16L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {969,400,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4204, 39))(Current, ui4_3x, up1x, ui4_4x)).it_n1);
			tu8_1 = (EIF_NATURAL_64) tu1_1;
			uu8_1 = tu8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, uu8_1x);
			RTNHOOK(14,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 5L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {977,409,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4212, 39))(Current, ui4_3x, up1x, ui4_4x)).it_r4);
			ur4_1 = tr4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ur4_1x);
			RTNHOOK(15,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 6L:
			RTHOOK(16);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {973,412,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4214, 39))(Current, ui4_3x, up1x, ui4_4x)).it_r8);
			ur8_1 = tr8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ur8_1x);
			RTNHOOK(16,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 0L:
			RTHOOK(17);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {923,340,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4213, 39))(Current, ui4_3x, up1x, ui4_4x)).it_p);
			up1 = tp1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, up1x);
			RTNHOOK(17,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 1L:
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {807,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			ui4_3 = arg1;
			up1 = arg3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4200, 39))(Current, ui4_3x, up1x, ui4_4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ur2x);
			RTNHOOK(18,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 7L:
			RTHOOK(19);
			RTDBGAL(Current, 2, 0xF80000E7, 0, 0); /* loc2 */
			
			tr1 = RTLN(231);
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10233, Dtype(tr1)))(tr1, ur1x, ui4_1x);
			RTNHOOK(19,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(20);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {807,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ur1 = RTCCL(arg3);
			ui4_1 = arg1;
			ui4_2 = loc1;
			uu4_1 = arg2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10062, "object", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17701, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x, uu4_1x, ur2x);
			RTNHOOK(20,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ui8_1
#undef uu8_1
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef uu4_2
#undef uw1
#undef ui2_1
#undef uu2_1
#undef ui1_1
#undef uu1_1
#undef ub1
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.object_local_record */
EIF_TYPED_VALUE F432_20316 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "object_local_record";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 431, Current, 1, 3, 14635);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(431, Current, 14635);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	uu4_1 = arg3;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17540, Dtype(Current)))(Current, uu4_1x)).it_i4);
	RTHOOK(2);
	switch (loc1) {
		case 3L:
			RTHOOK(3);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {642,337,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(3,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 2L:
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {856,334,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(4,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 12L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1057,331,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(5,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 13L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {976,415,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 14L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1065,406,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(7,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 15L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {752,403,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(8,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 16L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {970,400,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(9,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 9L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {814,397,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(10,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 10L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {985,394,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 4L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1088,391,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(12,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 11L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {966,388,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(13,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 5L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {1085,409,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(14,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 6L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {974,412,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(15,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 0L:
			RTHOOK(16);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {924,340,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(16,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 1L:
			RTHOOK(17);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {928,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(17,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 7L:
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF80001B2, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {928,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0);
			}
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = loc1;
			uu4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17691, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, uu4_1x);
			RTNHOOK(18,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case -2L:
			break;
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17688, "get_value", Result))(Result);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_object_is_expanded */
EIF_TYPED_VALUE F432_20317 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_object_is_expanded";
	RTEX;
#define arg1 arg1x.it_p
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 1, 14636);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14636);
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F432_20317 ((EIF_POINTER) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_eif_type */
EIF_TYPED_VALUE F432_20318 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_eif_type";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 1, 14637);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14637);
	RTIV(Current, RTAL);
	Result = inline_F432_20318 ((EIF_NATURAL_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_rt_field_type */
EIF_TYPED_VALUE F432_20319 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_rt_field_type";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 2, 14638);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14638);
	RTIV(Current, RTAL);
	Result = inline_F432_20319 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_rt_dynamic_type */
EIF_TYPED_VALUE F432_20320 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_rt_dynamic_type";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 1, 14639);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14639);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) Dtype(((EIF_REFERENCE) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {RT_DBG_INTERNAL}.set_field_at */
void F432_20321 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "set_field_at";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,arg4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,arg3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_CHAR8, &loc3);
	RTLU(SK_CHAR32, &loc4);
	RTLU(SK_UINT8, &loc5);
	RTLU(SK_UINT16, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT64, &loc8);
	RTLU(SK_INT8, &loc9);
	RTLU(SK_INT16, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT64, &loc12);
	RTLU(SK_REAL32, &loc13);
	RTLU(SK_REAL64, &loc14);
	RTLU(SK_POINTER, &loc15);
	
	RTEAA(l_feature_name, 431, Current, 15, 4, 14640);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14640);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (
		WDBG(431,"rt_dbg_internal")
	) {
		RTHOOK(2);
		tr1 = RTMS_EX_H("set_field_at (",14,2075087144);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", ",2,11296);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outu(arg2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", value, ",9,1878132512);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7, "generator", arg4))(arg4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(") \012",3,2695178);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	}
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	uu4_1 = arg2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17540, dtype))(Current, uu4_1x)).it_i4);
	RTHOOK(4);
	switch (loc1) {
		case 3L:
			RTHOOK(5);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_BOOLEAN *), 337, tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(6);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ub1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4239, 39))(Current, ui4_1x, up1x, ui4_2x, ub1x);
			}
			break;
		case 2L:
			RTHOOK(7);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_8 *), 334, tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(8);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uc1 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4237, 39))(Current, ui4_1x, up1x, ui4_2x, uc1x);
			}
			break;
		case 12L:
			RTHOOK(9);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_32 *), 331, tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(10);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uw1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4238, 39))(Current, ui4_1x, up1x, ui4_2x, uw1x);
			}
			break;
		case 13L:
			RTHOOK(11);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_8 *), 415, tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(12);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uu1_1 = loc5;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4240, 39))(Current, ui4_1x, up1x, ui4_2x, uu1_1x);
			}
			break;
		case 14L:
			RTHOOK(13);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_16 *), 406, tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(14);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uu2_1 = loc6;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4241, 39))(Current, ui4_1x, up1x, ui4_2x, uu2_1x);
			}
			break;
		case 15L:
			RTHOOK(15);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_32 *), 403, tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(16);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uu4_1 = loc7;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4242, 39))(Current, ui4_1x, up1x, ui4_2x, uu4_1x);
			}
			break;
		case 16L:
			RTHOOK(17);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_64 *), 400, tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(18);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				uu8_1 = loc8;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4243, 39))(Current, ui4_1x, up1x, ui4_2x, uu8_1x);
			}
			break;
		case 9L:
			RTHOOK(19);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_8 *), 397, tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(20);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ui1_1 = loc9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4244, 39))(Current, ui4_1x, up1x, ui4_2x, ui1_1x);
			}
			break;
		case 10L:
			RTHOOK(21);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_16 *), 394, tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(22);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ui2_1 = loc10;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4245, 39))(Current, ui4_1x, up1x, ui4_2x, ui2_1x);
			}
			break;
		case 4L:
			RTHOOK(23);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_32 *), 391, tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(24);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ui4_3 = loc11;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4246, 39))(Current, ui4_1x, up1x, ui4_2x, ui4_3x);
			}
			break;
		case 11L:
			RTHOOK(25);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_64 *), 388, tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(26);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ui8_1 = loc12;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4247, 39))(Current, ui4_1x, up1x, ui4_2x, ui8_1x);
			}
			break;
		case 5L:
			RTHOOK(27);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_32 *), 409, tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(28);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ur4_1 = loc13;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4248, 39))(Current, ui4_1x, up1x, ui4_2x, ur4_1x);
			}
			break;
		case 6L:
			RTHOOK(29);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_64 *), 412, tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(30);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ur8_1 = loc14;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4236, 39))(Current, ui4_1x, up1x, ui4_2x, ur8_1x);
			}
			break;
		case 0L:
			RTHOOK(31);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_POINTER *), 340, tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(32);
				ui4_1 = arg1;
				up1 = arg4;
				ui4_2 = ((EIF_INTEGER_32) 0L);
				up2 = loc15;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4249, 39))(Current, ui4_1x, up1x, ui4_2x, up2x);
			}
			break;
		case 1L:
			RTHOOK(33);
			ui4_1 = arg1;
			up1 = arg4;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ur1 = RTCCL(arg3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4235, 39))(Current, ui4_1x, up1x, ui4_2x, ur1x);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(21);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur8_1
#undef ui8_1
#undef uu8_1
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef uw1
#undef ui2_1
#undef uu2_1
#undef ui1_1
#undef uu1_1
#undef ub1
#undef uc1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_stack_value_at */
EIF_TYPED_VALUE F432_20322 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_stack_value_at";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n4
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14641);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14641);
	RTIV(Current, RTAL);
	Result = inline_F432_20322 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.rt_dlt_argument */
EIF_TYPED_VALUE F432_20323 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {RT_DBG_INTERNAL}.rt_dlt_localvar */
EIF_TYPED_VALUE F432_20324 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {RT_DBG_INTERNAL}.rt_dlt_result */
EIF_TYPED_VALUE F432_20325 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {RT_DBG_INTERNAL}.set_stack_value_at */
EIF_TYPED_VALUE F432_20326 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "set_stack_value_at";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,arg5);
	RTLR(6,loc16);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_CHAR8, &loc3);
	RTLU(SK_CHAR32, &loc4);
	RTLU(SK_UINT8, &loc5);
	RTLU(SK_UINT16, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT64, &loc8);
	RTLU(SK_INT8, &loc9);
	RTLU(SK_INT16, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT64, &loc12);
	RTLU(SK_REAL32, &loc13);
	RTLU(SK_REAL64, &loc14);
	RTLU(SK_POINTER, &loc15);
	RTLU(SK_REF, &loc16);
	
	RTEAA(l_feature_name, 431, Current, 16, 5, 14645);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14645);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_loc_type_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17552, dtype))(Current)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17551, dtype))(Current)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17553, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ti4_1) || (EIF_BOOLEAN)(arg2 == ti4_2)) || (EIF_BOOLEAN)(arg2 == ti4_3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (
		WDBG(431,"rt_dbg_internal")
	) {
		RTHOOK(2);
		tr1 = RTMS_EX_H("set_stack_value_at (dep=",24,74260029);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", loc_type=",11,772119869);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", pos=",6,1973105469);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg3);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", type=0x",9,647660408);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = RTLN(403);
		*(EIF_NATURAL_32 *)tr2 = arg4;
		
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17002, "to_hex_string", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", value=",8,988801853);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(3);
		if ((EIF_BOOLEAN)(arg5 == NULL)) {
			RTHOOK(4);
			tr1 = RTMS_EX_H("Void) \012",7,87599370);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H(": ",2,14880);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16511, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", arg5))(arg5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H(") \012",3,2695178);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		}
	}
	RTHOOK(6);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	uu4_1 = arg4;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17540, dtype))(Current, uu4_1x)).it_i4);
	RTHOOK(7);
	switch (loc1) {
		case 3L:
			RTHOOK(8);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_BOOLEAN *), 337, tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(9);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ub1 = loc2;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17555, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ub1x)).it_i4);
			}
			break;
		case 2L:
			RTHOOK(10);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_8 *), 334, tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(11);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uc1 = loc3;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17556, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uc1x)).it_i4);
			}
			break;
		case 12L:
			RTHOOK(12);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_32 *), 331, tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(13);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uw1 = loc4;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17557, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uw1x)).it_i4);
			}
			break;
		case 13L:
			RTHOOK(14);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_8 *), 415, tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(15);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uu1_1 = loc5;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17558, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu1_1x)).it_i4);
			}
			break;
		case 14L:
			RTHOOK(16);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_16 *), 406, tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(17);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uu2_1 = loc6;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17559, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu2_1x)).it_i4);
			}
			break;
		case 15L:
			RTHOOK(18);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_32 *), 403, tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(19);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uu4_1 = loc7;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17560, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu4_1x)).it_i4);
			}
			break;
		case 16L:
			RTHOOK(20);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_64 *), 400, tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(21);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				uu8_1 = loc8;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17561, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu8_1x)).it_i4);
			}
			break;
		case 9L:
			RTHOOK(22);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_8 *), 397, tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(23);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ui1_1 = loc9;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17562, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui1_1x)).it_i4);
			}
			break;
		case 10L:
			RTHOOK(24);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_16 *), 394, tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(25);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ui2_1 = loc10;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17563, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui2_1x)).it_i4);
			}
			break;
		case 4L:
			RTHOOK(26);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_32 *), 391, tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(27);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ui4_4 = loc11;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17564, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_i4);
			}
			break;
		case 11L:
			RTHOOK(28);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_64 *), 388, tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(29);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ui8_1 = loc12;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17565, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui8_1x)).it_i4);
			}
			break;
		case 5L:
			RTHOOK(30);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_32 *), 409, tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(31);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ur4_1 = loc13;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17566, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ur4_1x)).it_i4);
			}
			break;
		case 6L:
			RTHOOK(32);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_64 *), 412, tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(33);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				ur8_1 = loc14;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17567, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ur8_1x)).it_i4);
			}
			break;
		case 0L:
			RTHOOK(34);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_POINTER *), 340, tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(35);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				up1 = loc15;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17568, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, up1x)).it_i4);
			}
			break;
		case 1L:
			RTHOOK(36);
			if ((EIF_BOOLEAN)(arg5 != NULL)) {
				RTHOOK(37);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				up1 = arg5;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17569, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, up1x)).it_i4);
			} else {
				RTHOOK(38);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg3;
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17570, dtype))(Current, ui4_1x, ui4_2x, ui4_3x)).it_i4);
			}
			break;
		default:
			RTHOOK(39);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
	}
	if (
		WDBG(431,"rt_dbg_internal")
	) {
		RTHOOK(40);
		tr1 = RTMS_EX_H("set_stack_value_at (dep=",24,74260029);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", loc_type=",11,772119869);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", pos=",6,1973105469);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg3);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", ...) -> ",10,717919008);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(Result);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(" \012",2,8202);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(41);
		tr1 = RTMS_EX_H("set_stack_value_at: check modification -> ",42,1517544736);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(42);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = arg3;
		uu4_1 = arg4;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17539, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc16 = RTCCL(tr1);
		if (EIF_TEST(loc16)) {
			RTHOOK(43);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", loc16))(loc16)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H(": ",2,14880);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16511, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc16))(loc16)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H("\012",1,10);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		} else {
			RTHOOK(44);
			tr1 = RTMS_EX_H(" Void \012",7,864393738);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(23);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ur8_1
#undef ui8_1
#undef uu8_1
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef uw1
#undef ui2_1
#undef uu2_1
#undef ui1_1
#undef uu1_1
#undef ub1
#undef uc1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_boolean_stack_value */
EIF_TYPED_VALUE F432_20327 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_boolean_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_b
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_b = * (EIF_BOOLEAN *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_BOOL,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14646);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14646);
	RTIV(Current, RTAL);
	Result = inline_F432_20327 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_BOOLEAN) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_character_8_stack_value */
EIF_TYPED_VALUE F432_20328 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_character_8_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_c1
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_c1 = * (EIF_CHARACTER_8 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_CHAR8,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14647);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14647);
	RTIV(Current, RTAL);
	Result = inline_F432_20328 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_character_32_stack_value */
EIF_TYPED_VALUE F432_20329 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_character_32_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_c4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_c4 = * (EIF_CHARACTER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_CHAR32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14648);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14648);
	RTIV(Current, RTAL);
	Result = inline_F432_20329 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_natural_8_stack_value */
EIF_TYPED_VALUE F432_20330 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_natural_8_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n1
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n1 = * (EIF_NATURAL_8 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT8,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14649);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14649);
	RTIV(Current, RTAL);
	Result = inline_F432_20330 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_natural_16_stack_value */
EIF_TYPED_VALUE F432_20331 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_natural_16_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n2
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n2 = * (EIF_NATURAL_16 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT16,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14650);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14650);
	RTIV(Current, RTAL);
	Result = inline_F432_20331 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_natural_32_stack_value */
EIF_TYPED_VALUE F432_20332 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_natural_32_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14651);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14651);
	RTIV(Current, RTAL);
	Result = inline_F432_20332 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_natural_64_stack_value */
EIF_TYPED_VALUE F432_20333 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_natural_64_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n8
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n8 = * (EIF_NATURAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT64,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14652);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14652);
	RTIV(Current, RTAL);
	Result = inline_F432_20333 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_integer_8_stack_value */
EIF_TYPED_VALUE F432_20334 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_integer_8_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i1
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i1 = * (EIF_INTEGER_8 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT8,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14653);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14653);
	RTIV(Current, RTAL);
	Result = inline_F432_20334 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_integer_16_stack_value */
EIF_TYPED_VALUE F432_20335 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_integer_16_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i2
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i2 = * (EIF_INTEGER_16 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT16,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14654);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14654);
	RTIV(Current, RTAL);
	Result = inline_F432_20335 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_integer_32_stack_value */
EIF_TYPED_VALUE F432_20336 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_integer_32_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14655);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14655);
	RTIV(Current, RTAL);
	Result = inline_F432_20336 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_integer_64_stack_value */
EIF_TYPED_VALUE F432_20337 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_integer_64_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i8
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i8 = * (EIF_INTEGER_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT64,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14656);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14656);
	RTIV(Current, RTAL);
	Result = inline_F432_20337 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_real_32_stack_value */
EIF_TYPED_VALUE F432_20338 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_real_32_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r4 = * (EIF_REAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14657);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14657);
	RTIV(Current, RTAL);
	Result = inline_F432_20338 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_real_64_stack_value */
EIF_TYPED_VALUE F432_20339 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_real_64_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r8
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14658);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14658);
	RTIV(Current, RTAL);
	Result = inline_F432_20339 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_pointer_stack_value */
EIF_TYPED_VALUE F432_20340 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_pointer_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14659);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14659);
	RTIV(Current, RTAL);
	Result = inline_F432_20340 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_reference_stack_value */
EIF_TYPED_VALUE F432_20341 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_reference_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_p
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 4, 14660);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(431, Current, 14660);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ref_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg4 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F432_20341 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_set_void_stack_value */
EIF_TYPED_VALUE F432_20342 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_set_void_stack_value";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 3, 14661);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14661);
	RTIV(Current, RTAL);
	Result = inline_F432_20342 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {RT_DBG_INTERNAL}.c_rt_set_is_inside_rt_eiffel_code */
void F432_20343 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_rt_set_is_inside_rt_eiffel_code";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 1, 14662);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(431, Current, 14662);
	RTIV(Current, RTAL);
	inline_F432_20343 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {RT_DBG_INTERNAL}.test_locals */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F432_20344 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "test_locals";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTXI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,arg3);
	RTLR(5,tr3);
	RTLR(6,Current);
	RTLR(7,loc3);
	RTLR(8,saved_except);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_REF, &loc3);
	RTLXL;
	
	RTEAA(l_feature_name, 431, Current, 3, 4, 14663);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14663);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc2) {
		RTHOOK(2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17571, dtype))(Current, ui4_1x);
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF800015E, 0, 0); /* loc1 */
		
		loc1 = RTMS_EX_H("----------------------------------\012",35,1470523914);
		RTHOOK(4);
		tr1 = RTMS_EX_H("Loc #",5,1869350947);
		tr2 = c_outi(arg2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H("(stack depth=",13,1888178493);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(")",1,41);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTMS_EX_H(": should be ",12,282022432);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16516, "to_string_8", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		}
		RTHOOK(7);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		RTHOOK(8);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(9);
		tr1 = RTMS_EX_H(" -> ",4,539835936);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		RTHOOK(10);
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17552, dtype))(Current)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = arg2;
		uu4_1 = arg4;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17539, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H("=",1,61);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16511, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		} else {
			RTHOOK(12);
			tr1 = RTMS_EX_H("Void object",11,160638836);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		}
		RTHOOK(13);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		RTHOOK(14);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(15);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17571, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(17);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17571, dtype))(Current, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXS(9);
	RTHOOK(18);
	RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTXE;
	RTLO(9);
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.test_set_local */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F432_20345 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "test_set_local";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTXI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,arg3);
	RTLR(5,tr3);
	RTLR(6,Current);
	RTLR(7,saved_except);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLXL;
	
	RTEAA(l_feature_name, 431, Current, 3, 4, 14664);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(431, Current, 14664);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc3) {
		RTHOOK(2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17571, dtype))(Current, ui4_1x);
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF800015E, 0, 0); /* loc1 */
		
		loc1 = RTMS_EX_H("----------------------------------\012",35,1470523914);
		RTHOOK(4);
		tr1 = RTMS_EX_H("SetLoc #",8,1411988515);
		tr2 = c_outi(arg2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H("(stack depth=",13,1888178493);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = c_outi(arg1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(")",1,41);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTMS_EX_H(": value ",8,992027424);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16516, "to_string_8", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		} else {
			RTHOOK(7);
			tr1 = RTMS_EX_H(": value Void",12,962399588);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		}
		RTHOOK(8);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		RTHOOK(9);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(10);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17552, dtype))(Current)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = arg2;
		uu4_1 = arg4;
		ur1 = RTCCL(arg3);
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17554, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu4_1x, ur1x)).it_i4);
		RTHOOK(11);
		tr1 = RTMS_EX_H(" -> ",4,539835936);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		RTHOOK(12);
		tr1 = RTMS_EX_H("Result = ",9,495958816);
		tr2 = c_outi(loc2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15043, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		RTHOOK(13);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15223, "append", loc1))(loc1, ur1x);
		RTHOOK(14);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(15);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17571, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(17);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17571, dtype))(Current, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXS(8);
	RTHOOK(18);
	RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTXE;
	RTLO(9);
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.reflected_object */
RTOID (F432_20346)
EIF_TYPED_VALUE F432_20346 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reflected_object";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F432_20346);

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 0, 14665);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(431, Current, 14665);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E7, 0,0); /* Result */
	
	tr1 = RTLN(231);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(10231, Dtype(tr1)))(tr1, ur1x);
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
#undef ur1
#undef Result
}

/* {RT_DBG_INTERNAL}.reflector */
RTOID (F432_20347)
EIF_TYPED_VALUE F432_20347 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reflector";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F432_20347);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 431, Current, 0, 0, 14666);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(431, Current, 14666);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
	
	tr1 = RTLN(228);
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

void EIF_Minit432 (void)
{
	GTCX
	RTOTS (20346,F432_20346)
	RTOTS (20347,F432_20347)
}


#ifdef __cplusplus
}
#endif

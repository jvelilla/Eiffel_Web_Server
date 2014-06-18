/*
 * Code for class JSON_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js423.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_OBJECT}.make */
void F1020_19945 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {696,982,986,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F697_13000(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {JSON_OBJECT}.put */
void F1020_19946 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,arg2);
	
	RTGC;
	loc1 = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNS(985, 985, _OBJSIZ_0_0_0_0_0_0_0_0_);
		loc1 = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	F697_13046(RTCV(tr1), loc1, arg2);
	RTLE;
}

/* {JSON_OBJECT}.put_string */
void F1020_19947 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,arg2);
	RTLR(5,Current);
	
	RTGC;
	tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr2 = F885_17052(RTCV(arg1));
	F987_19043(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	F1020_19946(Current, loc1, arg2);
	RTLE;
}

/* {JSON_OBJECT}.put_integer */
void F1020_19948 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(983, 983, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F984_19018(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	F1020_19946(Current, loc1, arg2);
	RTLE;
}

/* {JSON_OBJECT}.put_boolean */
void F1020_19951 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(984, 984, _OBJSIZ_0_1_0_0_0_0_0_0_);
	F985_19031(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	F1020_19946(Current, loc1, arg2);
	RTLE;
}

/* {JSON_OBJECT}.representation */
EIF_REFERENCE F1020_19964 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 2L));
	Result = (EIF_REFERENCE) tr1;
	F893_17391(RTCV(Result), (EIF_CHARACTER_8) '{');
	loc1 = F1020_19969(Current);
	F697_13037(RTCV(loc1));
	for (;;) {
		tb1 = F697_13032(RTCV(loc1));
		if (tb1) break;
		tr1 = F697_13011(RTCV(loc1));
		tr1 = F987_19048(RTCV(tr1));
		F893_17377(RTCV(Result), tr1);
		F893_17391(RTCV(Result), (EIF_CHARACTER_8) ':');
		tr1 = F697_13010(RTCV(loc1));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16741[Dtype(tr1)-983])(RTCV(tr1));
		F893_17377(RTCV(Result), tr1);
		F697_13038(RTCV(loc1));
		tb2 = F697_13032(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb2) {
			F893_17391(RTCV(Result), (EIF_CHARACTER_8) ',');
		}
	}
	F893_17391(RTCV(Result), (EIF_CHARACTER_8) '}');
	RTLE;
	return Result;
}

/* {JSON_OBJECT}.new_cursor */
EIF_REFERENCE F1020_19966 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F697_13013(RTCV(tr1));
	RTLE;
	return Result;
}

/* {JSON_OBJECT}.map_representation */
EIF_REFERENCE F1020_19969 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {JSON_OBJECT}.hash_code */
EIF_INTEGER_32 F1020_19970 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F697_13037(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = F1_25(RTCV(tr1));
	Result = F885_17002(RTCV(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = F697_13033(RTCV(tr1));
		if (tb1) break;
		ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L))),((EIF_INTEGER_32) 8L));
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F697_13010(RTCV(tr1));
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R14689[Dtype(tr1)-822])(RTCV(tr1));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
		tr1 = *(EIF_REFERENCE *)(Current);
		F697_13038(RTCV(tr1));
	}
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	RTLE;
	return (EIF_INTEGER_32) Result;
}

/* {JSON_OBJECT}.object */
EIF_REFERENCE F1020_19972 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit423 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

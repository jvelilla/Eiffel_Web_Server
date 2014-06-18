/*
 * Code for class HTTP_HEADER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht292.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_HEADER}.make */
void F649_12064 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F649_12065(Current, ((EIF_INTEGER_32) 3L));
}

/* {HTTP_HEADER}.make_with_count */
void F649_12065 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {802,888,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F803_12632(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {HTTP_HEADER}.count */
EIF_INTEGER_32 F649_12070 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F803_12653(RTCV(tr1));
	RTLE;
	return Result;
}

/* {HTTP_HEADER}.headers */
EIF_REFERENCE F649_12072 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {HTTP_HEADER}.string */
EIF_REFERENCE F649_12073 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc1 = F649_12070(Current);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F885_16993(RTCV(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F889_17162(RTCV(tr1), (EIF_INTEGER_32) (loc1 * ((EIF_INTEGER_32) 32L)));
		Result = (EIF_REFERENCE) tr1;
		F649_12075(Current, Result);
	}
	RTLE;
	return Result;
}

/* {HTTP_HEADER}.append_string_to */
void F649_12075 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	tb1 = F316_9603(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		loc2 = F682_12245(RTCV(loc1));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc2)-646])(RTCV(loc2));
			if (tb1) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc2)-646])(RTCV(loc2));
			F649_12159(Current, tr1, arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc2)-646])(RTCV(loc2));
		}
	}
	RTLE;
}

/* {HTTP_HEADER}.new_cursor */
EIF_REFERENCE F649_12076 (EIF_REFERENCE Current)
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
	Result = F682_12245(RTCV(tr1));
	RTLE;
	return Result;
}

/* {HTTP_HEADER}.put_raw_header_data */
void F649_12080 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,loc1);
	
	RTGC;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
	loc2 = F885_17071(RTCV(arg1), tw1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F803_12653(RTCV(tr2));
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[Dtype(loc2)-601])(RTCV(loc2));
	F803_12679(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + ti4_2));
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11074[Dtype(loc2)-644])(RTCV(loc2));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc3)-646])(RTCV(loc3));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
		loc1 = F885_17049(RTCV(tr1));
		tb2 = F324_9603(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			tc1 = F893_17342(RTCV(loc1), ti4_1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) {
				F893_17400(RTCV(loc1), ((EIF_INTEGER_32) 1L));
			}
			F649_12091(Current, loc1);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc3)-646])(RTCV(loc3));
	}
	RTLE;
}

/* {HTTP_HEADER}.add_header */
void F649_12090 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F803_12671(RTCV(tr1), arg1);
	RTLE;
}

/* {HTTP_HEADER}.put_header */
void F649_12091 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F649_12157(Current, arg1);
	F649_12156(Current, tr1, arg1);
	RTLE;
}

/* {HTTP_HEADER}.add_header_key_value */
void F649_12092 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,Current);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg2) + O15187[Dtype(arg2)-888]);
	F889_17162(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)) + ti4_2));
	loc1 = (EIF_REFERENCE) tr1;
	F893_17377(RTCV(loc1), arg1);
	tr1 = RTOUCR(45,F649_12164,(Current));
	F893_17377(RTCV(loc1), tr1);
	F893_17377(RTCV(loc1), arg2);
	F649_12090(Current, loc1);
	RTLE;
}

/* {HTTP_HEADER}.put_header_key_value */
void F649_12093 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,Current);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg2) + O15187[Dtype(arg2)-888]);
	F889_17162(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)) + ti4_2));
	loc1 = (EIF_REFERENCE) tr1;
	F893_17377(RTCV(loc1), arg1);
	tr1 = RTOUCR(45,F649_12164,(Current));
	F893_17377(RTCV(loc1), tr1);
	F893_17377(RTCV(loc1), arg2);
	F649_12091(Current, loc1);
	RTLE;
}

/* {HTTP_HEADER}.put_header_key_values */
void F649_12094 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg3);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLR(6,arg2);
	RTLR(7,arg1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg3 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(arg3)-887])(RTCV(arg3));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		loc2 = (EIF_REFERENCE) arg3;
	} else {
		loc2 = RTOUCR(46,F649_12166,(Current));
	}
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11074[Dtype(arg2)-644])(RTCV(arg2));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc3)-646])(RTCV(loc3));
		if (tb1) break;
		tb2 = F324_9603(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb2) {
			F893_17380(RTCV(loc1), loc2);
		}
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
		F893_17377(RTCV(loc1), tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc3)-646])(RTCV(loc3));
	}
	tb2 = F324_9603(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb2) {
		F649_12093(Current, arg1, loc1);
	}
	RTLE;
}

/* {HTTP_HEADER}.put_content_type */
void F649_12095 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOUCR(47,F93_6784,(Current));
	F649_12093(Current, tr1, arg1);
	RTLE;
}

/* {HTTP_HEADER}.put_content_length */
void F649_12103 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = RTOUCR(48,F93_6782,(Current));
	tr2 = c_outi(arg1);
	F649_12093(Current, tr1, tr2);
	RTLE;
}

/* {HTTP_HEADER}.put_transfer_encoding */
void F649_12107 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOUCR(49,F93_6774,(Current));
	F649_12093(Current, tr1, arg1);
	RTLE;
}

/* {HTTP_HEADER}.put_transfer_encoding_chunked */
void F649_12109 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOUCR(50,F649_12163,(Current));
	F649_12107(Current, tr1);
	RTLE;
}

/* {HTTP_HEADER}.put_content_type_text_html */
void F649_12113 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOUCR(51,F153_8138,(Current));
	F649_12095(Current, tr1);
	RTLE;
}

/* {HTTP_HEADER}.put_content_type_text_plain */
void F649_12116 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOUCR(52,F153_8141,(Current));
	F649_12095(Current, tr1);
	RTLE;
}

/* {HTTP_HEADER}.put_allow */
void F649_12138 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOUCR(53,F93_6755,(Current));
	F649_12094(Current, tr1, arg1, NULL);
	RTLE;
}

/* {HTTP_HEADER}.put_date */
void F649_12139 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOUCR(54,F93_6785,(Current));
	F649_12093(Current, tr1, arg1);
	RTLE;
}

/* {HTTP_HEADER}.put_current_date */
void F649_12140 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(1090, 1090, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F1091_21056(RTCV(tr1));
	F649_12141(Current, tr1);
	RTLE;
}

/* {HTTP_HEADER}.put_utc_date */
void F649_12141 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F649_12161(Current, arg1);
	F649_12139(Current, tr1);
	RTLE;
}

/* {HTTP_HEADER}.put_last_modified */
void F649_12142 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = RTOUCR(55,F93_6763,(Current));
	tr2 = F649_12161(Current, arg1);
	F649_12093(Current, tr1, tr2);
	RTLE;
}

/* {HTTP_HEADER}.put_expires_date */
void F649_12146 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = RTMS_EX_H("Expires",7,227574899);
	tr2 = F649_12161(Current, arg1);
	F649_12093(Current, tr1, tr2);
	RTLE;
}

/* {HTTP_HEADER}.put_cache_control */
void F649_12147 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTMS_EX_H("Cache-Control",13,1776397420);
	F649_12093(Current, tr1, arg1);
	RTLE;
}

/* {HTTP_HEADER}.force_header_by_name */
void F649_12156 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,arg2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(Current);
		F803_12662(RTCV(loc1));
		for (;;) {
			tb1 = '\01';
			tb2 = F767_12451(RTCV(loc1));
			if (!tb2) {
				tr1 = F803_12636(RTCV(loc1));
				tb2 = F889_17195(RTCV(tr1), arg1);
				tb1 = tb2;
			}
			if (tb1) break;
			F803_12664(RTCV(loc1));
		}
		tb2 = F767_12451(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb2) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9246[Dtype(loc1)-802])(RTCV(loc1), arg2);
		} else {
			F649_12090(Current, arg2);
		}
	} else {
		F649_12090(Current, arg2);
	}
	RTLE;
}

/* {HTTP_HEADER}.header_name_colon */
EIF_REFERENCE F649_12157 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || (EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) ':')) || (EIF_BOOLEAN)(loc1 == NULL))) break;
		loc4 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc2));
		switch (loc4) {
			case (EIF_CHARACTER_8) ':':
				F893_17392(RTCV(loc1), loc4);
				break;
			case (EIF_CHARACTER_8) '-':
			case (EIF_CHARACTER_8) 'A':
			case (EIF_CHARACTER_8) 'B':
			case (EIF_CHARACTER_8) 'C':
			case (EIF_CHARACTER_8) 'D':
			case (EIF_CHARACTER_8) 'E':
			case (EIF_CHARACTER_8) 'F':
			case (EIF_CHARACTER_8) 'G':
			case (EIF_CHARACTER_8) 'H':
			case (EIF_CHARACTER_8) 'I':
			case (EIF_CHARACTER_8) 'J':
			case (EIF_CHARACTER_8) 'K':
			case (EIF_CHARACTER_8) 'L':
			case (EIF_CHARACTER_8) 'M':
			case (EIF_CHARACTER_8) 'N':
			case (EIF_CHARACTER_8) 'O':
			case (EIF_CHARACTER_8) 'P':
			case (EIF_CHARACTER_8) 'Q':
			case (EIF_CHARACTER_8) 'R':
			case (EIF_CHARACTER_8) 'S':
			case (EIF_CHARACTER_8) 'T':
			case (EIF_CHARACTER_8) 'U':
			case (EIF_CHARACTER_8) 'V':
			case (EIF_CHARACTER_8) 'W':
			case (EIF_CHARACTER_8) 'X':
			case (EIF_CHARACTER_8) 'Y':
			case (EIF_CHARACTER_8) 'Z':
			case (EIF_CHARACTER_8) 'a':
			case (EIF_CHARACTER_8) 'b':
			case (EIF_CHARACTER_8) 'c':
			case (EIF_CHARACTER_8) 'd':
			case (EIF_CHARACTER_8) 'e':
			case (EIF_CHARACTER_8) 'f':
			case (EIF_CHARACTER_8) 'g':
			case (EIF_CHARACTER_8) 'h':
			case (EIF_CHARACTER_8) 'i':
			case (EIF_CHARACTER_8) 'j':
			case (EIF_CHARACTER_8) 'k':
			case (EIF_CHARACTER_8) 'l':
			case (EIF_CHARACTER_8) 'm':
			case (EIF_CHARACTER_8) 'n':
			case (EIF_CHARACTER_8) 'o':
			case (EIF_CHARACTER_8) 'p':
			case (EIF_CHARACTER_8) 'q':
			case (EIF_CHARACTER_8) 'r':
			case (EIF_CHARACTER_8) 's':
			case (EIF_CHARACTER_8) 't':
			case (EIF_CHARACTER_8) 'u':
			case (EIF_CHARACTER_8) 'v':
			case (EIF_CHARACTER_8) 'w':
			case (EIF_CHARACTER_8) 'x':
			case (EIF_CHARACTER_8) 'y':
			case (EIF_CHARACTER_8) 'z':
				F893_17392(RTCV(loc1), loc4);
				break;
			default:
				loc1 = (EIF_REFERENCE) NULL;
				break;
		}
		loc2++;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {HTTP_HEADER}.append_line_to */
void F649_12159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	F893_17380(RTCV(arg2), arg1);
	F649_12160(Current, arg2);
	RTLE;
}

/* {HTTP_HEADER}.append_end_of_line_to */
void F649_12160 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	F893_17391(RTCV(arg1), (EIF_CHARACTER_8) '\015');
	F893_17391(RTCV(arg1), (EIF_CHARACTER_8) '\012');
	RTLE;
}

/* {HTTP_HEADER}.date_to_rfc1123_http_date_format */
EIF_REFERENCE F649_12161 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(900, 900, _OBJSIZ_2_1_0_0_0_0_1_0_);
	F901_18530(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = F901_18534(RTCV(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {HTTP_HEADER}.str_chunked */

EIF_REFERENCE F649_12163 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (50,RTMS_EX_H("chunked",7,346719076));
}

/* {HTTP_HEADER}.colon_space */
static EIF_REFERENCE F649_12164_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(45)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(889, 889, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H(": ",2,14880);
	F889_17164(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F649_12164 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(45,F649_12164_body,(Current));
}

/* {HTTP_HEADER}.comma_space */
static EIF_REFERENCE F649_12166_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(46)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(889, 889, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H(", ",2,11296);
	F889_17164(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F649_12166 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(46,F649_12166_body,(Current));
}

void EIF_Minit292 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

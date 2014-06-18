/*
 * Code for class WSF_REQUEST
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws366.h"
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

/* {WSF_REQUEST}.make_from_wgi */
void F902_18560 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,tr2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_13_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {703,981,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_7_4_0_6_);
		F697_13001(RTCV(tr1), ti4_1);
		loc1 = (EIF_REFERENCE) tr1;
		loc3 = F697_13013(RTCV(loc2));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc3)-646])(RTCV(loc3));
			if (tb1) break;
			tr1 = F667_12213(RTCV(loc3));
			loc4 = tr1;
			loc4 = RTRV(eif_non_attached_type(888),loc4);
			if (EIF_TEST(loc4)) {
				tr1 = F667_12212(RTCV(loc3));
				tr1 = F902_18694(Current, loc4, tr1);
				tr2 = F667_12213(RTCV(loc3));
				F697_13045(RTCV(loc1), tr1, tr2);
			} else {
				tr1 = F667_12213(RTCV(loc3));
				tr1 = F902_18697(Current, tr1);
				tr2 = F667_12212(RTCV(loc3));
				tr1 = F902_18694(Current, tr1, tr2);
				tr2 = F667_12213(RTCV(loc3));
				F697_13045(RTCV(loc1), tr1, tr2);
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc3)-646])(RTCV(loc3));
		}
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {703,981,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F697_13001(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) loc1;
	tr1 = RTLNSMART(eif_non_attached_type(1023));
	F1024_20090(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {703,980,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F697_13001(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	F902_18682(Current, (EIF_BOOLEAN) 0);
	{
		static EIF_TYPE_INDEX typarr0[] = {703,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F697_13001(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	F902_18561(Current);
	F902_18692(Current);
	RTLE;
}

/* {WSF_REQUEST}.initialize */
void F902_18561 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,loc4);
	
	RTGC;
	F902_18670(Current);
	loc2 = *(EIF_REFERENCE *)(Current);
	tb1 = '\0';
	tr1 = F902_18610(Current);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tb2 = F885_17031(RTCV(loc3));
		tb1 = tb2;
	}
	if (tb1) {
		tu8_1 = F885_17065(RTCV(loc3));
		*(EIF_NATURAL_64 *)(Current+ _I64OFF_20_2_0_0_0_0_0_) = (EIF_NATURAL_64) tu8_1;
	} else {
		tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
		*(EIF_NATURAL_64 *)(Current+ _I64OFF_20_2_0_0_0_0_0_) = (EIF_NATURAL_64) tu8_1;
	}
	loc1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_10_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(951));
		F951_18796(RTCV(tr1), loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_5_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_9_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_9_);
	tr1 = F902_18698(Current, tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	loc1 = F99_6910(RTCV(loc2));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = F902_18698(Current, loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	}
	tr1 = RTOUCR(37,F86_6729,(Current));
	if ((EIF_BOOLEAN)(F902_18602(Current, tr1) == NULL)) {
		tr1 = RTOUCR(37,F86_6729,(Current));
		tr2 = RTOUCR(38,F902_18699,(Current));
		ti8_1 = F23_3843(RTCV(tr2), NULL);
		tr2 = c_outi64(ti8_1);
		tr2 = F885_17052(RTCV(tr2));
		F902_18606(Current, tr1, tr2);
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tb1 = '\0';
	tr1 = RTMS_EX_H("HTTPS",5,1415364691);
	tr1 = F902_18603(Current, tr1);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(loc4)-887])(RTCV(loc4));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tr1 = RTMS_EX_H("on",2,28526);
		tb4 = F885_17035(RTCV(loc4), tr1);
		if (!tb4) {
			tr1 = RTMS_EX_H("yes",3,7955827);
			tb4 = F885_17035(RTCV(loc4), tr1);
			tb3 = tb4;
		}
		if (!tb3) {
			tr1 = RTMS_EX_H("true",4,1953658213);
			tb3 = F885_17035(RTCV(loc4), tr1);
			tb2 = tb3;
		}
		if (!tb2) {
			tr1 = RTMS_EX_H("1",1,49);
			tb2 = F885_17035(RTCV(loc4), tr1);
			tb1 = tb2;
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_) = (EIF_BOOLEAN) tb1;
	} else {
	}
	RTLE;
}

/* {WSF_REQUEST}.wgi_request */
EIF_REFERENCE F902_18562 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_REQUEST}.destroy */
void F902_18563 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	loc1 = F697_13013(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc1)-646])(RTCV(loc1));
		if (tb1) break;
		tr1 = F667_12212(RTCV(loc1));
		F902_18684(Current, tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc1)-646])(RTCV(loc1));
	}
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_20_2_0_0_0_0_0_) = (EIF_NATURAL_64) tu8_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9234[Dtype(tr1)-696])(RTCV(tr1));
	*(EIF_REFERENCE *)(Current + _REFACS_19_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) NULL;
	F697_13052(RTCV(F902_18674(Current)));
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) NULL;
	tr1 = RTOUCR(39,F902_18695,(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_20_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTOUCR(40,F902_18696,(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	F902_18687(Current, NULL);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {WSF_REQUEST}.raw_input_data */
EIF_REFERENCE F902_18567 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_REQUEST}.set_raw_input_data */
void F902_18568 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(889),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = RTLNS(889, 889, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F889_17164(RTCV(tr1), arg1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNSMART(eif_non_attached_type(889));
		F889_17164(RTCV(tr1), arg1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {WSF_REQUEST}.raw_header_data */
EIF_REFERENCE F902_18569 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTMS_EX_H("RAW_HEADER_DATA",15,198827841);
	Result = F902_18603(Current, tr1);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.has_error */
EIF_BOOLEAN F902_18570 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = F1024_20092(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.error_handler */
EIF_REFERENCE F902_18571 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_REQUEST}.input */
EIF_REFERENCE F902_18572 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_15_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.is_chunked_input */
EIF_BOOLEAN F902_18573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_16_0_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.read_input_data_into */
void F902_18574 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc3 = tr1;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_20_1_) && EIF_TEST(loc3))) {
		F893_17377(RTCV(arg1), loc3);
	} else {
		loc1 = F902_18572(Current);
		if (F902_18573(Current)) {
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8192L);
			for (;;) {
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
					tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10551[Dtype(loc1)-564])(RTCV(loc1));
					tb1 = tb2;
				}
				if (tb1) break;
				F564_11321(RTCV(loc1), arg1, loc2);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1) + O10549[Dtype(loc1)-563]);
				if ((EIF_BOOLEAN) (ti4_1 < loc2)) {
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		} else {
			tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_20_2_0_0_0_0_0_);
			loc2 = (EIF_INTEGER_32) tu8_1;
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				F564_11321(RTCV(loc1), arg1, loc2);
				loc2 = *(EIF_INTEGER_32 *)(RTCV(loc1) + O10549[Dtype(loc1)-563]);
			}
		}
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_20_1_)) {
			F902_18568(Current, arg1);
		}
	}
	RTLE;
}

/* {WSF_REQUEST}.is_request_method */
EIF_BOOLEAN F902_18576 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	tr2 = F885_17049(RTCV(arg1));
	Result = F889_17185(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.is_content_type_accepted */
EIF_BOOLEAN F902_18583 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLR(5,tr3);
	RTLR(6,tr4);
	
	RTGC;
	tr1 = RTLNS(523, 523, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = F885_17049(RTCV(arg1));
	F524_11030(RTCV(tr1), tr2);
	{
		static EIF_TYPE_INDEX typarr0[] = {953,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 1L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr3) = 1L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	tr4 = F885_17049(RTCV(arg1));
	*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) tr4;
	RTAR(tr3,tr4);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F954_18829)(tr3);
	tr4 = F902_18628(Current);
	tr1 = F524_11034(RTCV(tr1), tr2, tr4);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_3_0_);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {WSF_REQUEST}.set_request_method */
void F902_18587 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) arg1;
}

/* {WSF_REQUEST}.execution_variables_table */
EIF_REFERENCE F902_18601 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_REQUEST}.meta_variable */
EIF_REFERENCE F902_18602 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	Result = F697_13004(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.meta_string_variable */
EIF_REFERENCE F902_18603 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	tr1 = F902_18602(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WSF_REQUEST}.set_meta_string_variable */
void F902_18606 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = F885_17048(RTCV(arg2));
	tr2 = F902_18694(Current, arg1, tr2);
	F697_13045(RTCV(tr1), tr2, arg1);
	RTLE;
}

/* {WSF_REQUEST}.meta_variables_table */
EIF_REFERENCE F902_18608 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_REQUEST}.content_length */
EIF_REFERENCE F902_18610 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_11_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.content_type */
EIF_REFERENCE F902_18612 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {WSF_REQUEST}.percent_encoded_path_info */
EIF_REFERENCE F902_18614 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {WSF_REQUEST}.path_info */
EIF_REFERENCE F902_18615 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {WSF_REQUEST}.path_translated */
EIF_REFERENCE F902_18616 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {WSF_REQUEST}.query_string */
EIF_REFERENCE F902_18617 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_8_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.request_method */
EIF_REFERENCE F902_18622 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {WSF_REQUEST}.script_name */
EIF_REFERENCE F902_18623 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_4_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.server_name */
EIF_REFERENCE F902_18624 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_3_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.server_port */
EIF_INTEGER_32 F902_18625 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_16_1_0_0_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.http_accept */
EIF_REFERENCE F902_18628 (EIF_REFERENCE Current)
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
	Result = F99_6922(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.http_host */
EIF_REFERENCE F902_18634 (EIF_REFERENCE Current)
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
	Result = F99_6928(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.http_if_match */
EIF_REFERENCE F902_18640 (EIF_REFERENCE Current)
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
	Result = F99_6934(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.request_uri */
EIF_REFERENCE F902_18647 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_2_);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.cookies_table */
EIF_REFERENCE F902_18653 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,loc9);
	RTLR(3,tr1);
	RTLR(4,loc8);
	RTLR(5,loc6);
	RTLR(6,loc7);
	
	RTGC;
	loc5 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	if ((EIF_BOOLEAN)(loc5 == NULL)) {
		tr1 = RTOUCR(41,F86_6700,(Current));
		tr1 = F902_18602(Current, tr1);
		loc9 = tr1;
		if (EIF_TEST(loc9)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc9));
			loc8 = F885_17049(RTCV(tr1));
			{
				static EIF_TYPE_INDEX typarr0[] = {703,976,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSMART(eif_non_attached_type(typres0));
			}
			F697_13001(RTCV(tr1), ((EIF_INTEGER_32) 5L));
			loc5 = (EIF_REFERENCE) tr1;
			loc4 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_1_1_0_2_);
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 1L))) break;
				loc1 = F889_17173(RTCV(loc8), (EIF_CHARACTER_8) '=', loc3);
				if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
					loc2 = F889_17173(RTCV(loc8), (EIF_CHARACTER_8) ';', loc1);
					if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
						loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
						loc6 = F893_17423(RTCV(loc8), loc3, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
						loc7 = F893_17423(RTCV(loc8), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), loc4);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					} else {
						loc6 = F893_17423(RTCV(loc8), loc3, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
						loc7 = F893_17423(RTCV(loc8), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
						loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					}
					F893_17361(RTCV(loc6));
					F893_17362(RTCV(loc6));
					F902_18675(Current, loc6, loc7, loc5);
				}
			}
		} else {
			{
				static EIF_TYPE_INDEX typarr0[] = {703,976,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSMART(eif_non_attached_type(typres0));
			}
			F697_13001(RTCV(tr1), ((EIF_INTEGER_32) 0L));
			loc5 = (EIF_REFERENCE) tr1;
		}
		RTAR(Current, loc5);
		*(EIF_REFERENCE *)(Current + _REFACS_19_) = (EIF_REFERENCE) loc5;
	}
	RTLE;
	return (EIF_REFERENCE) loc5;
}

/* {WSF_REQUEST}.path_parameters_table */
EIF_REFERENCE F902_18656 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


/* {WSF_REQUEST}.path_parameters_source */
EIF_REFERENCE F902_18657 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_11_);
}


/* {WSF_REQUEST}.set_path_parameters_source */
void F902_18658 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,tr2);
	RTLR(7,loc2);
	RTLR(8,loc6);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		loc1 = (EIF_REFERENCE) NULL;
	} else {
		loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_3_0_0_0_);
		if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
			loc1 = (EIF_REFERENCE) NULL;
		} else {
			{
				static EIF_TYPE_INDEX typarr0[] = {703,976,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSMART(eif_non_attached_type(typres0));
			}
			F697_13001(RTCV(tr1), loc3);
			loc1 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11074[Dtype(loc4)-644])(RTCV(loc4));
				for (;;) {
					tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc5)-646])(RTCV(loc5));
					if (tb1) break;
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc5)-646])(RTCV(loc5));
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc5)-646])(RTCV(loc5));
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16676[Dtype(tr2)-977])(RTCV(tr2));
					F697_13045(RTCV(loc1), tr1, tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc5)-646])(RTCV(loc5));
				}
			} else {
				loc2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
				loc6 = F697_13013(RTCV(loc2));
				for (;;) {
					tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc6)-646])(RTCV(loc6));
					if (tb2) break;
					tr1 = F667_12213(RTCV(loc6));
					tr2 = F667_12212(RTCV(loc6));
					F902_18675(Current, tr1, tr2, loc1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc6)-646])(RTCV(loc6));
				}
				F100_6953(RTCV(arg1), loc1);
			}
		}
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) loc1;
	RTLE;
}

/* {WSF_REQUEST}.query_parameter */
EIF_REFERENCE F902_18660 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = F902_18661(Current);
	Result = F697_13004(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.query_parameters_table */
EIF_REFERENCE F902_18661 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLR(4,loc4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = F902_18617(Current);
		loc5 = F885_17049(RTCV(tr1));
		if ((EIF_BOOLEAN)(loc5 == NULL)) {
			loc4 = F902_18647(Current);
			loc2 = F889_17173(RTCV(loc4), (EIF_CHARACTER_8) '\?', ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				loc3 = F889_17173(RTCV(loc4), (EIF_CHARACTER_8) '#', (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
					loc3 = *(EIF_INTEGER_32 *)(RTCV(loc4) + O15187[Dtype(loc4)-888]);
				} else {
					loc3--;
				}
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc4)-887])(RTCV(loc4), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), loc3);
				loc5 = F885_17049(RTCV(tr1));
			}
		}
		loc1 = F902_18662(Current, loc5);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {WSF_REQUEST}.urlencoded_parameters */
EIF_REFERENCE F902_18662 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc7);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {703,976,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0, 703, _OBJSIZ_7_4_0_7_0_0_0_0_);
		}
		F697_13001(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
			{
				static EIF_TYPE_INDEX typarr0[] = {703,976,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0, 703, _OBJSIZ_7_4_0_7_0_0_0_0_);
			}
			F697_13001(RTCV(tr1), ((EIF_INTEGER_32) 0L));
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			{
				static EIF_TYPE_INDEX typarr0[] = {703,976,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0, 703, _OBJSIZ_7_4_0_7_0_0_0_0_);
			}
			F697_13001(RTCV(tr1), ((EIF_INTEGER_32) 3L));
			Result = (EIF_REFERENCE) tr1;
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
				loc3 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) '&', loc2);
				if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
					loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), loc2, loc1);
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				} else {
					loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), loc2, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				}
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(loc5)-887])(RTCV(loc5));
				if ((EIF_BOOLEAN) !tb1) {
					loc4 = F889_17173(RTCV(loc5), (EIF_CHARACTER_8) '=', ((EIF_INTEGER_32) 1L));
					if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
						loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc5)-887])(RTCV(loc5), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc5) + O15187[Dtype(loc5)-888]);
						loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc5)-887])(RTCV(loc5), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)), ti4_1);
					} else {
						loc6 = (EIF_REFERENCE) loc5;
						loc7 = RTOUCR(40,F902_18696,(Current));
					}
					F902_18675(Current, loc6, loc7, Result);
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.register_mime_handler */
void F902_18668 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {802,159,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 3L));
		loc1 = (EIF_REFERENCE) tr1;
		F239_9595(RTCV(loc1));
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) loc1;
	}
	F803_12671(RTCV(loc1), arg1);
	RTLE;
}

/* {WSF_REQUEST}.mime_handler */
EIF_REFERENCE F902_18669 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F803_12662(RTCV(loc1));
		for (;;) {
			tb1 = '\01';
			tb2 = F767_12451(RTCV(loc1));
			if (!tb2) {
				tb1 = (EIF_BOOLEAN)(Result != NULL);
			}
			if (tb1) break;
			Result = F269_9734(RTCV(loc1));
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R8026[Dtype(Result)-160])(RTCV(Result), arg1);
			if ((EIF_BOOLEAN) !tb2) {
				Result = (EIF_REFERENCE) NULL;
			}
			F803_12664(RTCV(loc1));
		}
	}
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.init_mime_handlers */
void F902_18670 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(160, 160, _OBJSIZ_0_0_0_0_0_0_0_0_);
	F902_18668(Current, tr1);
	tr1 = RTLNS(161, 161, _OBJSIZ_0_0_0_0_0_0_0_0_);
	F902_18668(Current, tr1);
	RTLE;
}

/* {WSF_REQUEST}.mime_handlers */
EIF_REFERENCE F902_18671 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_12_);
}


/* {WSF_REQUEST}.uploaded_files_table */
EIF_REFERENCE F902_18672 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_13_);
}


/* {WSF_REQUEST}.get_form_parameters */
void F902_18673 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tb1 = '\0';
		if ((EIF_BOOLEAN) !F902_18573(Current)) {
			tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
			tb1 = (EIF_BOOLEAN)(*(EIF_NATURAL_64 *)(Current+ _I64OFF_20_2_0_0_0_0_0_) == tu8_1);
		}
		if (tb1) {
			{
				static EIF_TYPE_INDEX typarr0[] = {703,976,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSMART(eif_non_attached_type(typres0));
			}
			F697_13001(RTCV(tr1), ((EIF_INTEGER_32) 0L));
			loc1 = (EIF_REFERENCE) tr1;
		} else {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_20_1_)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {120,892,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNS(typres0, 120, _OBJSIZ_1_0_0_0_0_0_0_0_);
				}
				F121_10164(RTCV(tr1), NULL);
				loc2 = (EIF_REFERENCE) tr1;
			}
			{
				static EIF_TYPE_INDEX typarr0[] = {703,976,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSMART(eif_non_attached_type(typres0));
			}
			F697_13001(RTCV(tr1), ((EIF_INTEGER_32) 5L));
			loc1 = (EIF_REFERENCE) tr1;
			loc3 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tr1 = F902_18669(Current, loc3);
				loc4 = tr1;
				tb1 = EIF_TEST(loc4);
			}
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R8027[Dtype(loc4)-160])(RTCV(loc4), loc3, Current, loc1, loc2);
			}
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc2));
				loc5 = tr1;
				tb1 = EIF_TEST(loc5);
			}
			if (tb1) {
				F902_18568(Current, loc5);
			}
		}
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
}

/* {WSF_REQUEST}.form_parameters_table */
EIF_REFERENCE F902_18674 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	F902_18673(Current);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {703,976,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F697_13001(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {WSF_REQUEST}.add_value_to_table */
void F902_18675 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(19);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc8);
	RTLR(5,arg3);
	RTLR(6,loc10);
	RTLR(7,loc3);
	RTLR(8,loc1);
	RTLR(9,loc9);
	RTLR(10,loc5);
	RTLR(11,Current);
	RTLR(12,loc11);
	RTLR(13,arg2);
	RTLR(14,loc12);
	RTLR(15,loc13);
	RTLR(16,loc14);
	RTLR(17,tr2);
	RTLR(18,tr3);
	
	RTGC;
	loc6 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) '[', ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
		loc7 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) ']', (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN) (loc7 > loc6)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)));
			loc2 = F885_17049(RTCV(tr1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)), ti4_1);
			loc4 = F885_17049(RTCV(tr1));
			F893_17361(RTCV(loc4));
			F893_17362(RTCV(loc4));
			tr1 = RTLNS(978, 978, _OBJSIZ_3_0_0_0_0_0_0_0_);
			F979_18940(RTCV(tr1), loc2);
			loc8 = (EIF_REFERENCE) tr1;
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(RTCV(loc8) + _REFACS_2_);
			tb2 = F697_13007(RTCV(arg3), tr1);
			if (tb2) {
				tr1 = *(EIF_REFERENCE *)(RTCV(arg3));
				loc10 = tr1;
				loc10 = RTRV(eif_non_attached_type(978),loc10);
				tb1 = EIF_TEST(loc10);
			}
			if (tb1) {
				loc8 = (EIF_REFERENCE) loc10;
			}
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L)));
			loc3 = F885_17049(RTCV(tr1));
			F893_17361(RTCV(loc3));
			F893_17362(RTCV(loc3));
			tb1 = F324_9603(RTCV(loc3));
			if (tb1) {
				ti4_1 = F979_18947(RTCV(loc8));
				F893_17381(RTCV(loc3), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			}
			loc1 = (EIF_REFERENCE) loc8;
			tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F889_17164(RTCV(tr1), loc2);
			loc2 = (EIF_REFERENCE) tr1;
			F893_17391(RTCV(loc2), (EIF_CHARACTER_8) '[');
			F893_17377(RTCV(loc2), loc3);
			F893_17391(RTCV(loc2), (EIF_CHARACTER_8) ']');
			for (;;) {
				tb1 = F324_9603(RTCV(loc4));
				if (tb1) break;
				loc9 = (EIF_REFERENCE) loc8;
				loc6 = F889_17173(RTCV(loc4), (EIF_CHARACTER_8) '[', ((EIF_INTEGER_32) 1L));
				if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
					loc7 = F889_17173(RTCV(loc4), (EIF_CHARACTER_8) ']', (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)));
					if ((EIF_BOOLEAN) (loc7 > loc6)) {
						loc5 = F902_18698(Current, loc3);
						tr1 = F979_18946(RTCV(loc9), loc5);
						loc11 = tr1;
						loc11 = RTRV(eif_non_attached_type(978),loc11);
						if (EIF_TEST(loc11)) {
							loc8 = (EIF_REFERENCE) loc11;
						} else {
							tr1 = RTLNS(978, 978, _OBJSIZ_3_0_0_0_0_0_0_0_);
							F979_18940(RTCV(tr1), loc2);
							loc8 = (EIF_REFERENCE) tr1;
							F979_18955(RTCV(loc9), loc8, loc5);
						}
						loc3 = F893_17423(RTCV(loc4), (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L)));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_1_0_2_);
						loc4 = F893_17423(RTCV(loc4), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)), ti4_1);
						F893_17361(RTCV(loc4));
						F893_17362(RTCV(loc4));
						tb2 = F324_9603(RTCV(loc3));
						if (tb2) {
							ti4_1 = F979_18947(RTCV(loc8));
							F893_17381(RTCV(loc3), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
						}
						F893_17391(RTCV(loc2), (EIF_CHARACTER_8) '[');
						F893_17377(RTCV(loc2), loc3);
						F893_17391(RTCV(loc2), (EIF_CHARACTER_8) ']');
					}
				} else {
					F893_17405(RTCV(loc4));
				}
			}
			tr1 = F902_18694(Current, loc2, arg2);
			F979_18955(RTCV(loc8), tr1, loc3);
		}
	}
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc1 = F902_18694(Current, arg1, arg2);
	}
	tb2 = '\0';
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16676[Dtype(loc1)-977])(RTCV(loc1));
	tb3 = F697_13007(RTCV(arg3), tr1);
	if (tb3) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg3));
		loc12 = tr1;
		tb2 = EIF_TEST(loc12);
	}
	if (tb2) {
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
		} else {
			loc13 = loc12;
			loc13 = RTRV(eif_non_attached_type(979),loc13);
			if (EIF_TEST(loc13)) {
				F980_18974(RTCV(loc13), loc1);
			} else {
				loc14 = loc12;
				loc14 = RTRV(eif_non_attached_type(978),loc14);
				if (EIF_TEST(loc14)) {
				} else {
					tr1 = RTLNS(979, 979, _OBJSIZ_2_0_0_0_0_0_0_0_);
					{
						static EIF_TYPE_INDEX typarr0[] = {953,976,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr3 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 2L),sizeof(EIF_REFERENCE), EIF_FALSE);
						RT_SPECIAL_COUNT(tr3) = 2L;
						memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
					}
					*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) loc12;
					RTAR(tr3,loc12);
					*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) loc1;
					RTAR(tr3,loc1);
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F954_18829)(tr3);
					F980_18960(RTCV(tr1), tr2);
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16676[Dtype(loc1)-977])(RTCV(loc1));
					F697_13045(RTCV(arg3), tr1, tr2);
				}
			}
		}
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16676[Dtype(loc1)-977])(RTCV(loc1));
		F697_13045(RTCV(arg3), loc1, tr1);
	}
	RTLE;
}

/* {WSF_REQUEST}.server_url */
EIF_REFERENCE F902_18677 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_)) {
			tr1 = RTLNSMART(eif_non_attached_type(892));
			tr2 = RTMS_EX_H("https://",8,441357103);
			F889_17164(RTCV(tr1), tr2);
			loc1 = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNSMART(eif_non_attached_type(892));
			tr2 = RTMS_EX_H("http://",7,769736239);
			F889_17164(RTCV(tr1), tr2);
			loc1 = (EIF_REFERENCE) tr1;
		}
		tr1 = F902_18624(Current);
		F893_17377(RTCV(loc1), tr1);
		loc2 = F902_18625(Current);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
			if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_) && (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 443L)))) {
			} else {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_20_0_) && (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 80L)))) {
				} else {
					F893_17391(RTCV(loc1), (EIF_CHARACTER_8) ':');
					F893_17381(RTCV(loc1), loc2);
				}
			}
		}
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {WSF_REQUEST}.script_url */
EIF_REFERENCE F902_18679 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,tr1);
	RTLR(4,loc6);
	RTLR(5,Result);
	RTLR(6,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = F902_18623(Current);
		loc7 = tr1;
		if (EIF_TEST(loc7)) {
			loc6 = F902_18647(Current);
			tb1 = F889_17195(RTCV(loc6), loc7);
			if (tb1) {
				loc1 = F885_17049(RTCV(loc7));
			} else {
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				loc3 = *(EIF_INTEGER_32 *)(RTCV(loc6) + O15187[Dtype(loc6)-888]);
				loc4 = *(EIF_INTEGER_32 *)(RTCV(loc7) + O15187[Dtype(loc7)-888]);
				for (;;) {
					tb1 = '\01';
					if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || (EIF_BOOLEAN) (loc2 > loc4))) {
						tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc6)-696])(RTCV(loc6), loc2));
						tc2 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc7)-696])(RTCV(loc7), loc2));
						tb1 = (EIF_BOOLEAN)(tc1 != tc2);
					}
					if (tb1) break;
					tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc6)-696])(RTCV(loc6), loc2));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
						loc5 = (EIF_INTEGER_32) loc2;
					}
					loc2++;
				}
				if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
					tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(loc6)-696])(RTCV(loc6), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
						loc2--;
					} else {
						if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 0L))) {
							loc2 = (EIF_INTEGER_32) loc5;
						}
					}
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
					loc5 = F889_17178(RTCV(loc6), tr1, loc2);
					if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 0L))) {
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc6)-887])(RTCV(loc6), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)));
						loc1 = F885_17049(RTCV(tr1));
					} else {
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(loc6)-887])(RTCV(loc6), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
						loc1 = F885_17049(RTCV(tr1));
					}
				}
			}
		}
		if ((EIF_BOOLEAN)(loc1 == NULL)) {
			tr1 = RTLNSMART(eif_non_attached_type(892));
			F885_16993(RTCV(tr1));
			loc1 = (EIF_REFERENCE) tr1;
		}
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) loc1;
	}
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17164(RTCV(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	F893_17377(RTCV(Result), arg1);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.internal_server_url */
EIF_REFERENCE F902_18680 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_14_);
}


/* {WSF_REQUEST}.internal_url_base */
EIF_REFERENCE F902_18681 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_15_);
}


/* {WSF_REQUEST}.set_raw_input_data_recorded */
void F902_18682 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_20_1_) = (EIF_BOOLEAN) arg1;
}

/* {WSF_REQUEST}.delete_uploaded_file */
void F902_18684 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb1 = F697_13008(RTCV(tr1), arg1);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
			F602_14050(RTCV(tr1), loc2);
			loc1 = (EIF_REFERENCE) tr1;
			tb1 = '\0';
			tb2 = F602_14080(RTCV(loc1));
			if (tb2) {
				tb2 = F602_14084(RTCV(loc1));
				tb1 = tb2;
			}
			if (tb1) {
				F602_14177(RTCV(loc1));
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tr2 = RTMS_EX_H("Can not delete uploaded file",28,1195992165);
				tr3 = RTMS32_EX_H("C\000\000\000a\000\000\000n\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000d\000\000\000e\000\000\000l\000\000\000e\000\000\000t\000\000\000e\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000\"\000\000\000",21,439245858);
				tr4 = F904_18748(RTCV(loc2));
				tr3 = F892_17288(RTCV(tr3), tr4);
				tr4 = RTMS32_EX_H("\"\000\000\000",1,34);
				tr3 = F892_17288(RTCV(tr3), tr4);
				F1024_20106(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = RTMS_EX_H("Can not delete uploaded file",28,1195992165);
			tr3 = RTMS32_EX_H("C\000\000\000a\000\000\000n\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000d\000\000\000e\000\000\000l\000\000\000e\000\000\000t\000\000\000e\000\000\000 \000\000\000u\000\000\000p\000\000\000l\000\000\000o\000\000\000a\000\000\000d\000\000\000e\000\000\000d\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000\"\000\000\000",30,1824501282);
			tr4 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_5_);
			tr3 = F892_17288(RTCV(tr3), tr4);
			tr4 = RTMS32_EX_H("\"\000\000\000 \000\000\000T\000\000\000m\000\000\000p\000\000\000 \000\000\000F\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000f\000\000\000o\000\000\000u\000\000\000n\000\000\000d\000\000\000",20,1907986020);
			tr3 = F892_17288(RTCV(tr3), tr4);
			F1024_20106(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = RTMS_EX_H("Not an uploaded file",20,1565320549);
		tr3 = RTMS32_EX_H("T\000\000\000h\000\000\000i\000\000\000s\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000\"\000\000\000",11,1843696674);
		tr4 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_5_);
		tr3 = F892_17288(RTCV(tr3), tr4);
		tr4 = RTMS32_EX_H("\"\000\000\000 \000\000\000i\000\000\000s\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000a\000\000\000n\000\000\000 \000\000\000u\000\000\000p\000\000\000l\000\000\000o\000\000\000a\000\000\000d\000\000\000e\000\000\000d\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000.\000\000\000",26,545905454);
		tr3 = F892_17288(RTCV(tr3), tr4);
		F1024_20106(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
	}
	RTLE;
}

/* {WSF_REQUEST}.save_uploaded_file */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F902_18685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr4 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	RTXD;
	
	RTXI(15);
	RTLR(0,loc9);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc6);
	RTLR(5,loc2);
	RTLR(6,arg1);
	RTLR(7,loc1);
	RTLR(8,loc5);
	RTLR(9,loc3);
	RTLR(10,tr2);
	RTLR(11,arg2);
	RTLR(12,tr3);
	RTLR(13,tr4);
	RTLR(14,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc8) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
		loc9 = tr1;
		if (EIF_TEST(loc9)) {
			loc4 = (EIF_REFERENCE) loc9;
		} else {
			loc4 = F572_11775(RTCV(RTOUCR(42,F159_8238,(Current))));
		}
		tr1 = RTLNS(584, 584, _OBJSIZ_3_0_0_1_0_2_0_0_);
		F585_13590(RTCV(tr1), loc4);
		loc6 = (EIF_REFERENCE) tr1;
		tb1 = '\0';
		tb2 = F585_13612(RTCV(loc6));
		if (tb2) {
			tb2 = F585_13615(RTCV(loc6));
			tb1 = tb2;
		}
		if (tb1) {
			loc2 = F981_18993(RTCV(arg1));
			tr1 = RTMS_EX_H("tmp-",4,1953329197);
			loc1 = F893_17379(RTCV(tr1), loc2);
			loc5 = F904_18736(RTCV(loc4), loc1);
			tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
			F602_14050(RTCV(tr1), loc5);
			loc3 = (EIF_REFERENCE) tr1;
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				tb1 = '\01';
				tb2 = F602_14080(RTCV(loc3));
				if (!(EIF_BOOLEAN) !tb2) {
					tb1 = (EIF_BOOLEAN) (loc7 > ((EIF_INTEGER_32) 1000L));
				}
				if (tb1) break;
				loc7++;
				tr1 = RTMS_EX_H("tmp-",4,1953329197);
				tr2 = c_outi(loc7);
				tr1 = F893_17379(RTCV(tr1), tr2);
				tr2 = RTMS_EX_H("-",1,45);
				tr1 = F893_17379(RTCV(tr1), tr2);
				loc1 = F893_17379(RTCV(tr1), loc2);
				loc5 = F904_18736(RTCV(loc4), loc1);
				F602_14050(RTCV(loc3), loc5);
			}
			tb2 = '\01';
			tb3 = F602_14080(RTCV(loc3));
			if (!(EIF_BOOLEAN) !tb3) {
				tb3 = F602_14084(RTCV(loc3));
				tb2 = tb3;
			}
			if (tb2) {
				tr1 = F602_14057(RTCV(loc3));
				F981_18999(RTCV(arg1), tr1);
				F981_19001(RTCV(arg1), loc1);
				F602_14116(RTCV(loc3));
				F602_14153(RTCV(loc3), arg2);
				F602_14132(RTCV(loc3));
			} else {
				F981_18998(RTCV(arg1), ((EIF_INTEGER_32) -1L));
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = RTMS_EX_H("Directory not writable",22,2105711717);
			tr3 = RTMS32_EX_H("C\000\000\000a\000\000\000n\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000c\000\000\000r\000\000\000e\000\000\000a\000\000\000t\000\000\000e\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000i\000\000\000n\000\000\000 \000\000\000d\000\000\000i\000\000\000r\000\000\000e\000\000\000c\000\000\000t\000\000\000o\000\000\000r\000\000\000y\000\000\000 \000\000\000\"\000\000\000",34,2071630114);
			tr4 = F904_18748(RTCV(loc4));
			tr3 = F892_17288(RTCV(tr3), tr4);
			tr4 = RTMS32_EX_H("\"\000\000\000",1,34);
			tr3 = F892_17288(RTCV(tr3), tr4);
			F1024_20106(RTCV(tr1), ((EIF_INTEGER_32) 0L), tr2, tr3);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_5_);
		F697_13045(RTCV(tr1), arg1, tr2);
	} else {
		F981_18998(RTCV(arg1), ((EIF_INTEGER_32) -1L));
	}
	RTE_E
	RTXS(15);
	loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WSF_REQUEST}.uploaded_file_path */
EIF_REFERENCE F902_18686 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_16_);
}


/* {WSF_REQUEST}.set_uploaded_file_path */
void F902_18687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_16_) = (EIF_REFERENCE) arg1;
}

/* {WSF_REQUEST}.internal_query_parameters_table */
EIF_REFERENCE F902_18688 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_17_);
}


/* {WSF_REQUEST}.internal_form_data_parameters_table */
EIF_REFERENCE F902_18689 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_18_);
}


/* {WSF_REQUEST}.internal_cookies_table */
EIF_REFERENCE F902_18690 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_19_);
}


/* {WSF_REQUEST}.report_bad_request_error */
void F902_18691 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(1031, 1031, _OBJSIZ_3_0_0_1_0_0_0_0_);
	F1032_20362(RTCV(tr1), ((EIF_INTEGER_32) 400L));
	loc1 = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = F885_17052(RTCV(arg1));
		F1032_20366(RTCV(loc1), tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F1024_20104(RTCV(tr1), loc1);
	RTLE;
}

/* {WSF_REQUEST}.analyze */
void F902_18692 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = F902_18647(Current);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(loc1)-887])(RTCV(loc1));
	if (tb1) {
		tr1 = RTMS_EX_H("Missing URI",11,1426827849);
		F902_18691(Current, tr1);
	}
	if ((EIF_BOOLEAN) !F902_18570(Current)) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(loc1)-887])(RTCV(loc1));
		if (tb1) {
			tr1 = RTMS_EX_H("Missing request method",22,1254586980);
			F902_18691(Current, tr1);
		}
	}
	if ((EIF_BOOLEAN) !F902_18570(Current)) {
		loc1 = F902_18634(Current);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == NULL)) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(loc1)-887])(RTCV(loc1));
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTMS_EX_H("Missing host header",19,1896797042);
			F902_18691(Current, tr1);
		}
	}
	RTLE;
}

/* {WSF_REQUEST}.new_string_value */
EIF_REFERENCE F902_18694 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	tr1 = RTLNS(981, 981, _OBJSIZ_4_0_0_0_0_0_0_0_);
	F982_19002(RTCV(tr1), arg1, arg2);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WSF_REQUEST}.empty_string_32 */
static EIF_REFERENCE F902_18695_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(39)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(887, 887, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F885_16993(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F902_18695 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(39,F902_18695_body,(Current));
}

/* {WSF_REQUEST}.empty_string_8 */
static EIF_REFERENCE F902_18696_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(40)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(889, 889, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F885_16993(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F902_18696 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(40,F902_18696_body,(Current));
}

/* {WSF_REQUEST}.url_encoded_string */
EIF_REFERENCE F902_18697 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	F889_17162(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(43,F478_9086,(Current));
	F147_7983(RTCV(tr1), arg1, Result);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.url_decoded_string */
EIF_REFERENCE F902_18698 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(891, 891, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	F887_17089(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(43,F478_9086,(Current));
	F147_7990(RTCV(tr1), arg1, Result);
	RTLE;
	return Result;
}

/* {WSF_REQUEST}.date_time_utilities */
static EIF_REFERENCE F902_18699_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(38)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(22, 22, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F902_18699 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(38,F902_18699_body,(Current));
}

void EIF_Minit366 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

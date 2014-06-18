/*
 * Code for class WGI_REQUEST_FROM_TABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg72.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_REQUEST_FROM_TABLE}.make */
void F99_6893 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLR(2,arg2);
	RTLR(3,arg1);
	
	RTGC;
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) arg3;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) arg2;
	F99_6943(Current, arg1);
	F99_6946(Current);
	F99_6894(Current);
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.update_input */
void F99_6894 (EIF_REFERENCE Current)
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
	RTAOMS(6893,1);
	tb1 = '\0';
	tr1 = F99_6932(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCOMS(tr1,6893,0,"chunked",7,346719076);
		tb2 = F889_17187(RTCV(loc1), tr1);
		tb1 = tb2;
	}
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_16_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = RTLNS(564, 564, _OBJSIZ_6_1_0_5_0_0_0_0_);
		F565_11329(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_15_));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.is_chunked_input */
EIF_BOOLEAN F99_6895 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_16_0_);
}


/* {WGI_REQUEST_FROM_TABLE}.input */
EIF_REFERENCE F99_6896 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_15_);
}


/* {WGI_REQUEST_FROM_TABLE}.wgi_connector */
EIF_REFERENCE F99_6899 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_14_);
}


/* {WGI_REQUEST_FROM_TABLE}.meta_variables */
EIF_REFERENCE F99_6900 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_13_);
}


/* {WGI_REQUEST_FROM_TABLE}.meta_variable */
EIF_REFERENCE F99_6901 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	Result = F697_13004(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.meta_string_variable_or_default */
EIF_REFERENCE F99_6902 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,arg2);
	
	RTGC;
	tr1 = F99_6901(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F889_17176(RTCV(loc1));
		tb1 = '\0';
		if (arg3) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(Result)-887])(RTCV(Result));
			tb1 = tb2;
		}
		if (tb1) {
			RTLE;
			return (EIF_REFERENCE) arg2;
		}
	} else {
		RTLE;
		return (EIF_REFERENCE) arg2;
	}
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.set_meta_string_variable */
void F99_6903 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	F697_13045(RTCV(tr1), arg2, arg1);
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.unset_meta_variable */
void F99_6904 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	F697_13050(RTCV(tr1), arg1);
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.content_length */
EIF_REFERENCE F99_6906 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_11_);
}


/* {WGI_REQUEST_FROM_TABLE}.content_type */
EIF_REFERENCE F99_6907 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


/* {WGI_REQUEST_FROM_TABLE}.path_info */
EIF_REFERENCE F99_6909 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {WGI_REQUEST_FROM_TABLE}.path_translated */
EIF_REFERENCE F99_6910 (EIF_REFERENCE Current)
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
	tr1 = RTOUCR(193,F86_6696,(Current));
	Result = F98_6850(Current, tr1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.query_string */
EIF_REFERENCE F99_6911 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {WGI_REQUEST_FROM_TABLE}.remote_addr */
EIF_REFERENCE F99_6912 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {WGI_REQUEST_FROM_TABLE}.remote_host */
EIF_REFERENCE F99_6913 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {WGI_REQUEST_FROM_TABLE}.request_method */
EIF_REFERENCE F99_6916 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {WGI_REQUEST_FROM_TABLE}.script_name */
EIF_REFERENCE F99_6917 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WGI_REQUEST_FROM_TABLE}.server_name */
EIF_REFERENCE F99_6918 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WGI_REQUEST_FROM_TABLE}.server_port */
EIF_INTEGER_32 F99_6919 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_16_1_0_0_);
}


/* {WGI_REQUEST_FROM_TABLE}.http_accept */
EIF_REFERENCE F99_6922 (EIF_REFERENCE Current)
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
	tr1 = RTOUCR(195,F86_6702,(Current));
	Result = F98_6850(Current, tr1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.http_host */
EIF_REFERENCE F99_6928 (EIF_REFERENCE Current)
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
	tr1 = RTOUCR(194,F86_6699,(Current));
	Result = F98_6850(Current, tr1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.http_transfer_encoding */
EIF_REFERENCE F99_6932 (EIF_REFERENCE Current)
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
	tr1 = RTOUCR(196,F86_6709,(Current));
	Result = F98_6850(Current, tr1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.http_if_match */
EIF_REFERENCE F99_6934 (EIF_REFERENCE Current)
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
	tr1 = RTOUCR(197,F86_6711,(Current));
	Result = F98_6850(Current, tr1);
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.request_uri */
EIF_REFERENCE F99_6941 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WGI_REQUEST_FROM_TABLE}.orig_path_info */
EIF_REFERENCE F99_6942 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WGI_REQUEST_FROM_TABLE}.set_meta_variables */
void F99_6943 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc5);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLR(5,tr2);
	RTLR(6,loc3);
	RTLR(7,loc1);
	RTLR(8,loc4);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc5);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc5;
	{
		static EIF_TYPE_INDEX typarr0[] = {703,888,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 703, _OBJSIZ_7_4_0_7_0_0_0_0_);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O11712[Dtype(arg1)-696]);
	F697_13001(RTCV(tr1), ti4_1);
	loc2 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) loc2;
	F697_13037(RTCV(arg1));
	for (;;) {
		tb1 = F697_13032(RTCV(arg1));
		if (tb1) break;
		tr1 = F697_13010(RTCV(arg1));
		tr1 = F885_17046(RTCV(tr1));
		tr2 = F697_13011(RTCV(arg1));
		F697_13045(RTCV(loc2), tr1, tr2);
		F697_13038(RTCV(arg1));
	}
	tr1 = RTOUCR(189,F86_6692,(Current));
	loc3 = F99_6902(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, loc3);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) loc3;
	tr1 = RTOUCR(188,F86_6691,(Current));
	tr1 = F99_6902(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(190,F86_6693,(Current));
	loc1 = F98_6850(Current, tr1);
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(loc1)-887])(RTCV(loc1));
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) loc1;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) NULL;
	}
	tr1 = RTOUCR(191,F86_6694,(Current));
	tr1 = F98_6850(Current, tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(192,F86_6695,(Current));
	tr1 = F99_6902(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(201,F86_6725,(Current));
	tr1 = F99_6902(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(202,F86_6726,(Current));
	loc1 = F98_6850(Current, tr1);
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb3 = F885_17024(RTCV(loc1));
		tb2 = tb3;
	}
	if (tb2) {
		ti4_1 = F885_17058(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_16_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_16_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	}
	tr1 = RTOUCR(200,F86_6724,(Current));
	tr1 = F99_6902(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(199,F86_6721,(Current));
	tr1 = F99_6902(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(198,F86_6720,(Current));
	tr1 = F99_6902(Current, tr1, loc5, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(187,F86_6690,(Current));
	loc1 = F98_6850(Current, tr1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc4 = F885_17052(RTCV(loc1));
	} else {
		tr1 = RTLNS(891, 891, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tr2 = F885_17051(RTCV(tr2));
		F887_17091(RTCV(tr1), tr2);
		loc4 = (EIF_REFERENCE) tr1;
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(loc3)-887])(RTCV(loc3));
		if ((EIF_BOOLEAN) !tb2) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\?';
			F892_17300(RTCV(loc4), tw1);
			tr1 = F885_17051(RTCV(loc3));
			F892_17286(RTCV(loc4), tr1);
		}
	}
	tr1 = F885_17049(RTCV(loc4));
	tr1 = F99_6948(Current, tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.set_orig_path_info */
void F99_6944 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTOUCR(203,F86_6731,(Current));
	F99_6903(Current, tr1, arg1);
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.unset_orig_path_info */
void F99_6945 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	tr1 = RTOUCR(203,F86_6731,(Current));
	F99_6904(Current, tr1);
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.update_path_info */
void F99_6946 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	loc1 = F885_17049(RTCV(tr1));
	tb1 = F324_9603(RTCV(loc1));
	if (tb1) {
		F99_6945(Current);
	} else {
		F99_6944(Current, loc1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tb1 = F889_17195(RTCV(loc1), loc2);
			if (tb1) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2) + O15187[Dtype(loc2)-888]);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
				tr1 = F893_17423(RTCV(loc1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTLE;
}

/* {WGI_REQUEST_FROM_TABLE}.single_slash_starting_string */
EIF_REFERENCE F99_6948 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
		tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '/')) {
			tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F889_17162(RTCV(tr1), (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc2));
			Result = (EIF_REFERENCE) tr1;
			F893_17391(RTCV(Result), (EIF_CHARACTER_8) '/');
			F893_17377(RTCV(Result), arg1);
		} else {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), ((EIF_INTEGER_32) 2L)));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				for (;;) {
					if ((EIF_BOOLEAN) (loc1 > loc2)) break;
					tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc1));
					if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '/')) {
						loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					} else {
						loc1++;
					}
				}
				loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ti4_1);
				Result = F885_17049(RTCV(tr1));
			} else {
				Result = F885_17049(RTCV(arg1));
				RTLE;
				return (EIF_REFERENCE) Result;
			}
		}
	} else {
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), ((EIF_INTEGER_32) 1L)));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
				Result = F885_17049(RTCV(arg1));
				RTLE;
				return (EIF_REFERENCE) Result;
			} else {
				tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
				F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 2L));
				Result = (EIF_REFERENCE) tr1;
				F893_17391(RTCV(Result), (EIF_CHARACTER_8) '/');
				F893_17377(RTCV(Result), arg1);
			}
		} else {
			tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F889_17163(RTCV(tr1), (EIF_CHARACTER_8) '/', ((EIF_INTEGER_32) 1L));
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
	return Result;
}

/* {WGI_REQUEST_FROM_TABLE}.empty_string */
EIF_REFERENCE F99_6949 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit72 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

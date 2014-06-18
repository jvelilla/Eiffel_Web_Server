/*
 * Code for class HTTP_FILE_EXTENSION_MIME_MAPPING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht426.h"
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.make_empty */
void F1023_20080 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {703,888,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F704_13149(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.make_default */
void F1023_20081 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {703,888,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F704_13149(RTCV(tr1), ((EIF_INTEGER_32) 40L));
	loc1 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	tr1 = RTOUCR(174,F153_8136,(Current));
	tr2 = RTMS_EX_H("css",3,6517619);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(51,F153_8138,(Current));
	tr2 = RTMS_EX_H("html",4,1752460652);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(175,F153_8144,(Current));
	tr2 = RTMS_EX_H("xml",3,7892332);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(158,F153_8098,(Current));
	tr2 = RTMS_EX_H("json",4,1785950062);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(157,F153_8097,(Current));
	tr2 = RTMS_EX_H("js",2,27251);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(161,F153_8102,(Current));
	tr2 = RTMS_EX_H("rss",3,7500659);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(156,F153_8095,(Current));
	tr2 = RTMS_EX_H("atom",4,1635020653);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(173,F153_8123,(Current));
	tr2 = RTMS_EX_H("ico",3,6906735);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(169,F153_8117,(Current));
	tr2 = RTMS_EX_H("gif",3,6777190);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(170,F153_8118,(Current));
	tr2 = RTMS_EX_H("jpeg",4,1785750887);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(171,F153_8119,(Current));
	tr2 = RTMS_EX_H("jpg",3,6975591);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(172,F153_8120,(Current));
	tr2 = RTMS_EX_H("png",3,7368295);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(165,F153_8108,(Current));
	tr2 = RTMS_EX_H("zip",3,8022384);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(166,F153_8109,(Current));
	tr2 = RTMS_EX_H("bz",2,25210);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(167,F153_8110,(Current));
	tr2 = RTMS_EX_H("bz2",3,6453810);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(164,F153_8107,(Current));
	tr2 = RTMS_EX_H("gz",2,26490);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(164,F153_8107,(Current));
	tr2 = RTMS_EX_H("gzip",4,1736075632);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(168,F153_8111,(Current));
	tr2 = RTMS_EX_H("tar",3,7627122);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(163,F153_8106,(Current));
	tr2 = RTMS_EX_H("tgz",3,7628666);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(160,F153_8101,(Current));
	tr2 = RTMS_EX_H("ps",2,28787);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(159,F153_8100,(Current));
	tr2 = RTMS_EX_H("pdf",3,7365734);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(162,F153_8105,(Current));
	tr2 = RTMS_EX_H("swf",3,7567206);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(52,F153_8141,(Current));
	tr2 = RTMS_EX_H("conf",4,1668247142);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(52,F153_8141,(Current));
	tr2 = RTMS_EX_H("log",3,7106407);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(52,F153_8141,(Current));
	tr2 = RTMS_EX_H("text",4,1952807028);
	F697_13045(RTCV(loc1), tr1, tr2);
	tr1 = RTOUCR(52,F153_8141,(Current));
	tr2 = RTMS_EX_H("txt",3,7633012);
	F697_13045(RTCV(loc1), tr1, tr2);
	RTLE;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.make_from_file */
void F1023_20082 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F602_14049(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tb2 = F602_14080(RTCV(loc1));
	if (tb2) {
		tb2 = F602_14083(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		F1023_20080(Current, ((EIF_INTEGER_32) 50L));
		F602_14115(RTCV(loc1));
		F602_14188(RTCV(loc1));
		for (;;) {
			tb1 = '\01';
			tb2 = F277_9735(RTCV(loc1));
			if (!tb2) {
				tb2 = F602_14079(RTCV(loc1));
				tb1 = tb2;
			}
			if (tb1) break;
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
			F1023_20086(Current, tr1);
			F602_14188(RTCV(loc1));
		}
		F602_14132(RTCV(loc1));
	} else {
		F1023_20080(Current, ((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.mime_type */
EIF_REFERENCE F1023_20084 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R15088[Dtype(arg1)-887])(RTCV(arg1));
	Result = F697_13004(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.map */
void F1023_20085 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,arg1);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R15088[Dtype(arg1)-887])(RTCV(arg1));
	F697_13045(RTCV(tr1), arg2, tr2);
	RTLE;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.add_mapping_line */
void F1023_20086 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,loc5);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		loc1 = F1023_20088(Current, arg1, loc1);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc1));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '#')) {
			} else {
				loc2 = F1023_20087(Current, arg1, loc1);
				if ((EIF_BOOLEAN) (loc2 > loc1)) {
					loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), loc1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
					for (;;) {
						if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
						loc1 = F1023_20088(Current, arg1, loc2);
						if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
							loc2 = F1023_20087(Current, arg1, loc1);
							if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
								loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), loc1, loc3);
								loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							} else {
								loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), loc1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
								loc1 = (EIF_INTEGER_32) loc2;
							}
							F1023_20085(Current, loc5, loc4);
						}
					}
				}
			}
		}
	}
	RTLE;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.next_blank_position */
EIF_INTEGER_32 F1023_20087 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > loc2)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc1));
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = tb2;
		}
		if (tb1) break;
		loc1++;
	}
	if ((EIF_BOOLEAN) (loc1 <= loc2)) {
		RTLE;
		return (EIF_INTEGER_32) loc1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.next_non_blank_position */
EIF_INTEGER_32 F1023_20088 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > loc2)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc1));
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		loc1++;
	}
	if ((EIF_BOOLEAN) (loc1 <= loc2)) {
		RTLE;
		return (EIF_INTEGER_32) loc1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {HTTP_FILE_EXTENSION_MIME_MAPPING}.mapping */
EIF_REFERENCE F1023_20089 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit426 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

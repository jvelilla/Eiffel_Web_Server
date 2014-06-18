/*
 * Code for class WSF_FILE_SYSTEM_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws248.h"
#include "eif_built_in.h"
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

/* {WSF_FILE_SYSTEM_HANDLER}.make_with_path */
void F522_11108 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = F904_18717(RTCV(arg1));
	if (tb1) {
		tr1 = F572_11775(RTCV(RTOUCR(42,F159_8238,(Current))));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.make */
void F522_11110 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F904_18709(RTCV(tr1), arg1);
	F522_11108(Current, tr1);
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.make_hidden */
void F522_11111 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F522_11110(Current, arg1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.mapping_documentation */
EIF_REFERENCE F522_11113 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(17, 17, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F18_3796(RTCV(tr1), arg1);
	Result = (EIF_REFERENCE) tr1;
	F18_3802(RTCV(Result), *(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_));
	tr1 = RTMS_EX_H("File service",12,303376229);
	F18_3803(RTCV(Result), tr1);
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.document_root */
EIF_REFERENCE F522_11114 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_FILE_SYSTEM_HANDLER}.index_ignores_function */
EIF_REFERENCE F522_11117 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_FILE_SYSTEM_HANDLER}.directory_index */
EIF_REFERENCE F522_11118 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_FILE_SYSTEM_HANDLER}.not_found_handler */
EIF_REFERENCE F522_11119 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_FILE_SYSTEM_HANDLER}.access_denied_handler */
EIF_REFERENCE F522_11120 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_FILE_SYSTEM_HANDLER}.set_directory_index */
void F522_11124 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(arg1 == NULL)) {
		tb2 = F316_9603(RTCV(arg1));
		tb1 = tb2;
	}
	if (tb1) {
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	} else {
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.ignoring_index_entry */
EIF_BOOLEAN F522_11129 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1);
		;
		tb1 = tb1;
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		loc1 = F904_18725(RTCV(arg1));
		if ((EIF_BOOLEAN)(loc1 == NULL)) {
			loc1 = (EIF_REFERENCE) arg1;
		}
		tb1 = F904_18715(RTCV(loc1));
		if (tb1) {
		} else {
			tb1 = F904_18714(RTCV(loc1));
			if (tb1) {
				RTLE;
				return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				loc2 = F904_18748(RTCV(loc1));
				Result = '\01';
				tb1 = '\01';
				tr1 = RTMS32_EX_H(".\000\000\000",1,46);
				tb2 = F887_17123(RTCV(loc2), tr1);
				if (!tb2) {
					tr1 = RTMS32_EX_H("~\000\000\000",1,126);
					tb2 = F887_17124(RTCV(loc2), tr1);
					tb1 = tb2;
				}
				if (!tb1) {
					tr1 = RTMS32_EX_H(".\000\000\000s\000\000\000w\000\000\000p\000\000\000",4,779319152);
					tb1 = F887_17124(RTCV(loc2), tr1);
					Result = tb1;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.execute */
void F522_11130 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,arg3);
	RTLR(6,Current);
	
	RTGC;
	tr1 = RTLNS(891, 891, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_7_);
	F887_17091(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = F885_17040(RTCV(loc1), arg1);
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
		F892_17307(RTCV(loc1), ti4_1);
	} else {
	}
	F522_11132(Current, loc1, arg2, arg3);
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.execute_starts_with */
void F522_11131 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	F522_11130(Current, arg1, arg2, arg3);
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_uri */
void F522_11132 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,arg2);
	RTLR(6,arg3);
	
	RTGC;
	loc2 = F522_11140(Current, arg1);
	tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F602_14050(RTCV(tr1), loc2);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = F602_14080(RTCV(loc1));
	if (tb1) {
		tb1 = F602_14083(RTCV(loc1));
		if (tb1) {
			tb1 = F602_14089(RTCV(loc1));
			if (tb1) {
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_)) {
					tr1 = F885_17048(RTCV(arg1));
					F522_11138(Current, tr1, arg2, arg3);
				} else {
					tr1 = F902_18647(RTCV(arg2));
					F522_11133(Current, tr1, loc2, arg2, arg3);
				}
			} else {
				F522_11134(Current, loc1, arg2, arg3);
			}
		} else {
			tr1 = F885_17048(RTCV(arg1));
			F522_11137(Current, tr1, arg2, arg3);
		}
	} else {
		tr1 = F885_17048(RTCV(arg1));
		F522_11136(Current, tr1, arg2, arg3);
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_index */
void F522_11133 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(17);
	RTLR(0,loc4);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,loc11);
	RTLR(4,Current);
	RTLR(5,arg3);
	RTLR(6,arg4);
	RTLR(7,loc2);
	RTLR(8,arg1);
	RTLR(9,loc3);
	RTLR(10,loc5);
	RTLR(11,loc6);
	RTLR(12,loc7);
	RTLR(13,loc9);
	RTLR(14,tr2);
	RTLR(15,loc8);
	RTLR(16,loc1);
	
	RTGC;
	tr1 = RTLNS(584, 584, _OBJSIZ_3_0_0_1_0_2_0_0_);
	F585_13590(RTCV(tr1), arg2);
	loc4 = (EIF_REFERENCE) tr1;
	F585_13598(RTCV(loc4));
	tr1 = F522_11139(Current, loc4);
	loc11 = tr1;
	if (EIF_TEST(loc11)) {
		F522_11134(Current, loc11, arg3, arg4);
	} else {
		loc2 = F885_17049(RTCV(arg1));
		tb1 = '\0';
		tb2 = F324_9603(RTCV(loc2));
		if ((EIF_BOOLEAN) !tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
			tc1 = F893_17342(RTCV(loc2), ti4_1);
			tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '/');
		}
		if (tb1) {
			F893_17391(RTCV(loc2), (EIF_CHARACTER_8) '/');
		}
		loc3 = RTMS_EX_H("<html>\012\011<head>\012\011\011<title>Index of $URI</title>\012\011\011<style>\012\011\011\011td { padding-left: 10px;}\012\011\011</style>\012\011</head>\012\011<body>\012\011\011<h1>Index of $URI</h1>\012\011\011<table>\012\011\011<tr><th/><th>Name</th><th>Last modified</th><th>Size</th></tr>\012\011\011<tr><th colspan=\"4\"><hr></th></tr>",249,1602176062);
		tr1 = RTMS_EX_H("$URI",4,609571401);
		F893_17354(RTCV(loc3), tr1, loc2);
		loc5 = F585_13604(RTCV(loc4));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9288[Dtype(loc5)-459])(RTCV(loc5));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9302[Dtype(loc5)-459])(RTCV(loc5));
			if (tb1) break;
			loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9242[Dtype(loc5)-459])(RTCV(loc5));
			if (F522_11129(Current, loc6)) {
			} else {
				loc7 = F904_18748(RTCV(loc6));
				tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
				tr2 = F904_18737(RTCV(arg2), loc6);
				F602_14050(RTCV(tr1), tr2);
				loc9 = (EIF_REFERENCE) tr1;
				tb2 = '\0';
				tb3 = F602_14080(RTCV(loc9));
				if (tb3) {
					tb3 = F602_14089(RTCV(loc9));
					tb2 = tb3;
				}
				if (tb2) {
					loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
				tr1 = RTMS_EX_H("<tr><td>",8,1655450942);
				F893_17377(RTCV(loc3), tr1);
				if (loc10) {
					tr1 = RTMS_EX_H("[dir]",5,1685331037);
					F893_17377(RTCV(loc3), tr1);
				} else {
					tr1 = RTMS_EX_H("&nbsp;",6,1727288379);
					F893_17377(RTCV(loc3), tr1);
				}
				tr1 = RTMS_EX_H("</td>",5,796617790);
				F893_17377(RTCV(loc3), tr1);
				tr1 = RTMS_EX_H("<td><a href=\"",13,343985954);
				tr1 = F893_17379(RTCV(tr1), loc2);
				F893_17377(RTCV(loc3), tr1);
				tr1 = RTOUCR(43,F478_9086,(Current));
				F147_7983(RTCV(tr1), loc7, loc3);
				tr1 = RTMS_EX_H("\">",2,8766);
				F893_17377(RTCV(loc3), tr1);
				tb2 = F904_18715(RTCV(loc6));
				if (tb2) {
					tr1 = RTMS_EX_H("[Parent Directory] ..",21,1401102894);
					F893_17377(RTCV(loc3), tr1);
				} else {
					tr1 = RTOUCR(58,F521_10817,(Current));
					tr1 = F537_11492(RTCV(tr1), loc7);
					F893_17377(RTCV(loc3), tr1);
				}
				if (loc10) {
					tr1 = RTMS_EX_H("/",1,47);
					F893_17377(RTCV(loc3), tr1);
				}
				tr1 = RTMS_EX_H("</td>",5,796617790);
				F893_17377(RTCV(loc3), tr1);
				tr1 = RTMS_EX_H("<td>",4,1014260798);
				F893_17377(RTCV(loc3), tr1);
				tb2 = F602_14080(RTCV(loc9));
				if (tb2) {
					tr1 = RTLNS(900, 900, _OBJSIZ_2_1_0_0_0_0_1_0_);
					tr2 = F522_11147(Current, loc9);
					F901_18530(RTCV(tr1), tr2);
					loc8 = (EIF_REFERENCE) tr1;
					F901_18544(RTCV(loc8), loc3);
				}
				tr1 = RTMS_EX_H("</td>",5,796617790);
				F893_17377(RTCV(loc3), tr1);
				tr1 = RTMS_EX_H("<td>",4,1014260798);
				F893_17377(RTCV(loc3), tr1);
				tb2 = '\0';
				if ((EIF_BOOLEAN) !loc10) {
					tb3 = F602_14080(RTCV(loc9));
					tb2 = tb3;
				}
				if (tb2) {
					ti4_1 = F522_11146(Current, loc9);
					F893_17381(RTCV(loc3), ti4_1);
				}
				tr1 = RTMS_EX_H("</td>",5,796617790);
				F893_17377(RTCV(loc3), tr1);
				tr1 = RTMS_EX_H("</tr>",5,796621374);
				F893_17377(RTCV(loc3), tr1);
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9304[Dtype(loc5)-459])(RTCV(loc5));
		}
		tr1 = RTMS_EX_H("\011\011<tr><th colspan=\"4\"><hr></th></tr>\011\011\011\011\012\011\011</table>\012\011</body>\012</html>",68,1386493502);
		F893_17377(RTCV(loc3), tr1);
		tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F649_12064(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		F649_12113(RTCV(loc1));
		F116_8564(RTCV(arg4), ((EIF_INTEGER_32) 200L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_1_1_0_2_);
		F649_12103(RTCV(loc1), ti4_1);
		F116_8576(RTCV(arg4), loc1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg3) + _REFACS_9_);
		tr2 = RTOUCR(59,F166_8321,(Current));
		tb2 = F889_17187(RTCV(tr1), tr2);
		if ((EIF_BOOLEAN) !tb2) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg4)-115])(RTCV(arg4), loc3);
		}
		F116_8586(RTCV(arg4));
	}
	F585_13599(RTCV(loc4));
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_file */
void F522_11134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(14);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,loc5);
	RTLR(6,arg2);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,arg3);
	RTLR(10,loc3);
	RTLR(11,tr2);
	RTLR(12,loc4);
	RTLR(13,tr3);
	
	RTGC;
	tr1 = F602_14057(RTCV(arg1));
	tr1 = F904_18748(RTCV(tr1));
	loc1 = F522_11143(Current, tr1);
	tr1 = RTOUCR(60,F522_11145,(Current));
	loc2 = F1023_20084(RTCV(tr1), loc1);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc2 = RTOUCR(61,F153_8096,(Current));
	}
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = RTMS_EX_H("HTTP_IF_MODIFIED_SINCE",22,2066272837);
	tr1 = F902_18603(RTCV(arg2), tr1);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		tr1 = F885_17048(RTCV(loc5));
		tr1 = F522_11148(Current, tr1);
		loc6 = tr1;
		tb3 = EIF_TEST(loc6);
	}
	if (tb3) {
		tr1 = F522_11147(Current, arg1);
		loc7 = tr1;
		tb2 = EIF_TEST(loc7);
	}
	if (tb2) {
		tb2 = F534_10529(RTCV(loc7), loc6);
		tb1 = tb2;
	}
	if (tb1) {
		F522_11135(Current, loc7, arg2, arg3);
	} else {
		tr1 = RTLNS(611, 611, _OBJSIZ_5_2_0_3_0_0_0_0_);
		tr2 = F602_14057(RTCV(arg1));
		tr2 = F904_18748(RTCV(tr2));
		F612_13248(RTCV(tr1), loc2, tr2);
		loc3 = (EIF_REFERENCE) tr1;
		F612_13266(RTCV(loc3), ((EIF_INTEGER_32) 200L));
		tr1 = RTLNS(1090, 1090, _OBJSIZ_2_0_0_2_0_0_0_1_);
		F1091_21056(RTCV(tr1));
		loc4 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3));
		tr2 = RTMS_EX_H("private, max-age=",17,1398495805);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_);
		tr3 = c_outi(ti4_1);
		tr2 = F893_17379(RTCV(tr2), tr3);
		F649_12147(RTCV(tr1), tr2);
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3));
		F649_12141(RTCV(tr1), loc4);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_) > ((EIF_INTEGER_32) 0L))) {
			loc4 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc4);
			F1091_21082(RTCV(loc4), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_));
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3));
		F649_12146(RTCV(tr1), loc4);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_9_);
		tr2 = RTOUCR(59,F166_8321,(Current));
		tb1 = F889_17187(RTCV(tr1), tr2);
		F612_13267(RTCV(loc3), tb1);
		F116_8587(RTCV(arg3), loc3);
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_not_modified */
void F522_11135 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,arg1);
	RTLR(6,arg3);
	
	RTGC;
	tr1 = RTLNS(1090, 1090, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F1091_21056(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("private, max-age=",17,1398495805);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_);
	tr2 = c_outi(ti4_1);
	tr1 = F893_17379(RTCV(tr1), tr2);
	F649_12147(RTCV(loc1), tr1);
	F649_12141(RTCV(loc1), loc2);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_) > ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc2);
		F1091_21082(RTCV(loc2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_));
	}
	F649_12146(RTCV(loc1), loc2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F649_12142(RTCV(loc1), arg1);
	}
	F116_8564(RTCV(arg3), ((EIF_INTEGER_32) 304L));
	F116_8576(RTCV(arg3), loc1);
	F116_8586(RTCV(arg3));
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_not_found */
void F522_11136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	RTLR(5,arg3);
	RTLR(6,loc1);
	RTLR(7,loc2);
	RTLR(8,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1, arg2, arg3);
		;
	} else {
		tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F649_12064(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		F649_12116(RTCV(loc1));
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F885_16993(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTMS_EX_H("Resource \"",10,536103458);
		tr1 = F893_17379(RTCV(tr1), arg1);
		tr2 = RTMS_EX_H("\" not found\012",12,277993738);
		tr1 = F893_17379(RTCV(tr1), tr2);
		F893_17377(RTCV(loc2), tr1);
		F116_8564(RTCV(arg3), ((EIF_INTEGER_32) 404L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
		F649_12103(RTCV(loc1), ti4_1);
		F116_8576(RTCV(arg3), loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg3)-115])(RTCV(arg3), loc2);
		F116_8586(RTCV(arg3));
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_access_denied */
void F522_11137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	RTLR(5,arg3);
	RTLR(6,loc1);
	RTLR(7,loc2);
	RTLR(8,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1, arg2, arg3);
		;
	} else {
		tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F649_12064(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		F649_12116(RTCV(loc1));
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F885_16993(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTMS_EX_H("Resource \"",10,536103458);
		tr1 = F893_17379(RTCV(tr1), arg1);
		tr2 = RTMS_EX_H("\": Access denied\012",17,1181519882);
		tr1 = F893_17379(RTCV(tr1), tr2);
		F893_17377(RTCV(loc2), tr1);
		F116_8564(RTCV(arg3), ((EIF_INTEGER_32) 403L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
		F649_12103(RTCV(loc1), ti4_1);
		F116_8576(RTCV(arg3), loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg3)-115])(RTCV(arg3), loc2);
		F116_8586(RTCV(arg3));
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.process_directory_index_disabled */
void F522_11138 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	RTLR(5,arg3);
	RTLR(6,loc1);
	RTLR(7,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1, arg2, arg3);
		;
	} else {
		tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F649_12064(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		F649_12116(RTCV(loc1));
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F885_16993(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTMS_EX_H("Directory index: Access denied\012",31,603815178);
		F893_17377(RTCV(loc2), tr1);
		F116_8564(RTCV(arg3), ((EIF_INTEGER_32) 403L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
		F649_12103(RTCV(loc1), ti4_1);
		F116_8576(RTCV(arg3), loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg3)-115])(RTCV(arg3), loc2);
		F116_8586(RTCV(arg3));
	}
	RTLE;
}

/* {WSF_FILE_SYSTEM_HANDLER}.directory_index_file */
EIF_REFERENCE F522_11139 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,arg1);
	RTLR(5,loc2);
	RTLR(6,loc1);
	RTLR(7,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		loc4 = F682_12245(RTCV(loc3));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc4)-646])(RTCV(loc4));
			if (tb1) break;
			if ((EIF_BOOLEAN)(Result != NULL)) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc4)-646])(RTCV(loc4));
			tb2 = F585_13597(RTCV(arg1), tr1);
			if (tb2) {
				loc2 = F585_13594(RTCV(arg1));
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc4)-646])(RTCV(loc4));
				loc2 = F904_18736(RTCV(loc2), tr1);
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
					F602_14050(RTCV(tr1), loc2);
					loc1 = (EIF_REFERENCE) tr1;
				} else {
					F602_14050(RTCV(loc1), loc2);
				}
				tb2 = '\0';
				tb3 = F602_14080(RTCV(loc1));
				if (tb3) {
					tb3 = F602_14083(RTCV(loc1));
					tb2 = tb3;
				}
				if (tb2) {
					Result = (EIF_REFERENCE) loc1;
				}
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc4)-646])(RTCV(loc4));
		}
	}
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.resource_filename */
EIF_REFERENCE F522_11140 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,arg1);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current);
	loc1 = F522_11144(Current, arg1);
	tb1 = F327_9603(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		Result = F904_18736(RTCV(Result), loc1);
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.extension */
EIF_REFERENCE F522_11143 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,tr1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
	loc1 = F887_17102(RTCV(arg1), (EIF_CHARACTER_32) 46U, ti4_1);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
		Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), ti4_1);
	} else {
		tr1 = RTLNS(891, 891, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F885_16993(RTCV(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.uri_path_to_filename */
EIF_REFERENCE F522_11144 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
	tr1 = RTLNS(891, 891, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F887_17091(RTCV(tr1), arg1);
	Result = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(Result)+ _LNGOFF_1_1_0_2_);
		tw1 = F892_17252(RTCV(Result), ti4_1);
		tb1 = (EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 47U);
	}
	if (tb1) {
		F892_17309(RTCV(Result), ((EIF_INTEGER_32) 1L));
		loc1--;
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		tw1 = F892_17252(RTCV(Result), ((EIF_INTEGER_32) 1L));
		tb1 = (EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 47U);
	}
	if (tb1) {
		F892_17307(RTCV(Result), ((EIF_INTEGER_32) 1L));
		loc1--;
	}
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			tr1 = RTMS32_EX_H("/\000\000\000",1,47);
			tr2 = RTMS32_EX_H("\\\000\000\000",1,92);
			F892_17263(RTCV(Result), tr1, tr2);
		}
	}
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.extension_mime_mapping */
static EIF_REFERENCE F522_11145_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(60)

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
	tr2 = RTMS_EX_H("mime.types",10,2075371635);
	F602_14049(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	tb2 = F602_14080(RTCV(loc1));
	if (tb2) {
		tb2 = F602_14083(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNS(1022, 1022, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = F602_14057(RTCV(loc1));
		tr2 = F904_18748(RTCV(tr2));
		F1023_20082(RTCV(tr1), tr2);
		Result = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(1022, 1022, _OBJSIZ_1_0_0_0_0_0_0_0_);
		F1023_20081(RTCV(tr1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F522_11145 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(60,F522_11145_body,(Current));
}

/* {WSF_FILE_SYSTEM_HANDLER}.file_size */
EIF_INTEGER_32 F522_11146 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[Dtype(arg1)-601])(RTCV(arg1));
	return (EIF_INTEGER_32) ti4_1;
}

/* {WSF_FILE_SYSTEM_HANDLER}.file_date */
EIF_REFERENCE F522_11147 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	ti4_1 = F602_14072(RTCV(arg1));
	Result = F522_11149(Current, ti4_1);
	RTLE;
	return Result;
}

/* {WSF_FILE_SYSTEM_HANDLER}.http_date_format_to_date */
EIF_REFERENCE F522_11148 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(900, 900, _OBJSIZ_2_1_0_0_0_0_1_0_);
	F901_18529(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_2_0_);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WSF_FILE_SYSTEM_HANDLER}.timestamp_to_date */
EIF_REFERENCE F522_11149 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(900, 900, _OBJSIZ_2_1_0_0_0_0_1_0_);
	ti8_1 = (EIF_INTEGER_64) arg1;
	F901_18528(RTCV(tr1), ti8_1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit248 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

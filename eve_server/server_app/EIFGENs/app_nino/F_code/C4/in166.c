/*
 * Code for class INET_ADDRESS_FACTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in166.h"
#include <ctype.h>
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

/* {INET_ADDRESS_FACTORY}.create_any_local */
EIF_REFERENCE F487_9181 (EIF_REFERENCE Current)
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
	tr1 = RTOUCR(21,F487_9187,(Current));
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R8280[Dtype(tr1)-183])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.create_from_name */
EIF_REFERENCE F487_9184 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	tb1 = '\0';
	tr1 = F487_9189(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = F316_9603(RTCV(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = F803_12639(RTCV(loc1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {INET_ADDRESS_FACTORY}.create_from_sockaddr */
EIF_REFERENCE F487_9186 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER)) R8878[Dtype(Current)-486])(Current, arg1);
	if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) af_inet())) {
		tr1 = RTLNS(230, 230, _OBJSIZ_1_0_0_2_0_0_0_0_);
		F231_8786(RTCV(tr1), NULL, arg1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) af_inet6())) {
			tr1 = RTLNS(229, 229, _OBJSIZ_3_1_0_2_0_0_0_0_);
			F230_8760(RTCV(tr1), NULL, arg1);
			Result = (EIF_REFERENCE) tr1;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R8474[Dtype(Result)-229])(RTCV(Result));
			if (F487_9194(Current, tr1)) {
				tr1 = RTLNS(230, 230, _OBJSIZ_1_0_0_2_0_0_0_0_);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R8474[Dtype(Result)-229])(RTCV(Result));
				tr2 = F487_9193(Current, tr2);
				F231_8785(RTCV(tr1), NULL, tr2);
				Result = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTLE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.impl */
static EIF_REFERENCE F487_9187_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(21)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	if ((EIF_BOOLEAN) EIF_TEST(en_ipv6_available())) {
		tr1 = RTLNS(183, 183, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(184, 184, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (EIF_REFERENCE) tr1;
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F487_9187 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(21,F487_9187_body,(Current));
}

/* {INET_ADDRESS_FACTORY}.get_all_by_name */
EIF_REFERENCE F487_9189 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc3);
	RTLR(6,loc6);
	RTLR(7,loc4);
	
	RTGC;
	loc2 = (EIF_REFERENCE) arg1;
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc2 == NULL)) {
		tb2 = F324_9603(RTCV(loc2));
		tb1 = tb2;
	}
	if (tb1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {802,228,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 1L));
		Result = (EIF_REFERENCE) tr1;
		tr1 = RTOUCR(21,F487_9187,(Current));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R8281[Dtype(tr1)-183])(RTCV(tr1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), tr1);
	} else {
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tc1 = F893_17342(RTCV(loc2), ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '[')) {
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
				tc1 = F893_17342(RTCV(loc2), ti4_1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ']');
			}
			if (tb1) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
				loc2 = F893_17423(RTCV(loc2), ((EIF_INTEGER_32) 2L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		if ((EIF_BOOLEAN) !loc8) {
			tb1 = '\01';
			tc1 = F893_17342(RTCV(loc2), ((EIF_INTEGER_32) 1L));
			tr1 = RTLNS(829, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)tr1 = tc1;
			
			tb2 = F828_16868(RTCV(tr1));
			if (!tb2) {
				tc1 = F893_17342(RTCV(loc2), ((EIF_INTEGER_32) 1L));
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
			}
			if (tb1) {
				loc3 = F487_9191(Current, loc2);
				if ((EIF_BOOLEAN)(loc3 == NULL)) {
					loc7 = F889_17173(RTCV(loc2), (EIF_CHARACTER_8) '%', ((EIF_INTEGER_32) 1L));
					if ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) 0L))) {
						loc5 = F487_9190(Current, loc2);
						if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) -1L))) {
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_1_1_0_2_);
							loc6 = F893_17423(RTCV(loc2), (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L)), ti4_1);
						}
					}
					loc3 = F487_9192(Current, loc2);
				} else {
					if (loc1) {
						loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
				if ((EIF_BOOLEAN) !loc8) {
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						{
							static EIF_TYPE_INDEX typarr0[] = {802,228,0xFFFF};
							EIF_TYPE_INDEX typres0;
							static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
							
							typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
						}
						F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 1L));
						Result = (EIF_REFERENCE) tr1;
						ti4_1 = F732_12316(RTCV(loc3));
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
							tr1 = RTLNS(230, 230, _OBJSIZ_1_0_0_2_0_0_0_0_);
							F231_8785(RTCV(tr1), NULL, loc3);
							loc4 = (EIF_REFERENCE) tr1;
						} else {
							if ((EIF_BOOLEAN)(loc6 != NULL)) {
								tr1 = RTLNS(229, 229, _OBJSIZ_3_1_0_2_0_0_0_0_);
								F230_8758(RTCV(tr1), NULL, loc3, loc6);
								loc4 = (EIF_REFERENCE) tr1;
							} else {
								tr1 = RTLNS(229, 229, _OBJSIZ_3_1_0_2_0_0_0_0_);
								F230_8759(RTCV(tr1), NULL, loc3, loc5);
								loc4 = (EIF_REFERENCE) tr1;
							}
						}
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), loc4);
					}
				}
			} else {
				if (loc1) {
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					Result = (EIF_REFERENCE) NULL;
				}
			}
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == NULL) && (EIF_BOOLEAN) !loc8)) {
				RTLE;
				return (EIF_REFERENCE) F487_9198(Current, loc2);
			}
		}
	}
	RTLE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.check_numeric_zone */
EIF_INTEGER_32 F487_9190 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	loc1 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) '%', ((EIF_INTEGER_32) 1L));
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	} else {
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		for (;;) {
			if ((EIF_BOOLEAN) (loc5 || (EIF_BOOLEAN) (loc3 > loc2))) break;
			loc4 = F893_17342(RTCV(arg1), loc3);
			if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) ']')) {
				if ((EIF_BOOLEAN)(loc3 == (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)))) {
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				}
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				tb1 = EIF_TEST(isdigit(loc4));
				if ((EIF_BOOLEAN) !tb1) {
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					ti4_1 = (EIF_INTEGER_32) (loc4);
					ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
					Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 10L)) + (EIF_INTEGER_32) (ti4_1 - ti4_2));
				}
			}
			loc3++;
		}
	}
	RTLE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.text_to_numeric_format_v4 */
EIF_REFERENCE F487_9191 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc1);
	
	RTGC;
	tb1 = F324_9603(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,1017,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0, 731, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		F732_12305(RTCV(tr1), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 4L));
		Result = (EIF_REFERENCE) tr1;
		loc1 = F487_9196(Current, arg1, (EIF_CHARACTER_8) '.');
		ti4_1 = F803_12653(RTCV(loc1));
		switch (ti4_1) {
			case 1L:
				tr1 = F803_12637(RTCV(loc1), ((EIF_INTEGER_32) 1L));
				tb1 = F885_17025(RTCV(tr1));
				if (tb1) {
					tr1 = F803_12637(RTCV(loc1), ((EIF_INTEGER_32) 1L));
					loc2 = F885_17059(RTCV(tr1));
					tb1 = '\0';
					if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
						ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4294967295));
						tb1 = (EIF_BOOLEAN) (loc2 <= ti4_1);
					}
					if (tb1) {
						ti4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 24L));
						ti4_1 = eif_bit_and((ti4_1),((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						F732_12330(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 1L));
						ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 16777215L));
						ti4_1 = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 16L));
						ti4_1 = eif_bit_and((ti4_1),((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						F732_12330(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 2L));
						ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 65535L));
						ti4_1 = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 8L));
						ti4_1 = eif_bit_and((ti4_1),((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						F732_12330(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 3L));
						ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						F732_12330(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 4L));
					} else {
						Result = (EIF_REFERENCE) NULL;
					}
				} else {
					Result = (EIF_REFERENCE) NULL;
				}
				break;
			case 2L:
				tr1 = F803_12637(RTCV(loc1), ((EIF_INTEGER_32) 1L));
				tb1 = F885_17025(RTCV(tr1));
				if (tb1) {
					tr1 = F803_12637(RTCV(loc1), ((EIF_INTEGER_32) 1L));
					loc2 = F885_17059(RTCV(tr1));
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 255L)))) {
						ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						F732_12330(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 1L));
						tr1 = F803_12637(RTCV(loc1), ((EIF_INTEGER_32) 2L));
						tb1 = F885_17025(RTCV(tr1));
						if (tb1) {
							tr1 = F803_12637(RTCV(loc1), ((EIF_INTEGER_32) 2L));
							loc2 = F885_17059(RTCV(tr1));
							tb1 = '\0';
							if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
								ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4294967295));
								tb1 = (EIF_BOOLEAN) (loc2 <= ti4_1);
							}
							if (tb1) {
								ti4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 16L));
								ti4_1 = eif_bit_and((ti4_1),((EIF_INTEGER_32) 255L));
								tu1_1 = (EIF_NATURAL_8) ti4_1;
								F732_12330(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 2L));
								ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 65535L));
								ti4_1 = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 8L));
								ti4_1 = eif_bit_and((ti4_1),((EIF_INTEGER_32) 255L));
								tu1_1 = (EIF_NATURAL_8) ti4_1;
								F732_12330(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 3L));
								ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
								tu1_1 = (EIF_NATURAL_8) ti4_1;
								F732_12330(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 4L));
							} else {
								Result = (EIF_REFERENCE) NULL;
							}
						} else {
							Result = (EIF_REFERENCE) NULL;
						}
					}
				} else {
					Result = (EIF_REFERENCE) NULL;
				}
				break;
			case 3L:
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(Result == NULL))) break;
					tr1 = F803_12637(RTCV(loc1), loc3);
					tb1 = F885_17025(RTCV(tr1));
					if (tb1) {
						tr1 = F803_12637(RTCV(loc1), loc3);
						loc2 = F885_17059(RTCV(tr1));
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 255L)))) {
							ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							F732_12330(RTCV(Result), tu1_1, loc3);
						} else {
							Result = (EIF_REFERENCE) NULL;
						}
					} else {
						Result = (EIF_REFERENCE) NULL;
					}
					loc3++;
				}
				tb1 = '\0';
				tr1 = F803_12637(RTCV(loc1), ((EIF_INTEGER_32) 3L));
				tb2 = F885_17025(RTCV(tr1));
				if (tb2) {
					tb1 = (EIF_BOOLEAN)(Result != NULL);
				}
				if (tb1) {
					tr1 = F803_12637(RTCV(loc1), ((EIF_INTEGER_32) 3L));
					loc2 = F885_17059(RTCV(tr1));
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 65535L)))) {
						ti4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 8L));
						ti4_1 = eif_bit_and((ti4_1),((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						F732_12330(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 3L));
						ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						F732_12330(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 4L));
					} else {
						Result = (EIF_REFERENCE) NULL;
					}
				} else {
					Result = (EIF_REFERENCE) NULL;
				}
				break;
			case 4L:
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 4L)) || (EIF_BOOLEAN)(Result == NULL))) break;
					tr1 = F803_12637(RTCV(loc1), loc3);
					tb1 = F885_17025(RTCV(tr1));
					if (tb1) {
						tr1 = F803_12637(RTCV(loc1), loc3);
						loc2 = F885_17059(RTCV(tr1));
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 255L)))) {
							ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 255L));
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							F732_12330(RTCV(Result), tu1_1, loc3);
						} else {
							Result = (EIF_REFERENCE) NULL;
						}
					} else {
						Result = (EIF_REFERENCE) NULL;
					}
					loc3++;
				}
				break;
			default:
				Result = (EIF_REFERENCE) NULL;
				break;
		}
	}
	RTLE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.text_to_numeric_format_v6 */
EIF_REFERENCE F487_9192 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc11 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc14 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc12);
	RTLR(5,loc13);
	RTLR(6,loc15);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		loc1 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) '%', ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN) (loc1 < loc2)) {
			{
				static EIF_TYPE_INDEX typarr0[] = {731,1017,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNS(typres0, 731, _OBJSIZ_1_1_0_2_0_0_0_0_);
			}
			F732_12305(RTCV(tr1), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 16L));
			Result = (EIF_REFERENCE) tr1;
			if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
			}
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			tc1 = F893_17342(RTCV(arg1), loc3);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':')) {
				loc3++;
				tc1 = F893_17342(RTCV(arg1), loc3);
				if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) ':')) {
					Result = (EIF_REFERENCE) NULL;
				}
			}
			if ((EIF_BOOLEAN)(Result != NULL)) {
				loc7 = (EIF_INTEGER_32) loc3;
				loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc14 || (EIF_BOOLEAN)(Result == NULL)) || (EIF_BOOLEAN) (loc3 > loc2))) break;
					loc11 = F893_17342(RTCV(arg1), loc3);
					loc3++;
					tr1 = RTLNS(829, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
					*(EIF_CHARACTER_8 *)tr1 = loc11;
					
					tb1 = F828_16868(RTCV(tr1));
					if (tb1) {
						loc10 = eif_bit_shift_left(loc10,((EIF_INTEGER_32) 4L));
						tu1_1 = F487_9195(Current, loc11);
						ti4_1 = (EIF_INTEGER_32) tu1_1;
						loc10 = eif_bit_or(loc10,ti4_1);
						if ((EIF_BOOLEAN) (loc10 > ((EIF_INTEGER_32) 65535L))) {
							Result = (EIF_REFERENCE) NULL;
						} else {
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
					} else {
						if ((EIF_BOOLEAN)(loc11 == (EIF_CHARACTER_8) ':')) {
							loc7 = (EIF_INTEGER_32) loc3;
							if ((EIF_BOOLEAN) !loc9) {
								if ((EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) -1L))) {
									Result = (EIF_REFERENCE) NULL;
								} else {
									loc8 = (EIF_INTEGER_32) loc4;
								}
							} else {
								if ((EIF_BOOLEAN) (loc3 > loc2)) {
									Result = (EIF_REFERENCE) NULL;
								} else {
									if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 2L)) > (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L)))) {
										Result = (EIF_REFERENCE) NULL;
									} else {
										ti4_1 = eif_bit_shift_right(loc10,((EIF_INTEGER_32) 8L));
										ti4_1 = eif_bit_and((ti4_1),((EIF_INTEGER_32) 255L));
										tu1_1 = (EIF_NATURAL_8) ti4_1;
										F732_12330(RTCV(Result), tu1_1, loc4);
										loc4++;
										ti4_1 = eif_bit_and(loc10,((EIF_INTEGER_32) 255L));
										tu1_1 = (EIF_NATURAL_8) ti4_1;
										F732_12330(RTCV(Result), tu1_1, loc4);
										loc4++;
										loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
										loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
									}
								}
							}
						} else {
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc11 == (EIF_CHARACTER_8) '.') && ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 4L)) <= (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L)))))) {
								loc12 = F893_17423(RTCV(arg1), loc7, loc2);
								if ((EIF_BOOLEAN)(F487_9197(Current, loc12) != ((EIF_INTEGER_32) 3L))) {
									Result = (EIF_REFERENCE) NULL;
								} else {
									loc13 = F487_9191(Current, loc12);
									if ((EIF_BOOLEAN)(loc13 == NULL)) {
										Result = (EIF_REFERENCE) NULL;
									} else {
										loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
										for (;;) {
											if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 4L))) break;
											tu1_1 = F732_12310(RTCV(loc13), loc5);
											F732_12330(RTCV(Result), tu1_1, loc4);
											loc4++;
											loc5++;
										}
										loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
										loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									}
								}
							} else {
								Result = (EIF_REFERENCE) NULL;
							}
						}
					}
				}
				if ((EIF_BOOLEAN)(Result != NULL)) {
					if (loc9) {
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 2L)) > (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L)))) {
							Result = (EIF_REFERENCE) NULL;
						} else {
							ti4_1 = eif_bit_shift_right(loc10,((EIF_INTEGER_32) 8L));
							ti4_1 = eif_bit_and((ti4_1),((EIF_INTEGER_32) 255L));
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							F732_12330(RTCV(Result), tu1_1, loc4);
							loc4++;
							ti4_1 = eif_bit_and(loc10,((EIF_INTEGER_32) 255L));
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							F732_12330(RTCV(Result), tu1_1, loc4);
							loc4++;
						}
					}
				}
				if ((EIF_BOOLEAN)(Result != NULL)) {
					if ((EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) -1L))) {
						loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc8);
						if ((EIF_BOOLEAN)(loc4 == (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L)))) {
							Result = (EIF_REFERENCE) NULL;
						} else {
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							for (;;) {
								if ((EIF_BOOLEAN) (loc3 >= loc6)) break;
								tu1_1 = F732_12310(RTCV(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc6) - loc3) - ((EIF_INTEGER_32) 1L)));
								F732_12330(RTCV(Result), tu1_1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) - loc3));
								tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
								F732_12330(RTCV(Result), tu1_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc6) - loc3) - ((EIF_INTEGER_32) 1L)));
								loc3++;
							}
							loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L));
						}
					}
					if ((EIF_BOOLEAN)(loc4 != (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L)))) {
						RTLE;
						return (EIF_REFERENCE) NULL;
					} else {
						RTCT0("result_attached", EX_CHECK);
						if ((EIF_BOOLEAN)(Result != NULL)) {
							RTCK0;
						} else {
							RTCF0;
						}
						loc15 = F487_9193(Current, Result);
						if ((EIF_BOOLEAN)(loc15 != NULL)) {
							Result = (EIF_REFERENCE) loc15;
						}
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.convert_from_ipv4_mappedd_address */
EIF_REFERENCE F487_9193 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	if (F487_9194(Current, arg1)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,1017,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0, 731, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		F732_12305(RTCV(tr1), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 4L));
		Result = (EIF_REFERENCE) tr1;
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 4L))) break;
			tu1_1 = F732_12310(RTCV(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 12L)));
			F732_12330(RTCV(Result), tu1_1, loc1);
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.is_ipv4_mapped_address */
EIF_BOOLEAN F487_9194 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	ti4_1 = F732_12316(RTCV(arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L))) {
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = '\0';
		tb7 = '\0';
		tb8 = '\0';
		tb9 = '\0';
		tb10 = '\0';
		tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 1L));
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 2L));
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb10 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb10) {
			tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 3L));
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb9 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb9) {
			tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 4L));
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb8 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb8) {
			tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 5L));
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb7 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb7) {
			tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 6L));
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb6 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb6) {
			tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 7L));
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb5 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb5) {
			tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 8L));
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb4 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb4) {
			tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 9L));
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb3 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb3) {
			tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 10L));
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb2 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb2) {
			tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 11L));
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
			tb1 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb1) {
			tu1_1 = F732_12310(RTCV(arg1), ((EIF_INTEGER_32) 12L));
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
			Result = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		Result = (EIF_BOOLEAN) Result;
	}
	RTLE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.hex_character_to_integer */
EIF_NATURAL_8 F487_9195 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
		ti4_1 = (EIF_INTEGER_32) (arg1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
		Result = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
			Result = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 - ti4_2);
			tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) (Result + tu1_1);
		} else {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
				ti4_1 = (EIF_INTEGER_32) (arg1);
				ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
				Result = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 - ti4_2);
				tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
				Result = (EIF_NATURAL_8) (EIF_NATURAL_8) (Result + tu1_1);
			}
		}
	}
	return Result;
}

/* {INET_ADDRESS_FACTORY}.split */
EIF_REFERENCE F487_9196 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	RTLR(4,loc2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {802,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	Result = (EIF_REFERENCE) tr1;
	tb1 = F324_9603(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F885_16993(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		for (;;) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
			tc1 = F893_17342(RTCV(arg1), loc1);
			if ((EIF_BOOLEAN)(tc1 == arg2)) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), loc2);
				tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
				F885_16993(RTCV(tr1));
				loc2 = (EIF_REFERENCE) tr1;
			} else {
				ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN)(loc1 == ti4_2)) {
					tc1 = F893_17342(RTCV(arg1), loc1);
					F893_17392(RTCV(loc2), tc1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), loc2);
				} else {
					tc1 = F893_17342(RTCV(arg1), loc1);
					F893_17392(RTCV(loc2), tc1);
				}
			}
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.dot_count */
EIF_INTEGER_32 F487_9197 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	loc1 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L));
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		Result++;
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc1 < ti4_1)) {
			loc1 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) '.', (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
		}
	}
	RTLE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.get_all_by_name_0 */
EIF_REFERENCE F487_9198 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc2);
	
	RTGC;
	loc1 = F487_9199(Current, arg1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {802,228,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 1L));
		Result = (EIF_REFERENCE) tr1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == NULL)) break;
			loc3 = F587_13651(RTCV(loc1));
			ti4_1 = (EIF_INTEGER_32) en_addrinfo_af_inet();
			if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
				tr1 = RTLNS(230, 230, _OBJSIZ_1_0_0_2_0_0_0_0_);
				tp1 = F587_13656(RTCV(loc1));
				F231_8786(RTCV(tr1), arg1, tp1);
				loc2 = (EIF_REFERENCE) tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), loc2);
			} else {
				ti4_1 = (EIF_INTEGER_32) en_addrinfo_af_inet6();
				if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
					if ((EIF_BOOLEAN) EIF_TEST(en_ipv6_available())) {
						tr1 = RTLNS(229, 229, _OBJSIZ_3_1_0_2_0_0_0_0_);
						tp1 = F587_13656(RTCV(loc1));
						F230_8760(RTCV(tr1), arg1, tp1);
						loc2 = (EIF_REFERENCE) tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), loc2);
					}
				}
			}
			loc1 = F587_13657(RTCV(loc1));
		}
		tb1 = F316_9603(RTCV(Result));
		if (tb1) {
			RTLE;
			return (EIF_REFERENCE) NULL;
		}
	}
	RTLE;
	return Result;
}

/* {INET_ADDRESS_FACTORY}.getaddrinfo */
EIF_REFERENCE F487_9199 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(562, 562, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F563_11287(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = F563_11306(RTCV(loc1));
	loc2 = (EIF_POINTER) en_getaddrinfo(tp1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		tr1 = RTLNS(586, 586, _OBJSIZ_0_0_0_0_0_1_0_0_);
		F586_13646(RTCV(tr1), loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {INET_ADDRESS_FACTORY}.c_getaddrinfo */
EIF_POINTER F487_9200 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) en_getaddrinfo(arg1);
	
	return Result;
}

/* {INET_ADDRESS_FACTORY}.get_sock_family */
EIF_INTEGER_32 F487_9201 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) en_sockaddr_get_family(arg1);
	
	return Result;
}

void EIF_Minit166 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

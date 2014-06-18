/*
 * Code for class HTTP_PARAMETER_TABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ht297.h"
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

/* {HTTP_PARAMETER_TABLE}.make_from_substring */
void F702_13133 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	F697_13000(Current, ((EIF_INTEGER_32) 1L));
	loc2 = (EIF_INTEGER_32) arg2;
	{
		static EIF_TYPE_INDEX typarr0[] = {125,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 125, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F126_10164(RTCV(tr1), loc2);
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 >= arg3)) break;
		F702_13135(Current, arg1, loc2, loc1);
		loc2 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9580[Dtype(loc1)-120])(RTCV(loc1)));
	}
	RTLE;
}

/* {HTTP_PARAMETER_TABLE}.force_substring */
void F702_13135 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,Current);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	loc4 = (EIF_INTEGER_32) arg2;
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc4 > loc1)) {
			tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc4));
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		loc4++;
	}
	tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc4));
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ';')) {
		F126_10165(RTCV(arg3), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
	} else {
		if ((EIF_BOOLEAN) (loc4 < loc1)) {
			loc5 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) '=', loc4);
			if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 0L))) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), loc4, (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)));
				loc2 = F885_17049(RTCV(tr1));
				if ((EIF_BOOLEAN) (loc5 >= loc1)) {
					loc3 = RTMS_EX_H("",0,0);
					F126_10165(RTCV(arg3), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				} else {
					tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L))));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\"')) {
						loc6 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) '\"', (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 2L)));
						if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
							tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)));
							loc3 = F885_17049(RTCV(tr1));
							loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
							for (;;) {
								tb2 = '\01';
								if (!(EIF_BOOLEAN) (loc4 > loc1)) {
									tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc4));
									tb3 = EIF_TEST(isspace(tc1));
									tb2 = (EIF_BOOLEAN) !tb3;
								}
								if (tb2) break;
								loc4++;
							}
							tc1 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc4));
							if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ';')) {
								loc4++;
							}
							F126_10165(RTCV(arg3), loc4);
						} else {
							loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc3 = RTMS_EX_H("",0,0);
						}
					} else {
						loc6 = F889_17173(RTCV(arg1), (EIF_CHARACTER_8) ';', (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)));
						if ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 0L))) {
							loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
						}
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R15107[Dtype(arg1)-887])(RTCV(arg1), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)));
						loc3 = F885_17049(RTCV(tr1));
						F126_10165(RTCV(arg3), (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)));
					}
					F893_17362(RTCV(loc3));
					if ((EIF_BOOLEAN) !loc7) {
						F697_13045(Current, loc3, loc2);
					}
				}
			} else {
				loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	if (loc7) {
		F126_10165(RTCV(arg3), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) || loc7);
	RTLE;
}

/* {HTTP_PARAMETER_TABLE}.empty_duplicate */
EIF_REFERENCE F702_13136 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_REFERENCE) F697_13056(Current, arg1);
}

void EIF_Minit297 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

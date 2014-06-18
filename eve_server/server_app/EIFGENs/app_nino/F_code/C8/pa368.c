/*
 * Code for class PATH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pa368.h"
#include "eif_built_in.h"
#include "eif_path_name.h"
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

/* {PATH}.make_empty */
void F904_18707 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F904_18754(Current);
	RTLE;
}

/* {PATH}.make_current */
void F904_18708 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	ti4_1 = F904_18753(Current);
	F889_17162(RTCV(tr1), ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	F893_17391(RTCV(tr1), (EIF_CHARACTER_8) '.');
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F893_17391(RTCV(tr1), (EIF_CHARACTER_8) '\000');
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F904_18754(Current);
	RTLE;
}

/* {PATH}.make_from_string */
void F904_18709 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	ti4_2 = F904_18753(Current);
	F889_17162(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 * ti4_2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(arg1)-887])(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F904_18762(Current, tr1, arg1, (EIF_CHARACTER_8) '\000');
		F904_18755(Current);
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	F904_18754(Current);
	RTLE;
}

/* {PATH}.make_from_storage */
void F904_18711 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	F904_18755(Current);
	F904_18754(Current);
	RTLE;
}

/* {PATH}.make_from_normalized_storage */
void F904_18712 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F904_18754(Current);
	RTLE;
}

/* {PATH}.make_from_pointer */
void F904_18713 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	loc2 = F567_11659(Current, arg1);
	loc2 -= (EIF_INTEGER_32) (loc2 % F904_18753(Current));
	tr1 = RTLNS(562, 562, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F563_11292(RTCV(tr1), arg1, loc2);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = F563_11299(RTCV(loc1), ((EIF_INTEGER_32) 1L), loc2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		F904_18755(Current);
	}
	F904_18754(Current);
	RTLE;
}

/* {PATH}.is_current_symbol */
EIF_BOOLEAN F904_18714 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 == F904_18753(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		RTLE;
		return (EIF_BOOLEAN) F904_18765(Current, tr1, ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '.');
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {PATH}.is_parent_symbol */
EIF_BOOLEAN F904_18715 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * F904_18753(Current)))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		Result = F904_18765(Current, tr1, ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '.');
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F904_18753(Current);
		Result = F904_18765(Current, tr1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1), (EIF_CHARACTER_8) '.');
	}
	RTLE;
	return Result;
}

/* {PATH}.is_empty */
EIF_BOOLEAN F904_18717 (EIF_REFERENCE Current)
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
	Result = F324_9603(RTCV(tr1));
	RTLE;
	return Result;
}

/* {PATH}.is_absolute */
EIF_BOOLEAN F904_18719 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = F904_18759(Current);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = F904_18753(Current);
			tc1 = F904_18735(Current);
			Result = F904_18765(Current, tr1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_1) + ((EIF_INTEGER_32) 1L)), tc1);
		} else {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTLE;
	return Result;
}

/* {PATH}.root */
EIF_REFERENCE F904_18723 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	loc1 = F904_18759(Current);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
			F904_18712(RTCV(tr1), *(EIF_REFERENCE *)(Current));
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(Current);
			tr2 = F893_17423(RTCV(tr2), ((EIF_INTEGER_32) 1L), loc1);
			F904_18712(RTCV(tr1), tr2);
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
	return Result;
}

/* {PATH}.parent */
EIF_REFERENCE F904_18724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	loc1 = F904_18760(Current);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		tr1 = F904_18723(Current);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTLE;
			return (EIF_REFERENCE) loc3;
		} else {
			tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
			F904_18708(RTCV(tr1));
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	} else {
		if ((EIF_BOOLEAN)(loc1 == F904_18753(Current))) {
			tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = F904_18753(Current);
			tr2 = F893_17423(RTCV(tr2), ((EIF_INTEGER_32) 1L), ti4_1);
			F904_18712(RTCV(tr1), tr2);
			Result = (EIF_REFERENCE) tr1;
		} else {
			loc2 = F904_18759(Current);
			if ((EIF_BOOLEAN) (loc1 <= loc2)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
					RTLE;
					return (EIF_REFERENCE) Current;
				} else {
					tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
					tr2 = *(EIF_REFERENCE *)(Current);
					tr2 = F893_17423(RTCV(tr2), ((EIF_INTEGER_32) 1L), loc2);
					F904_18712(RTCV(tr1), tr2);
					Result = (EIF_REFERENCE) tr1;
				}
			} else {
				tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_1 = F904_18753(Current);
				tr2 = F893_17423(RTCV(tr2), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ti4_1));
				F904_18712(RTCV(tr1), tr2);
				Result = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTLE;
	return Result;
}

/* {PATH}.entry */
EIF_REFERENCE F904_18725 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	
	RTGC;
	loc1 = F904_18760(Current);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		loc2 = F904_18759(Current);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (loc2 < ti4_1)) {
				tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
				tr2 = *(EIF_REFERENCE *)(Current);
				tr3 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr3)+ _LNGOFF_1_1_0_2_);
				tr2 = F893_17423(RTCV(tr2), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), ti4_1);
				F904_18712(RTCV(tr1), tr2);
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			Result = (EIF_REFERENCE) Current;
		}
	} else {
		loc2 = F904_18759(Current);
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (loc2 < ti4_1)) {
				tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
				tr2 = *(EIF_REFERENCE *)(Current);
				tr3 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr3)+ _LNGOFF_1_1_0_2_);
				tr2 = F893_17423(RTCV(tr2), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), ti4_1);
				F904_18712(RTCV(tr1), tr2);
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(Current);
			tr3 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr3)+ _LNGOFF_1_1_0_2_);
			tr2 = F893_17423(RTCV(tr2), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), ti4_1);
			F904_18712(RTCV(tr1), tr2);
			Result = (EIF_REFERENCE) tr1;
		}
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result != NULL)) {
		tb2 = '\01';
		tb3 = '\01';
		tb4 = F904_18717(RTCV(Result));
		if (!tb4) {
			tb4 = F904_18714(RTCV(Result));
			tb3 = tb4;
		}
		if (!tb3) {
			tb3 = F904_18715(RTCV(Result));
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) NULL;
	}
	RTLE;
	return Result;
}

/* {PATH}.components */
EIF_REFERENCE F904_18727 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {802,903,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	Result = (EIF_REFERENCE) tr1;
	loc3 = F904_18759(Current);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F889_17162(RTCV(tr1), loc3);
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current);
		F893_17378(RTCV(loc1), tr1, ((EIF_INTEGER_32) 1L), loc3);
		tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
		F904_18712(RTCV(tr1), loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), tr1);
		loc3++;
	} else {
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (loc3 <= ti4_1)) {
		loc2 = (EIF_INTEGER_32) loc3;
		loc3 = F904_18761(Current, loc2);
		for (;;) {
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) break;
			tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F889_17162(RTCV(tr1), (EIF_INTEGER_32) (loc3 - loc2));
			loc1 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current);
			F893_17378(RTCV(loc1), tr1, loc2, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
			tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
			F904_18712(RTCV(tr1), loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), tr1);
			loc2 = F904_18753(Current);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
			loc3 = F904_18761(Current, loc2);
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
			tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
			F889_17162(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 - loc2));
			loc1 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
			F893_17378(RTCV(loc1), tr1, loc2, ti4_1);
			tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
			F904_18712(RTCV(tr1), loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), tr1);
		}
	}
	RTLE;
	return Result;
}

/* {PATH}.absolute_path */
EIF_REFERENCE F904_18728 (EIF_REFERENCE Current)
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
	tr1 = F572_11775(RTCV(RTOUCR(20,F904_18758,(Current))));
	Result = F904_18729(Current, tr1);
	RTLE;
	return Result;
}

/* {PATH}.absolute_path_in */
EIF_REFERENCE F904_18729 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = F324_9603(RTCV(tr1));
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) arg1;
	} else {
		if (F904_18719(Current)) {
			RTLE;
			return (EIF_REFERENCE) Current;
		} else {
			if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
				tr1 = F904_18723(Current);
				loc1 = tr1;
				if (EIF_TEST(loc1)) {
					tb1 = '\0';
					tb2 = '\0';
					tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
						tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						tb2 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L));
					}
					if (tb2) {
						tb2 = '\0';
						tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
						tc1 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 1L));
						tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
						tc2 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 1L));
						if ((EIF_BOOLEAN)(tc1 == tc2)) {
							tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
							tc1 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 3L));
							tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
							tc2 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 3L));
							tb2 = (EIF_BOOLEAN)(tc1 == tc2);
						}
						tb1 = tb2;
					}
					if (tb1) {
						Result = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
					} else {
						Result = (EIF_REFERENCE) loc1;
					}
					tr1 = *(EIF_REFERENCE *)(RTCV(Result));
					tr2 = *(EIF_REFERENCE *)(Current);
					tr3 = *(EIF_REFERENCE *)(RTCV(loc1));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr3)+ _LNGOFF_1_1_0_2_);
					tr3 = *(EIF_REFERENCE *)(Current);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr3)+ _LNGOFF_1_1_0_2_);
					tc1 = F904_18735(Current);
					F904_18764(Current, tr1, tr2, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2, tc1);
				} else {
					tr1 = *(EIF_REFERENCE *)(Current);
					if (F904_18765(Current, tr1, ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '\\')) {
						Result = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
						tr1 = F904_18723(RTCV(Result));
						loc2 = tr1;
						if (EIF_TEST(loc2)) {
							Result = (EIF_REFERENCE) loc2;
						}
					} else {
						Result = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
					}
					tr1 = *(EIF_REFERENCE *)(RTCV(Result));
					tr2 = *(EIF_REFERENCE *)(Current);
					tc1 = F904_18735(Current);
					F904_18763(Current, tr1, tr2, tc1);
				}
			} else {
				Result = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
				tr1 = *(EIF_REFERENCE *)(RTCV(Result));
				tr2 = *(EIF_REFERENCE *)(Current);
				tc1 = F904_18735(Current);
				F904_18763(Current, tr1, tr2, tc1);
			}
			F904_18754(RTCV(Result));
		}
	}
	RTLE;
	return Result;
}

/* {PATH}.canonical_path */
EIF_REFERENCE F904_18730 (EIF_REFERENCE Current)
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
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,loc1);
	RTLR(7,loc5);
	
	RTGC;
	loc2 = F904_18728(Current);
	tr1 = F904_18723(RTCV(loc2));
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		tr1 = RTLNSMART(eif_non_attached_type(892));
		tr2 = *(EIF_REFERENCE *)(RTCV(loc2));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
		F889_17162(RTCV(tr1), ti4_1);
		loc3 = (EIF_REFERENCE) tr1;
		loc1 = F904_18727(RTCV(loc2));
		F803_12662(RTCV(loc1));
		tr1 = F803_12636(RTCV(loc1));
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
		tc1 = F904_18735(Current);
		F904_18763(Current, loc3, tr1, tc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9247[Dtype(loc1)-736])(RTCV(loc1));
		for (;;) {
			tb1 = F767_12451(RTCV(loc1));
			if (tb1) break;
			tr1 = F803_12636(RTCV(loc1));
			tb2 = F904_18714(RTCV(tr1));
			if (tb2) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9247[Dtype(loc1)-736])(RTCV(loc1));
			} else {
				tr1 = F803_12636(RTCV(loc1));
				tb2 = F904_18715(RTCV(tr1));
				if (tb2) {
					tb2 = F737_12387(RTCV(loc1));
					if ((EIF_BOOLEAN) !tb2) {
						F803_12665(RTCV(loc1));
						(FUNCTION_CAST(void, (EIF_REFERENCE)) R9247[Dtype(loc1)-736])(RTCV(loc1));
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9247[Dtype(loc1)-736])(RTCV(loc1));
				} else {
					F803_12664(RTCV(loc1));
				}
			}
		}
		loc5 = F682_12245(RTCV(loc1));
		for (;;) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc5)-646])(RTCV(loc5));
			if (tb2) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc5)-646])(RTCV(loc5));
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
			tc1 = F904_18735(Current);
			F904_18763(Current, loc3, tr1, tc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc5)-646])(RTCV(loc5));
		}
		tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
		F904_18712(RTCV(tr1), loc3);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) loc2;
	}/* NOTREACHED */
	
}

/* {PATH}.hash_code */
EIF_INTEGER_32 F904_18731 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
		tr1 = *(EIF_REFERENCE *)(Current);
		Result = F885_17002(RTCV(tr1));
	} else {
		Result = F885_17003(RTCV(F904_18748(Current)));
	}
	RTLE;
	return Result;
}

/* {PATH}.directory_separator */
EIF_CHARACTER_8 F904_18735 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		return (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\\';
	} else {
		return (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
	}/* NOTREACHED */
	
}

/* {PATH}.extended */
EIF_REFERENCE F904_18736 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15066[Dtype(arg1)-886])(RTCV(arg1));
	ti4_3 = F904_18753(Current);
	ti4_4 = F904_18753(Current);
	F889_17162(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 * ti4_3)) + ti4_4));
	loc1 = (EIF_REFERENCE) tr1;
	F893_17377(RTCV(loc1), *(EIF_REFERENCE *)(Current));
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN)(F904_18759(Current) == ti4_1);
	}
	if (tb1) {
		F904_18762(Current, loc1, arg1, (EIF_CHARACTER_8) '\000');
	} else {
		tc1 = F904_18735(Current);
		F904_18762(Current, loc1, arg1, tc1);
	}
	tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F904_18711(RTCV(tr1), loc1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {PATH}.extended_path */
EIF_REFERENCE F904_18737 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
	ti4_3 = F904_18753(Current);
	F889_17162(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ti4_3));
	loc1 = (EIF_REFERENCE) tr1;
	F893_17377(RTCV(loc1), *(EIF_REFERENCE *)(Current));
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN)(F904_18759(Current) == ti4_1);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		F904_18763(Current, loc1, tr1, (EIF_CHARACTER_8) '\000');
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tc1 = F904_18735(Current);
		F904_18763(Current, loc1, tr1, tc1);
	}
	tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F904_18712(RTCV(tr1), loc1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {PATH}.same_as */
EIF_BOOLEAN F904_18740 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
	} else {
		if ((EIF_BOOLEAN)(arg1 == Current)) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
				RTLE;
				return (EIF_BOOLEAN) F904_18743(Current, arg1);
			} else {
				RTLE;
				return (EIF_BOOLEAN) F904_18744(Current, arg1);
			}
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {PATH}.is_less */
EIF_BOOLEAN F904_18741 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
		Result = F889_17189(RTCV(tr1), tr2);
	} else {
		tr1 = F888_17152(RTCV(F904_18748(Current)));
		tr2 = F904_18748(RTCV(arg1));
		tr2 = F888_17152(RTCV(tr2));
		Result = F887_17117(RTCV(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.is_equal */
EIF_BOOLEAN F904_18742 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F904_18740(Current, arg1);
}

/* {PATH}.is_case_sensitive_equal */
EIF_BOOLEAN F904_18743 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(tr1)-0])(RTCV(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.is_case_insensitive_equal */
EIF_BOOLEAN F904_18744 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tr1 = F904_18748(Current);
		tr2 = F904_18748(RTCV(arg1));
		Result = F887_17113(RTCV(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.copy */
void F904_18745 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {PATH}.out */
EIF_REFERENCE F904_18746 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F904_18747(Current);
}

/* {PATH}.utf_8_name */
EIF_REFERENCE F904_18747 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_35 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 38);
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = F904_18748(Current);
	Result = F39_4037(RTCV(loc1), tr1);
	RTLE;
	return Result;
}

/* {PATH}.name */
EIF_REFERENCE F904_18748 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_35 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 38);
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTLE;
		return (EIF_REFERENCE) loc2;
	} else {
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			tr1 = RTLNS(887, 887, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr2 = F39_4079(RTCV(loc1), *(EIF_REFERENCE *)(Current));
			F887_17091(RTCV(tr1), tr2);
			Result = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(887, 887, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr2 = F39_4052(RTCV(loc1), *(EIF_REFERENCE *)(Current));
			F887_17091(RTCV(tr1), tr2);
			Result = (EIF_REFERENCE) tr1;
		}
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {PATH}.to_pointer */
EIF_REFERENCE F904_18750 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = RTLNS(562, 562, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
	ti4_2 = F904_18753(Current);
	F563_11288(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_REFERENCE) tr1;
	F563_11312(RTCV(loc1), *(EIF_REFERENCE *)(Current));
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {PATH}.storage */
EIF_REFERENCE F904_18752 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {PATH}.unit_size */
EIF_INTEGER_32 F904_18753 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}/* NOTREACHED */
	
}

/* {PATH}.reset_internal_data */
void F904_18754 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
}

/* {PATH}.normalize */
void F904_18755 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	loc4 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 10L))) {
			tb1 = '\01';
			tb2 = '\0';
			if (F904_18765(Current, loc1, ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '/')) {
				tb3 = '\01';
				if (!F904_18765(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '/')) {
					tb3 = F904_18765(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '\\');
				}
				tb2 = tb3;
			}
			if (!(tb2)) {
				tb2 = '\0';
				if (F904_18765(Current, loc1, ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '\\')) {
					tb3 = '\01';
					if (!F904_18765(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '\\')) {
						tb3 = F904_18765(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '/');
					}
					tb2 = tb3;
				}
				tb1 = tb2;
			}
			if (tb1) {
				tb1 = '\0';
				if ((EIF_BOOLEAN) !F904_18765(Current, loc1, ((EIF_INTEGER_32) 5L), (EIF_CHARACTER_8) '/')) {
					tb1 = (EIF_BOOLEAN) !F904_18765(Current, loc1, ((EIF_INTEGER_32) 5L), (EIF_CHARACTER_8) '\\');
				}
				if (tb1) {
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		}
		loc3 = (EIF_INTEGER_32) loc2;
		loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 > loc4)) break;
			if (loc6) {
				loc7 = '\0';
				if ((EIF_BOOLEAN) !F904_18765(Current, loc1, loc2, (EIF_CHARACTER_8) '\\')) {
					loc7 = (EIF_BOOLEAN) !F904_18765(Current, loc1, loc2, (EIF_CHARACTER_8) '/');
				}
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc7;
			} else {
				if (F904_18765(Current, loc1, loc2, (EIF_CHARACTER_8) '/')) {
					F893_17364(RTCV(loc1), (EIF_CHARACTER_8) '\\', loc2);
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					loc6 = F904_18765(Current, loc1, loc2, (EIF_CHARACTER_8) '\\');
				}
			}
			if (loc7) {
				if ((EIF_BOOLEAN)(loc2 != loc3)) {
					tc1 = F893_17342(RTCV(loc1), loc2);
					F893_17364(RTCV(loc1), tc1, loc3);
					tc1 = F893_17342(RTCV(loc1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
					F893_17364(RTCV(loc1), tc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
				}
				loc3 += ((EIF_INTEGER_32) 2L);
			}
			loc2 += ((EIF_INTEGER_32) 2L);
		}
	} else {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc3 = (EIF_INTEGER_32) loc2;
		loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 > loc4)) break;
			if (loc6) {
				loc7 = F904_18765(Current, loc1, loc2, (EIF_CHARACTER_8) '/');
				loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc7;
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc7;
			} else {
				loc6 = F904_18765(Current, loc1, loc2, (EIF_CHARACTER_8) '/');
			}
			if (loc7) {
				if ((EIF_BOOLEAN)(loc2 != loc3)) {
					tc1 = F893_17342(RTCV(loc1), loc2);
					F893_17364(RTCV(loc1), tc1, loc3);
				}
				loc3++;
			}
			loc2++;
		}
	}
	if ((EIF_BOOLEAN)(loc2 != loc3)) {
		F893_17359(RTCV(loc1), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (loc8) {
		loc5 = F904_18759(Current);
		if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
			ti4_1 = F904_18753(Current);
			F893_17398(RTCV(loc1), ti4_1);
		}
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = F904_18753(Current);
	tc1 = F904_18735(Current);
	if (F904_18765(Current, loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), tc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (F904_18759(Current) < ti4_1)) {
			ti4_1 = F904_18753(Current);
			F893_17400(RTCV(loc1), ti4_1);
		}
	}
	RTLE;
}

/* {PATH}.internal_name */
EIF_REFERENCE F904_18756 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {PATH}.env */
static EIF_REFERENCE F904_18758_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(20)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(571, 571, _OBJSIZ_0_0_0_1_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F904_18758 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(20,F904_18758_body,(Current));
}

/* {PATH}.root_end_position */
EIF_INTEGER_32 F904_18759 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(ti4_1 == F904_18753(Current))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tb1 = F904_18765(Current, tr1, ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '\\');
			}
			if (tb1) {
				RTLE;
				return (EIF_INTEGER_32) F904_18753(Current);
			} else {
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L))) {
					tb2 = '\0';
					tr1 = *(EIF_REFERENCE *)(Current);
					tc1 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 2L));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000')) {
						tr1 = *(EIF_REFERENCE *)(Current);
						tc1 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 4L));
						tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000');
					}
					tb1 = tb2;
				}
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(Current);
					loc1 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 1L));
					loc1 = (EIF_CHARACTER_8) tolower(loc1);
					tb1 = '\0';
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (loc1 <= (EIF_CHARACTER_8) 'z'))) {
						tr1 = *(EIF_REFERENCE *)(Current);
						tc1 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 3L));
						tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
					}
					if (tb1) {
						tb1 = '\0';
						tr1 = *(EIF_REFERENCE *)(Current);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) * F904_18753(Current)))) {
							tr1 = *(EIF_REFERENCE *)(Current);
							tb1 = F904_18765(Current, tr1, ((EIF_INTEGER_32) 5L), (EIF_CHARACTER_8) '\\');
						}
						if (tb1) {
							RTLE;
							return (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
						} else {
							RTLE;
							return (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						}
					} else {
						tb1 = '\0';
						if ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '\\')) {
							tr1 = *(EIF_REFERENCE *)(Current);
							tc1 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 3L));
							tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\\');
						}
						if (tb1) {
							Result = F904_18753(Current);
						} else {
							tb1 = '\0';
							tb2 = '\0';
							tb3 = '\0';
							tr1 = *(EIF_REFERENCE *)(Current);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 10L))) {
								tb3 = (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '\\');
							}
							if (tb3) {
								tr1 = *(EIF_REFERENCE *)(Current);
								tc1 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 3L));
								tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\\');
							}
							if (tb2) {
								tr1 = *(EIF_REFERENCE *)(Current);
								tc1 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 5L));
								tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\\');
							}
							if (tb1) {
								loc2 = F904_18761(Current, ((EIF_INTEGER_32) 7L));
								tb1 = '\0';
								if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
									tr1 = *(EIF_REFERENCE *)(Current);
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									tb1 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + F904_18753(Current)) <= ti4_1);
								}
								if (tb1) {
									ti4_1 = F904_18753(Current);
									loc2 = F904_18761(Current, (EIF_INTEGER_32) (loc2 + ti4_1));
									if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
										RTLE;
										return (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
									} else {
										tr1 = *(EIF_REFERENCE *)(Current);
										Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									}
								}
							}
						}
					}
				}
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tc1 = F893_17342(RTCV(tr1), ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
				RTLE;
				return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
		}
	}
	RTLE;
	return Result;
}

/* {PATH}.end_position_of_last_directory_separator */
EIF_INTEGER_32 F904_18760 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
		ti4_1 = F904_18753(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ti4_1) + ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			for (;;) {
				tb1 = '\01';
				if (!(EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 1L))) {
					tr1 = *(EIF_REFERENCE *)(Current);
					tc1 = F904_18735(Current);
					tb1 = F904_18765(Current, tr1, Result, tc1);
				}
				if (tb1) break;
				Result -= F904_18753(Current);
			}
		}
		if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 0L))) {
			RTLE;
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			ti4_1 = F904_18753(Current);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
	return Result;
}

/* {PATH}.next_directory_separator */
EIF_INTEGER_32 F904_18761 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc4);
	
	RTGC;
	loc2 = F904_18753(Current);
	loc3 = F904_18735(Current);
	Result = (EIF_INTEGER_32) arg1;
	loc4 = *(EIF_REFERENCE *)(Current);
	loc1 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_1_0_2_);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN) (Result > loc1))) {
			tb1 = F904_18765(Current, loc4, Result, loc3);
		}
		if (tb1) break;
		Result += loc2;
	}
	if ((EIF_BOOLEAN) (Result > loc1)) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
	return Result;
}

/* {PATH}.internal_append_into */
void F904_18762 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	struct eif_ex_35 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 38);
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	
	RTGC;
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(arg2)-887])(RTCV(arg2));
	if ((EIF_BOOLEAN) !tb1) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg3 != (EIF_CHARACTER_8) '\000')) {
			tb2 = F324_9603(RTCV(arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
			ti4_2 = F904_18753(Current);
			if ((EIF_BOOLEAN) !F904_18765(Current, arg1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), arg3)) {
				tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15030[Dtype(arg2)-887])(RTCV(arg2), ((EIF_INTEGER_32) 1L));
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '/';
				tb1 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb1) {
				if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
					tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15030[Dtype(arg2)-887])(RTCV(arg2), ((EIF_INTEGER_32) 1L));
					tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\\';
					if ((EIF_BOOLEAN)(tw1 != tw2)) {
						F893_17391(RTCV(arg1), arg3);
						F893_17391(RTCV(arg1), (EIF_CHARACTER_8) '\000');
					}
				} else {
					F893_17391(RTCV(arg1), arg3);
				}
			}
		}
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			F39_4066(RTCV(loc1), arg2, arg1);
		} else {
			F39_4041(RTCV(loc1), arg2, arg1);
		}
	}
	RTLE;
}

/* {PATH}.internal_path_append_into */
void F904_18763 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg3 != (EIF_CHARACTER_8) '\000')) {
		tb2 = F324_9603(RTCV(arg1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		ti4_2 = F904_18753(Current);
		if ((EIF_BOOLEAN) !F904_18765(Current, arg1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), arg3)) {
			tb1 = (EIF_BOOLEAN) !F904_18765(Current, arg2, ((EIF_INTEGER_32) 1L), arg3);
		}
		if (tb1) {
			F893_17391(RTCV(arg1), arg3);
			if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
				F893_17391(RTCV(arg1), (EIF_CHARACTER_8) '\000');
			}
		}
	}
	F893_17377(RTCV(arg1), arg2);
	RTLE;
}

/* {PATH}.internal_path_append_substring_into */
void F904_18764 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_CHARACTER_8 arg5)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg5 != (EIF_CHARACTER_8) '\000')) {
		tb2 = F324_9603(RTCV(arg1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		ti4_2 = F904_18753(Current);
		if ((EIF_BOOLEAN) !F904_18765(Current, arg1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), arg5)) {
			tb1 = (EIF_BOOLEAN) !F904_18765(Current, arg2, arg3, arg5);
		}
		if (tb1) {
			F893_17391(RTCV(arg1), arg5);
			if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
				F893_17391(RTCV(arg1), (EIF_CHARACTER_8) '\000');
			}
		}
	}
	F893_17378(RTCV(arg1), arg2, arg3, arg4);
	RTLE;
}

/* {PATH}.is_character */
EIF_BOOLEAN F904_18765 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		Result = '\0';
		tc1 = F893_17342(RTCV(arg1), arg2);
		if ((EIF_BOOLEAN)(tc1 == arg3)) {
			tc1 = F893_17342(RTCV(arg1), (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000');
		}
	} else {
		tc1 = F893_17342(RTCV(arg1), arg2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == arg3);
	}
	RTLE;
	return Result;
}

void EIF_Minit368 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

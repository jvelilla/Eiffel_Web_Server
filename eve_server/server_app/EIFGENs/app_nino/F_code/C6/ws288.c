/*
 * Code for class WSF_ROUTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws288.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_ROUTER}.make */
void F645_11944 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F645_11946(Current, arg1);
}

/* {WSF_ROUTER}.initialize */
void F645_11946 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {802,899,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F803_12632(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {820,0xFFF9,1,823,968,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F821_12751(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_ROUTER}.mappings */
EIF_REFERENCE F645_11947 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_ROUTER}.map_with_request_methods */
void F645_11949 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTLNS(899, 899, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F900_18523(RTCV(tr2), arg1, arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(tr1)-459])(RTCV(tr1), tr2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16652[Dtype(arg1)-971])(RTCV(arg1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10304[Dtype(tr1)-512])(RTCV(tr1), arg1, arg2);
	RTLE;
}

/* {WSF_ROUTER}.handle_with_request_methods */
void F645_11951 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLR(4,Current);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R8749[Dtype(arg2)-514])(RTCV(arg2), arg1);
	F645_11949(Current, tr1, arg3);
	RTLE;
}

/* {WSF_ROUTER}.dispatch */
void F645_11952 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg3);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,arg2);
	RTLR(5,Current);
	
	RTGC;
	loc1 = (EIF_REFERENCE) arg3;
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNS(16, 16, _OBJSIZ_1_0_0_0_0_0_0_0_);
		loc1 = (EIF_REFERENCE) tr1;
	}
	F645_11954(Current, arg1, arg2, loc1);
	RTLE;
}

/* {WSF_ROUTER}.router_dispatch */
void F645_11954 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,arg2);
	RTLR(4,arg3);
	RTLR(5,loc2);
	RTLR(6,tr1);
	
	RTGC;
	loc1 = F645_11979(Current, arg1);
	F645_11955(Current, arg1, arg2, arg3, loc1);
	tb1 = '\0';
	tb2 = F17_3793(RTCV(arg3));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(loc1 == RTOUCR(59,F166_8321,(Current)));
	}
	if (tb1) {
		tr1 = RTLNS(149, 149, _OBJSIZ_4_0_0_1_0_0_1_0_);
		F150_9061(RTCV(tr1), arg2);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTOUCR(140,F166_8322,(Current));
		F902_18587(RTCV(arg1), tr1);
		tr1 = RTOUCR(140,F166_8322,(Current));
		F645_11955(Current, arg1, loc2, arg3, tr1);
	}
	RTLE;
}

/* {WSF_ROUTER}.router_dispatch_for_request_method */
void F645_11955 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLR(4,loc3);
	RTLR(5,arg4);
	RTLR(6,loc1);
	RTLR(7,arg1);
	RTLR(8,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = F682_12245(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc2)-646])(RTCV(loc2));
		if (tb1) break;
		tb2 = F17_3793(RTCV(arg3));
		if (tb2) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc2)-646])(RTCV(loc2));
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_);
			if (F645_11980(Current, arg4, tr1)) {
				loc1 = *(EIF_REFERENCE *)(RTCV(loc3));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R16655[Dtype(loc1)-970])(RTCV(loc1), arg1, arg2, arg3, Current);
			}
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc2)-646])(RTCV(loc2));
	}
	RTLE;
}

/* {WSF_ROUTER}.has_item_associated_with_resource */
EIF_BOOLEAN F645_11956 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(9);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg2);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = F682_12245(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc3)-646])(RTCV(loc3));
		if (tb1) break;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1));
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				loc5 = F646_12034(RTCV(arg2));
				tb2 = EIF_FALSE;
				for (;;) {
					if (tb2) break;
					tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc5)-646])(RTCV(loc5));
					if (tb3) break;
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc5)-646])(RTCV(loc5));
					tb2 = F645_11980(Current, tr1, loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc5)-646])(RTCV(loc5));
				}
				loc2 = (EIF_BOOLEAN) tb2;
			} else {
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		if (loc2) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16652[Dtype(loc1)-971])(RTCV(loc1));
			loc6 = tr1;
			loc6 = RTRV(eif_non_attached_type(513),loc6);
			if (EIF_TEST(loc6)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc6));
				Result = F645_11956(RTCV(tr1), arg1, arg2);
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16651[Dtype(loc1)-970])(RTCV(loc1));
				tb2 = F889_17187(RTCV(tr1), arg1);
				if (tb2) {
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc3)-646])(RTCV(loc3));
	}
	RTLE;
	return Result;
}

/* {WSF_ROUTER}.item_associated_with_resource */
EIF_REFERENCE F645_11957 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(10);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg2);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,arg1);
	RTLR(9,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = F682_12245(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc3)-646])(RTCV(loc3));
		if (tb1) break;
		if ((EIF_BOOLEAN)(Result != NULL)) break;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1));
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				loc5 = F646_12034(RTCV(arg2));
				tb2 = EIF_FALSE;
				for (;;) {
					if (tb2) break;
					tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc5)-646])(RTCV(loc5));
					if (tb3) break;
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc5)-646])(RTCV(loc5));
					tb2 = F645_11980(Current, tr1, loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc5)-646])(RTCV(loc5));
				}
				loc2 = (EIF_BOOLEAN) tb2;
			} else {
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		if (loc2) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16652[Dtype(loc1)-971])(RTCV(loc1));
			loc6 = tr1;
			loc6 = RTRV(eif_non_attached_type(513),loc6);
			if (EIF_TEST(loc6)) {
				Result = *(EIF_REFERENCE *)(RTCV(loc6));
				Result = F645_11957(RTCV(Result), arg1, arg2);
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16651[Dtype(loc1)-970])(RTCV(loc1));
				tb2 = F889_17187(RTCV(tr1), arg1);
				if (tb2) {
					Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
				}
			}
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc3)-646])(RTCV(loc3));
	}
	RTLE;
	return Result;
}

/* {WSF_ROUTER}.items_associated_with_resource */
EIF_REFERENCE F645_11958 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,arg2);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,arg1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {802,899,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = F682_12245(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc3)-646])(RTCV(loc3));
		if (tb1) break;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1));
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				loc5 = F646_12034(RTCV(arg2));
				tb2 = EIF_FALSE;
				for (;;) {
					if (tb2) break;
					tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc5)-646])(RTCV(loc5));
					if (tb3) break;
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc5)-646])(RTCV(loc5));
					tb2 = F645_11980(Current, tr1, loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc5)-646])(RTCV(loc5));
				}
				loc2 = (EIF_BOOLEAN) tb2;
			} else {
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		if (loc2) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16652[Dtype(loc1)-971])(RTCV(loc1));
			loc6 = tr1;
			loc6 = RTRV(eif_non_attached_type(513),loc6);
			if (EIF_TEST(loc6)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc6));
				tr1 = F645_11958(RTCV(tr1), arg1, arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9401[Dtype(Result)-736])(RTCV(Result), tr1);
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16651[Dtype(loc1)-970])(RTCV(loc1));
				tb2 = F889_17187(RTCV(tr1), arg1);
				if (tb2) {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9400[Dtype(Result)-462])(RTCV(Result), tr1);
				}
			}
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc3)-646])(RTCV(loc3));
	}
	RTLE;
	return Result;
}

/* {WSF_ROUTER}.allowed_methods_for_request */
EIF_REFERENCE F645_11959 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,loc4);
	RTLR(6,loc2);
	RTLR(7,arg1);
	
	RTGC;
	tr1 = RTLNS(645, 645, _OBJSIZ_1_1_0_0_0_0_0_0_);
	F646_12016(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = F682_12245(RTCV(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc3)-646])(RTCV(loc3));
		if (tb1) break;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16652[Dtype(loc1)-971])(RTCV(loc1));
		loc4 = tr1;
		loc4 = RTRV(eif_non_attached_type(513),loc4);
		if (EIF_TEST(loc4)) {
			loc2 = *(EIF_REFERENCE *)(RTCV(loc4));
			loc2 = F645_11959(RTCV(loc2), arg1);
		} else {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R16654[Dtype(loc1)-970])(RTCV(loc1), arg1, Current);
			if (tb2) {
				loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc3)-646])(RTCV(loc3));
				loc2 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_1_);
			} else {
				loc2 = (EIF_REFERENCE) NULL;
			}
		}
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			Result = F646_12036(RTCV(Result), loc2);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc3)-646])(RTCV(loc3));
	}
	RTLE;
	return Result;
}

/* {WSF_ROUTER}.execute_before */
void F645_11961 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,968,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
	RTAR(tr2,arg1);
	F821_12754(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_ROUTER}.execute_after */
void F645_11962 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WSF_ROUTER}.pre_execution_actions */
EIF_REFERENCE F645_11963 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_ROUTER}.base_url */
EIF_REFERENCE F645_11965 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_ROUTER}.new_cursor */
EIF_REFERENCE F645_11967 (EIF_REFERENCE Current)
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

/* {WSF_ROUTER}.methods_get */
static EIF_REFERENCE F645_11970_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(14)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(645, 645, _OBJSIZ_1_1_0_0_0_0_0_0_);
	F646_12016(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F646_12037(RTCV(Result));
	F646_12035(RTCV(Result));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F645_11970 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(14,F645_11970_body,(Current));
}

/* {WSF_ROUTER}.request_method */
EIF_REFERENCE F645_11979 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_9_);
	tr1 = RTOUCR(140,F166_8322,(Current));
	tb1 = F889_17185(RTCV(loc1), tr1);
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) RTOUCR(140,F166_8322,(Current));
	} else {
		tr1 = RTOUCR(143,F166_8325,(Current));
		tb1 = F889_17185(RTCV(loc1), tr1);
		if (tb1) {
			Result = RTOUCR(143,F166_8325,(Current));
		} else {
			tr1 = RTOUCR(59,F166_8321,(Current));
			tb1 = F889_17185(RTCV(loc1), tr1);
			if (tb1) {
				Result = RTOUCR(59,F166_8321,(Current));
			} else {
				tr1 = RTOUCR(141,F166_8323,(Current));
				tb1 = F889_17185(RTCV(loc1), tr1);
				if (tb1) {
					Result = RTOUCR(141,F166_8323,(Current));
				} else {
					tr1 = RTOUCR(142,F166_8324,(Current));
					tb1 = F889_17185(RTCV(loc1), tr1);
					if (tb1) {
						Result = RTOUCR(142,F166_8324,(Current));
					} else {
						tr1 = RTOUCR(144,F166_8326,(Current));
						tb1 = F889_17185(RTCV(loc1), tr1);
						if (tb1) {
							Result = RTOUCR(144,F166_8326,(Current));
						} else {
							tr1 = RTOUCR(145,F166_8327,(Current));
							tb1 = F889_17185(RTCV(loc1), tr1);
							if (tb1) {
								Result = RTOUCR(145,F166_8327,(Current));
							} else {
								tr1 = RTOUCR(146,F166_8328,(Current));
								tb1 = F889_17185(RTCV(loc1), tr1);
								if (tb1) {
									Result = RTOUCR(146,F166_8328,(Current));
								} else {
									tr1 = RTOUCR(147,F166_8329,(Current));
									tb1 = F889_17185(RTCV(loc1), tr1);
									if (tb1) {
										RTLE;
										return (EIF_REFERENCE) RTOUCR(147,F166_8329,(Current));
									} else {
										Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R15089[Dtype(loc1)-887])(RTCV(loc1));
										RTLE;
										return (EIF_REFERENCE) Result;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {WSF_ROUTER}.is_matching_request_methods */
EIF_BOOLEAN F645_11980 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,arg1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tb2 = F646_12021(RTCV(arg2));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tb1 = F646_12022(RTCV(arg2), arg1);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

void EIF_Minit288 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

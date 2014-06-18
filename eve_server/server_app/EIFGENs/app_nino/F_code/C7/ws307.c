/*
 * Code for class WSF_DEFAULT_ROUTER_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws307.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_DEFAULT_ROUTER_RESPONSE}.make_with_router */
void F614_13306 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg1);
	
	RTGC;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	F613_13301(Current, arg1);
	F614_13311(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.router */
EIF_REFERENCE F614_13307 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_DEFAULT_ROUTER_RESPONSE}.set_documentation_included */
void F614_13310 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) arg1;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.set_suggestion_only_method */
void F614_13311 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) arg1;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.send_to */
void F614_13312 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,arg1);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current);
	tr1 = RTOUCR(141,F166_8323,(Current));
	tb1 = F902_18576(RTCV(loc2), tr1);
	if (tb1) {
		loc1 = F613_13304(Current, loc2);
	} else {
		tr1 = F614_13314(Current, loc2);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc1 = (EIF_REFERENCE) loc3;
		} else {
			tb1 = '\0';
			tr1 = F902_18640(RTCV(loc2));
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				tr1 = RTMS_EX_H("*",1,42);
				tb2 = F889_17187(RTCV(loc4), tr1);
				tb1 = tb2;
			}
			if (tb1) {
				loc1 = F614_13313(Current, loc2);
			} else {
				loc1 = F614_13315(Current, loc2);
			}
		}
	}
	F116_8587(RTCV(arg1), loc1);
	RTLE;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.precondition_failed_message */
EIF_REFERENCE F614_13313 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,arg1);
	
	RTGC;
	tr1 = RTLNS(608, 608, _OBJSIZ_3_0_0_0_0_0_0_0_);
	F609_13210(RTCV(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.method_not_allowed_message */
EIF_REFERENCE F614_13314 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(9,tr5);
	
	RTGC;
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = F645_11959(RTCV(tr1), arg1);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb2 = F646_12021(RTCV(loc2));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = RTLNS(607, 607, _OBJSIZ_6_0_0_0_0_0_0_0_);
		F608_13194(RTCV(tr1), arg1);
		Result = (EIF_REFERENCE) tr1;
		F608_13203(RTCV(Result), loc2);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
			tr1 = RTLNS(65, 65, _OBJSIZ_4_0_0_0_0_0_0_0_);
			F66_6477(RTCV(tr1));
			loc1 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,823,0,607,0xFFFF};
				EIF_TYPE_INDEX typres0;
				typarr0[3] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0, 3, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
			RTAR(tr2,Current);
			((EIF_TYPED_VALUE *)tr2+2)->it_r = Result;
			RTAR(tr2,Result);
			
			{
				EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,1,823,899,0xFFFF};
				EIF_TYPE_INDEX typres0;
				typarr0[1] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr5 = RTLNRF(typres0, (EIF_POINTER) __A307_48_2, (EIF_POINTER) _A307_48_2, (EIF_POINTER)(0),tr2, 1, 1);
			}
			F820_12727(RTCV(tr1), tr5);
			F66_6482(RTCV(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
		}
	}
	RTLE;
	return Result;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.not_found_message */
EIF_REFERENCE F614_13315 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(9,tr5);
	
	RTGC;
	Result = F613_13305(Current, arg1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		tr1 = RTLNS(65, 65, _OBJSIZ_4_0_0_0_0_0_0_0_);
		F66_6477(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			loc2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_9_);
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,823,0,609,888,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0, 4, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		((EIF_TYPED_VALUE *)tr2+2)->it_r = Result;
		RTAR(tr2,Result);
		((EIF_TYPED_VALUE *)tr2+3)->it_r = loc2;
		RTAR(tr2,loc2);
		
		{
			EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,1,823,899,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr5 = RTLNRF(typres0, (EIF_POINTER) __A307_47_2, (EIF_POINTER) _A307_47_2, (EIF_POINTER)(0),tr2, 1, 1);
		}
		F820_12727(RTCV(tr1), tr5);
		F66_6482(RTCV(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	}
	RTLE;
	return Result;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.inline-agent#1 of not_found_message */
void F614_22914 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc4);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,arg3);
	RTLR(8,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
	loc4 = tr1;
	loc4 = RTRV(eif_non_attached_type(969),loc4);
	if (EIF_TEST(loc4)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		tr1 = F970_18877(RTCV(loc4), tr1);
		loc1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_2_0_);
	}
	if ((EIF_BOOLEAN) !loc1) {
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = RTLNS(891, 891, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16651[Dtype(tr2)-970])(RTCV(tr2));
		tr2 = F885_17051(RTCV(tr2));
		F887_17091(RTCV(tr1), tr2);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tr1 = RTMS_EX_H(" [ ",3,2120480);
			tr1 = F885_17052(RTCV(tr1));
			F892_17286(RTCV(loc2), tr1);
			loc6 = F646_12034(RTCV(loc5));
			for (;;) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc6)-646])(RTCV(loc6));
				if (tb1) break;
				tb2 = '\01';
				if (!(EIF_BOOLEAN)(arg3 == NULL)) {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc6)-646])(RTCV(loc6));
					tb3 = F889_17185(RTCV(arg3), tr1);
					tb2 = tb3;
				}
				if (tb2) {
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc6)-646])(RTCV(loc6));
				tr1 = F885_17051(RTCV(tr1));
				F892_17286(RTCV(loc2), tr1);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
				F892_17300(RTCV(loc2), tw1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc6)-646])(RTCV(loc6));
			}
			tr1 = RTMS_EX_H("]",1,93);
			tr1 = F885_17052(RTCV(tr1));
			F892_17286(RTCV(loc2), tr1);
		} else {
			tr1 = RTMS_EX_H(" [*]",4,542845533);
			tr1 = F885_17052(RTCV(tr1));
			F892_17286(RTCV(loc2), tr1);
		}
		if (loc3) {
			F610_13222(RTCV(arg2), loc2, NULL);
		}
	}
	RTLE;
}

/* {WSF_DEFAULT_ROUTER_RESPONSE}.inline-agent#1 of method_not_allowed_message */
void F614_22915 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,arg2);
	
	RTGC;
	tb1 = '\01';
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	loc3 = tr1;
	if (!((EIF_BOOLEAN) !EIF_TEST(loc3))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_9_);
		tb2 = F646_12022(RTCV(loc3), tr1);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		loc4 = tr1;
		loc4 = RTRV(eif_non_attached_type(969),loc4);
		if (EIF_TEST(loc4)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
			tr1 = F970_18877(RTCV(loc4), tr1);
			loc1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_2_0_);
		}
		if ((EIF_BOOLEAN) !loc1) {
			tr1 = RTLNS(891, 891, _OBJSIZ_1_1_0_3_0_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16651[Dtype(tr2)-970])(RTCV(tr2));
			tr2 = F885_17051(RTCV(tr2));
			F887_17091(RTCV(tr1), tr2);
			loc2 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				tr1 = RTMS_EX_H(" [ ",3,2120480);
				tr1 = F885_17052(RTCV(tr1));
				F892_17286(RTCV(loc2), tr1);
				loc6 = F646_12034(RTCV(loc5));
				for (;;) {
					tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc6)-646])(RTCV(loc6));
					if (tb1) break;
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc6)-646])(RTCV(loc6));
					tr1 = F885_17051(RTCV(tr1));
					F892_17286(RTCV(loc2), tr1);
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
					F892_17300(RTCV(loc2), tw1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc6)-646])(RTCV(loc6));
				}
				tr1 = RTMS_EX_H("]",1,93);
				tr1 = F885_17052(RTCV(tr1));
				F892_17286(RTCV(loc2), tr1);
			} else {
				tr1 = RTMS_EX_H(" [*]",4,542845533);
				tr1 = F885_17052(RTCV(tr1));
				F892_17286(RTCV(loc2), tr1);
			}
			F608_13205(RTCV(arg2), loc2, NULL);
		}
	}
	RTLE;
}

void EIF_Minit307 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

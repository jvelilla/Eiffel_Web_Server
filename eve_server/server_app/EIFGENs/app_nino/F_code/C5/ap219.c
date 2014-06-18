/*
 * Code for class APP_SERVICE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ap219.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {APP_SERVICE}.initialize */
void F236_10110 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F235_9452(Current);
	F108_10089(Current);
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(34));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {APP_SERVICE}.setup_router */
void F236_10111 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,loc1);
	
	RTGC;
	tr1 = RTLNS(519, 519, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F520_11100(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTMS_EX_H("/api/doc",8,456610403);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = RTOUCR(14,F645_11970,(RTCV(tr3)));
	F645_11951(RTCV(tr1), tr2, loc2, tr3);
	tr1 = RTMS_EX_H("/compile",8,404674149);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,2,823,901,115,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A219_72_2_3, (EIF_POINTER) _A219_72_2_3, (EIF_POINTER)(F236_10131),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr6 = RTOUCR(14,F645_11970,(RTCV(tr6)));
	F106_8548(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/run",4,796030318);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,2,823,901,115,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A219_73_2_3, (EIF_POINTER) _A219_73_2_3, (EIF_POINTER)(F236_10132),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr6 = RTOUCR(14,F645_11970,(RTCV(tr6)));
	F106_8548(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/interfaceView",14,1774296951);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,2,823,901,115,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A219_74_2_3, (EIF_POINTER) _A219_74_2_3, (EIF_POINTER)(F236_10133),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr6 = RTOUCR(14,F645_11970,(RTCV(tr6)));
	F106_8548(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/flatView",9,813247095);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,2,823,901,115,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A219_75_2_3, (EIF_POINTER) _A219_75_2_3, (EIF_POINTER)(F236_10134),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr6 = RTOUCR(14,F645_11970,(RTCV(tr6)));
	F106_8548(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/contractView",13,319644023);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,2,823,901,115,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A219_76_2_3, (EIF_POINTER) _A219_76_2_3, (EIF_POINTER)(F236_10135),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr6 = RTOUCR(14,F645_11970,(RTCV(tr6)));
	F106_8548(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/classDescendants",17,829129075);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,2,823,901,115,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A219_77_2_3, (EIF_POINTER) _A219_77_2_3, (EIF_POINTER)(F236_10136),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr6 = RTOUCR(14,F645_11970,(RTCV(tr6)));
	F106_8548(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/classAncestors",15,1181600115);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,2,823,901,115,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A219_78_2_3, (EIF_POINTER) _A219_78_2_3, (EIF_POINTER)(F236_10137),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr6 = RTOUCR(14,F645_11970,(RTCV(tr6)));
	F106_8548(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/classClients",13,1717335411);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,2,823,901,115,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A219_79_2_3, (EIF_POINTER) _A219_79_2_3, (EIF_POINTER)(F236_10138),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr6 = RTOUCR(14,F645_11970,(RTCV(tr6)));
	F106_8548(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/classSuppliers",15,34459507);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,2,823,901,115,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A219_80_2_3, (EIF_POINTER) _A219_80_2_3, (EIF_POINTER)(F236_10139),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr6 = RTOUCR(14,F645_11970,(RTCV(tr6)));
	F106_8548(Current, tr1, tr5, tr6);
	tr1 = RTMS_EX_H("/featureCallers",15,255260531);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,2,823,901,115,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A219_103_2_3, (EIF_POINTER) _A219_103_2_3, (EIF_POINTER)(F236_23004),tr2, 1, 2);
	}
	tr6 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr6 = RTOUCR(14,F645_11970,(RTCV(tr6)));
	F106_8548(Current, tr1, tr5, tr6);
	tr1 = RTLNS(521, 521, _OBJSIZ_5_2_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("www",3,7829367);
	F522_11111(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {953,888,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 1L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 1L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = RTMS_EX_H("index.html",10,1959670892);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F954_18829)(tr2);
	F522_11124(RTCV(loc1), tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTMS_EX_H("",0,0);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = RTOUCR(14,F645_11970,(RTCV(tr3)));
	F645_11951(RTCV(tr1), tr2, loc1, tr3);
	RTLE;
}

/* {APP_SERVICE}.file_location */
EIF_REFERENCE F236_10112 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {APP_SERVICE}.class_name */
EIF_REFERENCE F236_10113 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {APP_SERVICE}.p_factory */
EIF_REFERENCE F236_10114 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {APP_SERVICE}.command_line */
EIF_REFERENCE F236_10115 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {APP_SERVICE}.project_name */
EIF_REFERENCE F236_10116 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {APP_SERVICE}.project_path */
EIF_REFERENCE F236_10117 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {APP_SERVICE}.runtime_text */
EIF_REFERENCE F236_10118 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {APP_SERVICE}.compile_message */
EIF_REFERENCE F236_10119 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {APP_SERVICE}.output_message */
EIF_REFERENCE F236_10120 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


/* {APP_SERVICE}.error_message */
EIF_REFERENCE F236_10121 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_11_);
}


/* {APP_SERVICE}.warning_message */
EIF_REFERENCE F236_10122 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_12_);
}


/* {APP_SERVICE}.syntax_message */
EIF_REFERENCE F236_10123 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_13_);
}


/* {APP_SERVICE}.dump_message */
EIF_REFERENCE F236_10124 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_14_);
}


/* {APP_SERVICE}.fixed_project_path */

EIF_REFERENCE F236_10130 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (15,RTMS_EX_H("C:/Users/Manav/Desktop/eve_server/projects/",43,2080827183));
}

/* {APP_SERVICE}.get_compilation_result */
void F236_10131 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc4);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,loc6);
	RTLR(7,arg1);
	RTLR(8,loc7);
	RTLR(9,tr2);
	RTLR(10,loc8);
	RTLR(11,tr3);
	RTLR(12,arg2);
	
	RTGC;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1019_19929(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1020_19945(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTMS_EX_H("path",4,1885434984);
	loc6 = F236_10147(Current, arg1, tr1);
	tr1 = RTMS_EX_H("clean",5,1819343726);
	loc5 = F236_10148(Current, arg1, tr1);
	tr1 = RTMS_EX_H("id",2,26980);
	loc7 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc6));
	if ((EIF_BOOLEAN) !tb1) {
		loc7 = F236_10145(Current, loc6, loc7);
		loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tb2 = F324_9603(RTCV(tr1));
		if (!tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			tb2 = F324_9603(RTCV(tr1));
			tb1 = tb2;
		}
		if (tb1) {
		}
		tb1 = F324_9603(RTCV(loc7));
		if (tb1) {
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
			tb1 = F885_17037(RTCV(tr1), loc7);
			if ((EIF_BOOLEAN) !tb1) {
			}
		}
	}
	if (loc5) {
		tr1 = RTMS_EX_H("ec -clean -config ",18,1610330144);
		tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTMS_EX_H("ec -config ",11,878515744);
		tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
		tr2 = RTMS_EX_H(" -c_compile -batch",18,202212712);
		tr1 = F893_17379(RTCV(tr1), tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	}
	F236_10152(Current, *(EIF_REFERENCE *)(Current + _REFACS_7_));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) == (EIF_BOOLEAN) 0) && (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) == (EIF_BOOLEAN) 0)) && loc5)) {
		tr1 = RTMS_EX_H("finish_freezing",15,427748711);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tr2 = RTMS_EX_H("/EIFGENs/",9,28997167);
		tr1 = F893_17379(RTCV(tr1), tr2);
		tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
		tr2 = RTMS_EX_H("/W_code",7,1873619813);
		loc8 = F893_17379(RTCV(tr1), tr2);
		tr1 = RTMS_EX_H(".ecf",4,778396518);
		tr2 = RTMS_EX_H("",0,0);
		F893_17354(RTCV(loc8), tr1, tr2);
		F236_10152(Current, loc8);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Compile_Message",15,2069629285);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Output_Message",14,422441317);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Error_Message",13,1431020133);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 0, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warning_Message",15,335978597);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 0, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Dump",4,1148546416);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = F236_10143(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Errors",6,2056441459);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc2), tr1, tr2);
	tr1 = F236_10144(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warnings",8,1443528819);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc2), tr1, tr2);
	F1019_19937(RTCV(loc3), loc2);
	tr1 = F1019_19931(RTCV(loc3));
	F893_17377(RTCV(loc1), tr1);
	tr1 = RTMS_EX_H("<br>",4,1013084734);
	tr2 = RTMS_EX_H("\\n",2,23662);
	F893_17354(RTCV(loc1), tr1, tr2);
	tr1 = RTMS_EX_H("id",2,26980);
	F649_12092(RTCV(loc4), tr1, loc7);
	tr1 = F649_12073(RTCV(loc4));
	F116_8572(RTCV(arg2), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg2)-115])(RTCV(arg2), loc1);
	RTLE;
}

/* {APP_SERVICE}.get_execution_result */
void F236_10132 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc2);
	RTLR(4,loc6);
	RTLR(5,Current);
	RTLR(6,loc7);
	RTLR(7,arg1);
	RTLR(8,tr2);
	RTLR(9,tr3);
	RTLR(10,loc4);
	RTLR(11,loc5);
	RTLR(12,arg2);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1019_19929(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1020_19945(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTMS_EX_H("id",2,26980);
	loc7 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc7));
	if (tb1) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tb1 = F885_17037(RTCV(tr1), loc7);
		if ((EIF_BOOLEAN) !tb1) {
		}
	}
	tr1 = RTMS_EX_H("ec -config ",11,878515744);
	tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	tr2 = RTMS_EX_H(" -c_compile -batch",18,202212712);
	tr1 = F893_17379(RTCV(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	F236_10152(Current, *(EIF_REFERENCE *)(Current + _REFACS_7_));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) == (EIF_BOOLEAN) 0) && (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) == (EIF_BOOLEAN) 0))) {
		F236_10153(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Execution_Output",16,1485599348);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Error_Message",13,1431020133);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warning_Message",15,335978597);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 0, tr1);
	}
	loc4 = F236_10143(Current);
	tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("Compile_Errors",14,495513459);
	F987_19042(RTCV(tr1), tr2);
	F1020_19946(RTCV(loc2), loc4, tr1);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 0, tr1);
	}
	tr1 = F236_10144(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warnings",8,1443528819);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc2), tr1, tr2);
	loc5 = F236_10142(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Runtime_Text",12,1885245556);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("Runtime_Errors",14,366611315);
	F987_19042(RTCV(tr1), tr2);
	F1020_19946(RTCV(loc2), loc5, tr1);
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Runtime_Error",17,1122542450);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Runtime_Error",17,1122542450);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 0, tr1);
	}
	F1019_19937(RTCV(loc3), loc2);
	tr1 = F1019_19931(RTCV(loc3));
	F893_17377(RTCV(loc1), tr1);
	tr1 = RTMS_EX_H("<br>",4,1013084734);
	tr2 = RTMS_EX_H("\\n",2,23662);
	F893_17354(RTCV(loc1), tr1, tr2);
	tr1 = RTMS_EX_H("id",2,26980);
	F649_12092(RTCV(loc6), tr1, loc7);
	tr1 = F649_12073(RTCV(loc6));
	F116_8572(RTCV(arg2), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg2)-115])(RTCV(arg2), loc1);
	RTLE;
}

/* {APP_SERVICE}.get_interface_view */
void F236_10133 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc5);
	RTLR(1,tr1);
	RTLR(2,loc6);
	RTLR(3,arg1);
	RTLR(4,Current);
	RTLR(5,loc7);
	RTLR(6,loc2);
	RTLR(7,tr2);
	RTLR(8,arg2);
	
	RTGC;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("id",2,26980);
	loc6 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc6));
	if (tb1) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tb1 = F885_17037(RTCV(tr1), loc6);
		if ((EIF_BOOLEAN) !tb1) {
		}
	}
	tr1 = RTMS_EX_H("class",5,1819086195);
	loc7 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc7));
	if (tb1) {
	}
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = RTMS_EX_H("[{\"result\" : \"",14,1132216098);
	F889_17164(RTCV(tr1), tr2);
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("Interface View is here\"}]",25,191463517);
	F893_17377(RTCV(loc2), tr1);
	tr1 = RTMS_EX_H("id",2,26980);
	F649_12092(RTCV(loc5), tr1, loc6);
	tr1 = F649_12073(RTCV(loc5));
	F116_8572(RTCV(arg2), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg2)-115])(RTCV(arg2), loc2);
	RTLE;
}

/* {APP_SERVICE}.get_flat_view */
void F236_10134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc6);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLR(7,arg1);
	RTLR(8,loc5);
	RTLR(9,tr2);
	RTLR(10,tr3);
	RTLR(11,arg2);
	
	RTGC;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1019_19929(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1020_19945(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTMS_EX_H("id",2,26980);
	loc4 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc4));
	if (tb1) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tb1 = F885_17037(RTCV(tr1), loc4);
		if ((EIF_BOOLEAN) !tb1) {
		}
	}
	tr1 = RTMS_EX_H("class",5,1819086195);
	loc5 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc5));
	if (tb1) {
	}
	tr1 = RTMS_EX_H("ec -flat ",9,371464480);
	tr1 = F893_17379(RTCV(tr1), loc5);
	tr2 = RTMS_EX_H(" -config ",9,2123884320);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	F236_10154(Current, loc5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Flat_View",9,966897271);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Error_Message",13,1431020133);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) == (EIF_BOOLEAN) 0);
	}
	if (tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 1, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Flat_View",13,522212983);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 0, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 0, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Flat_View",13,522212983);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_), tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warning_Message",15,335978597);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 0, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Dump",4,1148546416);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = F236_10143(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Errors",6,2056441459);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc2), tr1, tr2);
	tr1 = F236_10144(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warnings",8,1443528819);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc2), tr1, tr2);
	F1019_19937(RTCV(loc6), loc2);
	tr1 = F1019_19931(RTCV(loc6));
	F893_17377(RTCV(loc1), tr1);
	tr1 = RTMS_EX_H("<br>",4,1013084734);
	tr2 = RTMS_EX_H("\\n",2,23662);
	F893_17354(RTCV(loc1), tr1, tr2);
	tr1 = RTMS_EX_H("id",2,26980);
	F649_12092(RTCV(loc3), tr1, loc4);
	tr1 = F649_12073(RTCV(loc3));
	F116_8572(RTCV(arg2), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg2)-115])(RTCV(arg2), loc1);
	RTLE;
}

/* {APP_SERVICE}.get_contract_view */
void F236_10135 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc6);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLR(7,arg1);
	RTLR(8,loc5);
	RTLR(9,tr2);
	RTLR(10,tr3);
	RTLR(11,arg2);
	
	RTGC;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1019_19929(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1020_19945(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTMS_EX_H("id",2,26980);
	loc4 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc4));
	if (tb1) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tb1 = F885_17037(RTCV(tr1), loc4);
		if ((EIF_BOOLEAN) !tb1) {
		}
	}
	tr1 = RTMS_EX_H("class",5,1819086195);
	loc5 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc5));
	if (tb1) {
	}
	tr1 = RTMS_EX_H("ec -short ",10,866095136);
	tr1 = F893_17379(RTCV(tr1), loc5);
	tr2 = RTMS_EX_H(" -config ",9,2123884320);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	F236_10154(Current, loc5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Contract_View",13,871755895);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Error_Message",13,1431020133);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) == (EIF_BOOLEAN) 0);
	}
	if (tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 1, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Contract_View",17,189318775);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 0, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 0, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Contract_View",17,189318775);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_), tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warning_Message",15,335978597);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc2), (EIF_BOOLEAN) 0, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Dump",4,1148546416);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc2), tr1, tr2);
	tr1 = F236_10143(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Errors",6,2056441459);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc2), tr1, tr2);
	tr1 = F236_10144(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warnings",8,1443528819);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc2), tr1, tr2);
	F1019_19937(RTCV(loc6), loc2);
	tr1 = F1019_19931(RTCV(loc6));
	F893_17377(RTCV(loc1), tr1);
	tr1 = RTMS_EX_H("<br>",4,1013084734);
	tr2 = RTMS_EX_H("\\n",2,23662);
	F893_17354(RTCV(loc1), tr1, tr2);
	tr1 = RTMS_EX_H("id",2,26980);
	F649_12092(RTCV(loc3), tr1, loc4);
	tr1 = F649_12073(RTCV(loc3));
	F116_8572(RTCV(arg2), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg2)-115])(RTCV(arg2), loc1);
	RTLE;
}

/* {APP_SERVICE}.get_class_descendants */
void F236_10136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc5);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc8);
	RTLR(4,loc4);
	RTLR(5,Current);
	RTLR(6,loc6);
	RTLR(7,arg1);
	RTLR(8,loc7);
	RTLR(9,tr2);
	RTLR(10,tr3);
	RTLR(11,arg2);
	
	RTGC;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1019_19929(RTCV(tr1));
	loc8 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1020_19945(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTMS_EX_H("id",2,26980);
	loc6 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc6));
	if (tb1) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tb1 = F885_17037(RTCV(tr1), loc6);
		if ((EIF_BOOLEAN) !tb1) {
		}
	}
	tr1 = RTMS_EX_H("class",5,1819086195);
	loc7 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc7));
	if (tb1) {
	}
	tr1 = RTMS_EX_H("ec -descendants ",16,118532128);
	tr1 = F893_17379(RTCV(tr1), loc7);
	tr2 = RTMS_EX_H(" -config ",9,2123884320);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	F236_10154(Current, loc7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Class_Descendants_Dump",22,1792106608);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Error_Message",13,1431020133);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) == (EIF_BOOLEAN) 0);
	}
	if (tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 1, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Descendants",15,790243699);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Descendants",15,790243699);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_), tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warning_Message",15,335978597);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Dump",4,1148546416);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = F236_10143(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Errors",6,2056441459);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc4), tr1, tr2);
	tr1 = F236_10144(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warnings",8,1443528819);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc4), tr1, tr2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_))) {
		F893_17418(RTCV(loc7));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		tr2 = RTMS_EX_H(" is not in the universe",23,630160485);
		tr2 = F893_17379(RTCV(loc7), tr2);
		tb1 = F885_17037(RTCV(tr1), tr2);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = F236_10141(Current, loc7, ((EIF_INTEGER_32) 1L));
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Descendants",11,171267699);
			F987_19042(RTCV(tr2), tr3);
			F1020_19946(RTCV(loc4), tr1, tr2);
		} else {
			tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
			F1019_19929(RTCV(tr1));
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Descendants",11,171267699);
			F987_19042(RTCV(tr2), tr3);
			F1020_19946(RTCV(loc4), tr1, tr2);
		}
	}
	F1019_19937(RTCV(loc8), loc4);
	tr1 = F1019_19931(RTCV(loc8));
	F893_17377(RTCV(loc2), tr1);
	tr1 = RTMS_EX_H("<br>",4,1013084734);
	tr2 = RTMS_EX_H("\\n",2,23662);
	F893_17354(RTCV(loc2), tr1, tr2);
	tr1 = RTMS_EX_H("id",2,26980);
	F649_12092(RTCV(loc5), tr1, loc6);
	tr1 = F649_12073(RTCV(loc5));
	F116_8572(RTCV(arg2), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg2)-115])(RTCV(arg2), loc2);
	RTLE;
}

/* {APP_SERVICE}.get_class_ancestors */
void F236_10137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc5);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc8);
	RTLR(4,loc4);
	RTLR(5,Current);
	RTLR(6,loc6);
	RTLR(7,arg1);
	RTLR(8,loc7);
	RTLR(9,tr2);
	RTLR(10,tr3);
	RTLR(11,arg2);
	
	RTGC;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1019_19929(RTCV(tr1));
	loc8 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1020_19945(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTMS_EX_H("id",2,26980);
	loc6 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc6));
	if (tb1) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tb1 = F885_17037(RTCV(tr1), loc6);
		if ((EIF_BOOLEAN) !tb1) {
		}
	}
	tr1 = RTMS_EX_H("class",5,1819086195);
	loc7 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc7));
	if (tb1) {
	}
	tr1 = RTMS_EX_H("ec -ancestors ",14,1776141088);
	tr1 = F893_17379(RTCV(tr1), loc7);
	tr2 = RTMS_EX_H(" -config ",9,2123884320);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	F236_10154(Current, loc7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Class_Ancestors_Dump",20,2055891824);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Error_Message",13,1431020133);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) == (EIF_BOOLEAN) 0);
	}
	if (tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 1, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Ancestors",13,1708770163);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Ancestors",13,1708770163);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_), tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warning_Message",15,335978597);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Dump",4,1148546416);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = F236_10143(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Errors",6,2056441459);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc4), tr1, tr2);
	tr1 = F236_10144(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warnings",8,1443528819);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc4), tr1, tr2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_))) {
		F893_17418(RTCV(loc7));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		tr2 = RTMS_EX_H(" is not in the universe",23,630160485);
		tr2 = F893_17379(RTCV(loc7), tr2);
		tb1 = F885_17037(RTCV(tr1), tr2);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = F236_10141(Current, loc7, ((EIF_INTEGER_32) 2L));
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Ancestors",9,5974643);
			F987_19042(RTCV(tr2), tr3);
			F1020_19946(RTCV(loc4), tr1, tr2);
		} else {
			tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
			F1019_19929(RTCV(tr1));
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Ancestors",9,5974643);
			F987_19042(RTCV(tr2), tr3);
			F1020_19946(RTCV(loc4), tr1, tr2);
		}
	}
	F1019_19937(RTCV(loc8), loc4);
	tr1 = F1019_19931(RTCV(loc8));
	F893_17377(RTCV(loc2), tr1);
	tr1 = RTMS_EX_H("<br>",4,1013084734);
	tr2 = RTMS_EX_H("\\n",2,23662);
	F893_17354(RTCV(loc2), tr1, tr2);
	tr1 = RTMS_EX_H("id",2,26980);
	F649_12092(RTCV(loc5), tr1, loc6);
	tr1 = F649_12073(RTCV(loc5));
	F116_8572(RTCV(arg2), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg2)-115])(RTCV(arg2), loc2);
	RTLE;
}

/* {APP_SERVICE}.get_class_clients */
void F236_10138 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc5);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc8);
	RTLR(4,loc4);
	RTLR(5,Current);
	RTLR(6,loc6);
	RTLR(7,arg1);
	RTLR(8,loc7);
	RTLR(9,tr2);
	RTLR(10,tr3);
	RTLR(11,arg2);
	
	RTGC;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1019_19929(RTCV(tr1));
	loc8 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1020_19945(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTMS_EX_H("id",2,26980);
	loc6 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc6));
	if (tb1) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tb1 = F885_17037(RTCV(tr1), loc6);
		if ((EIF_BOOLEAN) !tb1) {
		}
	}
	tr1 = RTMS_EX_H("class",5,1819086195);
	loc7 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc7));
	if (tb1) {
	}
	tr1 = RTMS_EX_H("ec -clients ",12,127102240);
	tr1 = F893_17379(RTCV(tr1), loc7);
	tr2 = RTMS_EX_H(" -config ",9,2123884320);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	F236_10154(Current, loc7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Class_Clients_Dump",18,439053936);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Error_Message",13,1431020133);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) == (EIF_BOOLEAN) 0);
	}
	if (tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 1, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Clients",11,59744371);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Clients",11,59744371);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_), tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warning_Message",15,335978597);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Dump",4,1148546416);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = F236_10143(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Errors",6,2056441459);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc4), tr1, tr2);
	tr1 = F236_10144(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warnings",8,1443528819);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc4), tr1, tr2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_))) {
		F893_17418(RTCV(loc7));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		tr2 = RTMS_EX_H(" is not in the universe",23,630160485);
		tr2 = F893_17379(RTCV(loc7), tr2);
		tb1 = F885_17037(RTCV(tr1), tr2);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = F236_10140(Current, loc7);
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Clients",7,1277407859);
			F987_19042(RTCV(tr2), tr3);
			F1020_19946(RTCV(loc4), tr1, tr2);
		} else {
			tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
			F1019_19929(RTCV(tr1));
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Clients",7,1277407859);
			F987_19042(RTCV(tr2), tr3);
			F1020_19946(RTCV(loc4), tr1, tr2);
		}
	}
	F1019_19937(RTCV(loc8), loc4);
	tr1 = F1019_19931(RTCV(loc8));
	F893_17377(RTCV(loc2), tr1);
	tr1 = RTMS_EX_H("<br>",4,1013084734);
	tr2 = RTMS_EX_H("\\n",2,23662);
	F893_17354(RTCV(loc2), tr1, tr2);
	tr1 = RTMS_EX_H("id",2,26980);
	F649_12092(RTCV(loc5), tr1, loc6);
	tr1 = F649_12073(RTCV(loc5));
	F116_8572(RTCV(arg2), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg2)-115])(RTCV(arg2), loc2);
	RTLE;
}

/* {APP_SERVICE}.get_class_suppliers */
void F236_10139 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc5);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc8);
	RTLR(4,loc4);
	RTLR(5,Current);
	RTLR(6,loc6);
	RTLR(7,arg1);
	RTLR(8,loc7);
	RTLR(9,tr2);
	RTLR(10,tr3);
	RTLR(11,arg2);
	
	RTGC;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1019_19929(RTCV(tr1));
	loc8 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1020_19945(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTMS_EX_H("id",2,26980);
	loc6 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc6));
	if (tb1) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tb1 = F885_17037(RTCV(tr1), loc6);
		if ((EIF_BOOLEAN) !tb1) {
		}
	}
	tr1 = RTMS_EX_H("class",5,1819086195);
	loc7 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc7));
	if (tb1) {
	}
	tr1 = RTMS_EX_H("ec -suppliers ",14,165399328);
	tr1 = F893_17379(RTCV(tr1), loc7);
	tr2 = RTMS_EX_H(" -config ",9,2123884320);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	F236_10154(Current, loc7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Class_Suppliers_Dump",20,1042869104);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Error_Message",13,1431020133);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) == (EIF_BOOLEAN) 0);
	}
	if (tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 1, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Suppliers",13,561629555);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Suppliers",13,561629555);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_), tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warning_Message",15,335978597);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Dump",4,1148546416);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = F236_10143(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Errors",6,2056441459);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc4), tr1, tr2);
	tr1 = F236_10144(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warnings",8,1443528819);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc4), tr1, tr2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_))) {
		F893_17418(RTCV(loc7));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		tr2 = RTMS_EX_H(" is not in the universe",23,630160485);
		tr2 = F893_17379(RTCV(loc7), tr2);
		tb1 = F885_17037(RTCV(tr1), tr2);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = F236_10140(Current, loc7);
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Suppliers",9,1006313843);
			F987_19042(RTCV(tr2), tr3);
			F1020_19946(RTCV(loc4), tr1, tr2);
		} else {
			tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
			F1019_19929(RTCV(tr1));
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Suppliers",9,1006313843);
			F987_19042(RTCV(tr2), tr3);
			F1020_19946(RTCV(loc4), tr1, tr2);
		}
	}
	F1019_19937(RTCV(loc8), loc4);
	tr1 = F1019_19931(RTCV(loc8));
	F893_17377(RTCV(loc2), tr1);
	tr1 = RTMS_EX_H("<br>",4,1013084734);
	tr2 = RTMS_EX_H("\\n",2,23662);
	F893_17354(RTCV(loc2), tr1, tr2);
	tr1 = RTMS_EX_H("id",2,26980);
	F649_12092(RTCV(loc5), tr1, loc6);
	tr1 = F649_12073(RTCV(loc5));
	F116_8572(RTCV(arg2), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg2)-115])(RTCV(arg2), loc2);
	RTLE;
}

/* {APP_SERVICE}.get_feature_callers */
void F236_23004 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc5);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc9);
	RTLR(4,loc4);
	RTLR(5,Current);
	RTLR(6,loc6);
	RTLR(7,arg1);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,tr2);
	RTLR(11,tr3);
	RTLR(12,arg2);
	
	RTGC;
	tr1 = RTLNS(648, 648, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F649_12064(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1019_19929(RTCV(tr1));
	loc9 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1019, 1019, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1020_19945(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTMS_EX_H("id",2,26980);
	loc6 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc6));
	if (tb1) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tb1 = F885_17037(RTCV(tr1), loc6);
		if ((EIF_BOOLEAN) !tb1) {
		}
	}
	tr1 = RTMS_EX_H("class",5,1819086195);
	loc7 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc7));
	if (tb1) {
	}
	tr1 = RTMS_EX_H("feature",7,1951938661);
	loc8 = F236_10147(Current, arg1, tr1);
	tb1 = F324_9603(RTCV(loc8));
	if (tb1) {
	}
	tr1 = RTMS_EX_H("ec -callers ",12,887886368);
	tr1 = F893_17379(RTCV(tr1), loc7);
	tr2 = RTMS_EX_H(" ",1,32);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), loc8);
	tr2 = RTMS_EX_H(" -config ",9,2123884320);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	F236_23036(Current, loc7, loc8);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Feature_Callers_Dump",20,1001354864);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Error_Message",13,1431020133);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_5_) == (EIF_BOOLEAN) 0);
	}
	if (tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 1, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Feature_Callers",19,1409186675);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Compilation_Error",21,1946602866);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Feature_Callers",19,1409186675);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_5_), tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warning_Message",15,335978597);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb1 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 1, tr1);
	} else {
		tr1 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Has_Warning",11,1665262695);
		F987_19042(RTCV(tr1), tr2);
		F1020_19951(RTCV(loc4), (EIF_BOOLEAN) 0, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Dump",4,1148546416);
	F987_19042(RTCV(tr2), tr3);
	F1020_19947(RTCV(loc4), tr1, tr2);
	tr1 = F236_10143(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Errors",6,2056441459);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc4), tr1, tr2);
	tr1 = F236_10144(Current);
	tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr3 = RTMS_EX_H("Warnings",8,1443528819);
	F987_19042(RTCV(tr2), tr3);
	F1020_19946(RTCV(loc4), tr1, tr2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_))) {
		F893_17418(RTCV(loc7));
		F893_17417(RTCV(loc8));
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		tr2 = RTMS_EX_H(" is not in the universe",23,630160485);
		tr2 = F893_17379(RTCV(loc7), tr2);
		tb2 = F885_17037(RTCV(tr1), tr2);
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
			tr2 = RTMS_EX_H(" is not a feature of ",21,1321560864);
			tr2 = F893_17379(RTCV(loc8), tr2);
			tr2 = F893_17379(RTCV(tr2), loc7);
			tb2 = F885_17037(RTCV(tr1), tr2);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			tr1 = F236_23035(Current, loc7, loc8);
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Callers",7,1372654195);
			F987_19042(RTCV(tr2), tr3);
			F1020_19946(RTCV(loc4), tr1, tr2);
		} else {
			tr1 = RTLNS(1018, 1018, _OBJSIZ_1_0_0_0_0_0_0_0_);
			F1019_19929(RTCV(tr1));
			tr2 = RTLNS(986, 986, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr3 = RTMS_EX_H("Callers",7,1372654195);
			F987_19042(RTCV(tr2), tr3);
			F1020_19946(RTCV(loc4), tr1, tr2);
		}
	}
	F1019_19937(RTCV(loc9), loc4);
	tr1 = F1019_19931(RTCV(loc9));
	F893_17377(RTCV(loc2), tr1);
	tr1 = RTMS_EX_H("<br>",4,1013084734);
	tr2 = RTMS_EX_H("\\n",2,23662);
	F893_17354(RTCV(loc2), tr1, tr2);
	tr1 = RTMS_EX_H("id",2,26980);
	F649_12092(RTCV(loc5), tr1, loc6);
	tr1 = F649_12073(RTCV(loc5));
	F116_8572(RTCV(arg2), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg2)-115])(RTCV(arg2), loc2);
	RTLE;
}

/* {APP_SERVICE}.get_feature_callers_list */
EIF_REFERENCE F236_23035 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,arg2);
	RTLR(6,loc2);
	
	RTGC;
	tr1 = RTLNS(1, 1, _OBJSIZ_5_0_0_1_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F2_22962(RTCV(tr1), tr2, arg1, arg2);
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_3_);
	RTLE;
	return (EIF_REFERENCE) loc2;
}

/* {APP_SERVICE}.get_client_supplier_list */
EIF_REFERENCE F236_10140 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,loc2);
	
	RTGC;
	tr1 = RTLNS(33, 33, _OBJSIZ_4_0_0_1_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F34_4000(RTCV(tr1), tr2, arg1);
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_2_);
	RTLE;
	return (EIF_REFERENCE) loc2;
}

/* {APP_SERVICE}.get_archi_list */
EIF_REFERENCE F236_10141 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,loc2);
	
	RTGC;
	tr1 = RTLNS(31, 31, _OBJSIZ_4_0_0_2_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F32_3981(RTCV(tr1), tr2, arg1, arg2);
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_2_);
	RTLE;
	return (EIF_REFERENCE) loc2;
}

/* {APP_SERVICE}.get_runtime_error_list */
EIF_REFERENCE F236_10142 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_3_) == (EIF_BOOLEAN) 1)) {
		tr1 = RTLNS(29, 29, _OBJSIZ_4_0_0_1_0_0_0_0_);
		F30_3962(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_11_));
		loc1 = (EIF_REFERENCE) tr1;
		loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_3_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) loc2;
}

/* {APP_SERVICE}.get_error_list */
EIF_REFERENCE F236_10143 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) == (EIF_BOOLEAN) 1)) {
		tr1 = RTLNS(36, 36, _OBJSIZ_3_0_0_1_0_0_0_0_);
		F37_4018(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_11_));
		loc1 = (EIF_REFERENCE) tr1;
		loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_)) {
		tr1 = RTLNS(36, 36, _OBJSIZ_3_0_0_1_0_0_0_0_);
		F37_4018(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_13_));
		loc1 = (EIF_REFERENCE) tr1;
		loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
	}
	RTLE;
	return (EIF_REFERENCE) loc2;
}

/* {APP_SERVICE}.get_warning_list */
EIF_REFERENCE F236_10144 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) == (EIF_BOOLEAN) 1)) {
		tr1 = RTLNS(35, 35, _OBJSIZ_3_0_0_1_0_0_0_0_);
		F36_4011(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_12_));
		loc1 = (EIF_REFERENCE) tr1;
		loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
	}
	RTLE;
	return (EIF_REFERENCE) loc2;
}

/* {APP_SERVICE}.set_project_path */
EIF_REFERENCE F236_10145 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg2);
	RTLR(1,loc8);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,loc3);
	RTLR(8,loc5);
	RTLR(9,loc6);
	RTLR(10,loc7);
	
	RTGC;
	tb1 = F324_9603(RTCV(arg2));
	if (tb1) {
		loc8 = RTOUCR(16,F236_10150,(Current));
		loc8 = F31_3976(RTCV(loc8));
		loc8 = F823_16624(RTCV(loc8));
	} else {
		loc8 = (EIF_REFERENCE) arg2;
	}
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '/';
	loc1 = F885_17071(RTCV(arg1), tw1);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[Dtype(loc1)-601])(RTCV(loc1));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R9237[Dtype(loc1)-721])(RTCV(loc1), (EIF_REFERENCE) &ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	tr1 = F893_17423(RTCV(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) - ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	tr2 = RTMS_EX_H(".ecf",4,778396518);
	loc4 = F889_17178(RTCV(tr1), tr2, ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc3 = F893_17423(RTCV(tr1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
	tr1 = RTOUCR(15,F236_10130,(Current));
	tr1 = F893_17379(RTCV(tr1), loc3);
	tr2 = RTMS_EX_H("_",1,95);
	tr1 = F893_17379(RTCV(tr1), tr2);
	loc5 = F893_17379(RTCV(tr1), loc8);
	tr1 = RTOUCR(15,F236_10130,(Current));
	tr1 = F893_17379(RTCV(tr1), loc3);
	tr2 = RTMS_EX_H("_",1,95);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), loc8);
	tr2 = RTMS_EX_H("/",1,47);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	loc2 = F236_10149(Current, tr1);
	if ((EIF_BOOLEAN)(loc2 == (EIF_BOOLEAN) 0)) {
		tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
		tr2 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
		F904_18709(RTCV(tr2), *(EIF_REFERENCE *)(Current + _REFACS_7_));
		F602_14050(RTCV(tr1), tr2);
		loc6 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
		tr2 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
		F904_18709(RTCV(tr2), loc5);
		F602_14050(RTCV(tr1), tr2);
		loc7 = (EIF_REFERENCE) tr1;
		F236_10151(Current, loc6, loc7);
	}
	RTAR(Current, loc5);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) loc5;
	RTLE;
	return (EIF_REFERENCE) loc8;
}

/* {APP_SERVICE}.extract_req_parameter */
EIF_REFERENCE F236_10147 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,tr1);
	
	RTGC;
	Result = RTMS_EX_H("",0,0);
	tr1 = F902_18660(RTCV(arg1), arg2);
	loc1 = tr1;
	loc1 = RTRV(eif_non_attached_type(981),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		Result = F885_17049(RTCV(tr1));
	}
	RTLE;
	return Result;
}

/* {APP_SERVICE}.extract_boolean_req_parameter */
EIF_BOOLEAN F236_10148 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,tr1);
	
	RTGC;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = F902_18660(RTCV(arg1), arg2);
	loc1 = tr1;
	loc1 = RTRV(eif_non_attached_type(981),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		Result = F885_17070(RTCV(tr1));
	}
	RTLE;
	return Result;
}

/* {APP_SERVICE}.file_exists */
EIF_BOOLEAN F236_10149 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F602_14049(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	Result = '\0';
	tb1 = F602_14080(RTCV(loc1));
	if (tb1) {
		tb1 = F602_14083(RTCV(loc1));
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {APP_SERVICE}.uuid_generator */
static EIF_REFERENCE F236_10150_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(16)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(30, 30, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F236_10150 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(16,F236_10150_body,(Current));
}

/* {APP_SERVICE}.recursive_copy */
void F236_10151 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc8);
	RTLR(7,loc7);
	RTLR(8,loc5);
	RTLR(9,tr3);
	RTLR(10,loc6);
	RTLR(11,loc3);
	RTLR(12,loc4);
	RTLR(13,Current);
	
	RTGC;
	tb1 = F602_14089(RTCV(arg1));
	if (tb1) {
		tr1 = RTLNS(584, 584, _OBJSIZ_3_0_0_1_0_2_0_0_);
		tr2 = F602_14057(RTCV(arg2));
		F585_13590(RTCV(tr1), tr2);
		loc1 = (EIF_REFERENCE) tr1;
		tb1 = F585_13612(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb1) {
			F585_13593(RTCV(loc1));
		}
		tr1 = RTLNS(584, 584, _OBJSIZ_3_0_0_1_0_2_0_0_);
		tr2 = F602_14057(RTCV(arg1));
		F585_13590(RTCV(tr1), tr2);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = F585_13604(RTCV(loc2));
		loc8 = F682_12245(RTCV(tr1));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc8)-646])(RTCV(loc8));
			if (tb1) break;
			loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc8)-646])(RTCV(loc8));
			tr1 = F904_18747(RTCV(loc7));
			tc1 = F893_17343(RTCV(tr1), ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
				tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
				tr2 = F602_14057(RTCV(arg1));
				tr2 = F904_18747(RTCV(tr2));
				tr3 = RTMS_EX_H("/",1,47);
				tr2 = F893_17379(RTCV(tr2), tr3);
				tr3 = F904_18747(RTCV(loc7));
				tr2 = F893_17379(RTCV(tr2), tr3);
				F904_18709(RTCV(tr1), tr2);
				loc5 = (EIF_REFERENCE) tr1;
				tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
				tr2 = F602_14057(RTCV(arg2));
				tr2 = F904_18747(RTCV(tr2));
				tr3 = RTMS_EX_H("/",1,47);
				tr2 = F893_17379(RTCV(tr2), tr3);
				tr3 = F904_18747(RTCV(loc7));
				tr2 = F893_17379(RTCV(tr2), tr3);
				F904_18709(RTCV(tr1), tr2);
				loc6 = (EIF_REFERENCE) tr1;
				tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
				F602_14050(RTCV(tr1), loc5);
				loc3 = (EIF_REFERENCE) tr1;
				tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
				F602_14050(RTCV(tr1), loc6);
				loc4 = (EIF_REFERENCE) tr1;
				F236_10151(Current, loc3, loc4);
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc8)-646])(RTCV(loc8));
		}
	} else {
		tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
		tr2 = F602_14057(RTCV(arg1));
		tr2 = F904_18747(RTCV(tr2));
		F602_14051(RTCV(tr1), tr2);
		loc3 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
		tr2 = F602_14057(RTCV(arg2));
		tr2 = F904_18747(RTCV(tr2));
		F602_14055(RTCV(tr1), tr2);
		loc4 = (EIF_REFERENCE) tr1;
		F602_14198(RTCV(loc3), loc4);
		F602_14132(RTCV(loc3));
		F602_14132(RTCV(loc4));
	}
	RTLE;
}

/* {APP_SERVICE}.compile_helper */
void F236_10152 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc1 = F35_4009(RTCV(tr1), tr2, arg1);
	F109_7035(RTCV(loc1));
	F109_7024(RTCV(loc1), (EIF_BOOLEAN) 1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,1,823,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A219_96_2, (EIF_POINTER) _A219_96_2, (EIF_POINTER)(F236_10155),tr1, 1, 1);
	}
	F109_7010(RTCV(loc1), tr4);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,1,823,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A219_97_2, (EIF_POINTER) _A219_97_2, (EIF_POINTER)(F236_10156),tr1, 1, 1);
	}
	F109_7007(RTCV(loc1), tr4);
	F110_7906(RTCV(loc1));
	for (;;) {
		tb1 = F109_7056(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb1) break;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	tr2 = RTMS_EX_H("\015\012",2,3338);
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	F893_17354(RTCV(tr1), tr2, tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTMS_EX_H("\015\012",2,3338);
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	F893_17354(RTCV(tr1), tr2, tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tb2 = F324_9603(RTCV(tr1));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	}
	tr1 = RTLNS(32, 32, _OBJSIZ_6_0_0_0_0_0_0_0_);
	F33_3991(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_9_));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_2_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	tr3 = RTMS_EX_H("Recompiled.",11,1394060078);
	ti4_1 = F889_17178(RTCV(tr2), tr3, ((EIF_INTEGER_32) 1L));
	tr1 = F893_17423(RTCV(tr1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 10L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("W_code",6,1840023141);
	ti4_1 = F889_17178(RTCV(arg1), tr1, ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc2));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_1_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_3_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
}

/* {APP_SERVICE}.execution_helper */
void F236_10153 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc1);
	RTLR(5,tr4);
	RTLR(6,loc3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tr2 = RTMS_EX_H("/EIFGENs/",9,28997167);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	tr2 = RTMS_EX_H("/W_code/",8,758674991);
	tr1 = F893_17379(RTCV(tr1), tr2);
	tr1 = F893_17379(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	tr2 = RTMS_EX_H(".exe",4,778401893);
	tr1 = F893_17379(RTCV(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr2 = RTMS_EX_H(".ecf",4,778396518);
	tr3 = RTMS_EX_H("",0,0);
	F893_17354(RTCV(tr1), tr2, tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr3 = RTMS_EX_H("",0,0);
	loc1 = F35_4009(RTCV(tr1), tr2, tr3);
	F109_7035(RTCV(loc1));
	F109_7024(RTCV(loc1), (EIF_BOOLEAN) 1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,1,823,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A219_99_2, (EIF_POINTER) _A219_99_2, (EIF_POINTER)(F236_10158),tr1, 1, 1);
	}
	F109_7010(RTCV(loc1), tr4);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,1,823,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A219_98_2, (EIF_POINTER) _A219_98_2, (EIF_POINTER)(F236_10157),tr1, 1, 1);
	}
	F109_7007(RTCV(loc1), tr4);
	F110_7906(RTCV(loc1));
	loc2 = F109_7056(RTCV(loc1));
	tr1 = RTLNS(1083, 1083, _OBJSIZ_0_0_0_1_0_0_0_1_);
	F1084_20912(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == (EIF_BOOLEAN) 0)) break;
		loc2 = F109_7056(RTCV(loc1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTMS_EX_H("\015\012",2,3338);
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	F893_17354(RTCV(tr1), tr2, tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTMS_EX_H("\015\012",2,3338);
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	F893_17354(RTCV(tr1), tr2, tr3);
	RTLE;
}

/* {APP_SERVICE}.class_functions_helper */
void F236_10154 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,loc2);
	RTLR(7,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc1 = F35_4009(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_5_), *(EIF_REFERENCE *)(Current + _REFACS_7_));
	F109_7035(RTCV(loc1));
	F109_7024(RTCV(loc1), (EIF_BOOLEAN) 1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,1,823,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A219_108_2, (EIF_POINTER) _A219_108_2, (EIF_POINTER)(F236_23038),tr1, 1, 1);
	}
	F109_7010(RTCV(loc1), tr4);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,1,823,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A219_107_2, (EIF_POINTER) _A219_107_2, (EIF_POINTER)(F236_23037),tr1, 1, 1);
	}
	F109_7007(RTCV(loc1), tr4);
	F110_7906(RTCV(loc1));
	for (;;) {
		tb1 = F109_7056(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb1) break;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTMS_EX_H("\015\012",2,3338);
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	F893_17354(RTCV(tr1), tr2, tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTMS_EX_H("\015\012",2,3338);
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	F893_17354(RTCV(tr1), tr2, tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tb2 = F324_9603(RTCV(tr1));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	}
	tr1 = RTLNS(32, 32, _OBJSIZ_6_0_0_0_0_0_0_0_);
	F33_3991(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_11_));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_5_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_1_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_3_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_))) {
		F893_17418(RTCV(arg1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		tr2 = RTMS_EX_H(" is not in the universe",23,630160485);
		tr2 = F893_17379(RTCV(arg1), tr2);
		tb2 = F885_17037(RTCV(tr1), tr2);
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
			tr1 = RTMS_EX_H("",0,0);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_15_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTLE;
}

/* {APP_SERVICE}.feature_functions_helper */
void F236_23036 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,loc2);
	RTLR(7,arg1);
	RTLR(8,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc1 = F35_4009(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_5_), *(EIF_REFERENCE *)(Current + _REFACS_7_));
	F109_7035(RTCV(loc1));
	F109_7024(RTCV(loc1), (EIF_BOOLEAN) 1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,1,823,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A219_110_2, (EIF_POINTER) _A219_110_2, (EIF_POINTER)(F236_23040),tr1, 1, 1);
	}
	F109_7010(RTCV(loc1), tr4);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,823,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {867,0,0xFFF9,1,823,892,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A219_109_2, (EIF_POINTER) _A219_109_2, (EIF_POINTER)(F236_23039),tr1, 1, 1);
	}
	F109_7007(RTCV(loc1), tr4);
	F110_7906(RTCV(loc1));
	for (;;) {
		tb1 = F109_7056(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb1) break;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTMS_EX_H("\015\012",2,3338);
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	F893_17354(RTCV(tr1), tr2, tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTMS_EX_H("\015\012",2,3338);
	tr3 = RTMS_EX_H("<br>",4,1013084734);
	F893_17354(RTCV(tr1), tr2, tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tb2 = F324_9603(RTCV(tr1));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	}
	tr1 = RTLNS(32, 32, _OBJSIZ_6_0_0_0_0_0_0_0_);
	F33_3991(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_11_));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_5_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_1_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_3_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tb2 = F324_9603(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb2) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_))) {
		F893_17418(RTCV(arg1));
		F893_17417(RTCV(arg2));
		tb2 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		tr2 = RTMS_EX_H(" is not in the universe",23,630160485);
		tr2 = F893_17379(RTCV(arg1), tr2);
		tb3 = F885_17037(RTCV(tr1), tr2);
		if (!tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
			tr2 = RTMS_EX_H(" is not a feature of ",21,1321560864);
			tr2 = F893_17379(RTCV(arg2), tr2);
			tr2 = F893_17379(RTCV(tr2), arg1);
			tb3 = F885_17037(RTCV(tr1), tr2);
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
			tr1 = RTMS_EX_H("",0,0);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_15_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTLE;
}

/* {APP_SERVICE}.handle_error_compilation */
void F236_10155 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTMS_EX_H("Error code",10,424024421);
	tb1 = F885_17037(RTCV(arg1), tr1);
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tr1 = RTMS_EX_H("Warning code",12,530688357);
	tb1 = F885_17037(RTCV(arg1), tr1);
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tr1 = RTMS_EX_H("Syntax error",12,995637106);
	tb1 = F885_17037(RTCV(arg1), tr1);
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_15_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F893_17377(RTCV(tr1), arg1);
	RTLE;
}

/* {APP_SERVICE}.handle_output_compilation */
void F236_10156 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = '\0';
	tb2 = F324_9603(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(arg1 != NULL);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		F893_17377(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {APP_SERVICE}.handle_output_execution */
void F236_10157 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = '\0';
	tb2 = F324_9603(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(arg1 != NULL);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		F893_17377(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {APP_SERVICE}.handle_error_execution */
void F236_10158 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_15_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	F893_17377(RTCV(tr1), arg1);
	RTLE;
}

/* {APP_SERVICE}.handle_output_class */
void F236_23037 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = '\0';
	tb2 = F324_9603(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(arg1 != NULL);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		F893_17377(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {APP_SERVICE}.handle_error_class */
void F236_23038 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	F893_17377(RTCV(tr1), arg1);
	RTLE;
}

/* {APP_SERVICE}.handle_output_feature */
void F236_23039 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOUCR(0,F1_24,(Current));
	F58_4142(RTCV(tr1), arg1);
	tb1 = '\0';
	tb2 = F324_9603(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb2) {
		tb1 = (EIF_BOOLEAN)(arg1 != NULL);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		F893_17377(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {APP_SERVICE}.handle_error_feature */
void F236_23040 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOUCR(0,F1_24,(Current));
	F58_4142(RTCV(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	F893_17377(RTCV(tr1), arg1);
	RTLE;
}

void EIF_Minit219 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

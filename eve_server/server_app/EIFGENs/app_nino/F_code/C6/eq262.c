/*
 * Code for class EQA_TEST_SET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq262.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_TEST_SET}.default_create */
void F615_11505 (EIF_REFERENCE Current)
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
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc5);
	RTLR(4,tr2);
	RTLR(5,loc4);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,loc2);
	RTLR(9,tr3);
	RTLR(10,loc3);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(60));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = F615_11520(Current);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(571, 571, _OBJSIZ_0_0_0_1_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTOUCR(23,F615_11523,(Current));
	tr1 = F61_4294(RTCV(tr1), tr2);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
		F904_18709(RTCV(tr1), loc5);
		loc4 = (EIF_REFERENCE) tr1;
	} else {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = RTOUCR(24,F615_11522,(Current));
		tr1 = F61_4294(RTCV(tr1), tr2);
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = RTOUCR(25,F615_11521,(Current));
			tr1 = F61_4294(RTCV(tr1), tr2);
			loc7 = tr1;
			tb1 = EIF_TEST(loc7);
		}
		if (tb1) {
			tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
			F904_18709(RTCV(tr1), loc6);
			loc2 = (EIF_REFERENCE) tr1;
			loc4 = F904_18736(RTCV(loc2), loc7);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = F904_18748(RTCV(loc4));
			tr3 = RTOUCR(23,F615_11523,(Current));
			F61_4301(RTCV(tr1), tr2, tr3);
		}
	}
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		tr1 = RTLNS(584, 584, _OBJSIZ_3_0_0_1_0_2_0_0_);
		F585_13590(RTCV(tr1), loc4);
		loc3 = (EIF_REFERENCE) tr1;
		tb1 = F585_13612(RTCV(loc3));
		if ((EIF_BOOLEAN) !tb1) {
			F585_13593(RTCV(loc3));
		} else {
			F585_13617(RTCV(loc3));
		}
		tr1 = RTMS32_EX_H("t\000\000\000e\000\000\000s\000\000\000t\000\000\000i\000\000\000n\000\000\000g\000\000\000_\000\000\000d\000\000\000i\000\000\000r\000\000\000e\000\000\000c\000\000\000t\000\000\000o\000\000\000r\000\000\000y\000\000\000_\000\000\000e\000\000\000x\000\000\000i\000\000\000s\000\000\000t\000\000\000s\000\000\000 \000\000\000",25,1829787168);
		tr2 = F904_18748(RTCV(loc4));
		tr1 = F892_17288(RTCV(tr1), tr2);
		tb1 = F585_13612(RTCV(loc3));
		F615_11514(Current, tr1, tb1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R10705[Dtype(Current)-614])(Current);
	RTLE;
}

/* {EQA_TEST_SET}.asserter */
EIF_REFERENCE F615_11506 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = F615_11519(Current);
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EQA_TEST_SET}.file_system */
EIF_REFERENCE F615_11507 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EQA_TEST_SET}.environment */
EIF_REFERENCE F615_11508 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EQA_TEST_SET}.assert_32 */
void F615_11514 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = F615_11506(Current);
	F29_3957(RTCV(tr1), arg1, arg2);
	RTLE;
}

/* {EQA_TEST_SET}.on_prepare */
void F615_11516 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EQA_TEST_SET}.internal_asserter */
EIF_REFERENCE F615_11518 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EQA_TEST_SET}.new_asserter */
EIF_REFERENCE F615_11519 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(28, 28, _OBJSIZ_0_1_0_0_0_0_0_0_);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EQA_TEST_SET}.new_file_system */
EIF_REFERENCE F615_11520 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(26, 26, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr2 = F615_11506(Current);
	F27_3937(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {EQA_TEST_SET}.test_name_key */

EIF_REFERENCE F615_11521 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (25,RTMS_EX_H("TEST_NAME",9,979914053));
}

/* {EQA_TEST_SET}.testing_directory_key */

EIF_REFERENCE F615_11522 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (24,RTMS_EX_H("TESTING_DIRECTORY",17,639283033));
}

/* {EQA_TEST_SET}.target_path_key */

EIF_REFERENCE F615_11523 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (23,RTMS_EX_H("TARGET_PATH",11,941446728));
}

void EIF_Minit262 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

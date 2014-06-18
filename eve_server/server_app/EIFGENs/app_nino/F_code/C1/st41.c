/*
 * Code for class STD_FILES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st41.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STD_FILES}.output */
static EIF_REFERENCE F58_4114_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(28)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(1024, 1024, _OBJSIZ_3_7_2_4_1_1_2_1_);
	tr2 = RTMS_EX_H("stdout",6,1912016244);
	F1025_20114(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F58_4114 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(28,F58_4114_body,(Current));
}

/* {STD_FILES}.error */
static EIF_REFERENCE F58_4115_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(29)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(1024, 1024, _OBJSIZ_3_7_2_4_1_1_2_1_);
	tr2 = RTMS_EX_H("stderr",6,1911360114);
	F1025_20115(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F58_4115 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(29,F58_4115_body,(Current));
}

/* {STD_FILES}.default_output */
EIF_REFERENCE F58_4116 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {STD_FILES}.standard_default */
EIF_REFERENCE F58_4117 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc1 = RTOUCR(28,F58_4114,(Current));
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {STD_FILES}.set_output_default */
void F58_4139 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOUCR(28,F58_4114,(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STD_FILES}.put_string */
void F58_4142 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = F58_4117(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R12244[Dtype(tr1)-601])(RTCV(tr1), arg1);
	RTLE;
}

/* {STD_FILES}.put_new_line */
void F58_4161 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F58_4117(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R12242[Dtype(tr1)-601])(RTCV(tr1));
	RTLE;
}

void EIF_Minit41 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

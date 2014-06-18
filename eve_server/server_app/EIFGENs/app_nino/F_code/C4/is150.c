/*
 * Code for class ISE_EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is150.h"
#include "eif_except.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_EXCEPTION_MANAGER}.last_exception */
EIF_REFERENCE F120_8603 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOUCR(7,F120_8622,(Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.raise */
void F120_8604 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	
	RTGC;
	tb1 = F187_9239(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F120_8603(Current);
			F187_9243(RTCV(arg1), tr1);
		}
		F120_8615(Current, arg1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F563_11306(RTCV(loc3));
		} else {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R8902[Dtype(arg1)-186])(RTCV(arg1));
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F120_8610 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOUCR(8,F120_8617,(Current));
	ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (arg1);
	Result = F700_13006(RTCV(tr1), ti4_1);
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.type_of_code */
EIF_REFERENCE F120_8612 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Result);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTLNTY(214);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			tr1 = RTLNTY(205);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 3L:
			tr1 = RTLNTY(224);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			tr1 = RTLNTY(223);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			tr1 = RTLNTY(190);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			tr1 = RTLNTY(222);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			tr1 = RTLNTY(221);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			tr1 = RTLNTY(213);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			tr1 = RTLNTY(212);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			tr1 = RTLNTY(220);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			tr1 = RTLNTY(219);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			tr1 = RTLNTY(194);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			tr1 = RTLNTY(201);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 14L:
			tr1 = RTLNTY(198);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			tr1 = RTLNTY(205);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 16L:
			tr1 = RTLNTY(197);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			tr1 = RTLNTY(217);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			tr1 = RTLNTY(204);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			tr1 = RTLNTY(211);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			tr1 = RTLNTY(196);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			tr1 = RTLNTY(209);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 22L:
			tr1 = RTLNTY(193);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			tr1 = RTLNTY(208);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			tr1 = RTLNTY(187);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			tr1 = RTLNTY(201);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 26L:
			tr1 = RTLNTY(216);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			tr1 = RTLNTY(209);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 28L:
			tr1 = RTLNTY(192);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			tr1 = RTLNTY(221);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			tr1 = RTLNTY(200);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			tr1 = RTLNTY(207);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F120_8613 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,loc2);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTLNS(214, 214, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOUCR(9,F120_8623,(Current))));
			F206_9299(RTCV(loc3), ((EIF_INTEGER_32) 2L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 3L:
			tr1 = RTLNS(224, 224, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			tr1 = RTLNS(223, 223, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			tr1 = RTLNS(190, 190, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			tr1 = RTLNS(222, 222, _OBJSIZ_5_2_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			tr1 = RTLNS(221, 221, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			tr1 = RTLNS(213, 213, _OBJSIZ_7_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			tr1 = RTLNS(212, 212, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			tr1 = RTLNS(220, 220, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			tr1 = RTLNS(219, 219, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			tr1 = RTLNS(194, 194, _OBJSIZ_5_1_0_2_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			tr1 = RTLNS(201, 201, _OBJSIZ_5_1_0_2_0_0_0_0_);
			loc1 = (EIF_REFERENCE) tr1;
			F202_9293(RTCV(loc1), ((EIF_INTEGER_32) 13L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 14L:
			tr1 = RTLNS(198, 198, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOUCR(9,F120_8623,(Current))));
			F206_9299(RTCV(loc3), ((EIF_INTEGER_32) 15L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 16L:
			tr1 = RTLNS(197, 197, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			tr1 = RTLNS(217, 217, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			tr1 = RTLNS(204, 204, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			tr1 = RTLNS(211, 211, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			tr1 = RTLNS(196, 196, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			tr1 = RTLNS(209, 209, _OBJSIZ_5_1_0_3_0_0_0_0_);
			loc2 = (EIF_REFERENCE) tr1;
			F210_9309(RTCV(loc2), ((EIF_INTEGER_32) 21L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 22L:
			tr1 = RTLNS(193, 193, _OBJSIZ_5_1_0_2_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			tr1 = RTLNS(208, 208, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			tr1 = RTLNS(187, 187, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			tr1 = RTLNS(201, 201, _OBJSIZ_5_1_0_2_0_0_0_0_);
			loc1 = (EIF_REFERENCE) tr1;
			F202_9293(RTCV(loc1), ((EIF_INTEGER_32) 25L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 26L:
			tr1 = RTLNS(216, 216, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			tr1 = RTLNS(209, 209, _OBJSIZ_5_1_0_3_0_0_0_0_);
			loc2 = (EIF_REFERENCE) tr1;
			F210_9309(RTCV(loc2), ((EIF_INTEGER_32) 27L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 28L:
			tr1 = RTLNS(192, 192, _OBJSIZ_6_1_0_3_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			tr1 = RTLNS(221, 221, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			tr1 = RTLNS(200, 200, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			tr1 = RTLNS(207, 207, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_data */
EIF_REFERENCE F120_8614 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOUCR(10,F120_8621,(Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.set_last_exception */
void F120_8615 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOUCR(7,F120_8622,(Current));
	F121_10164(RTCV(tr1), arg1);
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.set_exception_data */
void F120_8616 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_REFERENCE arg8, EIF_REFERENCE arg9, EIF_REFERENCE arg10, EIF_INTEGER_32 arg11, EIF_BOOLEAN arg12)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg5);
	RTLR(4,arg6);
	RTLR(5,arg7);
	RTLR(6,arg8);
	RTLR(7,arg9);
	RTLR(8,arg10);
	RTLR(9,loc1);
	RTLR(10,loc2);
	
	RTGC;
	tr1 = RTOUCR(10,F120_8621,(Current));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,11,823,993,993,993,892,892,892,892,892,892,993,832,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 12, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr2+4)->it_r = arg5;
	RTAR(tr2,arg5);
	((EIF_TYPED_VALUE *)tr2+5)->it_r = arg6;
	RTAR(tr2,arg6);
	((EIF_TYPED_VALUE *)tr2+6)->it_r = arg7;
	RTAR(tr2,arg7);
	((EIF_TYPED_VALUE *)tr2+7)->it_r = arg8;
	RTAR(tr2,arg8);
	((EIF_TYPED_VALUE *)tr2+8)->it_r = arg9;
	RTAR(tr2,arg9);
	((EIF_TYPED_VALUE *)tr2+9)->it_r = arg10;
	RTAR(tr2,arg10);
	((EIF_TYPED_VALUE *)tr2+10)->it_i4 = arg11;
	((EIF_TYPED_VALUE *)tr2+11)->it_b = arg12;
	F121_10164(RTCV(tr1), tr2);
	if (arg2) {
		tr1 = F120_8624(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F120_8615(Current, loc1);
		}
	} else {
		RTCT0("last_exception_attached", EX_CHECK);
		tr1 = F120_8603(Current);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F187_9250(RTCV(loc2), arg10);
		F187_9244(RTCV(loc2), arg6);
		F187_9248(RTCV(loc2), arg7);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.ignored_exceptions */
static EIF_REFERENCE F120_8617_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(8)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {699,993,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 699, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F700_13000(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F120_8617 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(8,F120_8617_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unignorable_exceptions */
static EIF_REFERENCE F120_8618_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(11)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {699,993,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 699, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F700_13000(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY(214);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F700_13045(RTCV(Result), loc1, loc1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F120_8618 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(11,F120_8618_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unraisable_exceptions */
static EIF_REFERENCE F120_8619_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(12)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {699,993,993,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 699, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F700_13000(RTCV(tr1), ((EIF_INTEGER_32) 2L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY(213);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F700_13045(RTCV(Result), loc1, loc1);
	tr1 = RTLNTY(200);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F700_13045(RTCV(Result), loc1, loc1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F120_8619 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(12,F120_8619_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.is_code_ignored */
EIF_BOOLEAN F120_8620 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F120_8612(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_BOOLEAN) F120_8610(Current, loc1);
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {ISE_EXCEPTION_MANAGER}.exception_data_cell */
static EIF_REFERENCE F120_8621_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(10)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {120,0xFFF9,11,823,993,993,993,892,892,892,892,892,892,993,832,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 120, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F121_10164(RTCV(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F120_8621 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(10,F120_8621_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.last_exception_cell */
static EIF_REFERENCE F120_8622_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(7)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {120,186,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 120, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F121_10164(RTCV(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F120_8622 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(7,F120_8622_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.no_memory_exception_object_cell */
static EIF_REFERENCE F120_8623_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(9)

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(205, 205, _OBJSIZ_5_1_0_2_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 4096L));
	F187_9250(RTCV(loc1), tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {120,205,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 120, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F121_10164(RTCV(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F120_8623 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(9,F120_8623_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_data */
EIF_REFERENCE F120_8624 (EIF_REFERENCE Current)
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
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	
	RTGC;
	tb1 = '\0';
	tr1 = F120_8614(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ti4_1 = eif_integer_32_item(RTCV(loc2),1);
		tr1 = F120_8613(Current, ti4_1);
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		loc4 = loc3;
		loc4 = RTRV(eif_non_attached_type(213),loc4);
		if (EIF_TEST(loc4)) {
			loc1 = F120_8603(Current);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				F187_9243(RTCV(loc3), loc1);
			}
			tr1 = eif_boxed_item(loc2,7);
			F214_9319(RTCV(loc4), tr1);
			tr1 = eif_boxed_item(loc2,8);
			F214_9320(RTCV(loc4), tr1);
		} else {
			loc5 = loc3;
			loc5 = RTRV(eif_non_attached_type(200),loc5);
			if (EIF_TEST(loc5)) {
				loc1 = F120_8603(Current);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					F187_9243(RTCV(loc3), loc1);
				}
			} else {
				loc6 = loc3;
				loc6 = RTRV(eif_non_attached_type(222),loc6);
				if (EIF_TEST(loc6)) {
					tb1 = eif_boolean_item(RTCV(loc2),11);
					F223_9334(RTCV(loc6), tb1);
				} else {
					loc7 = loc3;
					loc7 = RTRV(eif_non_attached_type(194),loc7);
					if (EIF_TEST(loc7)) {
						ti4_1 = eif_integer_32_item(RTCV(loc2),2);
						F195_9282(RTCV(loc7), ti4_1);
					} else {
						loc8 = loc3;
						loc8 = RTRV(eif_non_attached_type(209),loc8);
						if (EIF_TEST(loc8)) {
							ti4_1 = eif_integer_32_item(RTCV(loc2),3);
							F210_9308(RTCV(loc8), ti4_1);
						} else {
							loc9 = loc3;
							loc9 = RTRV(eif_non_attached_type(193),loc9);
							if (EIF_TEST(loc9)) {
								ti4_1 = eif_integer_32_item(RTCV(loc2),3);
								F194_9278(RTCV(loc9), ti4_1);
							} else {
								loc10 = loc3;
								loc10 = RTRV(eif_non_attached_type(192),loc10);
								if (EIF_TEST(loc10)) {
									ti4_1 = eif_integer_32_item(RTCV(loc2),2);
									F193_9260(RTCV(loc10), ti4_1);
									tr1 = eif_boxed_item(loc2,4);
									F193_9265(RTCV(loc10), tr1);
								}
							}
						}
					}
				}
				if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
					loc1 = F120_8603(Current);
				}
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					loc1 = (EIF_REFERENCE) loc3;
				}
				F187_9243(RTCV(loc3), loc1);
			}
		}
		tr1 = eif_boxed_item(loc2,9);
		F187_9250(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,4);
		F187_9236(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,5);
		F187_9244(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,6);
		F187_9248(RTCV(loc3), tr1);
		RTLE;
		return (EIF_REFERENCE) loc3;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {ISE_EXCEPTION_MANAGER}.once_raise */
void F120_8625 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc3);
	
	RTGC;
	tb1 = F187_9239(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F187_9229(RTCV(arg1));
			tr2 = F120_8603(Current);
			F187_9243(RTCV(tr1), tr2);
		}
		F120_8615(Current, arg1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F563_11306(RTCV(loc3));
		} else {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R8902[Dtype(arg1)-186])(RTCV(arg1));
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.init_exception_manager */
void F120_8626 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	
	RTGC;
	loc1 = RTOUCR(8,F120_8617,(Current));
	loc1 = RTOUCR(11,F120_8618,(Current));
	loc1 = RTOUCR(12,F120_8619,(Current));
	loc2 = RTOUCR(10,F120_8621,(Current));
	loc3 = RTOUCR(7,F120_8622,(Current));
	loc4 = RTOUCR(9,F120_8623,(Current));
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.free_preallocated_trace */
void F120_8627 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(9,F120_8623,(Current))));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F187_9236(RTCV(loc1), NULL);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.developer_raise */
void F120_8628 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, arg1, arg2, arg3);
}

/* {ISE_EXCEPTION_MANAGER}.in_rescue */
EIF_BOOLEAN F120_8629 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue());
	
	return Result;
}

void EIF_Minit150 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

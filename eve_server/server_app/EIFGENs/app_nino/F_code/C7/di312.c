/*
 * Code for class DIRECTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "di312.h"
#include "eif_dir.h"
#include "eif_file.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DIRECTORY}.make */
void F585_13588 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F585_13589(Current, arg1);
}

/* {DIRECTORY}.make_with_name */
void F585_13589 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F585_13624(Current, arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {DIRECTORY}.make_with_path */
void F585_13590 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = F904_18748(RTCV(arg1));
	F585_13588(Current, tr1);
	RTLE;
}

/* {DIRECTORY}.make_open_read */
void F585_13591 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F585_13588(Current, arg1);
	F585_13598(Current);
	RTLE;
}

/* {DIRECTORY}.create_dir */
void F585_13592 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F585_13626(Current))+ _PTROFF_0_1_0_1_0_0_);
	eif_file_mkdir((EIF_FILENAME) tp1);
	RTLE;
}

/* {DIRECTORY}.recursive_create_dir */
void F585_13593 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,tr2);
	
	RTGC;
	loc3 = F904_18730(RTCV(F585_13594(Current)));
	tr1 = RTLNS(584, 584, _OBJSIZ_3_0_0_1_0_2_0_0_);
	F585_13590(RTCV(tr1), loc3);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = F585_13612(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {802,903,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 10L));
		loc2 = (EIF_REFERENCE) tr1;
		loc4 = F904_18725(RTCV(loc3));
		for (;;) {
			tb1 = '\01';
			tb2 = F585_13612(RTCV(loc1));
			if (!tb2) {
				tb1 = (EIF_BOOLEAN)(loc4 == NULL);
			}
			if (tb1) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(loc2)-459])(RTCV(loc2), loc3);
			loc3 = F904_18724(RTCV(loc3));
			loc4 = F904_18725(RTCV(loc3));
			F585_13590(RTCV(loc1), loc3);
		}
		F803_12663(RTCV(loc2));
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
			F904_18707(RTCV(tr1));
			loc3 = (EIF_REFERENCE) tr1;
		}
		for (;;) {
			tb2 = F767_12452(RTCV(loc2));
			if (tb2) break;
			loc3 = F803_12636(RTCV(loc2));
			F803_12665(RTCV(loc2));
			F585_13590(RTCV(loc1), loc3);
			F585_13592(RTCV(loc1));
			tb3 = F585_13612(RTCV(loc1));
			if ((EIF_BOOLEAN) !tb3) {
				tr1 = RTLNS(209, 209, _OBJSIZ_5_1_0_3_0_0_0_0_);
				loc5 = (EIF_REFERENCE) tr1;
				tr1 = RTMS32_EX_H("C\000\000\000a\000\000\000n\000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000c\000\000\000r\000\000\000e\000\000\000a\000\000\000t\000\000\000e\000\000\000:\000\000\000 \000\000\000",15,2053611808);
				tr2 = F904_18748(RTCV(loc3));
				tr1 = F892_17288(RTCV(tr1), tr2);
				F187_9236(RTCV(loc5), tr1);
				F187_9221(RTCV(loc5));
			}
		}
	}
	RTLE;
}

/* {DIRECTORY}.path */
EIF_REFERENCE F585_13594 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(RTCV(F585_13626(Current))+ _PTROFF_0_1_0_1_0_0_);
	F904_18713(RTCV(tr1), tp1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {DIRECTORY}.readentry */
void F585_13595 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	tp1 = (EIF_POINTER) eif_dir_next(tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) = (EIF_POINTER) tp1;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) != tp1)) {
		tr1 = RTOUCR(62,F585_13634,(Current));
		tr1 = F568_11681(RTCV(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {DIRECTORY}.has_entry */
EIF_BOOLEAN F585_13597 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,arg1);
	RTLR(5,loc4);
	
	RTGC;
	tr1 = RTLNS(584, 584, _OBJSIZ_3_0_0_1_0_2_0_0_);
	F585_13591(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	loc1 = (EIF_REFERENCE) tr1;
	F585_13600(RTCV(loc1));
	F585_13595(RTCV(loc1));
	loc2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_3_0_0_1_0_1_);
	for (;;) {
		tb1 = '\01';
		if (!Result) {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			tb1 = (EIF_BOOLEAN)(loc2 == tp1);
		}
		if (tb1) break;
		loc3 = arg1;
		loc3 = RTRV(eif_non_attached_type(888),loc3);
		if (EIF_TEST(loc3)) {
			tr1 = RTOUCR(62,F585_13634,(Current));
			tr1 = F568_11681(RTCV(tr1), loc2);
			Result = F885_17038(RTCV(arg1), tr1);
		} else {
			tr1 = RTOUCR(62,F585_13634,(Current));
			tr1 = F568_11680(RTCV(tr1), loc2);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				Result = F885_17038(RTCV(arg1), loc4);
			}
		}
		F585_13595(RTCV(loc1));
		loc2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_3_0_0_1_0_1_);
	}
	F585_13599(RTCV(loc1));
	RTLE;
	return Result;
}

/* {DIRECTORY}.open_read */
void F585_13598 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F585_13626(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (EIF_POINTER) eif_dir_open((EIF_FILENAME) tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTLE;
}

/* {DIRECTORY}.close */
void F585_13599 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	eif_dir_close(tp1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {DIRECTORY}.start */
void F585_13600 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCV(F585_13626(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (EIF_POINTER) eif_dir_rewind((EIF_POINTER) tp1, (EIF_FILENAME) tp2);
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {DIRECTORY}.entries */
EIF_REFERENCE F585_13604 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(584, 584, _OBJSIZ_3_0_0_1_0_2_0_0_);
	F585_13591(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	loc1 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {802,903,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 16L));
	Result = (EIF_REFERENCE) tr1;
	F585_13600(RTCV(loc1));
	F585_13595(RTCV(loc1));
	loc2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_3_0_0_1_0_1_);
	for (;;) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 == tp1)) break;
		tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
		F904_18713(RTCV(tr1), loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(Result)-459])(RTCV(Result), tr1);
		F585_13595(RTCV(loc1));
		loc2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_3_0_0_1_0_1_);
	}
	F585_13599(RTCV(loc1));
	RTLE;
	return Result;
}

/* {DIRECTORY}.lastentry */
static EIF_REFERENCE F585_13609_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F585_13609 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(892)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F585_13609_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {DIRECTORY}.is_closed */
EIF_BOOLEAN F585_13610 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) == ((EIF_INTEGER_32) 1L));
}

/* {DIRECTORY}.exists */
EIF_BOOLEAN F585_13612 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F585_13626(Current))+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_exists((EIF_FILENAME) tp1));
	RTLE;
	return Result;
}

/* {DIRECTORY}.is_writable */
EIF_BOOLEAN F585_13615 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F585_13626(Current))+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_writable((EIF_FILENAME) tp1));
	RTLE;
	return Result;
}

/* {DIRECTORY}.delete */
void F585_13616 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F585_13626(Current))+ _PTROFF_0_1_0_1_0_0_);
	eif_file_unlink((EIF_FILENAME) tp1);
	RTLE;
}

/* {DIRECTORY}.delete_content */
void F585_13617 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F585_13619(Current, NULL, NULL, ((EIF_INTEGER_32) 0L));
}

/* {DIRECTORY}.delete_content_with_action */
void F585_13619 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc10);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc6);
	RTLR(5,loc1);
	RTLR(6,loc8);
	RTLR(7,loc2);
	RTLR(8,loc5);
	RTLR(9,arg1);
	RTLR(10,arg2);
	RTLR(11,loc3);
	
	RTGC;
	loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {802,886,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = eif_min_int32 (arg3,((EIF_INTEGER_32) 1024L));
	F803_12632(RTCV(tr1), ti4_1);
	loc10 = (EIF_REFERENCE) tr1;
	loc4 = RTOUCR(62,F585_13634,(Current));
	F568_11708(RTCV(loc4), (EIF_BOOLEAN) 0);
	tr1 = RTLNS(584, 584, _OBJSIZ_3_0_0_1_0_2_0_0_);
	F585_13591(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	loc6 = (EIF_REFERENCE) tr1;
	F585_13600(RTCV(loc6));
	F585_13595(RTCV(loc6));
	loc7 = *(EIF_POINTER *)(RTCV(loc6)+ _PTROFF_3_0_0_1_0_1_);
	loc1 = F585_13594(Current);
	for (;;) {
		tb1 = '\01';
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if (!(EIF_BOOLEAN)(loc7 == tp1)) {
			tb1 = loc11;
		}
		if (tb1) break;
		loc8 = F568_11681(RTCV(loc4), loc7);
		tb2 = '\0';
		tr1 = RTOUCR(63,F585_13631,(Current));
		tb3 = F889_17187(RTCV(loc8), tr1);
		if ((EIF_BOOLEAN) !tb3) {
			tr1 = RTOUCR(64,F585_13632,(Current));
			tb3 = F889_17187(RTCV(loc8), tr1);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = F585_13594(Current);
			loc2 = F904_18736(RTCV(tr1), loc8);
			tr1 = F904_18748(RTCV(loc2));
			F568_11707(RTCV(loc4), tr1);
			tb2 = *(EIF_BOOLEAN *)(RTCV(loc4)+ _CHROFF_3_0_);
			if (tb2) {
				tb2 = '\0';
				tb3 = F568_11688(RTCV(loc4));
				if ((EIF_BOOLEAN) !tb3) {
					tb3 = F568_11687(RTCV(loc4));
					tb2 = tb3;
				}
				if (tb2) {
					if ((EIF_BOOLEAN)(loc5 != NULL)) {
						F585_13590(RTCV(loc5), loc2);
					} else {
						tr1 = RTLNS(584, 584, _OBJSIZ_3_0_0_1_0_2_0_0_);
						F585_13590(RTCV(tr1), loc2);
						loc5 = (EIF_REFERENCE) tr1;
					}
					F585_13620(RTCV(loc5), arg1, arg2, arg3);
				} else {
					tb2 = F568_11694(RTCV(loc4));
					if (tb2) {
						if ((EIF_BOOLEAN)(loc3 != NULL)) {
							F602_14179(RTCV(loc3), loc2);
						} else {
							tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
							F602_14050(RTCV(tr1), loc2);
							loc3 = (EIF_REFERENCE) tr1;
						}
						F602_14177(RTCV(loc3));
					}
				}
				tr1 = F904_18748(RTCV(loc2));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(loc10)-459])(RTCV(loc10), tr1);
				loc9++;
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc9 > arg3))) {
					if ((EIF_BOOLEAN)(arg1 != NULL)) {
						(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_0_))(
							*(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_), loc10);
						;
					}
					if ((EIF_BOOLEAN)(arg2 != NULL)) {
						tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(arg2)+ _PTROFF_4_3_0_3_0_0_))(
							*(EIF_POINTER *)(RTCV(arg2)+ _PTROFF_4_3_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_1_));
						;
						loc11 = tb2;
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R9234[Dtype(loc10)-696])(RTCV(loc10));
					loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
			}
		}
		F585_13595(RTCV(loc6));
		loc7 = *(EIF_POINTER *)(RTCV(loc6)+ _PTROFF_3_0_0_1_0_1_);
	}
	F585_13599(RTCV(loc6));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc9 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)(arg1 != NULL))) {
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_), loc10);
		;
	}
	RTLE;
}

/* {DIRECTORY}.recursive_delete_with_action */
void F585_13620 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	
	RTGC;
	F585_13619(Current, arg1, arg2, arg3);
	tb1 = '\01';
	if (!((EIF_BOOLEAN)(arg2 == NULL))) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(arg2)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(arg2)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_1_));
		;
		tb2 = tb2;
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		F585_13616(Current);
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			{
				static EIF_TYPE_INDEX typarr0[] = {802,884,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 1L));
			loc1 = (EIF_REFERENCE) tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(loc1)-459])(RTCV(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_), loc1);
			;
		}
	}
	RTLE;
}

/* {DIRECTORY}.dispose */
void F585_13621 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F585_13610(Current)) {
		F585_13599(Current);
	}
	RTLE;
}

/* {DIRECTORY}.set_name */
void F585_13624 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTOUCR(62,F585_13634,(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr1 = F568_11679(RTCV(tr1), arg1, tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {DIRECTORY}.internal_name */
EIF_REFERENCE F585_13625 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DIRECTORY}.internal_name_pointer */
EIF_REFERENCE F585_13626 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTCT0("internal_name_pointer_set", EX_CHECK);
			RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {DIRECTORY}.internal_detachable_name_pointer */
static EIF_REFERENCE F585_13627_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F585_13627 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(583)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F585_13627_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {DIRECTORY}.current_directory_string */

EIF_REFERENCE F585_13631 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (63,RTMS_EX_H(".",1,46));
}

/* {DIRECTORY}.parent_directory_string */

EIF_REFERENCE F585_13632 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (64,RTMS_EX_H("..",2,11822));
}

/* {DIRECTORY}.file_info */
static EIF_REFERENCE F585_13634_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(62)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(567, 567, _OBJSIZ_3_2_0_0_0_0_0_0_);
	F568_11662(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F585_13634 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(62,F585_13634_body,(Current));
}

/* {DIRECTORY}.file_mkdir */
void F585_13635 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_mkdir((EIF_FILENAME) arg1);
	
}

/* {DIRECTORY}.dir_open */
EIF_POINTER F585_13636 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_dir_open((EIF_FILENAME) arg1);
	
	return Result;
}

/* {DIRECTORY}.dir_rewind */
EIF_POINTER F585_13637 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_dir_rewind((EIF_POINTER) arg1, (EIF_FILENAME) arg2);
	
	return Result;
}

/* {DIRECTORY}.dir_close */
void F585_13638 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_dir_close(arg1);
	
}

/* {DIRECTORY}.eif_dir_next */
EIF_POINTER F585_13639 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_dir_next(arg1);
	
	return Result;
}

/* {DIRECTORY}.eif_dir_delete */
void F585_13640 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_unlink((EIF_FILENAME) arg1);
	
}

/* {DIRECTORY}.eif_dir_exists */
EIF_BOOLEAN F585_13641 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_exists((EIF_FILENAME) arg1));
	
	return Result;
}

/* {DIRECTORY}.eif_dir_is_writable */
EIF_BOOLEAN F585_13644 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_writable((EIF_FILENAME) arg1));
	
	return Result;
}

void EIF_Minit312 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi323.h"
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

/* {FILE}.make_with_name */
void F602_14049 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F602_14202(Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O12591[dtype-601]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O12455[dtype-601]) = (EIF_POINTER) tp2;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.make_with_path */
void F602_14050 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F602_14203(Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O12591[dtype-601]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O12455[dtype-601]) = (EIF_POINTER) tp2;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.make_open_read */
void F602_14051 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F602_14049(Current, arg1);
	F602_14115(Current);
	RTLE;
}

/* {FILE}.make_create_read_write */
void F602_14055 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F602_14049(Current, arg1);
	F602_14119(Current);
	RTLE;
}

/* {FILE}.path */
EIF_REFERENCE F602_14057 (EIF_REFERENCE Current)
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
	tp1 = *(EIF_POINTER *)(RTCV(F602_14200(Current))+ _PTROFF_0_1_0_1_0_0_);
	F904_18713(RTCV(tr1), tp1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {FILE}.item */
EIF_CHARACTER_8 F602_14059 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R12270[dtype-596])(Current);
	Result = *(EIF_CHARACTER_8 *)(Current + O12216[dtype-594]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R9386[dtype-601])(Current);
	RTLE;
	return Result;
}

/* {FILE}.position */
EIF_INTEGER_32 F602_14060 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F602_14104(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_file_tell((FILE*) tp1);
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {FILE}.descriptor */
EIF_INTEGER_32 F602_14061 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12455[dtype-601]);
	Result = (EIF_INTEGER_32) eif_file_fd((FILE*) tp1);
	*(EIF_BOOLEAN *)(Current + O12601[dtype-601]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
	return Result;
}

/* {FILE}.descriptor_available */
EIF_BOOLEAN F602_14062 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O12601[Dtype(Current) - 601]);
}


/* {FILE}.date */
EIF_INTEGER_32 F602_14072 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F602_14200(Current))+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) eif_file_date((EIF_FILENAME) tp1);
	RTLE;
	return Result;
}

/* {FILE}.count */
EIF_INTEGER_32 F602_14075 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R12231[dtype-596])(Current)) {
		if ((EIF_BOOLEAN) !F602_14106(Current)) {
			F602_14211(Current);
			Result = F568_11666(RTCV(RTOUCR(76,F602_14209,(Current))));
		} else {
			tp1 = *(EIF_POINTER *)(Current + O12455[dtype-601]);
			RTLE;
			return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_file_size((FILE*) tp1);
		}
	}
	RTLE;
	return Result;
}

/* {FILE}.after */
EIF_BOOLEAN F602_14076 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F602_14104(Current)) {
		tb1 = '\01';
		if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R12465[dtype-601])(Current)) {
			tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[dtype-601])(Current) == ((EIF_INTEGER_32) 0L));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {FILE}.before */
EIF_BOOLEAN F602_14077 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F602_14104(Current);
}

/* {FILE}.off */
EIF_BOOLEAN F602_14078 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	tb1 = '\01';
	if (!((EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[dtype-601])(Current) == ((EIF_INTEGER_32) 0L)))) {
		tb1 = F602_14104(Current);
	}
	if (!tb1) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R12465[dtype-601])(Current);
	}
	RTLE;
	return Result;
}

/* {FILE}.end_of_file */
EIF_BOOLEAN F602_14079 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(eif_file_feof((FILE*) tp1));
}

/* {FILE}.exists */
EIF_BOOLEAN F602_14080 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F602_14104(Current)) {
		tp1 = *(EIF_POINTER *)(RTCV(F602_14200(Current))+ _PTROFF_0_1_0_1_0_0_);
		Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) tp1));
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {FILE}.is_readable */
EIF_BOOLEAN F602_14083 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F602_14211(Current);
	Result = F568_11693(RTCV(RTOUCR(76,F602_14209,(Current))));
	RTLE;
	return Result;
}

/* {FILE}.is_writable */
EIF_BOOLEAN F602_14084 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F602_14211(Current);
	Result = F568_11694(RTCV(RTOUCR(76,F602_14209,(Current))));
	RTLE;
	return Result;
}

/* {FILE}.is_directory */
EIF_BOOLEAN F602_14089 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F602_14211(Current);
	Result = F568_11687(RTCV(RTOUCR(76,F602_14209,(Current))));
	RTLE;
	return Result;
}

/* {FILE}.is_closed */
EIF_BOOLEAN F602_14104 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O12591[Dtype(Current)-601]) == ((EIF_INTEGER_32) 0L));
}

/* {FILE}.is_open_write */
EIF_BOOLEAN F602_14106 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O12591[dtype-601]) == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O12591[dtype-601]) == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O12591[dtype-601]) == ((EIF_INTEGER_32) 5L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O12591[dtype-601]) == ((EIF_INTEGER_32) 3L)));
}

/* {FILE}.extendible */
EIF_BOOLEAN F602_14109 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O12591[Dtype(Current)-601]) >= ((EIF_INTEGER_32) 2L));
}

/* {FILE}.open_read */
void F602_14115 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F602_14200(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R12548[dtype-601])(Current, tp1, ((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current + O12455[dtype-601]) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current + O12591[dtype-601]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {FILE}.open_write */
void F602_14116 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F602_14200(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R12548[dtype-601])(Current, tp1, ((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current + O12455[dtype-601]) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current + O12591[dtype-601]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTLE;
}

/* {FILE}.create_read_write */
void F602_14119 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F602_14200(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R12548[dtype-601])(Current, tp1, ((EIF_INTEGER_32) 4L));
	*(EIF_POINTER *)(Current + O12455[dtype-601]) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current + O12591[dtype-601]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	RTLE;
}

/* {FILE}.close */
void F602_14132 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12455[dtype-601]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R12551[dtype-601])(Current, tp1);
	*(EIF_INTEGER_32 *)(Current + O12591[dtype-601]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O12455[dtype-601]) = (EIF_POINTER) tp2;
	*(EIF_BOOLEAN *)(Current + O12601[dtype-601]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {FILE}.start */
void F602_14133 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
	eif_file_go((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) 0L));
}

/* {FILE}.forth */
void F602_14135 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12455[dtype-601]);
	eif_file_move((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(Current + O12455[dtype-601]);
	tc1 = F602_14220(Current, tp1);
	eif_do_nothing_value.it_c1 = tc1;
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R12465[dtype-601])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9386[dtype-601])(Current);
	}
	RTLE;
}

/* {FILE}.back */
void F602_14136 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
	eif_file_move((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) -1L));
}

/* {FILE}.go */
void F602_14138 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
	eif_file_go((FILE*) tp1, (EIF_INTEGER) arg1);
}

/* {FILE}.extend */
void F602_14141 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R12246[Dtype(Current)-601])(Current, arg1);
}

/* {FILE}.put_string */
void F602_14153 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		eif_file_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {FILE}.put_character */
void F602_14156 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
	eif_file_pc((FILE*) tp1, (EIF_CHARACTER) arg1);
}

/* {FILE}.put_new_line */
void F602_14158 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
	eif_file_tnwl((FILE*) tp1);
}

/* {FILE}.change_date */
EIF_INTEGER_32 F602_14171 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F602_14211(Current);
	Result = F568_11671(RTCV(RTOUCR(76,F602_14209,(Current))));
	RTLE;
	return Result;
}

/* {FILE}.delete */
void F602_14177 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F602_14200(Current))+ _PTROFF_0_1_0_1_0_0_);
	eif_file_unlink((EIF_FILENAME) tp1);
	RTLE;
}

/* {FILE}.reset_path */
void F602_14179 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F602_14203(Current, arg1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O12591[dtype-601]) != ((EIF_INTEGER_32) 0L))) {
		F602_14132(Current);
	}
	*(EIF_INTEGER_32 *)(Current + O12218[dtype-594]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) 0.0);
	*(EIF_REAL_32 *)(Current + O12228[dtype-594]) = (EIF_REAL_32) tr4_1;
	*(EIF_REAL_64 *)(Current + O12229[dtype-594]) = (EIF_REAL_64) (EIF_REAL_64) 0.0;
	*(EIF_CHARACTER_8 *)(Current + O12216[dtype-594]) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	tr1 = *(EIF_REFERENCE *)(Current);
	F893_17405(RTCV(tr1));
	RTLE;
}

/* {FILE}.read_character */
void F602_14184 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12455[dtype-601]);
	tc1 = F602_14220(Current, tp1);
	*(EIF_CHARACTER_8 *)(Current + O12216[dtype-594]) = (EIF_CHARACTER_8) tc1;
	RTLE;
}

/* {FILE}.read_line */
void F602_14188 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,loc3);
	
	RTGC;
	loc5 = *(EIF_REFERENCE *)(Current);
	loc3 = *(EIF_REFERENCE *)(RTCV(loc5));
	loc1 = F889_17180(RTCV(loc5));
	for (;;) {
		if (loc4) break;
		tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
		loc2 += (EIF_INTEGER_32) eif_file_gs((FILE*) tp1, (char*) loc3, (EIF_INTEGER) loc1, (EIF_INTEGER) loc2);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			F893_17425(RTCV(loc5), loc1);
			if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 2048L))) {
				F893_17409(RTCV(loc5), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1024L)));
			} else {
				F354_9612(RTCV(loc5));
			}
			loc1 = F889_17180(RTCV(loc5));
			loc2--;
			loc3 = *(EIF_REFERENCE *)(RTCV(loc5));
		} else {
			F893_17425(RTCV(loc5), loc2);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTLE;
}

/* {FILE}.read_line_thread_aware */
void F602_14190 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc7);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current);
	loc7 = RTOUCR(77,F602_14210,(Current));
	F893_17405(RTCV(loc4));
	loc1 = F563_11308(RTCV(loc7));
	for (;;) {
		if (loc3) break;
		tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
		tp2 = F563_11306(RTCV(loc7));
		loc2 = F602_14224(Current, tp1, tp2, loc1, ((EIF_INTEGER_32) 0L));
		loc5 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_1_0_2_);
		loc6 = eif_min_int32 (loc2,loc1);
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc6);
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc2 <= loc1);
		F893_17409(RTCV(loc4), loc6);
		F893_17425(RTCV(loc4), loc6);
		ti4_1 = eif_min_int32 (loc2,loc1);
		F563_11301(RTCV(loc7), loc4, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)), ti4_1);
	}
	RTLE;
}

/* {FILE}.read_stream */
void F602_14191 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc2);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(Current);
	F893_17409(RTCV(loc3), arg1);
	loc2 = *(EIF_REFERENCE *)(RTCV(loc3));
	tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
	loc1 = (EIF_INTEGER_32) eif_file_gss((FILE*) tp1, (char*) loc2, (EIF_INTEGER) arg1);
	F893_17425(RTCV(loc3), loc1);
	RTLE;
}

/* {FILE}.read_stream_thread_aware */
void F602_14193 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc2);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(Current);
	loc2 = RTOUCR(77,F602_14210,(Current));
	F563_11314(RTCV(loc2), arg1);
	tp1 = *(EIF_POINTER *)(Current + O12455[Dtype(Current)-601]);
	tp2 = F563_11306(RTCV(loc2));
	loc1 = F602_14225(Current, tp1, tp2, arg1);
	F563_11314(RTCV(loc2), loc1);
	F893_17409(RTCV(loc3), loc1);
	F893_17425(RTCV(loc3), loc1);
	F563_11303(RTCV(loc2), loc3);
	RTLE;
}

/* {FILE}.copy_to */
void F602_14198 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R9217[dtype-601])(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51200L);
	loc5 = *(EIF_REFERENCE *)(Current);
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F889_17162(RTCV(tr1), loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	loc4 = F602_14060(Current);
	if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L))) {
		F602_14138(Current, ((EIF_INTEGER_32) 0L));
	}
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R12283[dtype-595])(Current, loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R12244[Dtype(arg1)-601])(RTCV(arg1), *(EIF_REFERENCE *)(Current));
		loc2 += loc1;
	}
	if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L))) {
		F602_14138(Current, loc4);
	}
	RTAR(Current, loc5);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc5;
	RTLE;
}

/* {FILE}.internal_name */
EIF_REFERENCE F602_14199 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {FILE}.internal_name_pointer */
EIF_REFERENCE F602_14200 (EIF_REFERENCE Current)
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

/* {FILE}.internal_detachable_name_pointer */
static EIF_REFERENCE F602_14201_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F602_14201 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(583)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F602_14201_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {FILE}.set_name */
void F602_14202 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = RTOUCR(76,F602_14209,(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr1 = F568_11679(RTCV(tr1), arg1, tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.set_path */
void F602_14203 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F904_18748(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = F904_18750(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.buffered_file_info */
static EIF_REFERENCE F602_14209_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(76)

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

EIF_REFERENCE F602_14209 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(76,F602_14209_body,(Current));
}

/* {FILE}.read_data_buffer */
static EIF_REFERENCE F602_14210_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(77)

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(562, 562, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F563_11288(RTCV(tr1), ((EIF_INTEGER_32) 256L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F602_14210 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(77,F602_14210_body,(Current));
}

/* {FILE}.set_buffer */
void F602_14211 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	
	RTGC;
	tr1 = RTOUCR(76,F602_14209,(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = F602_14200(Current);
	F568_11709(RTCV(tr1), tr2, tr3);
	RTLE;
}

/* {FILE}.file_unlink */
void F602_14213 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_unlink((EIF_FILENAME) arg1);
	
}

/* {FILE}.file_open */
EIF_POINTER F602_14214 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_file_open((EIF_FILENAME) arg1, (int) arg2);
	
	return Result;
}

/* {FILE}.file_close */
void F602_14217 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_close((FILE*) arg1);
	
}

/* {FILE}.file_fd */
EIF_INTEGER_32 F602_14219 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_fd((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_gc */
EIF_CHARACTER_8 F602_14220 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_CHARACTER_8) eif_file_gc((FILE*) arg1);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {FILE}.file_gs */
EIF_INTEGER_32 F602_14221 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_gs((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4);
	
	return Result;
}

/* {FILE}.file_gss */
EIF_INTEGER_32 F602_14222 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_gss((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
	return Result;
}

/* {FILE}.file_gs_ta */
EIF_INTEGER_32 F602_14224 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_file_gs((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {FILE}.file_gss_ta */
EIF_INTEGER_32 F602_14225 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_file_gss((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {FILE}.file_size */
EIF_INTEGER_32 F602_14228 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_size((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_tell */
EIF_INTEGER_32 F602_14230 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_tell((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_tnwl */
void F602_14238 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_tnwl((FILE*) arg1);
	
}

/* {FILE}.file_ps */
void F602_14240 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	eif_file_ps((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
}

/* {FILE}.file_pc */
void F602_14241 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	
	eif_file_pc((FILE*) arg1, (EIF_CHARACTER) arg2);
	
}

/* {FILE}.file_go */
void F602_14242 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	eif_file_go((FILE*) arg1, (EIF_INTEGER) arg2);
	
}

/* {FILE}.file_move */
void F602_14244 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	eif_file_move((FILE*) arg1, (EIF_INTEGER) arg2);
	
}

/* {FILE}.file_feof */
EIF_BOOLEAN F602_14245 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_feof((FILE*) arg1));
	
	return Result;
}

/* {FILE}.file_exists */
EIF_BOOLEAN F602_14246 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) arg1));
	
	return Result;
}

/* {FILE}.eif_file_date */
EIF_INTEGER_32 F602_14254 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_date((EIF_FILENAME) arg1);
	
	return Result;
}

/* {FILE}.set_read_mode */
void F602_14267 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O12591[Dtype(Current)-601]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {FILE}.set_write_mode */
void F602_14268 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O12591[Dtype(Current)-601]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

void EIF_Minit323 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

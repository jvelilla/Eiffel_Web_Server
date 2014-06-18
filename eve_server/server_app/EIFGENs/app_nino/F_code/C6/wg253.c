/*
 * Code for class WGI_CHUNKED_INPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg253.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_CHUNKED_INPUT_STREAM}.make */
void F565_11329 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTLNSMART(eif_non_attached_type(892));
	F885_16993(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_character */
void F565_11330 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_))++;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_))) {
		F565_11347(Current);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) == ((EIF_INTEGER_32) 0L))) {
			F565_11351(Current);
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_6_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tc1 = F893_17342(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_));
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_6_0_) = (EIF_CHARACTER_8) tc1;
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = F893_17342(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_));
		*(EIF_CHARACTER_8 *)(Current+ _CHROFF_6_0_) = (EIF_CHARACTER_8) tc1;
	}
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_string */
void F565_11331 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	F893_17405(RTCV(tr1));
	if (F565_11342(Current)) {
	} else {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) == ((EIF_INTEGER_32) 0L))) {
			F565_11347(Current);
		}
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_))++;
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_)) + ((EIF_INTEGER_32) 1L)) == arg1) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) == ((EIF_INTEGER_32) 0L)))) break;
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg1) - ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_);
				ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_);
				tr2 = F893_17423(RTCV(tr2), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_1) + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_2) + ((EIF_INTEGER_32) 1L)) + arg1) - ((EIF_INTEGER_32) 1L)));
				F893_17377(RTCV(tr1), tr2);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg1) - ((EIF_INTEGER_32) 1L));
			} else {
				if ((EIF_BOOLEAN) (loc1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_))) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
					tr2 = *(EIF_REFERENCE *)(Current);
					ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_);
					ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_);
					ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_);
					tr2 = F893_17423(RTCV(tr2), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_1) + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) + ((EIF_INTEGER_32) 1L)));
					F893_17377(RTCV(tr1), tr2);
					loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_);
				}
				F565_11347(Current);
				loc1++;
			}
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) == ((EIF_INTEGER_32) 0L))) {
			F565_11351(Current);
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) loc1;
	}
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.last_string */
EIF_REFERENCE F565_11332 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {WGI_CHUNKED_INPUT_STREAM}.last_character */
EIF_CHARACTER_8 F565_11333 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current+ _CHROFF_6_0_);
}


/* {WGI_CHUNKED_INPUT_STREAM}.last_character_available */
EIF_BOOLEAN F565_11334 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F565_11342(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {WGI_CHUNKED_INPUT_STREAM}.last_chunk_data */
EIF_REFERENCE F565_11336 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WGI_CHUNKED_INPUT_STREAM}.last_trailer */
EIF_REFERENCE F565_11337 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WGI_CHUNKED_INPUT_STREAM}.last_chunk_extension */
EIF_REFERENCE F565_11338 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WGI_CHUNKED_INPUT_STREAM}.read_chunk */
void F565_11339 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F565_11347(Current);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) == ((EIF_INTEGER_32) 0L))) {
		F565_11351(Current);
	}
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.end_of_input */
EIF_BOOLEAN F565_11341 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10551[Dtype(tr1)-564])(RTCV(tr1));
	if (!tb1) {
		Result = F565_11342(Current);
	}
	RTLE;
	return Result;
}

/* {WGI_CHUNKED_INPUT_STREAM}.is_trailer_reached */
EIF_BOOLEAN F565_11342 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL);
}

/* {WGI_CHUNKED_INPUT_STREAM}.tmp_hex_chunk_size */
EIF_REFERENCE F565_11346 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WGI_CHUNKED_INPUT_STREAM}.read_chunk_block */
void F565_11347 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10551[Dtype(tr1)-564])(RTCV(tr1));
	if (tb1) {
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_) + ((EIF_INTEGER_32) 1L));
		tr1 = *(EIF_REFERENCE *)(Current);
		F893_17405(RTCV(tr1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		F565_11349(Current);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) > ((EIF_INTEGER_32) 0L))) {
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_4_)) += *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_);
			F565_11348(Current);
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R10541[Dtype(loc1)-564])(RTCV(loc1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R10541[Dtype(loc1)-564])(RTCV(loc1));
		}
	}
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_chunk_data */
void F565_11348 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R10542[Dtype(loc1)-564])(RTCV(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R10546[Dtype(loc1)-564])(RTCV(loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_chunk_size */
void F565_11349 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R10541[Dtype(loc4)-564])(RTCV(loc4));
	for (;;) {
		if (loc1) break;
		loc2 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R10547[Dtype(loc4)-564])(RTCV(loc4));
		switch (loc2) {
			case (EIF_CHARACTER_8) '\015':
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R10541[Dtype(loc4)-564])(RTCV(loc4));
				break;
			case (EIF_CHARACTER_8) ';':
				F565_11350(Current);
				break;
			default:
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				F893_17391(RTCV(tr1), loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R10541[Dtype(loc4)-564])(RTCV(loc4));
				break;
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = RTMS_EX_H("0",1,48);
	tb1 = F889_17187(RTCV(tr1), tr2);
	if (tb1) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		tr1 = RTLNS(178, 178, _OBJSIZ_2_4_0_3_0_0_4_0_);
		F179_8456(RTCV(tr1));
		loc3 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		ti4_1 = ((EIF_INTEGER_32) 3L);
		F179_8462(RTCV(loc3), tr1, ti4_1);
		tb1 = F179_8460(RTCV(loc3));
		if (tb1) {
			ti4_1 = F179_8470(RTCV(loc3));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ti4_1;
		} else {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F893_17405(RTCV(tr1));
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_extension_chunk */
void F565_11350 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R10541[Dtype(loc1)-564])(RTCV(loc1));
	tc1 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R10547[Dtype(loc1)-564])(RTCV(loc1));
	F893_17391(RTCV(loc2), tc1);
	for (;;) {
		tc1 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R10547[Dtype(loc1)-564])(RTCV(loc1));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R10541[Dtype(loc1)-564])(RTCV(loc1));
		tc2 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R10547[Dtype(loc1)-564])(RTCV(loc1));
		F893_17391(RTCV(loc2), tc2);
	}
	F893_17400(RTCV(loc2), ((EIF_INTEGER_32) 1L));
	tb1 = F324_9603(RTCV(loc2));
	if (tb1) {
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	} else {
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc2;
	}
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.read_trailer_and_crlf */
void F565_11351 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F885_16993(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10551[Dtype(loc1)-564])(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R10541[Dtype(loc1)-564])(RTCV(loc1));
			tc1 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R10547[Dtype(loc1)-564])(RTCV(loc1));
			F893_17391(RTCV(loc3), tc1);
			for (;;) {
				tc1 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R10547[Dtype(loc1)-564])(RTCV(loc1));
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) break;
				loc2++;
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R10541[Dtype(loc1)-564])(RTCV(loc1));
				tc2 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R10547[Dtype(loc1)-564])(RTCV(loc1));
				F893_17391(RTCV(loc3), tc2);
			}
			F893_17400(RTCV(loc3), ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R10541[Dtype(loc1)-564])(RTCV(loc1));
		}
	}
	RTAR(Current, loc3);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc3;
	RTLE;
}

/* {WGI_CHUNKED_INPUT_STREAM}.input */
EIF_REFERENCE F565_11352 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


void EIF_Minit253 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

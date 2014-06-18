/*
 * Code for class WSF_FILE_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws305.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_FILE_RESPONSE}.make_with_content_type_and_path */
void F612_13245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg1);
	
	RTGC;
	F612_13266(Current, ((EIF_INTEGER_32) 200L));
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	F612_13250(Current);
	RTLE;
}

/* {WSF_FILE_RESPONSE}.make_with_content_type */
void F612_13248 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(903, 903, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F904_18709(RTCV(tr1), arg2);
	F612_13245(Current, arg1, tr1);
	RTLE;
}

/* {WSF_FILE_RESPONSE}.initialize */
void F612_13250 (EIF_REFERENCE Current)
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
	F612_13271(Current);
	tr1 = RTLNSMART(eif_non_attached_type(648));
	F649_12064(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	F649_12095(RTCV(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_)) {
		tr1 = F612_13273(Current);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			F649_12142(RTCV(loc1), loc2);
		}
		F612_13272(Current);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_2_) == ((EIF_INTEGER_32) 0L))) {
			F612_13266(Current, ((EIF_INTEGER_32) 404L));
		} else {
			F612_13266(Current, ((EIF_INTEGER_32) 200L));
		}
	} else {
		F612_13266(Current, ((EIF_INTEGER_32) 404L));
	}
	F612_13251(Current);
	RTLE;
}

/* {WSF_FILE_RESPONSE}.update_content_length */
void F612_13251 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_)) {
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_2_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2) + O15187[Dtype(loc2)-888]);
			loc1 += ti4_1;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3) + O15187[Dtype(loc3)-888]);
			loc1 += ti4_1;
		}
	} else {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_1_) = (EIF_INTEGER_32) loc1;
	tr1 = *(EIF_REFERENCE *)(Current);
	F649_12103(RTCV(tr1), loc1);
	RTLE;
}

/* {WSF_FILE_RESPONSE}.header */
EIF_REFERENCE F612_13256 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_FILE_RESPONSE}.content_type */
EIF_REFERENCE F612_13258 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_FILE_RESPONSE}.file_path */
EIF_REFERENCE F612_13259 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_FILE_RESPONSE}.head */
EIF_REFERENCE F612_13263 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_FILE_RESPONSE}.bottom */
EIF_REFERENCE F612_13264 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_FILE_RESPONSE}.set_status_code */
void F612_13266 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_) = (EIF_INTEGER_32) arg1;
}

/* {WSF_FILE_RESPONSE}.set_answer_head_request_method */
void F612_13267 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_) = (EIF_BOOLEAN) arg1;
}

/* {WSF_FILE_RESPONSE}.send_to */
void F612_13270 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	
	RTGC;
	F116_8564(RTCV(arg1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_));
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_) == ((EIF_INTEGER_32) 404L))) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F649_12073(RTCV(tr1));
		F116_8572(RTCV(arg1), tr1);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg1)-115])(RTCV(arg1), loc1);
		}
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			F612_13276(Current, tr1, arg1);
		}
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg1)-115])(RTCV(arg1), loc1);
		}
	}
	RTLE;
}

/* {WSF_FILE_RESPONSE}.get_file_exists */
void F612_13271 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F602_14050(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = F602_14080(RTCV(loc1));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) tb1;
	RTLE;
}

/* {WSF_FILE_RESPONSE}.get_file_size */
void F612_13272 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F602_14050(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	loc1 = (EIF_REFERENCE) tr1;
	ti4_1 = F602_14075(RTCV(loc1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_2_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {WSF_FILE_RESPONSE}.file_last_modified */
EIF_REFERENCE F612_13273 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F602_14050(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1090, 1090, _OBJSIZ_2_0_0_2_0_0_0_1_);
	ti4_1 = F602_14171(RTCV(loc1));
	F1091_21061(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {WSF_FILE_RESPONSE}.send_file_content_to */
void F612_13276 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	
	RTGC;
	tr1 = RTLNS(602, 602, _OBJSIZ_4_6_2_4_1_1_2_1_);
	F602_14050(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	F602_14115(RTCV(loc1));
	for (;;) {
		tb1 = F277_9735(RTCV(loc1));
		if (tb1) break;
		F602_14191(RTCV(loc1), ((EIF_INTEGER_32) 4096L));
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(arg2)-115])(RTCV(arg2), tr1);
	}
	F602_14132(RTCV(loc1));
	RTLE;
}

void EIF_Minit305 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

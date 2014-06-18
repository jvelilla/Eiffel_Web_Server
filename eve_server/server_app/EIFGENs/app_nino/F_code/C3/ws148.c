/*
 * Code for class WSF_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws148.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_RESPONSE}.make_from_wgi */
void F116_8554 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc1);
	
	RTGC;
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current + O8318[Dtype(Current)-115]) = (EIF_NATURAL_64) tu8_1;
	tr1 = RTLNSMART(eif_non_attached_type(649));
	F649_12064(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	loc2 = arg1;
	loc2 = RTRV(eif_non_attached_type(157),loc2);
	if (EIF_TEST(loc2)) {
		F158_9069(RTCV(loc2), Current);
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	} else {
		loc3 = arg1;
		loc3 = RTRV(eif_non_attached_type(156),loc3);
		if (EIF_TEST(loc3)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(157, 157, _OBJSIZ_3_0_0_0_0_0_0_0_);
			F158_9068(RTCV(tr1), arg1, Current);
			loc1 = (EIF_REFERENCE) tr1;
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		}
	}
	F116_8564(Current, ((EIF_INTEGER_32) 200L));
	RTLE;
}

/* {WSF_RESPONSE}.make_from_wsf */
void F116_8555 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current + O8318[Dtype(Current)-115]) = (EIF_NATURAL_64) tu8_1;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	F116_8564(Current, ((EIF_INTEGER_32) 200L));
	RTLE;
}

/* {WSF_RESPONSE}.wgi_response */
EIF_REFERENCE F116_8556 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_RESPONSE}.header */
EIF_REFERENCE F116_8557 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_RESPONSE}.set_wgi_response */
void F116_8558 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WSF_RESPONSE}.status_committed */
EIF_BOOLEAN F116_8559 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7997[Dtype(tr1)-154])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_RESPONSE}.header_committed */
EIF_BOOLEAN F116_8560 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R7998[Dtype(tr1)-154])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_RESPONSE}.set_status_code */
void F116_8564 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O8306[Dtype(Current)-115]) = (EIF_INTEGER_32) arg1;
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {WSF_RESPONSE}.status_reason_phrase */
EIF_REFERENCE F116_8567 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_RESPONSE}.process_header */
void F116_8568 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN) !F116_8560(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE)) R8002[Dtype(tr1)-154])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O8306[Dtype(Current)-115]), *(EIF_REFERENCE *)(Current + _REFACS_2_));
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = F649_12073(RTCV(tr2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8005[Dtype(tr1)-154])(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {WSF_RESPONSE}.report_content_already_sent_and_header_ignored */
void F116_8569 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTMS_EX_H("Content already sent, new header text ignored!",46,181631265);
	F116_8591(Current, tr1);
	RTLE;
}

/* {WSF_RESPONSE}.put_header_line */
void F116_8570 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	if (F116_8560(Current)) {
		F116_8569(Current);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F649_12091(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {WSF_RESPONSE}.put_header_text */
void F116_8572 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	if (F116_8560(Current)) {
		F116_8569(Current);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F649_12080(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {WSF_RESPONSE}.put_header_lines */
void F116_8576 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11074[Dtype(arg1)-644])(RTCV(arg1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc1)-646])(RTCV(loc1));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc1)-646])(RTCV(loc1));
		F116_8570(Current, tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc1)-646])(RTCV(loc1));
	}
	RTLE;
}

/* {WSF_RESPONSE}.increment_transfered_content_length */
void F116_8579 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu8_1 = (EIF_NATURAL_64) arg1;
	(*(EIF_NATURAL_64 *)(Current + O8318[dtype-115])) += tu8_1;
	RTLE;
}

/* {WSF_RESPONSE}.put_string */
void F116_8581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8007[Dtype(tr1)-154])(RTCV(tr1), arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	F116_8579(Current, ti4_1);
	RTLE;
}

/* {WSF_RESPONSE}.put_chunk */
void F116_8583 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,Current);
	RTLR(5,tr2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ti4_1;
	
	loc1 = F992_19214(RTCV(tr1));
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tc1 = F893_17342(RTCV(loc1), loc2);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0')) break;
		loc2++;
	}
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
		loc1 = F893_17423(RTCV(loc1), loc2, ti4_1);
	}
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		F893_17377(RTCV(loc1), arg2);
	}
	tr1 = RTOUCR(44,F167_8334,(Current));
	F893_17377(RTCV(loc1), tr1);
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8007[Dtype(tr1)-154])(RTCV(tr1), loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8321[Dtype(Current)-115])(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(44,F167_8334,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8007[Dtype(tr1)-154])(RTCV(tr1), tr2);
	F116_8586(Current);
	RTLE;
}

/* {WSF_RESPONSE}.put_custom_chunk_end */
void F116_8584 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,arg2);
	RTLR(5,tr2);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_REFERENCE) tr1;
	F893_17381(RTCV(loc1), ((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F893_17377(RTCV(loc1), arg1);
	}
	tr1 = RTOUCR(44,F167_8334,(Current));
	F893_17377(RTCV(loc1), tr1);
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8007[Dtype(tr1)-154])(RTCV(tr1), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(arg2)-887])(RTCV(arg2));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8007[Dtype(tr1)-154])(RTCV(tr1), arg2);
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(44,F167_8334,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8007[Dtype(tr1)-154])(RTCV(tr1), tr2);
	F116_8586(Current);
	RTLE;
}

/* {WSF_RESPONSE}.put_chunk_end */
void F116_8585 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F116_8584(Current, NULL, NULL);
}

/* {WSF_RESPONSE}.flush */
void F116_8586 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R8009[Dtype(tr1)-154])(RTCV(tr1));
	RTLE;
}

/* {WSF_RESPONSE}.send */
void F116_8587 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11742[Dtype(arg1)-606])(RTCV(arg1), Current);
}

/* {WSF_RESPONSE}.put_error */
void F116_8591 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8010[Dtype(tr1)-154])(RTCV(tr1), arg1);
	RTLE;
}

void EIF_Minit148 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

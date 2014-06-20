/*
 * Code for class WSF_TRACE_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F305_13246(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F305_13247(EIF_REFERENCE);
extern EIF_TYPED_VALUE F305_13248(EIF_REFERENCE);
extern void F305_13249(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit305(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_TRACE_RESPONSE}.make */
void F305_13246 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 304, Current, 0, 1, 8884);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(304, Current, 8884);
	if (arg1) {
		RTCC(arg1, 304, l_feature_name, 1, 370);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 11828, 0xF8000172, 0); /* request */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(11828, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11827, 0xF8000128, 0); /* header */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(11827, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(11242, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11827, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WSF_TRACE_RESPONSE}.header */
EIF_TYPED_VALUE F305_13247 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11827,Dtype(Current)));
	return r;
}


/* {WSF_TRACE_RESPONSE}.request */
EIF_TYPED_VALUE F305_13248 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11828,Dtype(Current)));
	return r;
}


/* {WSF_TRACE_RESPONSE}.send_to */
void F305_13249 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "send_to";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,loc4);
	RTLR(4,loc7);
	RTLR(5,tr1);
	RTLR(6,loc1);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,tr2);
	RTLR(12,loc2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 304, Current, 9, 1, 8887);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(304, Current, 8887);
	if (arg1) {
		RTCC(arg1, 304, l_feature_name, 1, 150);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("header_not_committed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8310, "header_committed", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("status_not_committed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8309, "status_committed", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("no_message_committed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8311, "message_committed", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 3, 0xF8000128, 0, 0); /* loc3 */
	
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11827, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8236, 146))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8314, "set_status_code", arg1))(arg1, ui4_1x);
	RTHOOK(6);
	RTDBGAL(Current, 4, 0xF8000172, 0, 0); /* loc4 */
	
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11828, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16428, "raw_header_data", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = RTCCL(tr1);
	if (EIF_TEST(loc7)) {
		RTHOOK(8);
		RTDBGAL(Current, 1, 0xF8000167, 0, 0); /* loc1 */
		
		tr1 = RTLN(359);
		ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(15204, "count", loc7));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(15082, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(8,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15135, "to_string_8", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15341, "append", loc1))(loc1, ur1x);
		RTHOOK(10);
		uc1 = (EIF_CHARACTER_8) '\012';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15354, "append_character", loc1))(loc1, uc1x);
	} else {
		RTHOOK(11);
		RTDBGAL(Current, 1, 0xF8000167, 0, 0); /* loc1 */
		
		tr1 = RTLN(359);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(15083, Dtype(tr1)))(tr1);
		RTNHOOK(11,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(12);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16432, "is_chunked_input", loc4))(loc4)).it_b);
	if (tb1) {
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11286, "put_transfer_encoding_chunked", loc3))(loc3);
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11251, "string", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8322, "put_header_text", arg1))(arg1, ur1x);
		RTHOOK(15);
		ur1 = RTCCL(loc1);
		ur2 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8333, "put_chunk", arg1))(arg1, ur1x, ur2x);
		RTHOOK(16);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16431, "input", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc8 = RTCCL(tr1);
		if (EIF_TEST(loc8)) {
			RTHOOK(17);
			loc9 = RTCCL(loc8);
			loc9 = RTRV(eif_non_attached_type(253),loc9);
			if (EIF_TEST(loc9)) {
				RTHOOK(18);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10518, "read_chunk", loc9))(loc9);
				for (;;) {
					RTHOOK(19);
					ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(10514, "last_chunk_size", loc9));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(20);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10515, "last_chunk_data", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10517, "last_chunk_extension", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur2 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8333, "put_chunk", arg1))(arg1, ur1x, ur2x);
					RTHOOK(21);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10518, "read_chunk", loc9))(loc9);
				}
				RTHOOK(22);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10517, "last_chunk_extension", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10516, "last_trailer", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur2 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8334, "put_custom_chunk_end", arg1))(arg1, ur1x, ur2x);
			} else {
				if (RTAL & CK_CHECK) {
					RTHOOK(23);
					RTCT("is_chunked_input", EX_CHECK);
						RTCF;
				}
				RTHOOK(24);
				RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
				
				loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8192L);
				for (;;) {
					RTHOOK(25);
					if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(26);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9244, "wipe_out", loc1))(loc1);
					RTHOOK(27);
					RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
					
					ur1 = RTCCL(loc1);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ui4_2 = loc5;
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10504, "read_to_string", loc8))(loc8, ur1x, ui4_1x, ui4_2x)).it_i4);
					loc6 = (EIF_INTEGER_32) ti4_2;
					RTHOOK(28);
					if ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 0L))) {
						RTHOOK(29);
						RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
						
						loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					} else {
						RTHOOK(30);
						if ((EIF_BOOLEAN) (loc6 < loc5)) {
							RTHOOK(31);
							RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
							
							loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						RTHOOK(32);
						ur1 = RTCCL(loc1);
						ur2 = NULL;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8333, "put_chunk", arg1))(arg1, ur1x, ur2x);
					}
				}
				RTHOOK(33);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8335, "put_chunk_end", arg1))(arg1);
			}
		}
		RTHOOK(34);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8336, "flush", arg1))(arg1);
	} else {
		RTHOOK(35);
		RTDBGAL(Current, 2, 0xF8000167, 0, 0); /* loc2 */
		
		tr1 = RTLN(359);
		tu8_1 = *(EIF_NATURAL_64 *)(loc4 + RTVA(16470, "content_length_value", loc4));
		RTNHOOK(35,1);
		ti4_2 = (EIF_INTEGER_32) tu8_1;
		ui4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(15082, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(35,2);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(36);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16433, "read_input_data_into", loc4))(loc4, ur1x);
		RTHOOK(37);
		ti4_2 = *(EIF_INTEGER_32 *)(loc1 + RTVA(15242, "count", loc1));
		ti4_3 = *(EIF_INTEGER_32 *)(loc2 + RTVA(15242, "count", loc2));
		ui4_1 = (EIF_INTEGER_32) (ti4_2 + ti4_3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11280, "put_content_length", loc3))(loc3, ui4_1x);
		RTHOOK(38);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11251, "string", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8322, "put_header_text", arg1))(arg1, ur1x);
		RTHOOK(39);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8331, "put_string", arg1))(arg1, ur1x);
		RTHOOK(40);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8331, "put_string", arg1))(arg1, ur1x);
		RTHOOK(41);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8336, "flush", arg1))(arg1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(42);
		RTCT("res_status_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8313, "status_is_set", arg1))(arg1)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(43);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

void EIF_Minit305 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class URI_TEMPLATE_EXPRESSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F476_21380(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F476_21381(EIF_REFERENCE);
extern EIF_TYPED_VALUE F476_21382(EIF_REFERENCE);
extern EIF_TYPED_VALUE F476_21383(EIF_REFERENCE);
extern EIF_TYPED_VALUE F476_21384(EIF_REFERENCE);
extern EIF_TYPED_VALUE F476_21385(EIF_REFERENCE);
extern EIF_TYPED_VALUE F476_21386(EIF_REFERENCE);
extern EIF_TYPED_VALUE F476_21387(EIF_REFERENCE);
extern EIF_TYPED_VALUE F476_21388(EIF_REFERENCE);
extern EIF_TYPED_VALUE F476_21389(EIF_REFERENCE);
extern EIF_TYPED_VALUE F476_21390(EIF_REFERENCE);
extern EIF_TYPED_VALUE F476_21391(EIF_REFERENCE);
extern EIF_TYPED_VALUE F476_21392(EIF_REFERENCE);
extern void F476_21393(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F476_21394(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F476_21395(EIF_REFERENCE);
extern void EIF_Minit476(void);

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

/* {URI_TEMPLATE_EXPRESSION}.make */
void F476_21380 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 475, Current, 0, 3, 16134);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(475, Current, 16134);
	if (arg2) {
		RTCC(arg2, 475, l_feature_name, 2, 389);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 18542, 0x10000000, 1); /* position */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(18542, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 18544, 0xF8000185, 0); /* expression */
	
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(18544, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 18545, 0x04000000, 1); /* is_query */
	
	*(EIF_BOOLEAN *)(Current + RTWA(18545, dtype)) = (EIF_BOOLEAN) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 18546, 0x08000000, 1); /* operator */
	
	*(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {URI_TEMPLATE_EXPRESSION}.analyze */
void F476_21381 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "analyze";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc5);
	RTLR(6,loc7);
	RTLR(7,loc6);
	RTLR(8,ur1);
	RTLR(9,ur2);
	RTLR(10,ur3);
	RTLR(11,ur4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	
	RTEAA(l_feature_name, 475, Current, 9, 0, 16135);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(475, Current, 16135);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(18552, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF8000185, 0, 0); /* loc1 */
		
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15587, "is_empty", loc1))(loc1)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 18548, 0x08000000, 1); /* op_prefix */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(18548, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
			RTHOOK(5);
			RTDBGAA(Current, dtype, 18549, 0x08000000, 1); /* op_delimiter */
			
			*(EIF_CHARACTER_8 *)(Current + RTWA(18549, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
			RTHOOK(6);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc1))(loc1, ui4_1x)).it_c1);
			switch (tc1) {
				case (EIF_CHARACTER_8) '+':
					RTHOOK(7);
					RTDBGAA(Current, dtype, 18547, 0x04000000, 1); /* reserved */
					
					*(EIF_BOOLEAN *)(Current + RTWA(18547, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(8);
					RTDBGAA(Current, dtype, 18546, 0x08000000, 1); /* operator */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '+';
					break;
				case (EIF_CHARACTER_8) '.':
					RTHOOK(9);
					RTDBGAA(Current, dtype, 18546, 0x08000000, 1); /* operator */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
					RTHOOK(10);
					RTDBGAA(Current, dtype, 18548, 0x08000000, 1); /* op_prefix */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18548, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
					RTHOOK(11);
					RTDBGAA(Current, dtype, 18549, 0x08000000, 1); /* op_delimiter */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18549, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
					break;
				case (EIF_CHARACTER_8) '/':
					RTHOOK(12);
					RTDBGAA(Current, dtype, 18546, 0x08000000, 1); /* operator */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
					RTHOOK(13);
					RTDBGAA(Current, dtype, 18548, 0x08000000, 1); /* op_prefix */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18548, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
					RTHOOK(14);
					RTDBGAA(Current, dtype, 18549, 0x08000000, 1); /* op_delimiter */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18549, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
					break;
				case (EIF_CHARACTER_8) ';':
					RTHOOK(15);
					RTDBGAA(Current, dtype, 18546, 0x08000000, 1); /* operator */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ';';
					RTHOOK(16);
					RTDBGAA(Current, dtype, 18548, 0x08000000, 1); /* op_prefix */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18548, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ';';
					RTHOOK(17);
					RTDBGAA(Current, dtype, 18549, 0x08000000, 1); /* op_delimiter */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18549, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ';';
					break;
				case (EIF_CHARACTER_8) '\?':
					RTHOOK(18);
					RTDBGAA(Current, dtype, 18546, 0x08000000, 1); /* operator */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\?';
					RTHOOK(19);
					RTDBGAA(Current, dtype, 18548, 0x08000000, 1); /* op_prefix */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18548, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\?';
					RTHOOK(20);
					RTDBGAA(Current, dtype, 18549, 0x08000000, 1); /* op_delimiter */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18549, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
					break;
				case (EIF_CHARACTER_8) '&':
					RTHOOK(21);
					RTDBGAA(Current, dtype, 18546, 0x08000000, 1); /* operator */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
					RTHOOK(22);
					RTDBGAA(Current, dtype, 18548, 0x08000000, 1); /* op_prefix */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18548, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
					RTHOOK(23);
					RTDBGAA(Current, dtype, 18549, 0x08000000, 1); /* op_delimiter */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18549, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '&';
					break;
				case (EIF_CHARACTER_8) '#':
					RTHOOK(24);
					RTDBGAA(Current, dtype, 18547, 0x04000000, 1); /* reserved */
					
					*(EIF_BOOLEAN *)(Current + RTWA(18547, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(25);
					RTDBGAA(Current, dtype, 18546, 0x08000000, 1); /* operator */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '#';
					RTHOOK(26);
					RTDBGAA(Current, dtype, 18548, 0x08000000, 1); /* op_prefix */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18548, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '#';
					RTHOOK(27);
					RTDBGAA(Current, dtype, 18549, 0x08000000, 1); /* op_delimiter */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18549, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
					break;
				case (EIF_CHARACTER_8) '!':
				case (EIF_CHARACTER_8) '@':
				case (EIF_CHARACTER_8) '|':
					RTHOOK(28);
					RTDBGAA(Current, dtype, 18546, 0x08000000, 1); /* operator */
					
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc1))(loc1, ui4_1x)).it_c1);
					*(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype)) = (EIF_CHARACTER_8) tc1;
					break;
				default:
					RTHOOK(29);
					RTDBGAA(Current, dtype, 18546, 0x08000000, 1); /* operator */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
					break;
			}
			RTHOOK(30);
			tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype));
			if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\000')) {
				RTHOOK(31);
				RTDBGAL(Current, 2, 0xF8000185, 0, 0); /* loc2 */
				
				ui4_1 = ((EIF_INTEGER_32) 2L);
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(15730, "count", loc1));
				ui4_2 = ti4_1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", loc1))(loc1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(32);
				RTDBGAL(Current, 2, 0xF8000185, 0, 0); /* loc2 */
				
				loc2 = (EIF_REFERENCE) RTCCL(loc1);
			}
			RTHOOK(33);
			RTDBGAL(Current, 3, 0xF800020D, 0, 0); /* loc3 */
			
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ',';
			uw1 = tw1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15648, "split", loc2))(loc2, uw1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(34);
			RTDBGAL(Current, 5, 0xF800020D, 0, 0); /* loc5 */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {516,458,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLN(typres0);
			}
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9633, "count", loc3))(loc3)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12032, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(34,1);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(35);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9704, "start", loc3))(loc3);
			for (;;) {
				RTHOOK(36);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9718, "after", loc3))(loc3)).it_b);
				if (tb1) break;
				RTHOOK(37);
				RTDBGAL(Current, 2, 0xF8000185, 0, 0); /* loc2 */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9658, "item", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(38);
				RTDBGAL(Current, 7, 0xF8000185, 0, 0); /* loc7 */
				
				loc7 = (EIF_REFERENCE) NULL;
				RTHOOK(39);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7756, dtype))(Current)).it_c1);
				uc1 = tc1;
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15709, "index_of", loc2))(loc2, uc1x, ui4_1x)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(40);
				if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(41);
					RTDBGAL(Current, 6, 0xF8000185, 0, 0); /* loc6 */
					
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ui4_2 = (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", loc2))(loc2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc6 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(42);
					RTDBGAL(Current, 2, 0xF8000185, 0, 0); /* loc2 */
					
					ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
					ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(15730, "count", loc2));
					ui4_2 = ti4_1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", loc2))(loc2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc2 = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(43);
					RTDBGAL(Current, 6, 0xF8000185, 0, 0); /* loc6 */
					
					loc6 = (EIF_REFERENCE) RTCCL(loc2);
					RTHOOK(44);
					RTDBGAL(Current, 2, 0xF8000185, 0, 0); /* loc2 */
					
					loc2 = (EIF_REFERENCE) NULL;
				}
				RTHOOK(45);
				RTDBGAL(Current, 7, 0xF8000185, 0, 0); /* loc7 */
				
				loc7 = (EIF_REFERENCE) NULL;
				RTHOOK(46);
				RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
				
				loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(47);
				RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
				
				ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(15730, "count", loc6));
				loc9 = (EIF_INTEGER_32) ti4_1;
				for (;;) {
					RTHOOK(48);
					if ((EIF_BOOLEAN) (loc8 > loc9)) break;
					RTHOOK(49);
					ui4_1 = loc8;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11868, "item", loc6))(loc6, ui4_1x)).it_c1);
					switch (tc1) {
						case (EIF_CHARACTER_8) '*':
						case (EIF_CHARACTER_8) '+':
						case (EIF_CHARACTER_8) ':':
						case (EIF_CHARACTER_8) '^':
							RTHOOK(50);
							RTDBGAL(Current, 7, 0xF8000185, 0, 0); /* loc7 */
							
							ui4_1 = loc8;
							ui4_2 = loc9;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", loc6))(loc6, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc7 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(51);
							RTDBGAL(Current, 6, 0xF8000185, 0, 0); /* loc6 */
							
							ui4_1 = ((EIF_INTEGER_32) 1L);
							ui4_2 = (EIF_INTEGER_32) (loc8 - ((EIF_INTEGER_32) 1L));
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15650, "substring", loc6))(loc6, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc6 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(52);
							RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
							
							loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
							break;
						default:
							RTHOOK(53);
							RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
							
							loc8++;
							break;
					}
				}
				RTHOOK(54);
				tr1 = RTLN(458);
				ur1 = RTCCL(Current);
				ur2 = RTCCL(loc6);
				ur3 = RTCCL(loc2);
				ur4 = RTCCL(loc7);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(17871, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x);
				RTNHOOK(54,1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9816, "force", loc5))(loc5, ur1x);
				RTHOOK(55);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", loc3))(loc3);
			}
			RTHOOK(56);
			RTDBGAA(Current, dtype, 18550, 0xF800020D, 0); /* variables */
			
			RTAR(Current, loc5);
			*(EIF_REFERENCE *)(Current + RTWA(18550, dtype)) = (EIF_REFERENCE) RTCCL(loc5);
		}
		RTHOOK(57);
		RTDBGAA(Current, dtype, 18552, 0x04000000, 1); /* is_analyzed */
		
		*(EIF_BOOLEAN *)(Current + RTWA(18552, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(58);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
#undef ui4_2
#undef uw1
#undef uc1
}

/* {URI_TEMPLATE_EXPRESSION}.position */
EIF_TYPED_VALUE F476_21382 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(18542,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION}.end_position */
EIF_TYPED_VALUE F476_21383 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "end_position";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 475, Current, 0, 0, 16137);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(475, Current, 16137);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(18542, dtype));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(15730, "count", tr1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) + ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {URI_TEMPLATE_EXPRESSION}.expression */
EIF_TYPED_VALUE F476_21384 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18544,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION}.is_query */
EIF_TYPED_VALUE F476_21385 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(18545,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION}.operator */
EIF_TYPED_VALUE F476_21386 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(18546,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION}.reserved */
EIF_TYPED_VALUE F476_21387 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(18547,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION}.op_prefix */
EIF_TYPED_VALUE F476_21388 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(18548,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION}.op_delimiter */
EIF_TYPED_VALUE F476_21389 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(18549,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION}.variables */
EIF_TYPED_VALUE F476_21390 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18550,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION}.variable_names */
EIF_TYPED_VALUE F476_21391 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "variable_names";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 475, Current, 1, 0, 16129);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(475, Current, 16129);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18541, dtype))(Current);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18550, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF800020D, 0,0); /* Result */
		
		{
			static EIF_TYPE_INDEX typarr0[] = {516,389,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLN(typres0);
		}
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9633, "count", loc1))(loc1)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12032, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9704, "start", loc1))(loc1);
		for (;;) {
			RTHOOK(5);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9718, "after", loc1))(loc1)).it_b);
			if (tb1) break;
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9658, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17874, "name", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9816, "force", Result))(Result, ur1x);
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", loc1))(loc1);
		}
	} else {
		RTHOOK(8);
		RTDBGAL(Current, 0, 0xF800020D, 0,0); /* Result */
		
		{
			static EIF_TYPE_INDEX typarr0[] = {516,389,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLN(typres0);
		}
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12032, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(8,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {URI_TEMPLATE_EXPRESSION}.is_analyzed */
EIF_TYPED_VALUE F476_21392 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(18552,Dtype(Current)));
	return r;
}


/* {URI_TEMPLATE_EXPRESSION}.append_expanded_to_string */
void F476_21393 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_expanded_to_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_TYPED_VALUE uc2x = {{0}, SK_CHAR8};
#define uc2 uc2x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 475, Current, 1, 2, 16131);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(475, Current, 16131);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {586,0,389,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			RTCC(arg1, 475, l_feature_name, 1, typres0);
		}
	}
	if (arg2) {
		RTCC(arg2, 475, l_feature_name, 2, 389);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18541, dtype))(Current);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18550, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(loc1);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(18548, dtype));
		uc1 = tc1;
		tc2 = *(EIF_CHARACTER_8 *)(Current + RTWA(18549, dtype));
		uc2 = tc2;
		ub1 = (EIF_BOOLEAN) 1;
		ur3 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18554, dtype))(Current, ur1x, ur2x, uc1x, uc2x, ub1x, ur3x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
#undef uc1
#undef uc2
#undef arg2
#undef arg1
}

/* {URI_TEMPLATE_EXPRESSION}.append_custom_variables_to_string */
void F476_21394 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "append_custom_variables_to_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_c1
#define arg4 arg4x.it_c1
#define arg5 arg5x.it_b
#define arg6 arg6x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 tc3;
	EIF_CHARACTER_8 tc4;
	EIF_CHARACTER_8 tc5;
	EIF_CHARACTER_8 tc6;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_b = * (EIF_BOOLEAN *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_c1 = * (EIF_CHARACTER_8 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_c1 = * (EIF_CHARACTER_8 *) arg3x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg6);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLR(6,ur1);
	RTLR(7,loc4);
	RTLR(8,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_CHAR8,&arg3);
	RTLU(SK_CHAR8,&arg4);
	RTLU(SK_BOOL,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_BOOL, &loc5);
	
	RTEAA(l_feature_name, 475, Current, 5, 6, 16132);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(475, Current, 16132);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {586,0,389,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg1, 475, l_feature_name, 1, typres0);
		}
	}
	RTCC(arg2, 475, l_feature_name, 2, RTWCT(18550, dtype, Dftype(Current)));
	if (arg6) {
		RTCC(arg6, 475, l_feature_name, 6, 389);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9704, "start", arg2))(arg2);
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
		
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9718, "after", arg2))(arg2)).it_b);
			if (tb1) break;
			RTHOOK(5);
			RTDBGAL(Current, 1, 0xF80001CA, 0, 0); /* loc1 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9658, "item", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(6);
			RTDBGAL(Current, 3, 0xF8000000, 0, 0); /* loc3 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17874, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9652, "item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			RTDBGAL(Current, 4, 0xF8000185, 0, 0); /* loc4 */
			
			loc4 = (EIF_REFERENCE) NULL;
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTHOOK(9);
				RTDBGAL(Current, 4, 0xF8000185, 0, 0); /* loc4 */
				
				ur1 = RTCCL(loc3);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17885, "expanded_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc4 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(10);
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc4 == NULL)) {
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17882, "has_explode", loc1))(loc1)).it_b);
					tb2 = tb3;
				}
				if (tb2) {
					RTHOOK(11);
					RTDBGAL(Current, 4, 0xF8000185, 0, 0); /* loc4 */
					
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17875, "default_value", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc4 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(12);
					RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
					
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(13);
					RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
					
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			} else {
				RTHOOK(14);
				RTDBGAL(Current, 4, 0xF8000185, 0, 0); /* loc4 */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17875, "default_value", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc4 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(15);
				RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
				
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				RTHOOK(17);
				if (loc2) {
					RTHOOK(18);
					if ((EIF_BOOLEAN)(arg3 != (EIF_CHARACTER_8) '\000')) {
						RTHOOK(19);
						uc1 = arg3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg6))(arg6, uc1x);
					}
					RTHOOK(20);
					RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
					
					loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(21);
					uc1 = arg4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg6))(arg6, uc1x);
				}
				RTHOOK(22);
				tb2 = '\0';
				tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype));
				tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7750, dtype))(Current)).it_c1);
				tc3 = *(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype));
				tc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7751, dtype))(Current)).it_c1);
				tc5 = *(EIF_CHARACTER_8 *)(Current + RTWA(18546, dtype));
				tc6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7752, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN) (loc5 && (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(tc1 == tc2) || (EIF_BOOLEAN)(tc3 == tc4)) || (EIF_BOOLEAN)(tc5 == tc6)))) {
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17884, "has_explode_star", loc1))(loc1)).it_b);
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					RTHOOK(23);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17874, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15829, "append", arg6))(arg6, ur1x);
					RTHOOK(24);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17883, "has_explode_plus", loc1))(loc1)).it_b);
					if (tb2) {
						RTHOOK(25);
						uc1 = (EIF_CHARACTER_8) '.';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg6))(arg6, uc1x);
					} else {
						RTHOOK(26);
						uc1 = (EIF_CHARACTER_8) '=';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15842, "append_character", arg6))(arg6, uc1x);
					}
				}
				RTHOOK(27);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15829, "append", arg6))(arg6, ur1x);
			}
			RTHOOK(28);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9720, "forth", arg2))(arg2);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef ur1
#undef uc1
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {URI_TEMPLATE_EXPRESSION}.debug_output */
EIF_TYPED_VALUE F476_21395 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_output";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 475, Current, 0, 0, 16133);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(475, Current, 16133);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000185, 0,0); /* Result */
	
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18544, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

void EIF_Minit476 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

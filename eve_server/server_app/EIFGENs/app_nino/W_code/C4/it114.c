/*
 * Code for class ITP_OBJECT_TRAVERSABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F114_8109(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit114(void);

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

/* {ITP_OBJECT_TRAVERSABLE}.internal_traverse */
void F114_8109 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "internal_traverse";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc14 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_8 loc15 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc16 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_64 loc17 = (EIF_INTEGER_64) 0;
	EIF_NATURAL_8 loc18 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc19 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc20 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc21 = (EIF_NATURAL_64) 0;
	EIF_CHARACTER_8 loc22 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc23 = (EIF_CHARACTER_32) 0;
	EIF_REAL_64 loc24 = (EIF_REAL_64) 0;
	EIF_REAL_32 loc25 = (EIF_REAL_32) 0;
	EIF_POINTER loc26 = (EIF_POINTER) 0;
	EIF_REFERENCE loc27 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc28 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc29 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_8 loc30 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc31 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_64 loc32 = (EIF_INTEGER_64) 0;
	EIF_NATURAL_8 loc33 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc34 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc35 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc36 = (EIF_NATURAL_64) 0;
	EIF_CHARACTER_8 loc37 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc38 = (EIF_CHARACTER_32) 0;
	EIF_REAL_64 loc39 = (EIF_REAL_64) 0;
	EIF_REAL_32 loc40 = (EIF_REAL_32) 0;
	EIF_POINTER loc41 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN tb14;
	EIF_BOOLEAN tb15;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,loc5);
	RTLR(1,tr1);
	RTLR(2,loc7);
	RTLR(3,Current);
	RTLR(4,loc6);
	RTLR(5,loc11);
	RTLR(6,arg1);
	RTLR(7,ur1);
	RTLR(8,loc8);
	RTLR(9,loc3);
	RTLR(10,loc12);
	RTLR(11,loc4);
	RTLR(12,loc27);
	RTLR(13,loc10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_BOOL, &loc14);
	RTLU(SK_INT8, &loc15);
	RTLU(SK_INT16, &loc16);
	RTLU(SK_INT64, &loc17);
	RTLU(SK_UINT8, &loc18);
	RTLU(SK_UINT16, &loc19);
	RTLU(SK_UINT32, &loc20);
	RTLU(SK_UINT64, &loc21);
	RTLU(SK_CHAR8, &loc22);
	RTLU(SK_CHAR32, &loc23);
	RTLU(SK_REAL64, &loc24);
	RTLU(SK_REAL32, &loc25);
	RTLU(SK_POINTER, &loc26);
	RTLU(SK_REF, &loc27);
	RTLU(SK_INT32, &loc28);
	RTLU(SK_BOOL, &loc29);
	RTLU(SK_INT8, &loc30);
	RTLU(SK_INT16, &loc31);
	RTLU(SK_INT64, &loc32);
	RTLU(SK_UINT8, &loc33);
	RTLU(SK_UINT16, &loc34);
	RTLU(SK_UINT32, &loc35);
	RTLU(SK_UINT64, &loc36);
	RTLU(SK_CHAR8, &loc37);
	RTLU(SK_CHAR32, &loc38);
	RTLU(SK_REAL64, &loc39);
	RTLU(SK_REAL32, &loc40);
	RTLU(SK_POINTER, &loc41);
	
	RTEAA(l_feature_name, 113, Current, 41, 1, 1770);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(113, Current, 1770);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 5, 0xF80000E8, 0, 0); /* loc5 */
	
	tr1 = RTLN(232);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 7, 0xF80001E5, 0, 0); /* loc7 */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(7918, dtype, dftype)));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7939, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(11569, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 6, 0xF800026A, 0, 0); /* loc6 */
	
	loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7938, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 11, 0xF8000000, 0, 0); /* loc11 */
	
	loc11 = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc11 != NULL)) {
		RTHOOK(6);
		ur1 = RTCCL(loc11);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9243, "put", loc6))(loc6, ur1x);
		RTHOOK(7);
		ur1 = RTCCL(loc11);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6867, "mark", loc5))(loc5, ur1x);
	}
	RTHOOK(8);
	RTDBGAL(Current, 8, 0xF80001D7, 0, 0); /* loc8 */
	
	loc8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7917, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	for (;;) {
		RTHOOK(9);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9221, "is_empty", loc6))(loc6)).it_b);
		if (tb1) break;
		RTHOOK(10);
		RTDBGAL(Current, 3, 0xF8000000, 0, 0); /* loc3 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9256, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9261, "remove", loc6))(loc6);
		RTHOOK(12);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9244, "extend", loc7))(loc7, ur1x);
		RTHOOK(13);
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = loc3;
			RTAR(tr1,loc3);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
		}
		RTHOOK(15);
		RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
		
		ur1 = RTCCL(loc3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10170, "dynamic_type", loc5))(loc5, ur1x)).it_i4);
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(16);
		ui4_1 = loc9;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10138, "is_special_type", loc5))(loc5, ui4_1x)).it_b);
		if (tb2) {
			RTHOOK(17);
			loc12 = RTCCL(loc3);
			{
				static EIF_TYPE_INDEX typarr0[] = {460,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc12 = RTRV(eif_non_attached_type(typres0),loc12);
			}
			if (EIF_TEST(loc12)) {
				RTHOOK(18);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(19);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16666, "count", loc12))(loc12)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
				for (;;) {
					RTHOOK(20);
					if ((EIF_BOOLEAN)(loc1 == loc2)) break;
					RTHOOK(21);
					RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
					
					ui4_1 = loc1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11405, "item", loc12))(loc12, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc4 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(22);
					if ((EIF_BOOLEAN)(loc4 != NULL)) {
						RTHOOK(23);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_INTEGER_32 *), 400, tr1, loc13, tb2);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_BOOLEAN *), 346, tr1, loc14, tb3);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_INTEGER_8 *), 406, tr1, loc15, tb4);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_INTEGER_16 *), 403, tr1, loc16, tb5);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_INTEGER_64 *), 397, tr1, loc17, tb6);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_NATURAL_8 *), 424, tr1, loc18, tb7);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_NATURAL_16 *), 415, tr1, loc19, tb8);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_NATURAL_32 *), 412, tr1, loc20, tb9);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_NATURAL_64 *), 409, tr1, loc21, tb10);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_CHARACTER_8 *), 343, tr1, loc22, tb11);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_CHARACTER_32 *), 340, tr1, loc23, tb12);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_REAL_64 *), 421, tr1, loc24, tb13);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_REAL_32 *), 418, tr1, loc25, tb14);
						tr1 = RTCCL(loc4);
						RTOB(*(EIF_POINTER *), 349, tr1, loc26, tb15);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (tb2 || tb3) || tb4) || tb5) || tb6) || tb7) || tb8) || tb9) || tb10) || tb11) || tb12) || tb13) || tb14) || tb15)) {
							RTHOOK(24);
							{
								static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,0,0xFFFF};
								EIF_TYPE_INDEX typres0;
								static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
								
								typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
								tr1 = RTLNTS(typres0, 2, 0);
							}
							((EIF_TYPED_VALUE *)tr1+1)->it_r = loc4;
							RTAR(tr1,loc4);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
						} else {
							RTHOOK(25);
							ur1 = RTCCL(loc4);
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6866, "is_marked", loc5))(loc5, ur1x)).it_b);
							if ((EIF_BOOLEAN) !tb2) {
								RTHOOK(26);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6867, "mark", loc5))(loc5, ur1x);
								RTHOOK(27);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9243, "put", loc6))(loc6, ur1x);
							}
						}
					}
					RTHOOK(28);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					
					loc1++;
				}
			}
		} else {
			RTHOOK(29);
			ur1 = RTCCL(loc3);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10165, "is_tuple", loc5))(loc5, ur1x)).it_b);
			if (tb2) {
				RTHOOK(30);
				loc27 = RTCCL(loc3);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,338,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc27 = RTRV(eif_non_attached_type(typres0),loc27);
				}
				if (EIF_TEST(loc27)) {
					RTHOOK(31);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(32);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14792, "count", loc27))(loc27)).it_i4);
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(33);
						if ((EIF_BOOLEAN)(loc1 == loc2)) break;
						RTHOOK(34);
						ui4_1 = loc1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14834, "is_reference_item", loc27))(loc27, ui4_1x)).it_b);
						if (tb2) {
							RTHOOK(35);
							RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
							
							ui4_1 = loc1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14768, "reference_item", loc27))(loc27, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(36);
							tb2 = '\0';
							if ((EIF_BOOLEAN)(loc4 != NULL)) {
								ur1 = RTCCL(loc4);
								tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6866, "is_marked", loc5))(loc5, ur1x)).it_b);
								tb2 = (EIF_BOOLEAN) !tb3;
							}
							if (tb2) {
								RTHOOK(37);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6867, "mark", loc5))(loc5, ur1x);
								RTHOOK(38);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9243, "put", loc6))(loc6, ur1x);
							}
						} else {
							RTHOOK(39);
							ui4_1 = loc1;
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14829, "is_integer_item", loc27))(loc27, ui4_1x)).it_b);
							if (tb2) {
								RTHOOK(40);
								if ((EIF_BOOLEAN)(loc8 != NULL)) {
									RTHOOK(41);
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,400,0xFFFF};
										EIF_TYPE_INDEX typres0;
										static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
										
										typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr1 = RTLNTS(typres0, 2, 1);
									}
									ui4_1 = loc1;
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14782, "integer_item", loc27))(loc27, ui4_1x)).it_i4);
									((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
								}
							} else {
								RTHOOK(42);
								ui4_1 = loc1;
								tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14817, "is_boolean_item", loc27))(loc27, ui4_1x)).it_b);
								if (tb2) {
									RTHOOK(43);
									if ((EIF_BOOLEAN)(loc8 != NULL)) {
										RTHOOK(44);
										{
											static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,346,0xFFFF};
											EIF_TYPE_INDEX typres0;
											static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
											
											typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
											tr1 = RTLNTS(typres0, 2, 1);
										}
										ui4_1 = loc1;
										tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14769, "boolean_item", loc27))(loc27, ui4_1x)).it_b);
										((EIF_TYPED_VALUE *)tr1+1)->it_b = tb2;
										ur1 = RTCCL(tr1);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
									}
								} else {
									RTHOOK(45);
									ui4_1 = loc1;
									tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14833, "is_real_item", loc27))(loc27, ui4_1x)).it_b);
									if (tb2) {
										RTHOOK(46);
										if ((EIF_BOOLEAN)(loc8 != NULL)) {
											RTHOOK(47);
											{
												static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,418,0xFFFF};
												EIF_TYPE_INDEX typres0;
												static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
												
												typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
												tr1 = RTLNTS(typres0, 2, 1);
											}
											ui4_1 = loc1;
											tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14787, "real_item", loc27))(loc27, ui4_1x)).it_r4);
											((EIF_TYPED_VALUE *)tr1+1)->it_r4 = tr4_1;
											ur1 = RTCCL(tr1);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
										}
									} else {
										RTHOOK(48);
										ui4_1 = loc1;
										tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14822, "is_double_item", loc27))(loc27, ui4_1x)).it_b);
										if (tb2) {
											RTHOOK(49);
											if ((EIF_BOOLEAN)(loc8 != NULL)) {
												RTHOOK(50);
												{
													static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,421,0xFFFF};
													EIF_TYPE_INDEX typres0;
													static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
													
													typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
													tr1 = RTLNTS(typres0, 2, 1);
												}
												ui4_1 = loc1;
												tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14775, "double_item", loc27))(loc27, ui4_1x)).it_r8);
												((EIF_TYPED_VALUE *)tr1+1)->it_r8 = tr8_1;
												ur1 = RTCCL(tr1);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
											}
										} else {
											RTHOOK(51);
											ui4_1 = loc1;
											tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14818, "is_character_8_item", loc27))(loc27, ui4_1x)).it_b);
											if (tb2) {
												RTHOOK(52);
												if ((EIF_BOOLEAN)(loc8 != NULL)) {
													RTHOOK(53);
													{
														static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,343,0xFFFF};
														EIF_TYPE_INDEX typres0;
														static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
														
														typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
														tr1 = RTLNTS(typres0, 2, 1);
													}
													ui4_1 = loc1;
													tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14770, "character_8_item", loc27))(loc27, ui4_1x)).it_c1);
													((EIF_TYPED_VALUE *)tr1+1)->it_c1 = tc1;
													ur1 = RTCCL(tr1);
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
												}
											} else {
												RTHOOK(54);
												ui4_1 = loc1;
												tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14820, "is_character_32_item", loc27))(loc27, ui4_1x)).it_b);
												if (tb2) {
													RTHOOK(55);
													if ((EIF_BOOLEAN)(loc8 != NULL)) {
														RTHOOK(56);
														{
															static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,340,0xFFFF};
															EIF_TYPE_INDEX typres0;
															static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
															
															typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
															tr1 = RTLNTS(typres0, 2, 1);
														}
														ui4_1 = loc1;
														tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14772, "character_32_item", loc27))(loc27, ui4_1x)).it_c4);
														((EIF_TYPED_VALUE *)tr1+1)->it_c4 = tw1;
														ur1 = RTCCL(tr1);
														(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
													}
												} else {
													RTHOOK(57);
													ui4_1 = loc1;
													tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14827, "is_integer_8_item", loc27))(loc27, ui4_1x)).it_b);
													if (tb2) {
														RTHOOK(58);
														if ((EIF_BOOLEAN)(loc8 != NULL)) {
															RTHOOK(59);
															{
																static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,406,0xFFFF};
																EIF_TYPE_INDEX typres0;
																static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
																
																typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																tr1 = RTLNTS(typres0, 2, 1);
															}
															ui4_1 = loc1;
															ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14780, "integer_8_item", loc27))(loc27, ui4_1x)).it_i1);
															((EIF_TYPED_VALUE *)tr1+1)->it_i1 = ti1_1;
															ur1 = RTCCL(tr1);
															(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
														}
													} else {
														RTHOOK(60);
														ui4_1 = loc1;
														tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14828, "is_integer_16_item", loc27))(loc27, ui4_1x)).it_b);
														if (tb2) {
															RTHOOK(61);
															if ((EIF_BOOLEAN)(loc8 != NULL)) {
																RTHOOK(62);
																{
																	static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,403,0xFFFF};
																	EIF_TYPE_INDEX typres0;
																	static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
																	
																	typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																	tr1 = RTLNTS(typres0, 2, 1);
																}
																ui4_1 = loc1;
																ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14781, "integer_16_item", loc27))(loc27, ui4_1x)).it_i2);
																((EIF_TYPED_VALUE *)tr1+1)->it_i2 = ti2_1;
																ur1 = RTCCL(tr1);
																(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
															}
														} else {
															RTHOOK(63);
															ui4_1 = loc1;
															tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14831, "is_integer_64_item", loc27))(loc27, ui4_1x)).it_b);
															if (tb2) {
																RTHOOK(64);
																if ((EIF_BOOLEAN)(loc8 != NULL)) {
																	RTHOOK(65);
																	{
																		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,397,0xFFFF};
																		EIF_TYPE_INDEX typres0;
																		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
																		
																		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																		tr1 = RTLNTS(typres0, 2, 1);
																	}
																	ui4_1 = loc1;
																	ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14784, "integer_64_item", loc27))(loc27, ui4_1x)).it_i8);
																	((EIF_TYPED_VALUE *)tr1+1)->it_i8 = ti8_1;
																	ur1 = RTCCL(tr1);
																	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
																}
															} else {
																RTHOOK(66);
																ui4_1 = loc1;
																tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14823, "is_natural_8_item", loc27))(loc27, ui4_1x)).it_b);
																if (tb2) {
																	RTHOOK(67);
																	if ((EIF_BOOLEAN)(loc8 != NULL)) {
																		RTHOOK(68);
																		{
																			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,424,0xFFFF};
																			EIF_TYPE_INDEX typres0;
																			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
																			
																			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																			tr1 = RTLNTS(typres0, 2, 1);
																		}
																		ui4_1 = loc1;
																		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14776, "natural_8_item", loc27))(loc27, ui4_1x)).it_n1);
																		((EIF_TYPED_VALUE *)tr1+1)->it_n1 = tu1_1;
																		ur1 = RTCCL(tr1);
																		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
																	}
																} else {
																	RTHOOK(69);
																	ui4_1 = loc1;
																	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14824, "is_natural_16_item", loc27))(loc27, ui4_1x)).it_b);
																	if (tb2) {
																		RTHOOK(70);
																		if ((EIF_BOOLEAN)(loc8 != NULL)) {
																			RTHOOK(71);
																			{
																				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,415,0xFFFF};
																				EIF_TYPE_INDEX typres0;
																				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
																				
																				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																				tr1 = RTLNTS(typres0, 2, 1);
																			}
																			ui4_1 = loc1;
																			tu2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14777, "natural_16_item", loc27))(loc27, ui4_1x)).it_n2);
																			((EIF_TYPED_VALUE *)tr1+1)->it_n2 = tu2_1;
																			ur1 = RTCCL(tr1);
																			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
																		}
																	} else {
																		RTHOOK(72);
																		ui4_1 = loc1;
																		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14825, "is_natural_32_item", loc27))(loc27, ui4_1x)).it_b);
																		if (tb2) {
																			RTHOOK(73);
																			if ((EIF_BOOLEAN)(loc8 != NULL)) {
																				RTHOOK(74);
																				{
																					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,412,0xFFFF};
																					EIF_TYPE_INDEX typres0;
																					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
																					
																					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																					tr1 = RTLNTS(typres0, 2, 1);
																				}
																				ui4_1 = loc1;
																				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14778, "natural_32_item", loc27))(loc27, ui4_1x)).it_n4);
																				((EIF_TYPED_VALUE *)tr1+1)->it_n4 = tu4_1;
																				ur1 = RTCCL(tr1);
																				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
																			}
																		} else {
																			RTHOOK(75);
																			ui4_1 = loc1;
																			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14826, "is_natural_64_item", loc27))(loc27, ui4_1x)).it_b);
																			if (tb2) {
																				RTHOOK(76);
																				if ((EIF_BOOLEAN)(loc8 != NULL)) {
																					RTHOOK(77);
																					{
																						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,409,0xFFFF};
																						EIF_TYPE_INDEX typres0;
																						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
																						
																						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																						tr1 = RTLNTS(typres0, 2, 1);
																					}
																					ui4_1 = loc1;
																					tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14779, "natural_64_item", loc27))(loc27, ui4_1x)).it_n8);
																					((EIF_TYPED_VALUE *)tr1+1)->it_n8 = tu8_1;
																					ur1 = RTCCL(tr1);
																					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
																				}
																			} else {
																				RTHOOK(78);
																				ui4_1 = loc1;
																				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14832, "is_pointer_item", loc27))(loc27, ui4_1x)).it_b);
																				if (tb2) {
																					RTHOOK(79);
																					if ((EIF_BOOLEAN)(loc8 != NULL)) {
																						RTHOOK(80);
																						{
																							static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,349,0xFFFF};
																							EIF_TYPE_INDEX typres0;
																							static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
																							
																							typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
																							tr1 = RTLNTS(typres0, 2, 1);
																						}
																						ui4_1 = loc1;
																						tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14785, "pointer_item", loc27))(loc27, ui4_1x)).it_p);
																						((EIF_TYPED_VALUE *)tr1+1)->it_p = tp1;
																						ur1 = RTCCL(tr1);
																						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						RTHOOK(81);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						
						loc1++;
					}
				}
			} else {
				RTHOOK(82);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(83);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				ui4_1 = loc9;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10154, "field_count_of_type", loc5))(loc5, ui4_1x)).it_i4);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				if (RTAL & CK_LOOP) {
					RTHOOK(84);
					RTCT(NULL, EX_VAR);
					ti4_2 = (EIF_INTEGER_32) (loc2 - loc1);
					if (ti4_2 >= 0) {
						RTCK;
					} else {
						RTCF;
					}
				}
				for (;;) {
					RTHOOK(85);
					if ((EIF_BOOLEAN)(loc1 == loc2)) break;
					RTHOOK(86);
					ui4_1 = loc1;
					ui4_2 = loc9;
					ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10151, "field_type_of_type", loc5))(loc5, ui4_1x, ui4_2x)).it_i4);
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10039, 232))(Current)).it_i4);
					if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
						RTHOOK(87);
						tb2 = '\01';
						tb3 = *(EIF_BOOLEAN *)(Current + RTWA(7924, dtype));
						if (!(EIF_BOOLEAN) !tb3) {
							ui4_1 = loc1;
							ui4_2 = loc9;
							tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10141, "is_field_transient_of_type", loc5))(loc5, ui4_1x, ui4_2x)).it_b);
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (tb2) {
							RTHOOK(88);
							RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
							
							ui4_1 = loc1;
							ur1 = RTCCL(loc3);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10173, "field", loc5))(loc5, ui4_1x, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(89);
							if ((EIF_BOOLEAN)(loc4 != NULL)) {
								RTHOOK(90);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_INTEGER_32 *), 400, tr1, loc28, tb2);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_BOOLEAN *), 346, tr1, loc29, tb3);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_INTEGER_8 *), 406, tr1, loc30, tb4);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_INTEGER_16 *), 403, tr1, loc31, tb5);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_INTEGER_64 *), 397, tr1, loc32, tb6);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_NATURAL_8 *), 424, tr1, loc33, tb7);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_NATURAL_16 *), 415, tr1, loc34, tb8);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_NATURAL_32 *), 412, tr1, loc35, tb9);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_NATURAL_64 *), 409, tr1, loc36, tb10);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_CHARACTER_8 *), 343, tr1, loc37, tb11);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_CHARACTER_32 *), 340, tr1, loc38, tb12);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_REAL_64 *), 421, tr1, loc39, tb13);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_REAL_32 *), 418, tr1, loc40, tb14);
								tr1 = RTCCL(loc4);
								RTOB(*(EIF_POINTER *), 349, tr1, loc41, tb15);
								if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (tb2 || tb3) || tb4) || tb5) || tb6) || tb7) || tb8) || tb9) || tb10) || tb11) || tb12) || tb13) || tb14) || tb15)) {
									RTHOOK(91);
									RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
									
									ui4_1 = loc1;
									ur1 = RTCCL(loc3);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10173, "field", loc5))(loc5, ui4_1x, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc4 = (EIF_REFERENCE) RTCCL(tr1);
									RTHOOK(92);
									if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 != NULL) && (EIF_BOOLEAN)(loc8 != NULL))) {
										RTHOOK(93);
										{
											static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,0,0xFFFF};
											EIF_TYPE_INDEX typres0;
											static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
											
											typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
											tr1 = RTLNTS(typres0, 2, 0);
										}
										((EIF_TYPED_VALUE *)tr1+1)->it_r = loc4;
										RTAR(tr1,loc4);
										ur1 = RTCCL(tr1);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
									}
								} else {
									RTHOOK(94);
									ur1 = RTCCL(loc4);
									tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6866, "is_marked", loc5))(loc5, ur1x)).it_b);
									if ((EIF_BOOLEAN) !tb2) {
										RTHOOK(95);
										ur1 = RTCCL(loc4);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6867, "mark", loc5))(loc5, ur1x);
										RTHOOK(96);
										ur1 = RTCCL(loc4);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9243, "put", loc6))(loc6, ur1x);
									}
								}
							}
						}
					} else {
						RTHOOK(97);
						RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
						
						ui4_1 = loc1;
						ur1 = RTCCL(loc3);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10173, "field", loc5))(loc5, ui4_1x, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc4 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(98);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 != NULL) && (EIF_BOOLEAN)(loc8 != NULL))) {
							RTHOOK(99);
							{
								static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,338,0,0xFFFF};
								EIF_TYPE_INDEX typres0;
								static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
								
								typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
								tr1 = RTLNTS(typres0, 2, 0);
							}
							((EIF_TYPED_VALUE *)tr1+1)->it_r = loc4;
							RTAR(tr1,loc4);
							ur1 = RTCCL(tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15056, "call", loc8))(loc8, ur1x);
						}
					}
					RTHOOK(100);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					
					loc1++;
					if (RTAL & CK_LOOP) {
						RTHOOK(84);
						RTCT(NULL, EX_VAR);
						ti4_1 = (EIF_INTEGER_32) (loc2 - loc1);
						if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
							RTCK;
							ti4_2 = ti4_1;
						} else {
							RTCF;
						}
					}
				}
			}
		}
	}
	RTHOOK(101);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(102);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9231, "count", loc7))(loc7)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(103);
	RTDBGAL(Current, 10, 0xF80001CC, 0, 0); /* loc10 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11572, "area", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc10 = (EIF_REFERENCE) tr1;
	for (;;) {
		RTHOOK(104);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(105);
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11405, "item", loc10))(loc10, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6868, "unmark", loc5))(loc5, ur1x);
		RTHOOK(106);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTHOOK(107);
	RTDBGAA(Current, dtype, 7918, 0xF80001E5, 0); /* visited_objects */
	
	RTAR(Current, loc7);
	*(EIF_REFERENCE *)(Current + RTWA(7918, dtype)) = (EIF_REFERENCE) RTCCL(loc7);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(108);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(44);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

void EIF_Minit114 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

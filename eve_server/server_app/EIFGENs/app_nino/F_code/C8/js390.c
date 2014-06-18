/*
 * Code for class JSON_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js390.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_STRING}.make_json */
void F987_19042 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F987_19058(Current, arg1);
	F987_19044(Current, tr1);
	RTLE;
}

/* {JSON_STRING}.make_json_from_string_32 */
void F987_19043 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F987_19059(Current, arg1);
	F987_19044(Current, tr1);
	RTLE;
}

/* {JSON_STRING}.make_with_escaped_json */
void F987_19044 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F885_17049(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {JSON_STRING}.item */
EIF_REFERENCE F987_19045 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {JSON_STRING}.representation */
EIF_REFERENCE F987_19048 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
	F889_17162(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)));
	Result = (EIF_REFERENCE) tr1;
	F893_17391(RTCV(Result), (EIF_CHARACTER_8) '\"');
	F893_17377(RTCV(Result), *(EIF_REFERENCE *)(Current));
	F893_17391(RTCV(Result), (EIF_CHARACTER_8) '\"');
	RTLE;
	return Result;
}

/* {JSON_STRING}.is_equal */
EIF_BOOLEAN F987_19052 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
	Result = F889_17187(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {JSON_STRING}.hash_code */
EIF_INTEGER_32 F987_19054 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F885_17002(RTCV(tr1));
	RTLE;
	return Result;
}

/* {JSON_STRING}.escaped_json_string */
EIF_REFERENCE F987_19058 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15187[Dtype(arg1)-888]);
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), (EIF_INTEGER_32) (loc2 + (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 10L))));
	Result = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		loc3 = *(EIF_CHARACTER_8 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R11343[Dtype(arg1)-696])(RTCV(arg1), loc1));
		switch (loc3) {
			case (EIF_CHARACTER_8) '\"':
				tr1 = RTMS_EX_H("\\\"",2,23586);
				F893_17380(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\\':
				tr1 = RTMS_EX_H("\\\\",2,23644);
				F893_17380(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\010':
				tr1 = RTMS_EX_H("\\b",2,23650);
				F893_17380(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\014':
				tr1 = RTMS_EX_H("\\f",2,23654);
				F893_17380(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\012':
				tr1 = RTMS_EX_H("\\n",2,23662);
				F893_17380(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\015':
				tr1 = RTMS_EX_H("\\r",2,23666);
				F893_17380(RTCV(Result), tr1);
				break;
			case (EIF_CHARACTER_8) '\011':
				tr1 = RTMS_EX_H("\\t",2,23668);
				F893_17380(RTCV(Result), tr1);
				break;
			default:
				F893_17392(RTCV(Result), loc3);
				break;
		}
		loc1++;
	}
	RTLE;
	return Result;
}

/* {JSON_STRING}.escaped_json_string_32 */
EIF_REFERENCE F987_19059 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc6);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O15149[Dtype(arg1)-886]);
	tr1 = RTLNS(892, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F889_17162(RTCV(tr1), (EIF_INTEGER_32) (loc3 + (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 10L))));
	Result = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		loc4 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R15030[Dtype(arg1)-887])(RTCV(arg1), loc1);
		tb1 = (loc4 <= 0xFF);
		if (tb1) {
			loc5 = (EIF_CHARACTER_8) loc4;
			switch (loc5) {
				case (EIF_CHARACTER_8) '\"':
					tr1 = RTMS_EX_H("\\\"",2,23586);
					F893_17380(RTCV(Result), tr1);
					break;
				case (EIF_CHARACTER_8) '\\':
					tr1 = RTMS_EX_H("\\\\",2,23644);
					F893_17380(RTCV(Result), tr1);
					break;
				case (EIF_CHARACTER_8) '\010':
					tr1 = RTMS_EX_H("\\b",2,23650);
					F893_17380(RTCV(Result), tr1);
					break;
				case (EIF_CHARACTER_8) '\014':
					tr1 = RTMS_EX_H("\\f",2,23654);
					F893_17380(RTCV(Result), tr1);
					break;
				case (EIF_CHARACTER_8) '\012':
					tr1 = RTMS_EX_H("\\n",2,23662);
					F893_17380(RTCV(Result), tr1);
					break;
				case (EIF_CHARACTER_8) '\015':
					tr1 = RTMS_EX_H("\\r",2,23666);
					F893_17380(RTCV(Result), tr1);
					break;
				case (EIF_CHARACTER_8) '\011':
					tr1 = RTMS_EX_H("\\t",2,23668);
					F893_17380(RTCV(Result), tr1);
					break;
				default:
					F893_17392(RTCV(Result), loc5);
					break;
			}
		} else {
			tr1 = RTMS_EX_H("\\u",2,23669);
			F893_17377(RTCV(Result), tr1);
			ti4_1 = (EIF_INTEGER_32) (loc4);
			tr1 = RTLNS(993, 993, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			
			loc6 = F992_19214(RTCV(tr1));
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				tb1 = '\01';
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc6)+ _LNGOFF_1_1_0_2_);
				if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					tb2 = '\0';
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc6)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
						tc1 = F893_17342(RTCV(loc6), loc2);
						tb2 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0');
					}
					tb1 = tb2;
				}
				if (tb1) break;
				loc2++;
			}
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc6)+ _LNGOFF_1_1_0_2_);
			loc6 = F893_17423(RTCV(loc6), loc2, ti4_1);
			for (;;) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc6)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L))) break;
				F893_17373(RTCV(loc6), ((EIF_INTEGER_32) 0L));
			}
			F893_17377(RTCV(Result), loc6);
		}
		loc1++;
	}
	RTLE;
	return Result;
}

void EIF_Minit390 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

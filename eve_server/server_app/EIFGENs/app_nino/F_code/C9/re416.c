/*
 * Code for class REAL_64_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re416.h"
#include <math.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_64_REF}.hash_code */
EIF_INTEGER_32 F1013_19780 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R17171[Dtype(Current)-1012])(Current);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.sign */
EIF_INTEGER_32 F1013_19781 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) > (EIF_REAL_64) 0.0)) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if ((EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) < (EIF_REAL_64) 0.0)) {
			RTLE;
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {REAL_64_REF}.zero */
EIF_REFERENCE F1013_19783 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	F1013_19793(RTCV(Result), (EIF_REAL_64) 0.0);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.is_less */
EIF_BOOLEAN F1013_19791 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tr8_1 < tr8_2);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.is_equal */
EIF_BOOLEAN F1013_19792 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr8_1 == tr8_2);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.set_item */
void F1013_19793 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) = (EIF_REAL_64) arg1;
}

/* {REAL_64_REF}.truncated_to_integer */
EIF_INTEGER_32 F1013_19802 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_INTEGER_32) tr8_1;
	RTLE;
	return Result;
}

/* {REAL_64_REF}.truncated_to_real */
EIF_REAL_32 F1013_19804 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_REAL_32) (tr8_1);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.floor */
EIF_INTEGER_32 F1013_19806 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = (FUNCTION_CAST(EIF_REAL_64, (EIF_REFERENCE)) R17178[Dtype(Current)-1012])(Current);
	Result = (EIF_INTEGER_32) tr8_1;
	RTLE;
	return Result;
}

/* {REAL_64_REF}.rounded */
EIF_INTEGER_32 F1013_19807 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = F1013_19781(Current);
	tr8_1 = F1013_19811(Current);
	tr1 = RTLNS(1014, 1014, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5);
	
	ti4_1 = F1013_19806(RTCV(tr1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ti4_1);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.floor_real_64 */
EIF_REAL_64 F1013_19809 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_REAL_64) floor ((double)tr8_1);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.abs */
EIF_REAL_64 F1013_19811 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = *(EIF_REAL_64 *)(RTCV(F1013_19820(Current))+ _R64OFF_0_0_0_0_0_0_0_0_);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.plus */
EIF_REFERENCE F1013_19812 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F1013_19793(RTCV(Result), (EIF_REAL_64) (tr8_1 + tr8_2));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.minus */
EIF_REFERENCE F1013_19813 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F1013_19793(RTCV(Result), (EIF_REAL_64) (tr8_1 - tr8_2));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.product */
EIF_REFERENCE F1013_19814 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F1013_19793(RTCV(Result), (EIF_REAL_64) (tr8_1 * tr8_2));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.quotient */
EIF_REFERENCE F1013_19815 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCV(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F1013_19793(RTCV(Result), (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2)));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.power */
EIF_REAL_64 F1013_19816 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	return (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_)), (EIF_REAL_64) (arg1));
}

/* {REAL_64_REF}.opposite */
EIF_REFERENCE F1013_19818 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1_29(RTCV(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	F1013_19793(RTCV(Result), (EIF_REAL_64) -*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.out */
EIF_REFERENCE F1013_19819 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = c_outr64(tr8_1);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.abs_ref */
EIF_REFERENCE F1013_19820 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) == (EIF_REAL_64) 0.0)) {
		RTLE;
		return (EIF_REFERENCE) F1013_19783(Current);
	} else {
		if ((EIF_BOOLEAN) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) > (EIF_REAL_64) 0.0)) {
			RTLE;
			return (EIF_REFERENCE) Current;
		} else {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16776[Dtype(Current)-988])(RTCV(Current));
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}/* NOTREACHED */
	
}

void EIF_Minit416 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

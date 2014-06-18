/*
 * Code for class WSF_REQUEST_METHODS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws291.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_REQUEST_METHODS}.default_create */
void F646_12016 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1_29(Current);
	F646_12017(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {WSF_REQUEST_METHODS}.make */
void F646_12017 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {802,888,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F803_12632(RTCV(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_REQUEST_METHODS}.make_from_iterable */
void F646_12018 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	F646_12017(Current, ((EIF_INTEGER_32) 1L));
	F646_12059(Current, arg1);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.is_empty */
EIF_BOOLEAN F646_12021 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F803_12653(RTCV(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {WSF_REQUEST_METHODS}.has */
EIF_BOOLEAN F646_12022 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = F682_12245(RTCV(tr1));
	tb1 = EIF_FALSE;
	for (;;) {
		if (tb1) break;
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc1)-646])(RTCV(loc1));
		if (tb2) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc1)-646])(RTCV(loc1));
		tb1 = (EIF_BOOLEAN)(tr1 == arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc1)-646])(RTCV(loc1));
	}
	Result = (EIF_BOOLEAN) tb1;
	if ((EIF_BOOLEAN) !Result) {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc2 = F682_12245(RTCV(tr1));
		tb1 = EIF_FALSE;
		for (;;) {
			if (tb1) break;
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc2)-646])(RTCV(loc2));
			if (tb2) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc2)-646])(RTCV(loc2));
			tb3 = F885_17038(RTCV(tr1), arg1);
			tb1 = tb3;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc2)-646])(RTCV(loc2));
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return Result;
}

/* {WSF_REQUEST_METHODS}.new_cursor */
EIF_REFERENCE F646_12034 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F682_12245(RTCV(tr1));
	RTLE;
	return Result;
}

/* {WSF_REQUEST_METHODS}.lock */
void F646_12035 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {WSF_REQUEST_METHODS}.plus */
EIF_REFERENCE F646_12036 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTLNS(645, 645, _OBJSIZ_1_1_0_0_0_0_0_0_);
	F646_12018(RTCV(tr1), Current);
	Result = (EIF_REFERENCE) tr1;
	F646_12059(RTCV(Result), arg1);
	RTLE;
	return Result;
}

/* {WSF_REQUEST_METHODS}.enable_get */
void F646_12037 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(140,F166_8322,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(tr1)-459])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_post */
void F646_12039 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(143,F166_8325,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(tr1)-459])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_put */
void F646_12041 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(144,F166_8326,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(tr1)-459])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_delete */
void F646_12043 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(145,F166_8327,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(tr1)-459])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_options */
void F646_12045 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(142,F166_8324,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(tr1)-459])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_head */
void F646_12047 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(59,F166_8321,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(tr1)-459])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_trace */
void F646_12049 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(141,F166_8323,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(tr1)-459])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_connect */
void F646_12051 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(146,F166_8328,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(tr1)-459])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_patch */
void F646_12053 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(147,F166_8329,(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(tr1)-459])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.enable_custom */
void F646_12055 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R15089[Dtype(arg1)-887])(RTCV(arg1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9230[Dtype(tr1)-459])(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_REQUEST_METHODS}.methods */
EIF_REFERENCE F646_12057 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_REQUEST_METHODS}.add_methods */
void F646_12059 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11074[Dtype(arg1)-644])(RTCV(arg1));
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R9799[Dtype(loc2)-646])(RTCV(loc2));
			if (tb1) break;
			tb2 = '\0';
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc2)-646])(RTCV(loc2));
			tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15044[Dtype(tr1)-887])(RTCV(tr1));
			if ((EIF_BOOLEAN) !tb3) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc2)-646])(RTCV(loc2));
				tb2 = (EIF_BOOLEAN) !F646_12022(Current, tr1);
			}
			if (tb2) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9798[Dtype(loc2)-646])(RTCV(loc2));
				F646_12060(Current, tr1);
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9800[Dtype(loc2)-646])(RTCV(loc2));
		}
	}
	RTLE;
}

/* {WSF_REQUEST_METHODS}.add_method_using_constant */
void F646_12060 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = RTOUCR(140,F166_8322,(Current));
	tb1 = F889_17185(RTCV(arg1), tr1);
	if (tb1) {
		F646_12037(Current);
	} else {
		tr1 = RTOUCR(143,F166_8325,(Current));
		tb1 = F889_17185(RTCV(arg1), tr1);
		if (tb1) {
			F646_12039(Current);
		} else {
			tr1 = RTOUCR(144,F166_8326,(Current));
			tb1 = F889_17185(RTCV(arg1), tr1);
			if (tb1) {
				F646_12041(Current);
			} else {
				tr1 = RTOUCR(145,F166_8327,(Current));
				tb1 = F889_17185(RTCV(arg1), tr1);
				if (tb1) {
					F646_12043(Current);
				} else {
					tr1 = RTOUCR(59,F166_8321,(Current));
					tb1 = F889_17185(RTCV(arg1), tr1);
					if (tb1) {
						F646_12047(Current);
					} else {
						tr1 = RTOUCR(142,F166_8324,(Current));
						tb1 = F889_17185(RTCV(arg1), tr1);
						if (tb1) {
							F646_12045(Current);
						} else {
							tr1 = RTOUCR(141,F166_8323,(Current));
							tb1 = F889_17185(RTCV(arg1), tr1);
							if (tb1) {
								F646_12049(Current);
							} else {
								tr1 = RTOUCR(146,F166_8328,(Current));
								tb1 = F889_17185(RTCV(arg1), tr1);
								if (tb1) {
									F646_12051(Current);
								} else {
									tr1 = RTOUCR(147,F166_8329,(Current));
									tb1 = F889_17185(RTCV(arg1), tr1);
									if (tb1) {
										F646_12053(Current);
									} else {
										F646_12055(Current, arg1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTLE;
}

void EIF_Minit291 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

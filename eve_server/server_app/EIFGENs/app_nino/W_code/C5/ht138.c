/*
 * Code for class HTTP_REQUEST_METHODS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F138_8480(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F138_8481(EIF_REFERENCE);
extern EIF_TYPED_VALUE F138_8482(EIF_REFERENCE);
extern EIF_TYPED_VALUE F138_8483(EIF_REFERENCE);
extern EIF_TYPED_VALUE F138_8484(EIF_REFERENCE);
extern EIF_TYPED_VALUE F138_8485(EIF_REFERENCE);
extern EIF_TYPED_VALUE F138_8486(EIF_REFERENCE);
extern EIF_TYPED_VALUE F138_8487(EIF_REFERENCE);
extern EIF_TYPED_VALUE F138_8488(EIF_REFERENCE);
extern EIF_TYPED_VALUE F138_8489(EIF_REFERENCE);
extern void EIF_Minit138(void);

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

/* {HTTP_REQUEST_METHODS}.method */
EIF_TYPED_VALUE F138_8480 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "method";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 137, Current, 0, 1, 2062);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(137, Current, 2062);
	if (arg1) {
		RTCC(arg1, 137, l_feature_name, 1, 385);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8248, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15714, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
		
		Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8248, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8251, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15714, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
			
			Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8251, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8247, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15714, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
				
				Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8247, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8249, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15714, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
					
					Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8249, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTHOOK(9);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8250, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15714, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(10);
						RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
						
						Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8250, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					} else {
						RTHOOK(11);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8252, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15714, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
						if (tb1) {
							RTHOOK(12);
							RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
							
							Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8252, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						} else {
							RTHOOK(13);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15714, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
							if (tb1) {
								RTHOOK(14);
								RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
								
								Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8253, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							} else {
								RTHOOK(15);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8254, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15714, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
								if (tb1) {
									RTHOOK(16);
									RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
									
									Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8254, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								} else {
									RTHOOK(17);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8255, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15714, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
									if (tb1) {
										RTHOOK(18);
										RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
										
										Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8255, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									} else {
										RTHOOK(19);
										RTDBGAL(Current, 0, 0xF8000181, 0,0); /* Result */
										
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15632, "as_upper", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										Result = (EIF_REFERENCE) RTCCL(tr1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {HTTP_REQUEST_METHODS}.method_head */
RTOID (F138_8481)


EIF_TYPED_VALUE F138_8481 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F138_8481,2064,RTMS_EX_H("HEAD",4,1212498244));
}

/* {HTTP_REQUEST_METHODS}.method_get */
RTOID (F138_8482)


EIF_TYPED_VALUE F138_8482 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F138_8482,2065,RTMS_EX_H("GET",3,4670804));
}

/* {HTTP_REQUEST_METHODS}.method_trace */
RTOID (F138_8483)


EIF_TYPED_VALUE F138_8483 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F138_8483,2066,RTMS_EX_H("TRACE",5,1380653893));
}

/* {HTTP_REQUEST_METHODS}.method_options */
RTOID (F138_8484)


EIF_TYPED_VALUE F138_8484 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F138_8484,2067,RTMS_EX_H("OPTIONS",7,347751251));
}

/* {HTTP_REQUEST_METHODS}.method_post */
RTOID (F138_8485)


EIF_TYPED_VALUE F138_8485 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F138_8485,2068,RTMS_EX_H("POST",4,1347375956));
}

/* {HTTP_REQUEST_METHODS}.method_put */
RTOID (F138_8486)


EIF_TYPED_VALUE F138_8486 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F138_8486,2069,RTMS_EX_H("PUT",3,5264724));
}

/* {HTTP_REQUEST_METHODS}.method_delete */
RTOID (F138_8487)


EIF_TYPED_VALUE F138_8487 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F138_8487,2070,RTMS_EX_H("DELETE",6,1413835333));
}

/* {HTTP_REQUEST_METHODS}.method_connect */
RTOID (F138_8488)


EIF_TYPED_VALUE F138_8488 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F138_8488,2071,RTMS_EX_H("CONNECT",7,831608660));
}

/* {HTTP_REQUEST_METHODS}.method_patch */
RTOID (F138_8489)


EIF_TYPED_VALUE F138_8489 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F138_8489,2072,RTMS_EX_H("PATCH",5,1096655688));
}

void EIF_Minit138 (void)
{
	GTCX
	RTOTS (8481,F138_8481)
	RTOTS (8482,F138_8482)
	RTOTS (8483,F138_8483)
	RTOTS (8484,F138_8484)
	RTOTS (8485,F138_8485)
	RTOTS (8486,F138_8486)
	RTOTS (8487,F138_8487)
	RTOTS (8488,F138_8488)
	RTOTS (8489,F138_8489)
}


#ifdef __cplusplus
}
#endif

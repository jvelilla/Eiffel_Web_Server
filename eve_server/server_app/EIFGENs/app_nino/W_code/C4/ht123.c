/*
 * Code for class HTTP_REQUEST_METHODS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F123_8299(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F123_8300(EIF_REFERENCE);
extern EIF_TYPED_VALUE F123_8301(EIF_REFERENCE);
extern EIF_TYPED_VALUE F123_8302(EIF_REFERENCE);
extern EIF_TYPED_VALUE F123_8303(EIF_REFERENCE);
extern EIF_TYPED_VALUE F123_8304(EIF_REFERENCE);
extern EIF_TYPED_VALUE F123_8305(EIF_REFERENCE);
extern EIF_TYPED_VALUE F123_8306(EIF_REFERENCE);
extern EIF_TYPED_VALUE F123_8307(EIF_REFERENCE);
extern EIF_TYPED_VALUE F123_8308(EIF_REFERENCE);
extern void EIF_Minit123(void);

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
EIF_TYPED_VALUE F123_8299 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 122, Current, 0, 1, 1913);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(122, Current, 1913);
	if (arg1) {
		RTCC(arg1, 122, l_feature_name, 1, 337);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8076, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14957, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000151, 0,0); /* Result */
		
		Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8076, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8079, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14957, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF8000151, 0,0); /* Result */
			
			Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8079, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8075, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14957, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(Current, 0, 0xF8000151, 0,0); /* Result */
				
				Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8075, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8077, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14957, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(Current, 0, 0xF8000151, 0,0); /* Result */
					
					Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8077, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTHOOK(9);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8078, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14957, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(10);
						RTDBGAL(Current, 0, 0xF8000151, 0,0); /* Result */
						
						Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8078, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					} else {
						RTHOOK(11);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8080, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14957, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
						if (tb1) {
							RTHOOK(12);
							RTDBGAL(Current, 0, 0xF8000151, 0,0); /* Result */
							
							Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8080, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						} else {
							RTHOOK(13);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8081, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14957, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
							if (tb1) {
								RTHOOK(14);
								RTDBGAL(Current, 0, 0xF8000151, 0,0); /* Result */
								
								Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8081, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							} else {
								RTHOOK(15);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8082, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14957, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
								if (tb1) {
									RTHOOK(16);
									RTDBGAL(Current, 0, 0xF8000151, 0,0); /* Result */
									
									Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8082, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								} else {
									RTHOOK(17);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8083, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14957, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
									if (tb1) {
										RTHOOK(18);
										RTDBGAL(Current, 0, 0xF8000151, 0,0); /* Result */
										
										Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8083, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									} else {
										RTHOOK(19);
										RTDBGAL(Current, 0, 0xF8000151, 0,0); /* Result */
										
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14875, "as_upper", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
RTOID (F123_8300)


EIF_TYPED_VALUE F123_8300 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F123_8300,1915,RTMS_EX_H("HEAD",4,1212498244));
}

/* {HTTP_REQUEST_METHODS}.method_get */
RTOID (F123_8301)


EIF_TYPED_VALUE F123_8301 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F123_8301,1916,RTMS_EX_H("GET",3,4670804));
}

/* {HTTP_REQUEST_METHODS}.method_trace */
RTOID (F123_8302)


EIF_TYPED_VALUE F123_8302 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F123_8302,1917,RTMS_EX_H("TRACE",5,1380653893));
}

/* {HTTP_REQUEST_METHODS}.method_options */
RTOID (F123_8303)


EIF_TYPED_VALUE F123_8303 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F123_8303,1918,RTMS_EX_H("OPTIONS",7,347751251));
}

/* {HTTP_REQUEST_METHODS}.method_post */
RTOID (F123_8304)


EIF_TYPED_VALUE F123_8304 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F123_8304,1919,RTMS_EX_H("POST",4,1347375956));
}

/* {HTTP_REQUEST_METHODS}.method_put */
RTOID (F123_8305)


EIF_TYPED_VALUE F123_8305 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F123_8305,1920,RTMS_EX_H("PUT",3,5264724));
}

/* {HTTP_REQUEST_METHODS}.method_delete */
RTOID (F123_8306)


EIF_TYPED_VALUE F123_8306 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F123_8306,1921,RTMS_EX_H("DELETE",6,1413835333));
}

/* {HTTP_REQUEST_METHODS}.method_connect */
RTOID (F123_8307)


EIF_TYPED_VALUE F123_8307 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F123_8307,1922,RTMS_EX_H("CONNECT",7,831608660));
}

/* {HTTP_REQUEST_METHODS}.method_patch */
RTOID (F123_8308)


EIF_TYPED_VALUE F123_8308 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F123_8308,1913,RTMS_EX_H("PATCH",5,1096655688));
}

void EIF_Minit123 (void)
{
	GTCX
	RTOTS (8300,F123_8300)
	RTOTS (8301,F123_8301)
	RTOTS (8302,F123_8302)
	RTOTS (8303,F123_8303)
	RTOTS (8304,F123_8304)
	RTOTS (8305,F123_8305)
	RTOTS (8306,F123_8306)
	RTOTS (8307,F123_8307)
	RTOTS (8308,F123_8308)
}


#ifdef __cplusplus
}
#endif

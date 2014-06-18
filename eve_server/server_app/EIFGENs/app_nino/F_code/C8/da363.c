/*
 * Code for class DATE_TIME_CODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da363.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_CODE}.make */
void F899_18485 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F899_18488(Current, arg1);
}

/* {DATE_TIME_CODE}.set_value */
void F899_18488 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (F133_7757(Current, *(EIF_REFERENCE *)(Current))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc1 = RTMS_EX_H("day-numeric",11,781450083);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 1U);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
	} else {
		if (F133_7758(Current, *(EIF_REFERENCE *)(Current))) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			loc1 = RTMS_EX_H("day-numeric-on-2-digits",23,1405532275);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 2U);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
		} else {
			if (F133_7759(Current, *(EIF_REFERENCE *)(Current))) {
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				loc1 = RTMS_EX_H("day-text",8,1643751284);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 3U);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
			} else {
				if (F133_7760(Current, *(EIF_REFERENCE *)(Current))) {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					loc1 = RTMS_EX_H("year-on-4-digits",16,2124624499);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 4U);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					if (F133_7761(Current, *(EIF_REFERENCE *)(Current))) {
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						loc1 = RTMS_EX_H("year-on-2-digits",16,2124163699);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 5U);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					} else {
						if (F133_7762(Current, *(EIF_REFERENCE *)(Current))) {
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							loc1 = RTMS_EX_H("month-numeric",13,457640547);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 6U);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
						} else {
							if (F133_7763(Current, *(EIF_REFERENCE *)(Current))) {
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
								loc1 = RTMS_EX_H("month-numeric-on-2-digits",25,275202163);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 7U);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
							} else {
								if (F133_7764(Current, *(EIF_REFERENCE *)(Current))) {
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
									loc1 = RTMS_EX_H("month-text",10,1418209652);
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
									*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 8U);
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
								} else {
									if (F133_7765(Current, *(EIF_REFERENCE *)(Current))) {
										*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
										*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
										loc1 = RTMS_EX_H("hour-numeric",12,1129144675);
										*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
										*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
										*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
										*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
										ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 9U);
										*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
									} else {
										if (F133_7766(Current, *(EIF_REFERENCE *)(Current))) {
											*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
											*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
											loc1 = RTMS_EX_H("hour-numeric-on-2-digits",24,638152307);
											*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
											*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
											*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
											*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
											ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 10U);
											*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
										} else {
											if (F133_7767(Current, *(EIF_REFERENCE *)(Current))) {
												*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
												*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
												loc1 = RTMS_EX_H("hour-12-clock-scale",19,1508112997);
												*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
												*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
												*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
												*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
												ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 11U);
												*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
											} else {
												if (F133_7769(Current, *(EIF_REFERENCE *)(Current))) {
													*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
													*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
													loc1 = RTMS_EX_H("minute-numeric",14,220677219);
													*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
													*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
													*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
													*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
													ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 13U);
													*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
												} else {
													if (F133_7770(Current, *(EIF_REFERENCE *)(Current))) {
														*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
														*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
														loc1 = RTMS_EX_H("minute-numeric-on-2-digits",26,1724761203);
														*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
														*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
														*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
														*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
														ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 14U);
														*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
													} else {
														if (F133_7771(Current, *(EIF_REFERENCE *)(Current))) {
															*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
															*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
															loc1 = RTMS_EX_H("second-numeric",14,1358324579);
															*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
															*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
															*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
															*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
															ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 15U);
															*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
														} else {
															if (F133_7772(Current, *(EIF_REFERENCE *)(Current))) {
																*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																loc1 = RTMS_EX_H("second-numeric-on-2-digits",26,1763349363);
																*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
																*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
																*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 16U);
																*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
															} else {
																if (F133_7773(Current, *(EIF_REFERENCE *)(Current))) {
																	tr1 = *(EIF_REFERENCE *)(Current);
																	tr2 = *(EIF_REFERENCE *)(Current);
																	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
																	tr1 = F893_17423(RTCV(tr1), ((EIF_INTEGER_32) 3L), ti4_1);
																	ti4_1 = F885_17058(RTCV(tr1));
																	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ti4_1;
																	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																	loc1 = RTMS_EX_H("fractional-second-numeric",25,941051235);
																	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																	ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 17U);
																	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
																	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
																} else {
																	if (F133_7774(Current, *(EIF_REFERENCE *)(Current))) {
																		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																		loc1 = RTMS_EX_H("colon",5,1870137710);
																		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 18U);
																		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																	} else {
																		if (F133_7775(Current, *(EIF_REFERENCE *)(Current))) {
																			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																			loc1 = RTMS_EX_H("slash",5,1819209064);
																			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																			ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 19U);
																			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																		} else {
																			if (F133_7776(Current, *(EIF_REFERENCE *)(Current))) {
																				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																				loc1 = RTMS_EX_H("minus",5,1769683827);
																				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																				ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 20U);
																				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																			} else {
																				if (F133_7777(Current, *(EIF_REFERENCE *)(Current))) {
																					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																					loc1 = RTMS_EX_H("comma",5,1870202721);
																					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																					ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 21U);
																					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																				} else {
																					if (F133_7778(Current, *(EIF_REFERENCE *)(Current))) {
																						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																						loc1 = RTMS_EX_H("space",5,1886313829);
																						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																						ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 22U);
																						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																					} else {
																						if (F133_7779(Current, *(EIF_REFERENCE *)(Current))) {
																							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																							loc1 = RTMS_EX_H("dot",3,6582132);
																							*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																							*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																							ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 23U);
																							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																						} else {
																							if (F133_7781(Current, *(EIF_REFERENCE *)(Current))) {
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								loc1 = RTMS_EX_H("meridiem",8,1230131053);
																								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																								ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 24U);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																							} else {
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								loc1 = RTMS_EX_H("hour-12-clock-scale-on-2-digits",31,1799302003);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
																								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																								ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 12U);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
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
							}
						}
					}
				}
			}
		}
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	RTLE;
}

/* {DATE_TIME_CODE}.value */
EIF_REFERENCE F899_18489 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME_CODE}.name */
EIF_REFERENCE F899_18492 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit363 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

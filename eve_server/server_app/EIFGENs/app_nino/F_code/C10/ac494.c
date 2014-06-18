/*
 * Code for class ACTION_SEQUENCE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ac494.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ACTION_SEQUENCE}.default_create */
void F821_12751 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F803_12632(Current, ((EIF_INTEGER_32) 0L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {ACTION_SEQUENCE}.on_item_added_at */
void F821_12752 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(F803_12653(Current) == ((EIF_INTEGER_32) 1L))) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL);
	}
	if (tb1) {
		tr1 = F821_12771(Current);
		F821_12773(Current, tr1);
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.on_item_removed_at */
void F821_12753 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(F803_12653(Current) == ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_8_) != NULL);
	}
	if (tb1) {
		tr1 = F821_12772(Current);
		F821_12773(Current, tr1);
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.call */
void F821_12754 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc5);
	RTLR(6,loc4);
	RTLR(7,loc6);
	RTLR(8,loc3);
	RTLR(9,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN) (F803_12653(Current) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = F803_12653(Current);
		{
			EIF_TYPE_INDEX typarr0[] = {953,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y9242,Y9242_gen_type,Dftype(Current),424);
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,ti4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = F803_12635(Current);
		ti4_2 = F803_12653(Current);
		/* INLINED CODE (SPECIAL.copy_data) */
		sp_copy_data(loc1,tr1,((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 0L),ti4_2);
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + ti4_2);
		/* END INLINED CODE */
		;
		loc5 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			tb2 = F316_9603(RTCV(loc5));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			loc4 = F803_12635(RTCV(loc5));
			loc2 = F803_12653(RTCV(loc5));
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				if ((EIF_BOOLEAN)(loc7 == loc2)) break;
				/* INLINED CODE (SPECIAL.item) */
				tr1 = *((EIF_REFERENCE *)loc4 + (loc7));
				/* END INLINED CODE */
				tr1 = tr1;
				F820_12737(Current, tr1);
				loc7++;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R9234[Dtype(loc5)-696])(RTCV(loc5));
		}
		switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_1_)) {
			case 1L:
				loc6 = F821_12774(Current);
				F802_12888(RTCV(loc6), (EIF_BOOLEAN) 0);
				loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					tb1 = '\01';
					if (!(EIF_BOOLEAN)(loc7 == loc2)) {
						tb2 = F802_12886(RTCV(loc6));
						tb1 = tb2;
					}
					if (tb1) break;
					/* INLINED CODE (SPECIAL.item) */
					tr1 = *((EIF_REFERENCE *)loc1 + (loc7));
					/* END INLINED CODE */
					loc3 = tr1;
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_2_))(
							*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1);
						;
					}
					loc7++;
				}
				F802_12890(RTCV(loc6));
				break;
			case 2L:
				tr1 = F821_12776(Current);
				F801_12871(RTCV(tr1), arg1);
				break;
			case 3L:
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.not_empty_actions */
EIF_REFERENCE F821_12771 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {802,867,0,0xFFF9,0,823,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.empty_actions */
EIF_REFERENCE F821_12772 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {802,867,0,0xFFF9,0,823,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.call_action_list */
void F821_12773 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = F316_9603(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			ti4_1 = F803_12653(RTCV(loc1));
			if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
			tr1 = F803_12638(RTCV(loc1), loc2);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F803_12637(RTCV(loc1), loc2);
				(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_0_))(
					*(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_1_),
					*(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_));
				;
			}
			loc2++;
		}
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.is_aborted_stack */
EIF_REFERENCE F821_12774 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {801,832,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F798_12788(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.is_aborted_stack_internal */
EIF_REFERENCE F821_12775 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ACTION_SEQUENCE}.call_buffer */
EIF_REFERENCE F821_12776 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			EIF_TYPE_INDEX typarr0[] = {800,0xFFF8,1,0xFFFF};
			EIF_TYPE_INDEX typres0;
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F801_12868(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.call_buffer_internal */
EIF_REFERENCE F821_12777 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ACTION_SEQUENCE}.kamikazes */
EIF_REFERENCE F821_12781 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			EIF_TYPE_INDEX typarr0[] = {802,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y9242,Y9242_gen_type,Dftype(Current),424);
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLNS(typres0, 802, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F803_12632(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.kamikazes_internal */
EIF_REFERENCE F821_12782 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {ACTION_SEQUENCE}.not_empty_actions_internal */
EIF_REFERENCE F821_12783 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {ACTION_SEQUENCE}.empty_actions_internal */
EIF_REFERENCE F821_12784 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


void EIF_Minit494 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

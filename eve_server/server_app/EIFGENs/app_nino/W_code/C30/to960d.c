/*
 * Class TO_SPECIAL [INTEGER_16]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_960 [] = {459,959,403,0xFFFF};
static EIF_TYPE_INDEX gen_type1_960 [] = {959,403,0xFFFF};
static EIF_TYPE_INDEX gen_type2_960 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_960 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_960 [] = {959,403,0xFFFF};
static EIF_TYPE_INDEX gen_type5_960 [] = {959,403,0xFFFF};
static EIF_TYPE_INDEX gen_type6_960 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_960 [] = {959,403,0xFFFF};
static EIF_TYPE_INDEX gen_type8_960 [] = {959,403,0xFFFF};
static EIF_TYPE_INDEX gen_type9_960 [] = {941,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_960 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_960 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type12_960 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_960[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_960},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 959, gen_type1_960},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_960},
	{14, (BODY_INDEX)-1, 0, gen_type3_960},
	{15, (BODY_INDEX)-1, 959, gen_type4_960},
	{16, (BODY_INDEX)-1, 959, gen_type5_960},
	{17, (BODY_INDEX)-1, 0, gen_type6_960},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 42, NULL},
	{21, (BODY_INDEX)-1, 359, NULL},
	{22, (BODY_INDEX)-1, 359, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 41, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 959, gen_type7_960},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 959, gen_type8_960},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4115, 0, 941, gen_type9_960},
	{4116, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4117, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4118, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_960},
	{4119, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_960},
	{4120, (BODY_INDEX)-1, 346, NULL},
	{4121, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4122, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type12_960},
};

extern void Init960(void);
void Init960(void)
{
	IDSC(desc_960, 0, 959);
	IDSC(desc_960 + 1, 4, 959);
	IDSC(desc_960 + 34, 81, 959);
}


#ifdef __cplusplus
}
#endif

/*
 * Class CONTAINER [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_525 [] = {459,524,400,0xFFFF};
static EIF_TYPE_INDEX gen_type1_525 [] = {524,400,0xFFFF};
static EIF_TYPE_INDEX gen_type2_525 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_525 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_525 [] = {524,400,0xFFFF};
static EIF_TYPE_INDEX gen_type5_525 [] = {524,400,0xFFFF};
static EIF_TYPE_INDEX gen_type6_525 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_525 [] = {524,400,0xFFFF};
static EIF_TYPE_INDEX gen_type8_525 [] = {524,400,0xFFFF};
static EIF_TYPE_INDEX gen_type9_525 [] = {525,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_525 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_525[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_525},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 524, gen_type1_525},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_525},
	{14, (BODY_INDEX)-1, 0, gen_type3_525},
	{15, (BODY_INDEX)-1, 524, gen_type4_525},
	{16, (BODY_INDEX)-1, 524, gen_type5_525},
	{17, (BODY_INDEX)-1, 0, gen_type6_525},
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
	{28, (BODY_INDEX)-1, 524, gen_type7_525},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 524, gen_type8_525},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 346, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 346, NULL},
	{2745, (BODY_INDEX)-1, 346, NULL},
	{2746, 0, 346, NULL},
	{2747, (BODY_INDEX)-1, 346, NULL},
	{2748, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2749, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 525, gen_type9_525},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_525},
};

extern void Init525(void);
void Init525(void)
{
	IDSC(desc_525, 0, 524);
	IDSC(desc_525 + 1, 4, 524);
	IDSC(desc_525 + 34, 364, 524);
}


#ifdef __cplusplus
}
#endif

/*
 * Class LINKABLE [G#1]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_500 [] = {459,499,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type1_500 [] = {499,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type2_500 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_500 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_500 [] = {499,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type5_500 [] = {499,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type6_500 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_500 [] = {499,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type8_500 [] = {499,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type9_500 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_500 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_500 [] = {499,0xFFF8,1,0xFFFF};


static struct desc_info desc_500[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_500},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 499, gen_type1_500},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_500},
	{14, (BODY_INDEX)-1, 0, gen_type3_500},
	{15, (BODY_INDEX)-1, 499, gen_type4_500},
	{16, (BODY_INDEX)-1, 499, gen_type5_500},
	{17, (BODY_INDEX)-1, 0, gen_type6_500},
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
	{28, (BODY_INDEX)-1, 499, gen_type7_500},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 499, gen_type8_500},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3549, 0, (EIF_TYPE_INDEX)-1, gen_type9_500},
	{3550, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3551, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_500},
	{3567, 8, 499, gen_type11_500},
	{3568, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3569, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init500(void);
void Init500(void)
{
	IDSC(desc_500, 0, 499);
	IDSC(desc_500 + 1, 4, 499);
	IDSC(desc_500 + 34, 108, 499);
	IDSC(desc_500 + 38, 225, 499);
}


#ifdef __cplusplus
}
#endif

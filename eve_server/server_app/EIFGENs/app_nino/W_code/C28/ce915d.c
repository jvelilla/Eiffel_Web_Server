/*
 * Class CELL [NATURAL_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_915 [] = {454,914,419,0xFFFF};
static EIF_TYPE_INDEX gen_type1_915 [] = {914,419,0xFFFF};
static EIF_TYPE_INDEX gen_type2_915 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_915 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_915 [] = {914,419,0xFFFF};
static EIF_TYPE_INDEX gen_type5_915 [] = {914,419,0xFFFF};
static EIF_TYPE_INDEX gen_type6_915 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_915 [] = {914,419,0xFFFF};
static EIF_TYPE_INDEX gen_type8_915 [] = {914,419,0xFFFF};
static EIF_TYPE_INDEX gen_type9_915 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_915 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_915[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 354, NULL},
	{1, (BODY_INDEX)-1, 454, gen_type0_915},
	{2, (BODY_INDEX)-1, 341, NULL},
	{3, (BODY_INDEX)-1, 341, NULL},
	{4, (BODY_INDEX)-1, 341, NULL},
	{5, (BODY_INDEX)-1, 341, NULL},
	{6, (BODY_INDEX)-1, 341, NULL},
	{7, (BODY_INDEX)-1, 341, NULL},
	{8, (BODY_INDEX)-1, 341, NULL},
	{9, (BODY_INDEX)-1, 341, NULL},
	{10, (BODY_INDEX)-1, 914, gen_type1_915},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_915},
	{14, (BODY_INDEX)-1, 0, gen_type3_915},
	{15, (BODY_INDEX)-1, 914, gen_type4_915},
	{16, (BODY_INDEX)-1, 914, gen_type5_915},
	{17, (BODY_INDEX)-1, 0, gen_type6_915},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 40, NULL},
	{21, (BODY_INDEX)-1, 354, NULL},
	{22, (BODY_INDEX)-1, 354, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 39, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 914, gen_type7_915},
	{29, (BODY_INDEX)-1, 344, NULL},
	{30, (BODY_INDEX)-1, 914, gen_type8_915},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3590, 0, (EIF_TYPE_INDEX)-1, gen_type9_915},
	{3591, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3592, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_915},
};

extern void Init915(void);
void Init915(void)
{
	IDSC(desc_915, 0, 914);
	IDSC(desc_915 + 1, 4, 914);
	IDSC(desc_915 + 34, 108, 914);
}


#ifdef __cplusplus
}
#endif

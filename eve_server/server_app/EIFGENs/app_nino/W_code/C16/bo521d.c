/*
 * Class BOUNDED [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_521 [] = {454,520,395,0xFFFF};
static EIF_TYPE_INDEX gen_type1_521 [] = {520,395,0xFFFF};
static EIF_TYPE_INDEX gen_type2_521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_521 [] = {520,395,0xFFFF};
static EIF_TYPE_INDEX gen_type5_521 [] = {520,395,0xFFFF};
static EIF_TYPE_INDEX gen_type6_521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_521 [] = {520,395,0xFFFF};
static EIF_TYPE_INDEX gen_type8_521 [] = {520,395,0xFFFF};
static EIF_TYPE_INDEX gen_type9_521 [] = {522,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_521 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_521[] = {
	{(BODY_INDEX) 2829, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 354, NULL},
	{1, (BODY_INDEX)-1, 454, gen_type0_521},
	{2, (BODY_INDEX)-1, 341, NULL},
	{3, (BODY_INDEX)-1, 341, NULL},
	{4, (BODY_INDEX)-1, 341, NULL},
	{5, (BODY_INDEX)-1, 341, NULL},
	{6, (BODY_INDEX)-1, 341, NULL},
	{7, (BODY_INDEX)-1, 341, NULL},
	{8, (BODY_INDEX)-1, 341, NULL},
	{9, (BODY_INDEX)-1, 341, NULL},
	{10, (BODY_INDEX)-1, 520, gen_type1_521},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_521},
	{14, (BODY_INDEX)-1, 0, gen_type3_521},
	{15, (BODY_INDEX)-1, 520, gen_type4_521},
	{16, (BODY_INDEX)-1, 520, gen_type5_521},
	{17, (BODY_INDEX)-1, 0, gen_type6_521},
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
	{28, (BODY_INDEX)-1, 520, gen_type7_521},
	{29, (BODY_INDEX)-1, 344, NULL},
	{30, (BODY_INDEX)-1, 520, gen_type8_521},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 341, NULL},
	{2799, (BODY_INDEX)-1, 341, NULL},
	{2724, (BODY_INDEX)-1, 341, NULL},
	{2725, 0, 341, NULL},
	{2726, (BODY_INDEX)-1, 341, NULL},
	{2727, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2728, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 522, gen_type9_521},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_521},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 395, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 341, NULL},
	{2830, (BODY_INDEX)-1, 341, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 395, NULL},
};

extern void Init521(void);
void Init521(void)
{
	IDSC(desc_521, 0, 520);
	IDSC(desc_521 + 1, 4, 520);
	IDSC(desc_521 + 34, 360, 520);
	IDSC(desc_521 + 43, 234, 520);
	IDSC(desc_521 + 45, 439, 520);
	IDSC(desc_521 + 46, 355, 520);
}


#ifdef __cplusplus
}
#endif
/*
 * Class TIME_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_90 [] = {454,89,0xFFFF};
static EIF_TYPE_INDEX gen_type1_90 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_90 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_90 [] = {0,0xFFFF};


static struct desc_info desc_90[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 354, NULL},
	{1, (BODY_INDEX)-1, 454, gen_type0_90},
	{2, (BODY_INDEX)-1, 341, NULL},
	{3, (BODY_INDEX)-1, 341, NULL},
	{4, (BODY_INDEX)-1, 341, NULL},
	{5, (BODY_INDEX)-1, 341, NULL},
	{6, (BODY_INDEX)-1, 341, NULL},
	{7, (BODY_INDEX)-1, 341, NULL},
	{8, (BODY_INDEX)-1, 341, NULL},
	{9, (BODY_INDEX)-1, 341, NULL},
	{10, (BODY_INDEX)-1, 89, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_90},
	{14, (BODY_INDEX)-1, 0, gen_type2_90},
	{15, (BODY_INDEX)-1, 89, NULL},
	{16, (BODY_INDEX)-1, 89, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_90},
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
	{28, (BODY_INDEX)-1, 89, NULL},
	{29, (BODY_INDEX)-1, 344, NULL},
	{30, (BODY_INDEX)-1, 89, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1512, (BODY_INDEX)-1, 395, NULL},
	{1513, (BODY_INDEX)-1, 395, NULL},
	{1514, (BODY_INDEX)-1, 45, NULL},
	{1515, (BODY_INDEX)-1, 354, NULL},
	{1516, (BODY_INDEX)-1, 395, NULL},
	{1517, (BODY_INDEX)-1, 395, NULL},
	{1518, (BODY_INDEX)-1, 395, NULL},
	{1519, (BODY_INDEX)-1, 395, NULL},
	{1520, (BODY_INDEX)-1, 395, NULL},
	{1521, (BODY_INDEX)-1, 354, NULL},
};

extern void Init90(void);
void Init90(void)
{
	IDSC(desc_90, 0, 89);
	IDSC(desc_90 + 1, 4, 89);
	IDSC(desc_90 + 34, 470, 89);
	IDSC(desc_90 + 38, 435, 89);
}


#ifdef __cplusplus
}
#endif

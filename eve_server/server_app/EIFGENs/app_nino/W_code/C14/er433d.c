/*
 * Class ERROR_CUSTOM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_433 [] = {454,432,0xFFFF};
static EIF_TYPE_INDEX gen_type1_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_433 [] = {0,0xFFFF};


static struct desc_info desc_433[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 354, NULL},
	{1, (BODY_INDEX)-1, 454, gen_type0_433},
	{2, (BODY_INDEX)-1, 341, NULL},
	{3, (BODY_INDEX)-1, 341, NULL},
	{4, (BODY_INDEX)-1, 341, NULL},
	{5, (BODY_INDEX)-1, 341, NULL},
	{6, (BODY_INDEX)-1, 341, NULL},
	{7, (BODY_INDEX)-1, 341, NULL},
	{8, (BODY_INDEX)-1, 341, NULL},
	{9, (BODY_INDEX)-1, 341, NULL},
	{10, (BODY_INDEX)-1, 432, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_433},
	{14, (BODY_INDEX)-1, 0, gen_type2_433},
	{15, (BODY_INDEX)-1, 432, NULL},
	{16, (BODY_INDEX)-1, 432, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_433},
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
	{28, (BODY_INDEX)-1, 432, NULL},
	{29, (BODY_INDEX)-1, 344, NULL},
	{30, (BODY_INDEX)-1, 432, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14658, (BODY_INDEX)-1, 354, NULL},
	{14662, 24, 395, NULL},
	{14663, 16, 350, NULL},
	{14664, 8, 348, NULL},
	{14656, 0, 431, NULL},
	{14657, (BODY_INDEX)-1, 353, NULL},
	{14659, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14665, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14661, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14664, 8, 348, NULL},
	{14663, 16, 350, NULL},
	{14662, 24, 395, NULL},
};

extern void Init433(void);
void Init433(void)
{
	IDSC(desc_433, 0, 432);
	IDSC(desc_433 + 1, 4, 432);
	IDSC(desc_433 + 34, 106, 432);
	IDSC(desc_433 + 35, 369, 432);
	IDSC(desc_433 + 42, 378, 432);
}


#ifdef __cplusplus
}
#endif
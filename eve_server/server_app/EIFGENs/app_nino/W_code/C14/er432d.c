/*
 * Class ERROR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_432 [] = {454,431,0xFFFF};
static EIF_TYPE_INDEX gen_type1_432 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_432 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_432 [] = {0,0xFFFF};


static struct desc_info desc_432[] = {
	{(BODY_INDEX) 14660, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 354, NULL},
	{1, (BODY_INDEX)-1, 454, gen_type0_432},
	{2, (BODY_INDEX)-1, 341, NULL},
	{3, (BODY_INDEX)-1, 341, NULL},
	{4, (BODY_INDEX)-1, 341, NULL},
	{5, (BODY_INDEX)-1, 341, NULL},
	{6, (BODY_INDEX)-1, 341, NULL},
	{7, (BODY_INDEX)-1, 341, NULL},
	{8, (BODY_INDEX)-1, 341, NULL},
	{9, (BODY_INDEX)-1, 341, NULL},
	{10, (BODY_INDEX)-1, 431, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_432},
	{14, (BODY_INDEX)-1, 0, gen_type2_432},
	{15, (BODY_INDEX)-1, 431, NULL},
	{16, (BODY_INDEX)-1, 431, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_432},
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
	{28, (BODY_INDEX)-1, 431, NULL},
	{29, (BODY_INDEX)-1, 344, NULL},
	{30, (BODY_INDEX)-1, 431, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 395, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 350, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 348, NULL},
	{14656, 0, 431, NULL},
	{14657, (BODY_INDEX)-1, 353, NULL},
	{14659, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14658, (BODY_INDEX)-1, 354, NULL},
};

extern void Init432(void);
void Init432(void)
{
	IDSC(desc_432, 0, 431);
	IDSC(desc_432 + 1, 4, 431);
	IDSC(desc_432 + 34, 369, 431);
	IDSC(desc_432 + 41, 106, 431);
}


#ifdef __cplusplus
}
#endif

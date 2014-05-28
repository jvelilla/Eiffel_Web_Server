/*
 * Class ERROR_GROUP
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_421 [] = {441,420,0xFFFF};
static EIF_TYPE_INDEX gen_type1_421 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_421 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_421 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_421 [] = {469,418,0xFFFF};


static struct desc_info desc_421[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_421},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 420, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_421},
	{14, (BODY_INDEX)-1, 0, gen_type2_421},
	{15, (BODY_INDEX)-1, 420, NULL},
	{16, (BODY_INDEX)-1, 420, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_421},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 36, NULL},
	{21, (BODY_INDEX)-1, 341, NULL},
	{22, (BODY_INDEX)-1, 341, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 35, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 420, NULL},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 420, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14430, (BODY_INDEX)-1, 341, NULL},
	{14438, (BODY_INDEX)-1, 382, NULL},
	{14439, 16, 341, NULL},
	{14440, (BODY_INDEX)-1, 340, NULL},
	{14428, 0, 418, NULL},
	{14429, (BODY_INDEX)-1, 340, NULL},
	{14431, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14442, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14437, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14441, 8, 469, gen_type4_421},
	{14439, 16, 341, NULL},
};

extern void Init421(void);
void Init421(void)
{
	IDSC(desc_421, 0, 420);
	IDSC(desc_421 + 1, 4, 420);
	IDSC(desc_421 + 34, 106, 420);
	IDSC(desc_421 + 35, 362, 420);
	IDSC(desc_421 + 42, 360, 420);
}


#ifdef __cplusplus
}
#endif

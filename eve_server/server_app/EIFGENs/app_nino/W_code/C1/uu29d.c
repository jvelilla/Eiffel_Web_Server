/*
 * Class UUID_GENERATOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_29 [] = {454,28,0xFFFF};
static EIF_TYPE_INDEX gen_type1_29 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_29 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_29 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_29 [] = {1059,395,0xFFFF};


static struct desc_info desc_29[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 354, NULL},
	{1, (BODY_INDEX)-1, 454, gen_type0_29},
	{2, (BODY_INDEX)-1, 341, NULL},
	{3, (BODY_INDEX)-1, 341, NULL},
	{4, (BODY_INDEX)-1, 341, NULL},
	{5, (BODY_INDEX)-1, 341, NULL},
	{6, (BODY_INDEX)-1, 341, NULL},
	{7, (BODY_INDEX)-1, 341, NULL},
	{8, (BODY_INDEX)-1, 341, NULL},
	{9, (BODY_INDEX)-1, 341, NULL},
	{10, (BODY_INDEX)-1, 28, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_29},
	{14, (BODY_INDEX)-1, 0, gen_type2_29},
	{15, (BODY_INDEX)-1, 28, NULL},
	{16, (BODY_INDEX)-1, 28, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_29},
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
	{28, (BODY_INDEX)-1, 28, NULL},
	{29, (BODY_INDEX)-1, 344, NULL},
	{30, (BODY_INDEX)-1, 28, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{456, (BODY_INDEX)-1, 332, NULL},
	{457, (BODY_INDEX)-1, 419, NULL},
	{458, (BODY_INDEX)-1, 215, NULL},
	{459, (BODY_INDEX)-1, 1059, gen_type4_29},
	{460, (BODY_INDEX)-1, 395, NULL},
};

extern void Init29(void);
void Init29(void)
{
	IDSC(desc_29, 0, 28);
	IDSC(desc_29 + 1, 4, 28);
	IDSC(desc_29 + 34, 166, 28);
}


#ifdef __cplusplus
}
#endif
/*
 * Class HASH_TABLE_CURSOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_256 [] = {454,255,0xFFFF};
static EIF_TYPE_INDEX gen_type1_256 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_256 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_256 [] = {0,0xFFFF};


static struct desc_info desc_256[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 354, NULL},
	{1, (BODY_INDEX)-1, 454, gen_type0_256},
	{2, (BODY_INDEX)-1, 341, NULL},
	{3, (BODY_INDEX)-1, 341, NULL},
	{4, (BODY_INDEX)-1, 341, NULL},
	{5, (BODY_INDEX)-1, 341, NULL},
	{6, (BODY_INDEX)-1, 341, NULL},
	{7, (BODY_INDEX)-1, 341, NULL},
	{8, (BODY_INDEX)-1, 341, NULL},
	{9, (BODY_INDEX)-1, 341, NULL},
	{10, (BODY_INDEX)-1, 255, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_256},
	{14, (BODY_INDEX)-1, 0, gen_type2_256},
	{15, (BODY_INDEX)-1, 255, NULL},
	{16, (BODY_INDEX)-1, 255, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_256},
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
	{28, (BODY_INDEX)-1, 255, NULL},
	{29, (BODY_INDEX)-1, 344, NULL},
	{30, (BODY_INDEX)-1, 255, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4278, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4277, 0, 395, NULL},
};

extern void Init256(void);
void Init256(void)
{
	IDSC(desc_256, 0, 255);
	IDSC(desc_256 + 1, 4, 255);
	IDSC(desc_256 + 34, 223, 255);
}


#ifdef __cplusplus
}
#endif

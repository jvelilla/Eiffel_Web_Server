/*
 * Class NATIVE_ARRAY [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_511 [] = {441,510,382,0xFFFF};
static EIF_TYPE_INDEX gen_type1_511 [] = {510,382,0xFFFF};
static EIF_TYPE_INDEX gen_type2_511 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_511 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_511 [] = {510,382,0xFFFF};
static EIF_TYPE_INDEX gen_type5_511 [] = {510,382,0xFFFF};
static EIF_TYPE_INDEX gen_type6_511 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_511 [] = {510,382,0xFFFF};
static EIF_TYPE_INDEX gen_type8_511 [] = {510,382,0xFFFF};
static EIF_TYPE_INDEX gen_type9_511 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_511[] = {
	{(BODY_INDEX) 618, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_511},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 510, gen_type1_511},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_511},
	{14, (BODY_INDEX)-1, 0, gen_type3_511},
	{15, (BODY_INDEX)-1, 510, gen_type4_511},
	{16, (BODY_INDEX)-1, 510, gen_type5_511},
	{17, (BODY_INDEX)-1, 0, gen_type6_511},
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
	{28, (BODY_INDEX)-1, 510, gen_type7_511},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 510, gen_type8_511},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type9_511},
};

extern void Init511(void);
void Init511(void)
{
	IDSC(desc_511, 0, 510);
	IDSC(desc_511 + 1, 4, 510);
	IDSC(desc_511 + 34, 74, 510);
}


#ifdef __cplusplus
}
#endif

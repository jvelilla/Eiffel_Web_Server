/*
 * Class RT_DBG_COMMON
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_128 [] = {450,127,0xFFFF};
static EIF_TYPE_INDEX gen_type1_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_128 [] = {476,434,0xFFFF};


static struct desc_info desc_128[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_128},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{4, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 127, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_128},
	{14, (BODY_INDEX)-1, 0, gen_type2_128},
	{15, (BODY_INDEX)-1, 127, NULL},
	{16, (BODY_INDEX)-1, 127, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_128},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 38, NULL},
	{21, (BODY_INDEX)-1, 350, NULL},
	{22, (BODY_INDEX)-1, 350, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 37, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 127, NULL},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 127, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1919, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1918, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1957, (BODY_INDEX)-1, 476, gen_type4_128},
};

extern void Init128(void);
void Init128(void)
{
	IDSC(desc_128, 0, 127);
	IDSC(desc_128 + 1, 4, 127);
	IDSC(desc_128 + 34, 251, 127);
	IDSC(desc_128 + 36, 247, 127);
}


#ifdef __cplusplus
}
#endif

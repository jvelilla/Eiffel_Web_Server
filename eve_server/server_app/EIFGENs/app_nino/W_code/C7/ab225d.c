/*
 * Class ABSOLUTE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_225 [] = {450,224,0xFFFF};
static EIF_TYPE_INDEX gen_type1_225 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_225 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_225 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_225 [] = {572,224,0xFFFF};


static struct desc_info desc_225[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_225},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{3715, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 224, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_225},
	{14, (BODY_INDEX)-1, 0, gen_type2_225},
	{15, (BODY_INDEX)-1, 224, NULL},
	{16, (BODY_INDEX)-1, 224, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_225},
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
	{28, (BODY_INDEX)-1, 224, NULL},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 224, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3719, (BODY_INDEX)-1, 337, NULL},
	{3712, (BODY_INDEX)-1, 337, NULL},
	{3713, (BODY_INDEX)-1, 337, NULL},
	{3714, (BODY_INDEX)-1, 337, NULL},
	{3716, (BODY_INDEX)-1, 391, NULL},
	{3717, (BODY_INDEX)-1, 224, NULL},
	{3718, (BODY_INDEX)-1, 224, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 224, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 219, NULL},
	{3720, (BODY_INDEX)-1, 572, gen_type4_225},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 219, NULL},
};

extern void Init225(void);
void Init225(void)
{
	IDSC(desc_225, 0, 224);
	IDSC(desc_225 + 1, 4, 224);
	IDSC(desc_225 + 34, 105, 224);
	IDSC(desc_225 + 38, 186, 224);
	IDSC(desc_225 + 41, 337, 224);
}


#ifdef __cplusplus
}
#endif

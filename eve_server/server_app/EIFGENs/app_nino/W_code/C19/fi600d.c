/*
 * Class FINITE [NATURAL_64]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_600 [] = {450,599,400,0xFFFF};
static EIF_TYPE_INDEX gen_type1_600 [] = {599,400,0xFFFF};
static EIF_TYPE_INDEX gen_type2_600 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_600 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_600 [] = {599,400,0xFFFF};
static EIF_TYPE_INDEX gen_type5_600 [] = {599,400,0xFFFF};
static EIF_TYPE_INDEX gen_type6_600 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_600 [] = {599,400,0xFFFF};
static EIF_TYPE_INDEX gen_type8_600 [] = {599,400,0xFFFF};
static EIF_TYPE_INDEX gen_type9_600 [] = {591,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_600 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_600[] = {
	{(BODY_INDEX) 2784, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_600},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{4, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 599, gen_type1_600},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_600},
	{14, (BODY_INDEX)-1, 0, gen_type3_600},
	{15, (BODY_INDEX)-1, 599, gen_type4_600},
	{16, (BODY_INDEX)-1, 599, gen_type5_600},
	{17, (BODY_INDEX)-1, 0, gen_type6_600},
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
	{28, (BODY_INDEX)-1, 599, gen_type7_600},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 599, gen_type8_600},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 337, NULL},
	{2785, (BODY_INDEX)-1, 337, NULL},
	{2715, (BODY_INDEX)-1, 337, NULL},
	{2716, 0, 337, NULL},
	{2717, (BODY_INDEX)-1, 337, NULL},
	{2718, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2719, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 591, gen_type9_600},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_600},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 391, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 337, NULL},
};

extern void Init600(void);
void Init600(void)
{
	IDSC(desc_600, 0, 599);
	IDSC(desc_600 + 1, 4, 599);
	IDSC(desc_600 + 34, 358, 599);
	IDSC(desc_600 + 43, 353, 599);
	IDSC(desc_600 + 44, 437, 599);
}


#ifdef __cplusplus
}
#endif
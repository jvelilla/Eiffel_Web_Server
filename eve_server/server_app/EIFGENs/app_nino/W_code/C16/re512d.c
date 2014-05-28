/*
 * Class RESIZABLE [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_512 [] = {441,511,382,0xFFFF};
static EIF_TYPE_INDEX gen_type1_512 [] = {511,382,0xFFFF};
static EIF_TYPE_INDEX gen_type2_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_512 [] = {511,382,0xFFFF};
static EIF_TYPE_INDEX gen_type5_512 [] = {511,382,0xFFFF};
static EIF_TYPE_INDEX gen_type6_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_512 [] = {511,382,0xFFFF};
static EIF_TYPE_INDEX gen_type8_512 [] = {511,382,0xFFFF};
static EIF_TYPE_INDEX gen_type9_512 [] = {498,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_512 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_512[] = {
	{(BODY_INDEX) 2859, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_512},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 511, gen_type1_512},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_512},
	{14, (BODY_INDEX)-1, 0, gen_type3_512},
	{15, (BODY_INDEX)-1, 511, gen_type4_512},
	{16, (BODY_INDEX)-1, 511, gen_type5_512},
	{17, (BODY_INDEX)-1, 0, gen_type6_512},
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
	{28, (BODY_INDEX)-1, 511, gen_type7_512},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 511, gen_type8_512},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 328, NULL},
	{2790, (BODY_INDEX)-1, 328, NULL},
	{2715, (BODY_INDEX)-1, 328, NULL},
	{2716, 0, 328, NULL},
	{2717, (BODY_INDEX)-1, 328, NULL},
	{2718, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2719, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 498, gen_type9_512},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_512},
	{2820, (BODY_INDEX)-1, 328, NULL},
	{2854, (BODY_INDEX)-1, 382, NULL},
	{2855, (BODY_INDEX)-1, 382, NULL},
	{2856, (BODY_INDEX)-1, 382, NULL},
	{2858, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 382, NULL},
	{2857, (BODY_INDEX)-1, 328, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 382, NULL},
};

extern void Init512(void);
void Init512(void)
{
	IDSC(desc_512, 0, 511);
	IDSC(desc_512 + 1, 4, 511);
	IDSC(desc_512 + 34, 352, 511);
	IDSC(desc_512 + 43, 432, 511);
	IDSC(desc_512 + 44, 79, 511);
	IDSC(desc_512 + 50, 228, 511);
	IDSC(desc_512 + 52, 347, 511);
}


#ifdef __cplusplus
}
#endif

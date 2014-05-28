/*
 * Class BOUNDED [CHARACTER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_945 [] = {441,944,322,0xFFFF};
static EIF_TYPE_INDEX gen_type1_945 [] = {944,322,0xFFFF};
static EIF_TYPE_INDEX gen_type2_945 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_945 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_945 [] = {944,322,0xFFFF};
static EIF_TYPE_INDEX gen_type5_945 [] = {944,322,0xFFFF};
static EIF_TYPE_INDEX gen_type6_945 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_945 [] = {944,322,0xFFFF};
static EIF_TYPE_INDEX gen_type8_945 [] = {944,322,0xFFFF};
static EIF_TYPE_INDEX gen_type9_945 [] = {924,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_945 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_945[] = {
	{(BODY_INDEX) 2843, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_945},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 944, gen_type1_945},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_945},
	{14, (BODY_INDEX)-1, 0, gen_type3_945},
	{15, (BODY_INDEX)-1, 944, gen_type4_945},
	{16, (BODY_INDEX)-1, 944, gen_type5_945},
	{17, (BODY_INDEX)-1, 0, gen_type6_945},
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
	{28, (BODY_INDEX)-1, 944, gen_type7_945},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 944, gen_type8_945},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 328, NULL},
	{2812, (BODY_INDEX)-1, 328, NULL},
	{2770, (BODY_INDEX)-1, 328, NULL},
	{2771, 0, 328, NULL},
	{2772, (BODY_INDEX)-1, 328, NULL},
	{2773, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2774, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 924, gen_type9_945},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_945},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 382, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 328, NULL},
	{2842, (BODY_INDEX)-1, 328, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 382, NULL},
};

extern void Init945(void);
void Init945(void)
{
	IDSC(desc_945, 0, 944);
	IDSC(desc_945 + 1, 4, 944);
	IDSC(desc_945 + 34, 352, 944);
	IDSC(desc_945 + 43, 228, 944);
	IDSC(desc_945 + 45, 432, 944);
	IDSC(desc_945 + 46, 347, 944);
}


#ifdef __cplusplus
}
#endif

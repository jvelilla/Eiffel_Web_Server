/*
 * Class BOUNDED [CHARACTER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_945 [] = {490,944,370,0xFFFF};
static EIF_TYPE_INDEX gen_type1_945 [] = {944,370,0xFFFF};
static EIF_TYPE_INDEX gen_type2_945 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_945 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_945 [] = {944,370,0xFFFF};
static EIF_TYPE_INDEX gen_type5_945 [] = {944,370,0xFFFF};
static EIF_TYPE_INDEX gen_type6_945 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_945 [] = {944,370,0xFFFF};
static EIF_TYPE_INDEX gen_type8_945 [] = {944,370,0xFFFF};
static EIF_TYPE_INDEX gen_type9_945 [] = {946,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_945 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_945[] = {
	{(BODY_INDEX) 3249, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 389, NULL},
	{1, (BODY_INDEX)-1, 490, gen_type0_945},
	{2, (BODY_INDEX)-1, 376, NULL},
	{3, (BODY_INDEX)-1, 376, NULL},
	{4, (BODY_INDEX)-1, 376, NULL},
	{5, (BODY_INDEX)-1, 376, NULL},
	{6, (BODY_INDEX)-1, 376, NULL},
	{7, (BODY_INDEX)-1, 376, NULL},
	{8, (BODY_INDEX)-1, 376, NULL},
	{9, (BODY_INDEX)-1, 376, NULL},
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
	{20, (BODY_INDEX)-1, 45, NULL},
	{21, (BODY_INDEX)-1, 389, NULL},
	{22, (BODY_INDEX)-1, 389, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 44, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 944, gen_type7_945},
	{29, (BODY_INDEX)-1, 379, NULL},
	{30, (BODY_INDEX)-1, 944, gen_type8_945},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 376, NULL},
	{3218, (BODY_INDEX)-1, 376, NULL},
	{3173, (BODY_INDEX)-1, 376, NULL},
	{3174, 0, 376, NULL},
	{3175, (BODY_INDEX)-1, 376, NULL},
	{3176, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3177, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 946, gen_type9_945},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_945},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 430, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 376, NULL},
	{3248, (BODY_INDEX)-1, 376, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 430, NULL},
};

extern void Init945(void);
void Init945(void)
{
	IDSC(desc_945, 0, 944);
	IDSC(desc_945 + 1, 4, 944);
	IDSC(desc_945 + 34, 373, 944);
	IDSC(desc_945 + 43, 243, 944);
	IDSC(desc_945 + 45, 462, 944);
	IDSC(desc_945 + 46, 368, 944);
}


#ifdef __cplusplus
}
#endif

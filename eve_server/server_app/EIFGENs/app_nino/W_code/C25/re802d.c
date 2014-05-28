/*
 * Class READABLE_INDEXABLE [NATURAL_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_802 [] = {441,801,406,0xFFFF};
static EIF_TYPE_INDEX gen_type1_802 [] = {801,406,0xFFFF};
static EIF_TYPE_INDEX gen_type2_802 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_802 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_802 [] = {801,406,0xFFFF};
static EIF_TYPE_INDEX gen_type5_802 [] = {801,406,0xFFFF};
static EIF_TYPE_INDEX gen_type6_802 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_802 [] = {801,406,0xFFFF};
static EIF_TYPE_INDEX gen_type8_802 [] = {801,406,0xFFFF};
static EIF_TYPE_INDEX gen_type9_802 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_802 [] = {802,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_802 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_802[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_802},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 801, gen_type1_802},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_802},
	{14, (BODY_INDEX)-1, 0, gen_type3_802},
	{15, (BODY_INDEX)-1, 801, gen_type4_802},
	{16, (BODY_INDEX)-1, 801, gen_type5_802},
	{17, (BODY_INDEX)-1, 0, gen_type6_802},
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
	{28, (BODY_INDEX)-1, 801, gen_type7_802},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 801, gen_type8_802},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type9_802},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 283, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 328, NULL},
	{5255, (BODY_INDEX)-1, 802, gen_type10_802},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_802},
};

extern void Init802(void);
void Init802(void)
{
	IDSC(desc_802, 0, 801);
	IDSC(desc_802 + 1, 4, 801);
	IDSC(desc_802 + 34, 76, 801);
	IDSC(desc_802 + 37, 83, 801);
}


#ifdef __cplusplus
}
#endif

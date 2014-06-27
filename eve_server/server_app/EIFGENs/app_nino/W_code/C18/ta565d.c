/*
 * Class TABLE_ITERABLE [INTEGER_32, INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_565 [] = {490,564,430,430,0xFFFF};
static EIF_TYPE_INDEX gen_type1_565 [] = {564,430,430,0xFFFF};
static EIF_TYPE_INDEX gen_type2_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_565 [] = {564,430,430,0xFFFF};
static EIF_TYPE_INDEX gen_type5_565 [] = {564,430,430,0xFFFF};
static EIF_TYPE_INDEX gen_type6_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_565 [] = {564,430,430,0xFFFF};
static EIF_TYPE_INDEX gen_type8_565 [] = {564,430,430,0xFFFF};
static EIF_TYPE_INDEX gen_type9_565 [] = {559,0xFFF8,1,0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX gen_type10_565 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_565 [] = {0xFFF8,2,0xFFFF};


static struct desc_info desc_565[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 389, NULL},
	{1, (BODY_INDEX)-1, 490, gen_type0_565},
	{2, (BODY_INDEX)-1, 376, NULL},
	{3, (BODY_INDEX)-1, 376, NULL},
	{4, (BODY_INDEX)-1, 376, NULL},
	{5, (BODY_INDEX)-1, 376, NULL},
	{6, (BODY_INDEX)-1, 376, NULL},
	{7, (BODY_INDEX)-1, 376, NULL},
	{8, (BODY_INDEX)-1, 376, NULL},
	{9, (BODY_INDEX)-1, 376, NULL},
	{10, (BODY_INDEX)-1, 564, gen_type1_565},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_565},
	{14, (BODY_INDEX)-1, 0, gen_type3_565},
	{15, (BODY_INDEX)-1, 564, gen_type4_565},
	{16, (BODY_INDEX)-1, 564, gen_type5_565},
	{17, (BODY_INDEX)-1, 0, gen_type6_565},
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
	{28, (BODY_INDEX)-1, 564, gen_type7_565},
	{29, (BODY_INDEX)-1, 379, NULL},
	{30, (BODY_INDEX)-1, 564, gen_type8_565},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 559, gen_type9_565},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_565},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_565},
};

extern void Init565(void);
void Init565(void)
{
	IDSC(desc_565, 0, 564);
	IDSC(desc_565 + 1, 4, 564);
	IDSC(desc_565 + 34, 83, 564);
	IDSC(desc_565 + 36, 145, 564);
}


#ifdef __cplusplus
}
#endif

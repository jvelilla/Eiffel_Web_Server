/*
 * Class FINITE [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_999 [] = {490,998,448,0xFFFF};
static EIF_TYPE_INDEX gen_type1_999 [] = {998,448,0xFFFF};
static EIF_TYPE_INDEX gen_type2_999 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_999 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_999 [] = {998,448,0xFFFF};
static EIF_TYPE_INDEX gen_type5_999 [] = {998,448,0xFFFF};
static EIF_TYPE_INDEX gen_type6_999 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_999 [] = {998,448,0xFFFF};
static EIF_TYPE_INDEX gen_type8_999 [] = {998,448,0xFFFF};
static EIF_TYPE_INDEX gen_type9_999 [] = {999,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_999 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_999[] = {
	{(BODY_INDEX) 3221, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 389, NULL},
	{1, (BODY_INDEX)-1, 490, gen_type0_999},
	{2, (BODY_INDEX)-1, 376, NULL},
	{3, (BODY_INDEX)-1, 376, NULL},
	{4, (BODY_INDEX)-1, 376, NULL},
	{5, (BODY_INDEX)-1, 376, NULL},
	{6, (BODY_INDEX)-1, 376, NULL},
	{7, (BODY_INDEX)-1, 376, NULL},
	{8, (BODY_INDEX)-1, 376, NULL},
	{9, (BODY_INDEX)-1, 376, NULL},
	{10, (BODY_INDEX)-1, 998, gen_type1_999},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_999},
	{14, (BODY_INDEX)-1, 0, gen_type3_999},
	{15, (BODY_INDEX)-1, 998, gen_type4_999},
	{16, (BODY_INDEX)-1, 998, gen_type5_999},
	{17, (BODY_INDEX)-1, 0, gen_type6_999},
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
	{28, (BODY_INDEX)-1, 998, gen_type7_999},
	{29, (BODY_INDEX)-1, 379, NULL},
	{30, (BODY_INDEX)-1, 998, gen_type8_999},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 376, NULL},
	{3220, (BODY_INDEX)-1, 376, NULL},
	{3178, (BODY_INDEX)-1, 376, NULL},
	{3179, 0, 376, NULL},
	{3180, (BODY_INDEX)-1, 376, NULL},
	{3181, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3182, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 999, gen_type9_999},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_999},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 430, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 376, NULL},
};

extern void Init999(void);
void Init999(void)
{
	IDSC(desc_999, 0, 998);
	IDSC(desc_999 + 1, 4, 998);
	IDSC(desc_999 + 34, 373, 998);
	IDSC(desc_999 + 43, 368, 998);
	IDSC(desc_999 + 44, 462, 998);
}


#ifdef __cplusplus
}
#endif

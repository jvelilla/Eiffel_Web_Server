/*
 * Class TO_SPECIAL [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_521 [] = {446,520,387,0xFFFF};
static EIF_TYPE_INDEX gen_type1_521 [] = {520,387,0xFFFF};
static EIF_TYPE_INDEX gen_type2_521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_521 [] = {520,387,0xFFFF};
static EIF_TYPE_INDEX gen_type5_521 [] = {520,387,0xFFFF};
static EIF_TYPE_INDEX gen_type6_521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_521 [] = {520,387,0xFFFF};
static EIF_TYPE_INDEX gen_type8_521 [] = {520,387,0xFFFF};
static EIF_TYPE_INDEX gen_type9_521 [] = {521,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_521 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_521 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type12_521 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_521[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 346, NULL},
	{1, (BODY_INDEX)-1, 446, gen_type0_521},
	{2, (BODY_INDEX)-1, 333, NULL},
	{3, (BODY_INDEX)-1, 333, NULL},
	{4, (BODY_INDEX)-1, 333, NULL},
	{5, (BODY_INDEX)-1, 333, NULL},
	{6, (BODY_INDEX)-1, 333, NULL},
	{7, (BODY_INDEX)-1, 333, NULL},
	{8, (BODY_INDEX)-1, 333, NULL},
	{9, (BODY_INDEX)-1, 333, NULL},
	{10, (BODY_INDEX)-1, 520, gen_type1_521},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_521},
	{14, (BODY_INDEX)-1, 0, gen_type3_521},
	{15, (BODY_INDEX)-1, 520, gen_type4_521},
	{16, (BODY_INDEX)-1, 520, gen_type5_521},
	{17, (BODY_INDEX)-1, 0, gen_type6_521},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 37, NULL},
	{21, (BODY_INDEX)-1, 346, NULL},
	{22, (BODY_INDEX)-1, 346, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 36, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 520, gen_type7_521},
	{29, (BODY_INDEX)-1, 336, NULL},
	{30, (BODY_INDEX)-1, 520, gen_type8_521},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4096, 0, 521, gen_type9_521},
	{4097, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4098, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4099, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_521},
	{4100, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_521},
	{4101, (BODY_INDEX)-1, 333, NULL},
	{4102, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4103, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type12_521},
};

extern void Init521(void);
void Init521(void)
{
	IDSC(desc_521, 0, 520);
	IDSC(desc_521 + 1, 4, 520);
	IDSC(desc_521 + 34, 81, 520);
}


#ifdef __cplusplus
}
#endif

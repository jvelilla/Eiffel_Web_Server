/*
 * Class CELL [NATURAL_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_900 [] = {446,899,411,0xFFFF};
static EIF_TYPE_INDEX gen_type1_900 [] = {899,411,0xFFFF};
static EIF_TYPE_INDEX gen_type2_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_900 [] = {899,411,0xFFFF};
static EIF_TYPE_INDEX gen_type5_900 [] = {899,411,0xFFFF};
static EIF_TYPE_INDEX gen_type6_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_900 [] = {899,411,0xFFFF};
static EIF_TYPE_INDEX gen_type8_900 [] = {899,411,0xFFFF};
static EIF_TYPE_INDEX gen_type9_900 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_900 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_900[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 346, NULL},
	{1, (BODY_INDEX)-1, 446, gen_type0_900},
	{2, (BODY_INDEX)-1, 333, NULL},
	{3, (BODY_INDEX)-1, 333, NULL},
	{4, (BODY_INDEX)-1, 333, NULL},
	{5, (BODY_INDEX)-1, 333, NULL},
	{6, (BODY_INDEX)-1, 333, NULL},
	{7, (BODY_INDEX)-1, 333, NULL},
	{8, (BODY_INDEX)-1, 333, NULL},
	{9, (BODY_INDEX)-1, 333, NULL},
	{10, (BODY_INDEX)-1, 899, gen_type1_900},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_900},
	{14, (BODY_INDEX)-1, 0, gen_type3_900},
	{15, (BODY_INDEX)-1, 899, gen_type4_900},
	{16, (BODY_INDEX)-1, 899, gen_type5_900},
	{17, (BODY_INDEX)-1, 0, gen_type6_900},
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
	{28, (BODY_INDEX)-1, 899, gen_type7_900},
	{29, (BODY_INDEX)-1, 336, NULL},
	{30, (BODY_INDEX)-1, 899, gen_type8_900},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3524, 0, (EIF_TYPE_INDEX)-1, gen_type9_900},
	{3525, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3526, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_900},
};

extern void Init900(void);
void Init900(void)
{
	IDSC(desc_900, 0, 899);
	IDSC(desc_900 + 1, 4, 899);
	IDSC(desc_900 + 34, 108, 899);
}


#ifdef __cplusplus
}
#endif

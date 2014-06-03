/*
 * Class DISPENSER [BOOLEAN]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_650 [] = {446,649,333,0xFFFF};
static EIF_TYPE_INDEX gen_type1_650 [] = {649,333,0xFFFF};
static EIF_TYPE_INDEX gen_type2_650 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_650 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_650 [] = {649,333,0xFFFF};
static EIF_TYPE_INDEX gen_type5_650 [] = {649,333,0xFFFF};
static EIF_TYPE_INDEX gen_type6_650 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_650 [] = {649,333,0xFFFF};
static EIF_TYPE_INDEX gen_type8_650 [] = {649,333,0xFFFF};
static EIF_TYPE_INDEX gen_type9_650 [] = {612,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_650 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_650 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_650[] = {
	{(BODY_INDEX) 3020, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 346, NULL},
	{1, (BODY_INDEX)-1, 446, gen_type0_650},
	{2, (BODY_INDEX)-1, 333, NULL},
	{3, (BODY_INDEX)-1, 333, NULL},
	{4, (BODY_INDEX)-1, 333, NULL},
	{5, (BODY_INDEX)-1, 333, NULL},
	{6, (BODY_INDEX)-1, 333, NULL},
	{7, (BODY_INDEX)-1, 333, NULL},
	{8, (BODY_INDEX)-1, 333, NULL},
	{9, (BODY_INDEX)-1, 333, NULL},
	{10, (BODY_INDEX)-1, 649, gen_type1_650},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_650},
	{14, (BODY_INDEX)-1, 0, gen_type3_650},
	{15, (BODY_INDEX)-1, 649, gen_type4_650},
	{16, (BODY_INDEX)-1, 649, gen_type5_650},
	{17, (BODY_INDEX)-1, 0, gen_type6_650},
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
	{28, (BODY_INDEX)-1, 649, gen_type7_650},
	{29, (BODY_INDEX)-1, 336, NULL},
	{30, (BODY_INDEX)-1, 649, gen_type8_650},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 333, NULL},
	{2778, (BODY_INDEX)-1, 333, NULL},
	{2712, (BODY_INDEX)-1, 333, NULL},
	{2713, 0, 333, NULL},
	{2714, (BODY_INDEX)-1, 333, NULL},
	{2715, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2716, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 612, gen_type9_650},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_650},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 333, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 333, NULL},
	{2932, (BODY_INDEX)-1, 333, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2933, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2934, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_650},
	{3017, (BODY_INDEX)-1, 333, NULL},
	{3018, (BODY_INDEX)-1, 333, NULL},
	{2991, (BODY_INDEX)-1, 333, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3019, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 387, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 387, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 333, NULL},
};

extern void Init650(void);
void Init650(void)
{
	IDSC(desc_650, 0, 649);
	IDSC(desc_650 + 1, 4, 649);
	IDSC(desc_650 + 34, 353, 649);
	IDSC(desc_650 + 43, 351, 649);
	IDSC(desc_650 + 52, 346, 649);
	IDSC(desc_650 + 58, 432, 649);
	IDSC(desc_650 + 60, 350, 649);
	IDSC(desc_650 + 61, 348, 649);
	IDSC(desc_650 + 62, 433, 649);
}


#ifdef __cplusplus
}
#endif

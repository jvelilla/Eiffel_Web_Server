/*
 * Class CONTAINER [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1000 [] = {446,999,405,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1000 [] = {999,405,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1000 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1000 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1000 [] = {999,405,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1000 [] = {999,405,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1000 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1000 [] = {999,405,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1000 [] = {999,405,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1000 [] = {994,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1000 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_1000[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 346, NULL},
	{1, (BODY_INDEX)-1, 446, gen_type0_1000},
	{2, (BODY_INDEX)-1, 333, NULL},
	{3, (BODY_INDEX)-1, 333, NULL},
	{4, (BODY_INDEX)-1, 333, NULL},
	{5, (BODY_INDEX)-1, 333, NULL},
	{6, (BODY_INDEX)-1, 333, NULL},
	{7, (BODY_INDEX)-1, 333, NULL},
	{8, (BODY_INDEX)-1, 333, NULL},
	{9, (BODY_INDEX)-1, 333, NULL},
	{10, (BODY_INDEX)-1, 999, gen_type1_1000},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_1000},
	{14, (BODY_INDEX)-1, 0, gen_type3_1000},
	{15, (BODY_INDEX)-1, 999, gen_type4_1000},
	{16, (BODY_INDEX)-1, 999, gen_type5_1000},
	{17, (BODY_INDEX)-1, 0, gen_type6_1000},
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
	{28, (BODY_INDEX)-1, 999, gen_type7_1000},
	{29, (BODY_INDEX)-1, 336, NULL},
	{30, (BODY_INDEX)-1, 999, gen_type8_1000},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 333, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 333, NULL},
	{2757, (BODY_INDEX)-1, 333, NULL},
	{2758, 0, 333, NULL},
	{2759, (BODY_INDEX)-1, 333, NULL},
	{2760, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2761, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 994, gen_type9_1000},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_1000},
};

extern void Init1000(void);
void Init1000(void)
{
	IDSC(desc_1000, 0, 999);
	IDSC(desc_1000 + 1, 4, 999);
	IDSC(desc_1000 + 34, 353, 999);
}


#ifdef __cplusplus
}
#endif

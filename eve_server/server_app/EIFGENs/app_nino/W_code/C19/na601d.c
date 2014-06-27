/*
 * Class NATIVE_ARRAY [REAL_64]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_601 [] = {490,600,451,0xFFFF};
static EIF_TYPE_INDEX gen_type1_601 [] = {600,451,0xFFFF};
static EIF_TYPE_INDEX gen_type2_601 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_601 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_601 [] = {600,451,0xFFFF};
static EIF_TYPE_INDEX gen_type5_601 [] = {600,451,0xFFFF};
static EIF_TYPE_INDEX gen_type6_601 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_601 [] = {600,451,0xFFFF};
static EIF_TYPE_INDEX gen_type8_601 [] = {600,451,0xFFFF};
static EIF_TYPE_INDEX gen_type9_601 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_601[] = {
	{(BODY_INDEX) 713, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 389, NULL},
	{1, (BODY_INDEX)-1, 490, gen_type0_601},
	{2, (BODY_INDEX)-1, 376, NULL},
	{3, (BODY_INDEX)-1, 376, NULL},
	{4, (BODY_INDEX)-1, 376, NULL},
	{5, (BODY_INDEX)-1, 376, NULL},
	{6, (BODY_INDEX)-1, 376, NULL},
	{7, (BODY_INDEX)-1, 376, NULL},
	{8, (BODY_INDEX)-1, 376, NULL},
	{9, (BODY_INDEX)-1, 376, NULL},
	{10, (BODY_INDEX)-1, 600, gen_type1_601},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_601},
	{14, (BODY_INDEX)-1, 0, gen_type3_601},
	{15, (BODY_INDEX)-1, 600, gen_type4_601},
	{16, (BODY_INDEX)-1, 600, gen_type5_601},
	{17, (BODY_INDEX)-1, 0, gen_type6_601},
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
	{28, (BODY_INDEX)-1, 600, gen_type7_601},
	{29, (BODY_INDEX)-1, 379, NULL},
	{30, (BODY_INDEX)-1, 600, gen_type8_601},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type9_601},
};

extern void Init601(void);
void Init601(void)
{
	IDSC(desc_601, 0, 600);
	IDSC(desc_601 + 1, 4, 600);
	IDSC(desc_601 + 34, 74, 600);
}


#ifdef __cplusplus
}
#endif

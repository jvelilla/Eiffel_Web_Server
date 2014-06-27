/*
 * Class THREAD_ENVIRONMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_25 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_25 [] = {0xFF11,180,0xFF12,24,0xFFFF};
static EIF_TYPE_INDEX gen_type2_25 [] = {0xFF11,24,0xFFFF};
static EIF_TYPE_INDEX gen_type3_25 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_25 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_25 [] = {0xFF11,24,0xFFFF};
static EIF_TYPE_INDEX gen_type6_25 [] = {0xFF11,24,0xFFFF};
static EIF_TYPE_INDEX gen_type7_25 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_25 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_25 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_25 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_25 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_25 [] = {0xFF11,24,0xFFFF};


static struct desc_info desc_25[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_25},
	{1, (BODY_INDEX)-1, 180, gen_type1_25},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 24, gen_type2_25},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_25},
	{14, (BODY_INDEX)-1, 0, gen_type4_25},
	{15, (BODY_INDEX)-1, 24, gen_type5_25},
	{16, (BODY_INDEX)-1, 24, gen_type6_25},
	{17, (BODY_INDEX)-1, 0, gen_type7_25},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_25},
	{21, (BODY_INDEX)-1, 170, gen_type9_25},
	{22, (BODY_INDEX)-1, 170, gen_type10_25},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_25},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 24, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 24, gen_type12_25},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{694, (BODY_INDEX)-1, 160, NULL},
	{695, (BODY_INDEX)-1, 160, NULL},
};

extern void Init25(void);
void Init25(void)
{
	IDSC(desc_25, 0, 24);
	IDSC(desc_25 + 1, 2, 24);
	IDSC(desc_25 + 34, 208, 24);
}


#ifdef __cplusplus
}
#endif

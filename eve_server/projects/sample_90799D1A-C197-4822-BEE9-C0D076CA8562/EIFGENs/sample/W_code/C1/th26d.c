/*
 * Class THREAD_CONTROL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_26 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_26 [] = {0xFF11,180,0xFF12,25,0xFFFF};
static EIF_TYPE_INDEX gen_type2_26 [] = {0xFF11,25,0xFFFF};
static EIF_TYPE_INDEX gen_type3_26 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_26 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_26 [] = {0xFF11,25,0xFFFF};
static EIF_TYPE_INDEX gen_type6_26 [] = {0xFF11,25,0xFFFF};
static EIF_TYPE_INDEX gen_type7_26 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_26 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_26 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_26 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_26 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_26 [] = {0xFF11,25,0xFFFF};


static struct desc_info desc_26[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_26},
	{1, (BODY_INDEX)-1, 180, gen_type1_26},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 25, gen_type2_26},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_26},
	{14, (BODY_INDEX)-1, 0, gen_type4_26},
	{15, (BODY_INDEX)-1, 25, gen_type5_26},
	{16, (BODY_INDEX)-1, 25, gen_type6_26},
	{17, (BODY_INDEX)-1, 0, gen_type7_26},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_26},
	{21, (BODY_INDEX)-1, 170, gen_type9_26},
	{22, (BODY_INDEX)-1, 170, gen_type10_26},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_26},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 25, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 25, gen_type12_26},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{694, (BODY_INDEX)-1, 160, NULL},
	{695, (BODY_INDEX)-1, 160, NULL},
	{696, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{697, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init26(void);
void Init26(void)
{
	IDSC(desc_26, 0, 25);
	IDSC(desc_26 + 1, 2, 25);
	IDSC(desc_26 + 34, 208, 25);
	IDSC(desc_26 + 36, 177, 25);
}


#ifdef __cplusplus
}
#endif

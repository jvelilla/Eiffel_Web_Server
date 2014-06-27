/*
 * Class ITERABLE [POINTER]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_255 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_255 [] = {0xFF11,180,0xFF12,254,160,0xFFFF};
static EIF_TYPE_INDEX gen_type2_255 [] = {0xFF11,254,160,0xFFFF};
static EIF_TYPE_INDEX gen_type3_255 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_255 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_255 [] = {0xFF11,254,160,0xFFFF};
static EIF_TYPE_INDEX gen_type6_255 [] = {0xFF11,254,160,0xFFFF};
static EIF_TYPE_INDEX gen_type7_255 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_255 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_255 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_255 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_255 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_255 [] = {254,160,0xFFFF};
static EIF_TYPE_INDEX gen_type13_255 [] = {0xFF11,254,160,0xFFFF};
static EIF_TYPE_INDEX gen_type14_255 [] = {0xFF11,255,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_255 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_255[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_255},
	{1, (BODY_INDEX)-1, 180, gen_type1_255},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 254, gen_type2_255},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_255},
	{14, (BODY_INDEX)-1, 0, gen_type4_255},
	{15, (BODY_INDEX)-1, 254, gen_type5_255},
	{16, (BODY_INDEX)-1, 254, gen_type6_255},
	{17, (BODY_INDEX)-1, 0, gen_type7_255},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_255},
	{21, (BODY_INDEX)-1, 170, gen_type9_255},
	{22, (BODY_INDEX)-1, 170, gen_type10_255},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_255},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 254, gen_type12_255},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 254, gen_type13_255},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 255, gen_type14_255},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_255},
};

extern void Init255(void);
void Init255(void)
{
	IDSC(desc_255, 0, 254);
	IDSC(desc_255 + 1, 2, 254);
	IDSC(desc_255 + 34, 65, 254);
}


#ifdef __cplusplus
}
#endif

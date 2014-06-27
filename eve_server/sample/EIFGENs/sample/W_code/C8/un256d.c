/*
 * Class UNBOUNDED [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_256 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_256 [] = {0xFF11,180,0xFF12,255,121,0xFFFF};
static EIF_TYPE_INDEX gen_type2_256 [] = {0xFF11,255,121,0xFFFF};
static EIF_TYPE_INDEX gen_type3_256 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_256 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_256 [] = {0xFF11,255,121,0xFFFF};
static EIF_TYPE_INDEX gen_type6_256 [] = {0xFF11,255,121,0xFFFF};
static EIF_TYPE_INDEX gen_type7_256 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_256 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_256 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_256 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_256 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_256 [] = {255,121,0xFFFF};
static EIF_TYPE_INDEX gen_type13_256 [] = {0xFF11,255,121,0xFFFF};
static EIF_TYPE_INDEX gen_type14_256 [] = {0xFF11,228,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_256 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_256[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_256},
	{1, (BODY_INDEX)-1, 180, gen_type1_256},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 255, gen_type2_256},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_256},
	{14, (BODY_INDEX)-1, 0, gen_type4_256},
	{15, (BODY_INDEX)-1, 255, gen_type5_256},
	{16, (BODY_INDEX)-1, 255, gen_type6_256},
	{17, (BODY_INDEX)-1, 0, gen_type7_256},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_256},
	{21, (BODY_INDEX)-1, 170, gen_type9_256},
	{22, (BODY_INDEX)-1, 170, gen_type10_256},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_256},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 255, gen_type12_256},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 255, gen_type13_256},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{1474, (BODY_INDEX)-1, 154, NULL},
	{1161, (BODY_INDEX)-1, 154, NULL},
	{1162, 0, 154, NULL},
	{1163, (BODY_INDEX)-1, 154, NULL},
	{1164, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1165, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 228, gen_type14_256},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_256},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
};

extern void Init256(void);
void Init256(void)
{
	IDSC(desc_256, 0, 255);
	IDSC(desc_256 + 1, 2, 255);
	IDSC(desc_256 + 34, 184, 255);
	IDSC(desc_256 + 43, 186, 255);
	IDSC(desc_256 + 44, 210, 255);
}


#ifdef __cplusplus
}
#endif

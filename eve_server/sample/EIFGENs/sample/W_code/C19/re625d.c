/*
 * Class RESIZABLE [BOOLEAN]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_625 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_625 [] = {0xFF11,180,0xFF12,624,154,0xFFFF};
static EIF_TYPE_INDEX gen_type2_625 [] = {0xFF11,624,154,0xFFFF};
static EIF_TYPE_INDEX gen_type3_625 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_625 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_625 [] = {0xFF11,624,154,0xFFFF};
static EIF_TYPE_INDEX gen_type6_625 [] = {0xFF11,624,154,0xFFFF};
static EIF_TYPE_INDEX gen_type7_625 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_625 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_625 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_625 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_625 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_625 [] = {624,154,0xFFFF};
static EIF_TYPE_INDEX gen_type13_625 [] = {0xFF11,624,154,0xFFFF};
static EIF_TYPE_INDEX gen_type14_625 [] = {0xFF11,617,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_625 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_625[] = {
	{(BODY_INDEX) 1584, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_625},
	{1, (BODY_INDEX)-1, 180, gen_type1_625},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 624, gen_type2_625},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_625},
	{14, (BODY_INDEX)-1, 0, gen_type4_625},
	{15, (BODY_INDEX)-1, 624, gen_type5_625},
	{16, (BODY_INDEX)-1, 624, gen_type6_625},
	{17, (BODY_INDEX)-1, 0, gen_type7_625},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_625},
	{21, (BODY_INDEX)-1, 170, gen_type9_625},
	{22, (BODY_INDEX)-1, 170, gen_type10_625},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_625},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 624, gen_type12_625},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 624, gen_type13_625},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{1492, (BODY_INDEX)-1, 154, NULL},
	{1206, (BODY_INDEX)-1, 154, NULL},
	{1207, 0, 154, NULL},
	{1208, (BODY_INDEX)-1, 154, NULL},
	{1209, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1210, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 617, gen_type14_625},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_625},
	{1515, (BODY_INDEX)-1, 154, NULL},
	{1579, (BODY_INDEX)-1, 121, NULL},
	{1580, (BODY_INDEX)-1, 121, NULL},
	{1581, (BODY_INDEX)-1, 121, NULL},
	{1583, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
	{1582, (BODY_INDEX)-1, 154, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
};

extern void Init625(void);
void Init625(void)
{
	IDSC(desc_625, 0, 624);
	IDSC(desc_625 + 1, 2, 624);
	IDSC(desc_625 + 34, 184, 624);
	IDSC(desc_625 + 43, 210, 624);
	IDSC(desc_625 + 44, 46, 624);
	IDSC(desc_625 + 50, 130, 624);
	IDSC(desc_625 + 52, 186, 624);
}


#ifdef __cplusplus
}
#endif

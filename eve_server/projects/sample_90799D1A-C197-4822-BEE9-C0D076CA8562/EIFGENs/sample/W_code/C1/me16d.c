/*
 * Class MEMORY_STRUCTURE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_16 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_16 [] = {0xFF11,180,0xFF12,15,0xFFFF};
static EIF_TYPE_INDEX gen_type2_16 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type3_16 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_16 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_16 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type6_16 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type7_16 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_16 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_16 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_16 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_16 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_16 [] = {0xFF11,15,0xFFFF};


static struct desc_info desc_16[] = {
	{(BODY_INDEX) 513, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_16},
	{1, (BODY_INDEX)-1, 180, gen_type1_16},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 15, gen_type2_16},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_16},
	{14, (BODY_INDEX)-1, 0, gen_type4_16},
	{15, (BODY_INDEX)-1, 15, gen_type5_16},
	{16, (BODY_INDEX)-1, 15, gen_type6_16},
	{17, (BODY_INDEX)-1, 0, gen_type7_16},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_16},
	{21, (BODY_INDEX)-1, 170, gen_type9_16},
	{22, (BODY_INDEX)-1, 170, gen_type10_16},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_16},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 15, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 15, gen_type12_16},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{514, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{515, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{516, 8, 157, NULL},
	{517, (BODY_INDEX)-1, 160, NULL},
	{510, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
	{511, 16, 160, NULL},
	{512, 0, 86, NULL},
};

extern void Init16(void);
void Init16(void)
{
	IDSC(desc_16, 0, 15);
	IDSC(desc_16 + 1, 2, 15);
	IDSC(desc_16 + 34, 207, 15);
}


#ifdef __cplusplus
}
#endif

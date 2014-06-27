/*
 * Class BOX [CHARACTER_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_380 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_380 [] = {0xFF11,180,0xFF12,379,151,0xFFFF};
static EIF_TYPE_INDEX gen_type2_380 [] = {0xFF11,379,151,0xFFFF};
static EIF_TYPE_INDEX gen_type3_380 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_380 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_380 [] = {0xFF11,379,151,0xFFFF};
static EIF_TYPE_INDEX gen_type6_380 [] = {0xFF11,379,151,0xFFFF};
static EIF_TYPE_INDEX gen_type7_380 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_380 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_380 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_380 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_380 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_380 [] = {379,151,0xFFFF};
static EIF_TYPE_INDEX gen_type13_380 [] = {0xFF11,379,151,0xFFFF};
static EIF_TYPE_INDEX gen_type14_380 [] = {0xFF11,291,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_380 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_380[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_380},
	{1, (BODY_INDEX)-1, 180, gen_type1_380},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 379, gen_type2_380},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_380},
	{14, (BODY_INDEX)-1, 0, gen_type4_380},
	{15, (BODY_INDEX)-1, 379, gen_type5_380},
	{16, (BODY_INDEX)-1, 379, gen_type6_380},
	{17, (BODY_INDEX)-1, 0, gen_type7_380},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_380},
	{21, (BODY_INDEX)-1, 170, gen_type9_380},
	{22, (BODY_INDEX)-1, 170, gen_type10_380},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_380},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 379, gen_type12_380},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 379, gen_type13_380},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{1171, (BODY_INDEX)-1, 154, NULL},
	{1172, 0, 154, NULL},
	{1173, (BODY_INDEX)-1, 154, NULL},
	{1174, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1175, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 291, gen_type14_380},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_380},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
};

extern void Init380(void);
void Init380(void)
{
	IDSC(desc_380, 0, 379);
	IDSC(desc_380 + 1, 2, 379);
	IDSC(desc_380 + 34, 184, 379);
	IDSC(desc_380 + 43, 210, 379);
}


#ifdef __cplusplus
}
#endif

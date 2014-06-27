/*
 * Class MUTEX
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_86 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_86 [] = {0xFF11,180,0xFF12,85,0xFFFF};
static EIF_TYPE_INDEX gen_type2_86 [] = {0xFF11,85,0xFFFF};
static EIF_TYPE_INDEX gen_type3_86 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_86 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_86 [] = {0xFF11,85,0xFFFF};
static EIF_TYPE_INDEX gen_type6_86 [] = {0xFF11,85,0xFFFF};
static EIF_TYPE_INDEX gen_type7_86 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_86 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_86 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_86 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_86 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_86 [] = {0xFF11,85,0xFFFF};
static EIF_TYPE_INDEX gen_type13_86 [] = {160,0xFFFF};


static struct desc_info desc_86[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_86},
	{1, (BODY_INDEX)-1, 180, gen_type1_86},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 85, gen_type2_86},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_86},
	{14, (BODY_INDEX)-1, 0, gen_type4_86},
	{15, (BODY_INDEX)-1, 85, gen_type5_86},
	{16, (BODY_INDEX)-1, 85, gen_type6_86},
	{17, (BODY_INDEX)-1, 0, gen_type7_86},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_86},
	{21, (BODY_INDEX)-1, 170, gen_type9_86},
	{22, (BODY_INDEX)-1, 170, gen_type10_86},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_86},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 85, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 85, gen_type12_86},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1060, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1050, (BODY_INDEX)-1, 157, NULL},
	{694, (BODY_INDEX)-1, 160, NULL},
	{695, (BODY_INDEX)-1, 160, NULL},
	{1051, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1052, 0, 160, gen_type13_86},
	{1053, (BODY_INDEX)-1, 157, NULL},
	{1054, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1055, (BODY_INDEX)-1, 157, NULL},
	{1056, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1057, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1058, (BODY_INDEX)-1, 157, NULL},
	{1059, (BODY_INDEX)-1, 157, NULL},
	{1061, 8, 160, NULL},
	{1062, (BODY_INDEX)-1, 160, NULL},
	{1063, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1064, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1065, (BODY_INDEX)-1, 157, NULL},
	{1066, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init86(void);
void Init86(void)
{
	IDSC(desc_86, 0, 85);
	IDSC(desc_86 + 1, 2, 85);
	IDSC(desc_86 + 34, 203, 85);
	IDSC(desc_86 + 36, 208, 85);
	IDSC(desc_86 + 38, 176, 85);
}


#ifdef __cplusplus
}
#endif

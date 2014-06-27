/*
 * Class DISPOSABLE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_85 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_85 [] = {0xFF11,180,0xFF12,84,0xFFFF};
static EIF_TYPE_INDEX gen_type2_85 [] = {0xFF11,84,0xFFFF};
static EIF_TYPE_INDEX gen_type3_85 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_85 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_85 [] = {0xFF11,84,0xFFFF};
static EIF_TYPE_INDEX gen_type6_85 [] = {0xFF11,84,0xFFFF};
static EIF_TYPE_INDEX gen_type7_85 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_85 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_85 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_85 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_85 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_85 [] = {0xFF11,84,0xFFFF};


static struct desc_info desc_85[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_85},
	{1, (BODY_INDEX)-1, 180, gen_type1_85},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 84, gen_type2_85},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_85},
	{14, (BODY_INDEX)-1, 0, gen_type4_85},
	{15, (BODY_INDEX)-1, 84, gen_type5_85},
	{16, (BODY_INDEX)-1, 84, gen_type6_85},
	{17, (BODY_INDEX)-1, 0, gen_type7_85},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_85},
	{21, (BODY_INDEX)-1, 170, gen_type9_85},
	{22, (BODY_INDEX)-1, 170, gen_type10_85},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_85},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 84, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 84, gen_type12_85},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1050, (BODY_INDEX)-1, 157, NULL},
};

extern void Init85(void);
void Init85(void)
{
	IDSC(desc_85, 0, 84);
	IDSC(desc_85 + 1, 2, 84);
	IDSC(desc_85 + 34, 203, 84);
}


#ifdef __cplusplus
}
#endif

/*
 * Class CURSOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_92 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_92 [] = {0xFF11,180,0xFF12,91,0xFFFF};
static EIF_TYPE_INDEX gen_type2_92 [] = {0xFF11,91,0xFFFF};
static EIF_TYPE_INDEX gen_type3_92 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_92 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_92 [] = {0xFF11,91,0xFFFF};
static EIF_TYPE_INDEX gen_type6_92 [] = {0xFF11,91,0xFFFF};
static EIF_TYPE_INDEX gen_type7_92 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_92 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_92 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_92 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_92 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_92 [] = {0xFF11,91,0xFFFF};


static struct desc_info desc_92[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_92},
	{1, (BODY_INDEX)-1, 180, gen_type1_92},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 91, gen_type2_92},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_92},
	{14, (BODY_INDEX)-1, 0, gen_type4_92},
	{15, (BODY_INDEX)-1, 91, gen_type5_92},
	{16, (BODY_INDEX)-1, 91, gen_type6_92},
	{17, (BODY_INDEX)-1, 0, gen_type7_92},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_92},
	{21, (BODY_INDEX)-1, 170, gen_type9_92},
	{22, (BODY_INDEX)-1, 170, gen_type10_92},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_92},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 91, NULL},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 91, gen_type12_92},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init92(void);
void Init92(void)
{
	IDSC(desc_92, 0, 91);
	IDSC(desc_92 + 1, 2, 91);
}


#ifdef __cplusplus
}
#endif

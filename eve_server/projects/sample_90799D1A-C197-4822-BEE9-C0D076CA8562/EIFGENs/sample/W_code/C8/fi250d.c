/*
 * Class FINITE [POINTER]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_250 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_250 [] = {0xFF11,180,0xFF12,249,160,0xFFFF};
static EIF_TYPE_INDEX gen_type2_250 [] = {0xFF11,249,160,0xFFFF};
static EIF_TYPE_INDEX gen_type3_250 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_250 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_250 [] = {0xFF11,249,160,0xFFFF};
static EIF_TYPE_INDEX gen_type6_250 [] = {0xFF11,249,160,0xFFFF};
static EIF_TYPE_INDEX gen_type7_250 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_250 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_250 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_250 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_250 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_250 [] = {249,160,0xFFFF};
static EIF_TYPE_INDEX gen_type13_250 [] = {0xFF11,249,160,0xFFFF};
static EIF_TYPE_INDEX gen_type14_250 [] = {0xFF11,241,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_250 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_250[] = {
	{(BODY_INDEX) 1474, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_250},
	{1, (BODY_INDEX)-1, 180, gen_type1_250},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 249, gen_type2_250},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_250},
	{14, (BODY_INDEX)-1, 0, gen_type4_250},
	{15, (BODY_INDEX)-1, 249, gen_type5_250},
	{16, (BODY_INDEX)-1, 249, gen_type6_250},
	{17, (BODY_INDEX)-1, 0, gen_type7_250},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_250},
	{21, (BODY_INDEX)-1, 170, gen_type9_250},
	{22, (BODY_INDEX)-1, 170, gen_type10_250},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_250},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 249, gen_type12_250},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 249, gen_type13_250},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{1475, (BODY_INDEX)-1, 157, NULL},
	{1172, (BODY_INDEX)-1, 157, NULL},
	{1173, 0, 157, NULL},
	{1174, (BODY_INDEX)-1, 157, NULL},
	{1175, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1176, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 241, gen_type14_250},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_250},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
};

extern void Init250(void);
void Init250(void)
{
	IDSC(desc_250, 0, 249);
	IDSC(desc_250 + 1, 2, 249);
	IDSC(desc_250 + 34, 187, 249);
	IDSC(desc_250 + 43, 185, 249);
	IDSC(desc_250 + 44, 210, 249);
}


#ifdef __cplusplus
}
#endif

/*
 * Class BOX [POINTER]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_251 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_251 [] = {0xFF11,180,0xFF12,250,160,0xFFFF};
static EIF_TYPE_INDEX gen_type2_251 [] = {0xFF11,250,160,0xFFFF};
static EIF_TYPE_INDEX gen_type3_251 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_251 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_251 [] = {0xFF11,250,160,0xFFFF};
static EIF_TYPE_INDEX gen_type6_251 [] = {0xFF11,250,160,0xFFFF};
static EIF_TYPE_INDEX gen_type7_251 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_251 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_251 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_251 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_251 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_251 [] = {250,160,0xFFFF};
static EIF_TYPE_INDEX gen_type13_251 [] = {0xFF11,250,160,0xFFFF};
static EIF_TYPE_INDEX gen_type14_251 [] = {0xFF11,241,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_251 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_251[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_251},
	{1, (BODY_INDEX)-1, 180, gen_type1_251},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 250, gen_type2_251},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_251},
	{14, (BODY_INDEX)-1, 0, gen_type4_251},
	{15, (BODY_INDEX)-1, 250, gen_type5_251},
	{16, (BODY_INDEX)-1, 250, gen_type6_251},
	{17, (BODY_INDEX)-1, 0, gen_type7_251},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_251},
	{21, (BODY_INDEX)-1, 170, gen_type9_251},
	{22, (BODY_INDEX)-1, 170, gen_type10_251},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_251},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 250, gen_type12_251},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 250, gen_type13_251},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{1172, (BODY_INDEX)-1, 157, NULL},
	{1173, 0, 157, NULL},
	{1174, (BODY_INDEX)-1, 157, NULL},
	{1175, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1176, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 241, gen_type14_251},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_251},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
};

extern void Init251(void);
void Init251(void)
{
	IDSC(desc_251, 0, 250);
	IDSC(desc_251 + 1, 2, 250);
	IDSC(desc_251 + 34, 187, 250);
	IDSC(desc_251 + 43, 210, 250);
}


#ifdef __cplusplus
}
#endif

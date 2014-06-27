/*
 * Class BOX [NATURAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_409 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_409 [] = {0xFF11,180,0xFF12,408,133,0xFFFF};
static EIF_TYPE_INDEX gen_type2_409 [] = {0xFF11,408,133,0xFFFF};
static EIF_TYPE_INDEX gen_type3_409 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_409 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_409 [] = {0xFF11,408,133,0xFFFF};
static EIF_TYPE_INDEX gen_type6_409 [] = {0xFF11,408,133,0xFFFF};
static EIF_TYPE_INDEX gen_type7_409 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_409 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_409 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_409 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_409 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_409 [] = {408,133,0xFFFF};
static EIF_TYPE_INDEX gen_type13_409 [] = {0xFF11,408,133,0xFFFF};
static EIF_TYPE_INDEX gen_type14_409 [] = {0xFF11,398,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_409 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_409[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_409},
	{1, (BODY_INDEX)-1, 180, gen_type1_409},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 408, gen_type2_409},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_409},
	{14, (BODY_INDEX)-1, 0, gen_type4_409},
	{15, (BODY_INDEX)-1, 408, gen_type5_409},
	{16, (BODY_INDEX)-1, 408, gen_type6_409},
	{17, (BODY_INDEX)-1, 0, gen_type7_409},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_409},
	{21, (BODY_INDEX)-1, 170, gen_type9_409},
	{22, (BODY_INDEX)-1, 170, gen_type10_409},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_409},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 408, gen_type12_409},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 408, gen_type13_409},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{1186, (BODY_INDEX)-1, 154, NULL},
	{1187, 0, 154, NULL},
	{1188, (BODY_INDEX)-1, 154, NULL},
	{1189, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1190, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 398, gen_type14_409},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_409},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
};

extern void Init409(void);
void Init409(void)
{
	IDSC(desc_409, 0, 408);
	IDSC(desc_409 + 1, 2, 408);
	IDSC(desc_409 + 34, 184, 408);
	IDSC(desc_409 + 43, 210, 408);
}


#ifdef __cplusplus
}
#endif

/*
 * Class BOX [NATURAL_16]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_450 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_450 [] = {0xFF11,180,0xFF12,449,136,0xFFFF};
static EIF_TYPE_INDEX gen_type2_450 [] = {0xFF11,449,136,0xFFFF};
static EIF_TYPE_INDEX gen_type3_450 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_450 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_450 [] = {0xFF11,449,136,0xFFFF};
static EIF_TYPE_INDEX gen_type6_450 [] = {0xFF11,449,136,0xFFFF};
static EIF_TYPE_INDEX gen_type7_450 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_450 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_450 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_450 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_450 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_450 [] = {449,136,0xFFFF};
static EIF_TYPE_INDEX gen_type13_450 [] = {0xFF11,449,136,0xFFFF};
static EIF_TYPE_INDEX gen_type14_450 [] = {0xFF11,439,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_450 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_450[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_450},
	{1, (BODY_INDEX)-1, 180, gen_type1_450},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 449, gen_type2_450},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_450},
	{14, (BODY_INDEX)-1, 0, gen_type4_450},
	{15, (BODY_INDEX)-1, 449, gen_type5_450},
	{16, (BODY_INDEX)-1, 449, gen_type6_450},
	{17, (BODY_INDEX)-1, 0, gen_type7_450},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_450},
	{21, (BODY_INDEX)-1, 170, gen_type9_450},
	{22, (BODY_INDEX)-1, 170, gen_type10_450},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_450},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 449, gen_type12_450},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 449, gen_type13_450},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{1191, (BODY_INDEX)-1, 154, NULL},
	{1192, 0, 154, NULL},
	{1193, (BODY_INDEX)-1, 154, NULL},
	{1194, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1195, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 439, gen_type14_450},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_450},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
};

extern void Init450(void);
void Init450(void)
{
	IDSC(desc_450, 0, 449);
	IDSC(desc_450 + 1, 2, 449);
	IDSC(desc_450 + 34, 184, 449);
	IDSC(desc_450 + 43, 210, 449);
}


#ifdef __cplusplus
}
#endif

/*
 * Class BAG [NATURAL_16]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_486 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_486 [] = {0xFF11,180,0xFF12,485,136,0xFFFF};
static EIF_TYPE_INDEX gen_type2_486 [] = {0xFF11,485,136,0xFFFF};
static EIF_TYPE_INDEX gen_type3_486 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_486 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_486 [] = {0xFF11,485,136,0xFFFF};
static EIF_TYPE_INDEX gen_type6_486 [] = {0xFF11,485,136,0xFFFF};
static EIF_TYPE_INDEX gen_type7_486 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_486 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_486 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_486 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_486 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_486 [] = {485,136,0xFFFF};
static EIF_TYPE_INDEX gen_type13_486 [] = {0xFF11,485,136,0xFFFF};
static EIF_TYPE_INDEX gen_type14_486 [] = {0xFF11,481,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_486 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_486[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_486},
	{1, (BODY_INDEX)-1, 180, gen_type1_486},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 485, gen_type2_486},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_486},
	{14, (BODY_INDEX)-1, 0, gen_type4_486},
	{15, (BODY_INDEX)-1, 485, gen_type5_486},
	{16, (BODY_INDEX)-1, 485, gen_type6_486},
	{17, (BODY_INDEX)-1, 0, gen_type7_486},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_486},
	{21, (BODY_INDEX)-1, 170, gen_type9_486},
	{22, (BODY_INDEX)-1, 170, gen_type10_486},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_486},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 485, gen_type12_486},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 485, gen_type13_486},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{1202, (BODY_INDEX)-1, 157, NULL},
	{1203, 0, 157, NULL},
	{1204, (BODY_INDEX)-1, 157, NULL},
	{1205, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1206, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 481, gen_type14_486},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_486},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{1619, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1620, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1621, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
};

extern void Init486(void);
void Init486(void)
{
	IDSC(desc_486, 0, 485);
	IDSC(desc_486 + 1, 2, 485);
	IDSC(desc_486 + 34, 187, 485);
	IDSC(desc_486 + 43, 181, 485);
	IDSC(desc_486 + 52, 188, 485);
}


#ifdef __cplusplus
}
#endif

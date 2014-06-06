/*
 * Class TYPE [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_512 [] = {450,511,391,0xFFFF};
static EIF_TYPE_INDEX gen_type1_512 [] = {511,391,0xFFFF};
static EIF_TYPE_INDEX gen_type2_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_512 [] = {511,391,0xFFFF};
static EIF_TYPE_INDEX gen_type5_512 [] = {511,391,0xFFFF};
static EIF_TYPE_INDEX gen_type6_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_512 [] = {511,391,0xFFFF};
static EIF_TYPE_INDEX gen_type8_512 [] = {511,391,0xFFFF};
static EIF_TYPE_INDEX gen_type9_512 [] = {450,0,0xFFFF};
static EIF_TYPE_INDEX gen_type10_512 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_512 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type12_512 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type13_512 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type14_512 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_512[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_512},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{11206, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 511, gen_type1_512},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_512},
	{14, (BODY_INDEX)-1, 0, gen_type3_512},
	{15, (BODY_INDEX)-1, 511, gen_type4_512},
	{16, (BODY_INDEX)-1, 511, gen_type5_512},
	{17, (BODY_INDEX)-1, 0, gen_type6_512},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 38, NULL},
	{11213, (BODY_INDEX)-1, 350, NULL},
	{22, (BODY_INDEX)-1, 350, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 37, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 511, gen_type7_512},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 511, gen_type8_512},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{11201, (BODY_INDEX)-1, 391, NULL},
	{9774, (BODY_INDEX)-1, 337, NULL},
	{11207, (BODY_INDEX)-1, 337, NULL},
	{11208, (BODY_INDEX)-1, 337, NULL},
	{3587, (BODY_INDEX)-1, 337, NULL},
	{3588, (BODY_INDEX)-1, 337, NULL},
	{11198, (BODY_INDEX)-1, 347, NULL},
	{11199, (BODY_INDEX)-1, 450, gen_type9_512},
	{11200, (BODY_INDEX)-1, 391, NULL},
	{11202, (BODY_INDEX)-1, 391, NULL},
	{11203, (BODY_INDEX)-1, 337, NULL},
	{11204, (BODY_INDEX)-1, 337, NULL},
	{11205, (BODY_INDEX)-1, 337, NULL},
	{11209, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_512},
	{11210, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_512},
	{11211, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type12_512},
	{11212, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type13_512},
	{11215, (BODY_INDEX)-1, 350, NULL},
	{11216, (BODY_INDEX)-1, 337, NULL},
	{11217, (BODY_INDEX)-1, 337, NULL},
	{11218, (BODY_INDEX)-1, 350, NULL},
	{11219, (BODY_INDEX)-1, 350, NULL},
	{11220, (BODY_INDEX)-1, 350, NULL},
	{11221, (BODY_INDEX)-1, 349, NULL},
	{11222, 0, 347, NULL},
	{11223, (BODY_INDEX)-1, 350, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type14_512},
	{11214, (BODY_INDEX)-1, 350, NULL},
};

extern void Init512(void);
void Init512(void)
{
	IDSC(desc_512, 0, 511);
	IDSC(desc_512 + 1, 4, 511);
	IDSC(desc_512 + 34, 85, 511);
	IDSC(desc_512 + 36, 105, 511);
	IDSC(desc_512 + 40, 14, 511);
	IDSC(desc_512 + 61, 106, 511);
}


#ifdef __cplusplus
}
#endif

/*
 * Class TYPED_POINTER [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_512 [] = {513,511,400,0xFFFF};
static EIF_TYPE_INDEX gen_type1_512 [] = {511,400,0xFFFF};
static EIF_TYPE_INDEX gen_type2_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_512 [] = {511,400,0xFFFF};
static EIF_TYPE_INDEX gen_type5_512 [] = {511,400,0xFFFF};
static EIF_TYPE_INDEX gen_type6_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_512 [] = {511,400,0xFFFF};
static EIF_TYPE_INDEX gen_type8_512 [] = {511,400,0xFFFF};
static EIF_TYPE_INDEX gen_type9_512 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_512[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 513, gen_type0_512},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{10229, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
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
	{20, (BODY_INDEX)-1, 42, NULL},
	{10217, (BODY_INDEX)-1, 359, NULL},
	{22, (BODY_INDEX)-1, 359, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 41, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 511, gen_type7_512},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 511, gen_type8_512},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3919, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3920, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3921, (BODY_INDEX)-1, 346, NULL},
	{10227, (BODY_INDEX)-1, 400, NULL},
	{10230, (BODY_INDEX)-1, 346, NULL},
	{10226, 0, 349, NULL},
	{10228, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10204, (BODY_INDEX)-1, 346, NULL},
	{10205, (BODY_INDEX)-1, 349, NULL},
	{10206, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10207, (BODY_INDEX)-1, 348, NULL},
	{10208, (BODY_INDEX)-1, 400, NULL},
	{10209, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10210, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10211, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10212, (BODY_INDEX)-1, 349, NULL},
	{10213, (BODY_INDEX)-1, 349, NULL},
	{10214, (BODY_INDEX)-1, 349, NULL},
	{10215, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10216, (BODY_INDEX)-1, 346, NULL},
	{10218, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10219, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10220, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{10221, (BODY_INDEX)-1, 400, NULL},
	{10222, (BODY_INDEX)-1, 349, NULL},
	{10223, (BODY_INDEX)-1, 349, NULL},
	{10224, (BODY_INDEX)-1, 349, NULL},
	{10225, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type9_512},
};

extern void Init512(void);
void Init512(void)
{
	IDSC(desc_512, 0, 511);
	IDSC(desc_512 + 1, 4, 511);
	IDSC(desc_512 + 34, 221, 511);
	IDSC(desc_512 + 37, 85, 511);
	IDSC(desc_512 + 39, 77, 511);
	IDSC(desc_512 + 62, 13, 511);
}


#ifdef __cplusplus
}
#endif

/*
 * Class ABSOLUTE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_224 [] = {441,223,0xFFFF};
static EIF_TYPE_INDEX gen_type1_224 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_224 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_224 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_224 [] = {563,223,0xFFFF};


static struct desc_info desc_224[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_224},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{3683, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 223, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_224},
	{14, (BODY_INDEX)-1, 0, gen_type2_224},
	{15, (BODY_INDEX)-1, 223, NULL},
	{16, (BODY_INDEX)-1, 223, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_224},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 36, NULL},
	{21, (BODY_INDEX)-1, 341, NULL},
	{22, (BODY_INDEX)-1, 341, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 35, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 223, NULL},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 223, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3688, (BODY_INDEX)-1, 328, NULL},
	{3680, (BODY_INDEX)-1, 328, NULL},
	{3681, (BODY_INDEX)-1, 328, NULL},
	{3682, (BODY_INDEX)-1, 328, NULL},
	{3684, (BODY_INDEX)-1, 382, NULL},
	{3685, (BODY_INDEX)-1, 223, NULL},
	{3686, (BODY_INDEX)-1, 223, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 223, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 218, NULL},
	{3689, (BODY_INDEX)-1, 563, gen_type4_224},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 218, NULL},
};

extern void Init224(void);
void Init224(void)
{
	IDSC(desc_224, 0, 223);
	IDSC(desc_224 + 1, 4, 223);
	IDSC(desc_224 + 34, 105, 223);
	IDSC(desc_224 + 38, 181, 223);
	IDSC(desc_224 + 41, 331, 223);
}


#ifdef __cplusplus
}
#endif

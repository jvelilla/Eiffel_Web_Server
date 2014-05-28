/*
 * Class BOUNDED [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_513 [] = {441,512,382,0xFFFF};
static EIF_TYPE_INDEX gen_type1_513 [] = {512,382,0xFFFF};
static EIF_TYPE_INDEX gen_type2_513 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_513 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_513 [] = {512,382,0xFFFF};
static EIF_TYPE_INDEX gen_type5_513 [] = {512,382,0xFFFF};
static EIF_TYPE_INDEX gen_type6_513 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_513 [] = {512,382,0xFFFF};
static EIF_TYPE_INDEX gen_type8_513 [] = {512,382,0xFFFF};
static EIF_TYPE_INDEX gen_type9_513 [] = {498,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_513 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_513[] = {
	{(BODY_INDEX) 2821, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_513},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 512, gen_type1_513},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_513},
	{14, (BODY_INDEX)-1, 0, gen_type3_513},
	{15, (BODY_INDEX)-1, 512, gen_type4_513},
	{16, (BODY_INDEX)-1, 512, gen_type5_513},
	{17, (BODY_INDEX)-1, 0, gen_type6_513},
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
	{28, (BODY_INDEX)-1, 512, gen_type7_513},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 512, gen_type8_513},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 328, NULL},
	{2790, (BODY_INDEX)-1, 328, NULL},
	{2715, (BODY_INDEX)-1, 328, NULL},
	{2716, 0, 328, NULL},
	{2717, (BODY_INDEX)-1, 328, NULL},
	{2718, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2719, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 498, gen_type9_513},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_513},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 382, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 328, NULL},
	{2820, (BODY_INDEX)-1, 328, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 382, NULL},
};

extern void Init513(void);
void Init513(void)
{
	IDSC(desc_513, 0, 512);
	IDSC(desc_513 + 1, 4, 512);
	IDSC(desc_513 + 34, 352, 512);
	IDSC(desc_513 + 43, 228, 512);
	IDSC(desc_513 + 45, 432, 512);
	IDSC(desc_513 + 46, 347, 512);
}


#ifdef __cplusplus
}
#endif

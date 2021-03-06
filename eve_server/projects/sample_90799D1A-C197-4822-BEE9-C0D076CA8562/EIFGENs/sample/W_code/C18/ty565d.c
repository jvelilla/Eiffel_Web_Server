/*
 * Class TYPED_POINTER [NATURAL_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_565 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_565 [] = {0xFF11,566,564,139,0xFFFF};
static EIF_TYPE_INDEX gen_type2_565 [] = {564,139,0xFFFF};
static EIF_TYPE_INDEX gen_type3_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_565 [] = {564,139,0xFFFF};
static EIF_TYPE_INDEX gen_type6_565 [] = {564,139,0xFFFF};
static EIF_TYPE_INDEX gen_type7_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_565 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_565 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_565 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_565 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_565 [] = {564,139,0xFFFF};
static EIF_TYPE_INDEX gen_type13_565 [] = {564,139,0xFFFF};
static EIF_TYPE_INDEX gen_type14_565 [] = {0xFF11,159,0xFFFF};
static EIF_TYPE_INDEX gen_type15_565 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_565[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_565},
	{1, (BODY_INDEX)-1, 566, gen_type1_565},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{8769, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 564, gen_type2_565},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_565},
	{14, (BODY_INDEX)-1, 0, gen_type4_565},
	{15, (BODY_INDEX)-1, 564, gen_type5_565},
	{16, (BODY_INDEX)-1, 564, gen_type6_565},
	{17, (BODY_INDEX)-1, 0, gen_type7_565},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_565},
	{8784, (BODY_INDEX)-1, 170, gen_type9_565},
	{22, (BODY_INDEX)-1, 170, gen_type10_565},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_565},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 564, gen_type12_565},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 564, gen_type13_565},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{549, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{550, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{551, (BODY_INDEX)-1, 157, NULL},
	{8767, (BODY_INDEX)-1, 121, NULL},
	{8770, (BODY_INDEX)-1, 157, NULL},
	{8766, 0, 160, NULL},
	{8768, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{8771, (BODY_INDEX)-1, 157, NULL},
	{8772, (BODY_INDEX)-1, 160, NULL},
	{8773, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{8774, (BODY_INDEX)-1, 159, gen_type14_565},
	{8775, (BODY_INDEX)-1, 121, NULL},
	{8776, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{8777, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{8778, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{8779, (BODY_INDEX)-1, 160, NULL},
	{8780, (BODY_INDEX)-1, 160, NULL},
	{8781, (BODY_INDEX)-1, 160, NULL},
	{8782, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{8783, (BODY_INDEX)-1, 157, NULL},
	{8785, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{8759, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{8760, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{8761, (BODY_INDEX)-1, 121, NULL},
	{8762, (BODY_INDEX)-1, 160, NULL},
	{8763, (BODY_INDEX)-1, 160, NULL},
	{8764, (BODY_INDEX)-1, 160, NULL},
	{8765, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_565},
};

extern void Init565(void);
void Init565(void)
{
	IDSC(desc_565, 0, 564);
	IDSC(desc_565 + 1, 2, 564);
	IDSC(desc_565 + 34, 123, 564);
	IDSC(desc_565 + 37, 49, 564);
	IDSC(desc_565 + 39, 43, 564);
	IDSC(desc_565 + 62, 11, 564);
}


#ifdef __cplusplus
}
#endif

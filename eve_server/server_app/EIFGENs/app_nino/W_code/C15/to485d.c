/*
 * Class TO_SPECIAL [G#1]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_485 [] = {459,484,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type1_485 [] = {484,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type2_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_485 [] = {484,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type5_485 [] = {484,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type6_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_485 [] = {484,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type8_485 [] = {484,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type9_485 [] = {460,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_485 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_485 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type12_485 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_485[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 359, NULL},
	{1, (BODY_INDEX)-1, 459, gen_type0_485},
	{2, (BODY_INDEX)-1, 346, NULL},
	{3, (BODY_INDEX)-1, 346, NULL},
	{4, (BODY_INDEX)-1, 346, NULL},
	{5, (BODY_INDEX)-1, 346, NULL},
	{6, (BODY_INDEX)-1, 346, NULL},
	{7, (BODY_INDEX)-1, 346, NULL},
	{8, (BODY_INDEX)-1, 346, NULL},
	{9, (BODY_INDEX)-1, 346, NULL},
	{10, (BODY_INDEX)-1, 484, gen_type1_485},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_485},
	{14, (BODY_INDEX)-1, 0, gen_type3_485},
	{15, (BODY_INDEX)-1, 484, gen_type4_485},
	{16, (BODY_INDEX)-1, 484, gen_type5_485},
	{17, (BODY_INDEX)-1, 0, gen_type6_485},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 42, NULL},
	{21, (BODY_INDEX)-1, 359, NULL},
	{22, (BODY_INDEX)-1, 359, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 41, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 484, gen_type7_485},
	{29, (BODY_INDEX)-1, 349, NULL},
	{30, (BODY_INDEX)-1, 484, gen_type8_485},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4023, 0, 460, gen_type9_485},
	{4024, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4025, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4026, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_485},
	{4027, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_485},
	{4028, (BODY_INDEX)-1, 346, NULL},
	{4029, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4030, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type12_485},
};

extern void Init485(void);
void Init485(void)
{
	IDSC(desc_485, 0, 484);
	IDSC(desc_485 + 1, 4, 484);
	IDSC(desc_485 + 34, 81, 484);
}


#ifdef __cplusplus
}
#endif

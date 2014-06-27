/*
 * Class CONTAINER [NATURAL_16]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_485 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_485 [] = {0xFF11,180,0xFF12,484,136,0xFFFF};
static EIF_TYPE_INDEX gen_type2_485 [] = {0xFF11,484,136,0xFFFF};
static EIF_TYPE_INDEX gen_type3_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_485 [] = {0xFF11,484,136,0xFFFF};
static EIF_TYPE_INDEX gen_type6_485 [] = {0xFF11,484,136,0xFFFF};
static EIF_TYPE_INDEX gen_type7_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_485 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_485 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_485 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_485 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_485 [] = {484,136,0xFFFF};
static EIF_TYPE_INDEX gen_type13_485 [] = {0xFF11,484,136,0xFFFF};
static EIF_TYPE_INDEX gen_type14_485 [] = {0xFF11,481,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_485 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_485[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_485},
	{1, (BODY_INDEX)-1, 180, gen_type1_485},
	{2, (BODY_INDEX)-1, 157, NULL},
	{3, (BODY_INDEX)-1, 157, NULL},
	{4, (BODY_INDEX)-1, 157, NULL},
	{5, (BODY_INDEX)-1, 157, NULL},
	{6, (BODY_INDEX)-1, 157, NULL},
	{7, (BODY_INDEX)-1, 157, NULL},
	{8, (BODY_INDEX)-1, 157, NULL},
	{9, (BODY_INDEX)-1, 157, NULL},
	{10, (BODY_INDEX)-1, 484, gen_type2_485},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_485},
	{14, (BODY_INDEX)-1, 0, gen_type4_485},
	{15, (BODY_INDEX)-1, 484, gen_type5_485},
	{16, (BODY_INDEX)-1, 484, gen_type6_485},
	{17, (BODY_INDEX)-1, 0, gen_type7_485},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_485},
	{21, (BODY_INDEX)-1, 170, gen_type9_485},
	{22, (BODY_INDEX)-1, 170, gen_type10_485},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_485},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 484, gen_type12_485},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 484, gen_type13_485},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 157, NULL},
	{1202, (BODY_INDEX)-1, 157, NULL},
	{1203, 0, 157, NULL},
	{1204, (BODY_INDEX)-1, 157, NULL},
	{1205, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1206, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 481, gen_type14_485},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_485},
};

extern void Init485(void);
void Init485(void)
{
	IDSC(desc_485, 0, 484);
	IDSC(desc_485 + 1, 2, 484);
	IDSC(desc_485 + 34, 187, 484);
}


#ifdef __cplusplus
}
#endif

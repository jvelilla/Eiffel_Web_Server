/*
 * Class ACCOUNT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_861 [] = {0xFF11,220,0xFFFF};
static EIF_TYPE_INDEX gen_type1_861 [] = {0xFF11,237,0xFF12,860,0xFFFF};
static EIF_TYPE_INDEX gen_type2_861 [] = {0xFF11,860,0xFFFF};
static EIF_TYPE_INDEX gen_type3_861 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_861 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_861 [] = {0xFF11,860,0xFFFF};
static EIF_TYPE_INDEX gen_type6_861 [] = {0xFF11,860,0xFFFF};
static EIF_TYPE_INDEX gen_type7_861 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_861 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_861 [] = {0xFF11,220,0xFFFF};
static EIF_TYPE_INDEX gen_type10_861 [] = {0xFF11,220,0xFFFF};
static EIF_TYPE_INDEX gen_type11_861 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_861 [] = {0xFF11,860,0xFFFF};


static struct desc_info desc_861[] = {
	{(BODY_INDEX) 12599, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 220, gen_type0_861},
	{1, (BODY_INDEX)-1, 237, gen_type1_861},
	{2, (BODY_INDEX)-1, 191, NULL},
	{3, (BODY_INDEX)-1, 191, NULL},
	{4, (BODY_INDEX)-1, 191, NULL},
	{5, (BODY_INDEX)-1, 191, NULL},
	{6, (BODY_INDEX)-1, 191, NULL},
	{7, (BODY_INDEX)-1, 191, NULL},
	{8, (BODY_INDEX)-1, 191, NULL},
	{9, (BODY_INDEX)-1, 191, NULL},
	{10, (BODY_INDEX)-1, 860, gen_type2_861},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_861},
	{14, (BODY_INDEX)-1, 0, gen_type4_861},
	{15, (BODY_INDEX)-1, 860, gen_type5_861},
	{16, (BODY_INDEX)-1, 860, gen_type6_861},
	{17, (BODY_INDEX)-1, 0, gen_type7_861},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_861},
	{21, (BODY_INDEX)-1, 220, gen_type9_861},
	{22, (BODY_INDEX)-1, 220, gen_type10_861},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_861},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 860, NULL},
	{29, (BODY_INDEX)-1, 215, NULL},
	{30, (BODY_INDEX)-1, 860, gen_type12_861},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12595, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12596, 0, 194, NULL},
	{12597, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12598, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init861(void);
void Init861(void)
{
	IDSC(desc_861, 0, 860);
	IDSC(desc_861 + 1, 1, 860);
	IDSC(desc_861 + 34, 343, 860);
}


#ifdef __cplusplus
}
#endif

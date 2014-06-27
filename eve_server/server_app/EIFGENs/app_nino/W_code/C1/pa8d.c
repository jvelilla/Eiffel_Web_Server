/*
 * Class PACKET
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_8 [] = {490,7,0xFFFF};
static EIF_TYPE_INDEX gen_type1_8 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_8 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_8 [] = {0,0xFFFF};


static struct desc_info desc_8[] = {
	{(BODY_INDEX) 103, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 389, NULL},
	{1, (BODY_INDEX)-1, 490, gen_type0_8},
	{2, (BODY_INDEX)-1, 376, NULL},
	{3, (BODY_INDEX)-1, 376, NULL},
	{111, (BODY_INDEX)-1, 376, NULL},
	{5, (BODY_INDEX)-1, 376, NULL},
	{6, (BODY_INDEX)-1, 376, NULL},
	{7, (BODY_INDEX)-1, 376, NULL},
	{8, (BODY_INDEX)-1, 376, NULL},
	{9, (BODY_INDEX)-1, 376, NULL},
	{10, (BODY_INDEX)-1, 7, NULL},
	{112, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_8},
	{14, (BODY_INDEX)-1, 0, gen_type2_8},
	{15, (BODY_INDEX)-1, 7, NULL},
	{16, (BODY_INDEX)-1, 7, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_8},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 45, NULL},
	{21, (BODY_INDEX)-1, 389, NULL},
	{22, (BODY_INDEX)-1, 389, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 44, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 7, NULL},
	{29, (BODY_INDEX)-1, 379, NULL},
	{30, (BODY_INDEX)-1, 7, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{104, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{105, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{106, (BODY_INDEX)-1, 430, NULL},
	{107, (BODY_INDEX)-1, 373, NULL},
	{108, (BODY_INDEX)-1, 373, NULL},
	{109, (BODY_INDEX)-1, 376, NULL},
	{110, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{113, 0, 344, NULL},
};

extern void Init8(void);
void Init8(void)
{
	IDSC(desc_8, 0, 7);
	IDSC(desc_8 + 1, 4, 7);
	IDSC(desc_8 + 34, 458, 7);
}


#ifdef __cplusplus
}
#endif

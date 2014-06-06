/*
 * Class MISMATCH_CORRECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_280 [] = {450,279,0xFFFF};
static EIF_TYPE_INDEX gen_type1_280 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_280 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_280 [] = {0,0xFFFF};


static struct desc_info desc_280[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_280},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{4, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 279, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_280},
	{14, (BODY_INDEX)-1, 0, gen_type2_280},
	{15, (BODY_INDEX)-1, 279, NULL},
	{16, (BODY_INDEX)-1, 279, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_280},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 38, NULL},
	{21, (BODY_INDEX)-1, 350, NULL},
	{22, (BODY_INDEX)-1, 350, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 37, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 279, NULL},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 279, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4647, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4648, (BODY_INDEX)-1, 293, NULL},
};

extern void Init280(void);
void Init280(void)
{
	IDSC(desc_280, 0, 279);
	IDSC(desc_280 + 1, 4, 279);
	IDSC(desc_280 + 34, 70, 279);
}


#ifdef __cplusplus
}
#endif

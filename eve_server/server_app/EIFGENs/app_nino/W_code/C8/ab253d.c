/*
 * Class ABSOLUTE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_253 [] = {490,252,0xFFFF};
static EIF_TYPE_INDEX gen_type1_253 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_253 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_253 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_253 [] = {598,252,0xFFFF};


static struct desc_info desc_253[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 389, NULL},
	{1, (BODY_INDEX)-1, 490, gen_type0_253},
	{2, (BODY_INDEX)-1, 376, NULL},
	{3, (BODY_INDEX)-1, 376, NULL},
	{4086, (BODY_INDEX)-1, 376, NULL},
	{5, (BODY_INDEX)-1, 376, NULL},
	{6, (BODY_INDEX)-1, 376, NULL},
	{7, (BODY_INDEX)-1, 376, NULL},
	{8, (BODY_INDEX)-1, 376, NULL},
	{9, (BODY_INDEX)-1, 376, NULL},
	{10, (BODY_INDEX)-1, 252, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_253},
	{14, (BODY_INDEX)-1, 0, gen_type2_253},
	{15, (BODY_INDEX)-1, 252, NULL},
	{16, (BODY_INDEX)-1, 252, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_253},
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
	{28, (BODY_INDEX)-1, 252, NULL},
	{29, (BODY_INDEX)-1, 379, NULL},
	{30, (BODY_INDEX)-1, 252, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4090, (BODY_INDEX)-1, 376, NULL},
	{4083, (BODY_INDEX)-1, 376, NULL},
	{4084, (BODY_INDEX)-1, 376, NULL},
	{4085, (BODY_INDEX)-1, 376, NULL},
	{4087, (BODY_INDEX)-1, 430, NULL},
	{4088, (BODY_INDEX)-1, 252, NULL},
	{4089, (BODY_INDEX)-1, 252, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 252, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 247, NULL},
	{4091, (BODY_INDEX)-1, 598, gen_type4_253},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 247, NULL},
};

extern void Init253(void);
void Init253(void)
{
	IDSC(desc_253, 0, 252);
	IDSC(desc_253 + 1, 4, 252);
	IDSC(desc_253 + 34, 105, 252);
	IDSC(desc_253 + 38, 199, 252);
	IDSC(desc_253 + 41, 318, 252);
}


#ifdef __cplusplus
}
#endif

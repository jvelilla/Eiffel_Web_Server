/*
 * Class EQA_ENVIRONMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_42 [] = {450,41,0xFFFF};
static EIF_TYPE_INDEX gen_type1_42 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_42 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_42 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_42 [] = {540,345,0xFFFF};


static struct desc_info desc_42[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_42},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{4, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 41, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_42},
	{14, (BODY_INDEX)-1, 0, gen_type2_42},
	{15, (BODY_INDEX)-1, 41, NULL},
	{16, (BODY_INDEX)-1, 41, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_42},
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
	{28, (BODY_INDEX)-1, 41, NULL},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 41, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{844, (BODY_INDEX)-1, 345, NULL},
	{845, (BODY_INDEX)-1, 345, NULL},
	{846, (BODY_INDEX)-1, 345, NULL},
	{847, (BODY_INDEX)-1, 347, NULL},
	{848, (BODY_INDEX)-1, 347, NULL},
	{849, (BODY_INDEX)-1, 347, NULL},
	{850, (BODY_INDEX)-1, 540, gen_type4_42},
	{851, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{852, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{853, (BODY_INDEX)-1, 337, NULL},
	{854, (BODY_INDEX)-1, 349, NULL},
	{855, (BODY_INDEX)-1, 349, NULL},
	{856, (BODY_INDEX)-1, 391, NULL},
	{841, (BODY_INDEX)-1, 331, NULL},
	{842, (BODY_INDEX)-1, 331, NULL},
	{843, (BODY_INDEX)-1, 331, NULL},
};

extern void Init42(void);
void Init42(void)
{
	IDSC(desc_42, 0, 41);
	IDSC(desc_42 + 1, 4, 41);
	IDSC(desc_42 + 34, 40, 41);
}


#ifdef __cplusplus
}
#endif

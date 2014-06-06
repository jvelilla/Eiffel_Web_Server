/*
 * Class ERROR_GROUP
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_429 [] = {450,428,0xFFFF};
static EIF_TYPE_INDEX gen_type1_429 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_429 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_429 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_429 [] = {480,427,0xFFFF};


static struct desc_info desc_429[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 350, NULL},
	{1, (BODY_INDEX)-1, 450, gen_type0_429},
	{2, (BODY_INDEX)-1, 337, NULL},
	{3, (BODY_INDEX)-1, 337, NULL},
	{4, (BODY_INDEX)-1, 337, NULL},
	{5, (BODY_INDEX)-1, 337, NULL},
	{6, (BODY_INDEX)-1, 337, NULL},
	{7, (BODY_INDEX)-1, 337, NULL},
	{8, (BODY_INDEX)-1, 337, NULL},
	{9, (BODY_INDEX)-1, 337, NULL},
	{10, (BODY_INDEX)-1, 428, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_429},
	{14, (BODY_INDEX)-1, 0, gen_type2_429},
	{15, (BODY_INDEX)-1, 428, NULL},
	{16, (BODY_INDEX)-1, 428, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_429},
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
	{28, (BODY_INDEX)-1, 428, NULL},
	{29, (BODY_INDEX)-1, 340, NULL},
	{30, (BODY_INDEX)-1, 428, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14606, (BODY_INDEX)-1, 350, NULL},
	{14609, (BODY_INDEX)-1, 391, NULL},
	{14610, 16, 350, NULL},
	{14611, (BODY_INDEX)-1, 349, NULL},
	{14604, 0, 427, NULL},
	{14605, (BODY_INDEX)-1, 349, NULL},
	{14607, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14613, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14608, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14612, 8, 480, gen_type4_429},
	{14610, 16, 350, NULL},
};

extern void Init429(void);
void Init429(void)
{
	IDSC(desc_429, 0, 428);
	IDSC(desc_429 + 1, 4, 428);
	IDSC(desc_429 + 34, 106, 428);
	IDSC(desc_429 + 35, 374, 428);
	IDSC(desc_429 + 42, 373, 428);
}


#ifdef __cplusplus
}
#endif

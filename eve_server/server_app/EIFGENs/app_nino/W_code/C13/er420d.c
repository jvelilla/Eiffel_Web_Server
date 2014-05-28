/*
 * Class ERROR_CUSTOM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_420 [] = {441,419,0xFFFF};
static EIF_TYPE_INDEX gen_type1_420 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_420 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_420 [] = {0,0xFFFF};


static struct desc_info desc_420[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 341, NULL},
	{1, (BODY_INDEX)-1, 441, gen_type0_420},
	{2, (BODY_INDEX)-1, 328, NULL},
	{3, (BODY_INDEX)-1, 328, NULL},
	{4, (BODY_INDEX)-1, 328, NULL},
	{5, (BODY_INDEX)-1, 328, NULL},
	{6, (BODY_INDEX)-1, 328, NULL},
	{7, (BODY_INDEX)-1, 328, NULL},
	{8, (BODY_INDEX)-1, 328, NULL},
	{9, (BODY_INDEX)-1, 328, NULL},
	{10, (BODY_INDEX)-1, 419, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_420},
	{14, (BODY_INDEX)-1, 0, gen_type2_420},
	{15, (BODY_INDEX)-1, 419, NULL},
	{16, (BODY_INDEX)-1, 419, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_420},
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
	{28, (BODY_INDEX)-1, 419, NULL},
	{29, (BODY_INDEX)-1, 331, NULL},
	{30, (BODY_INDEX)-1, 419, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14430, (BODY_INDEX)-1, 341, NULL},
	{14433, 24, 382, NULL},
	{14434, 16, 337, NULL},
	{14435, 8, 335, NULL},
	{14428, 0, 418, NULL},
	{14429, (BODY_INDEX)-1, 340, NULL},
	{14431, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14436, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14432, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14435, 8, 335, NULL},
	{14434, 16, 337, NULL},
	{14433, 24, 382, NULL},
};

extern void Init420(void);
void Init420(void)
{
	IDSC(desc_420, 0, 419);
	IDSC(desc_420 + 1, 4, 419);
	IDSC(desc_420 + 34, 106, 419);
	IDSC(desc_420 + 35, 362, 419);
	IDSC(desc_420 + 42, 361, 419);
}


#ifdef __cplusplus
}
#endif

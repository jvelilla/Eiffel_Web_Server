/*
 * Class WSF_MIME_HANDLER_HELPER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_125 [] = {490,124,0xFFFF};
static EIF_TYPE_INDEX gen_type1_125 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_125 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_125 [] = {0,0xFFFF};


static struct desc_info desc_125[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 389, NULL},
	{1, (BODY_INDEX)-1, 490, gen_type0_125},
	{2, (BODY_INDEX)-1, 376, NULL},
	{3, (BODY_INDEX)-1, 376, NULL},
	{4, (BODY_INDEX)-1, 376, NULL},
	{5, (BODY_INDEX)-1, 376, NULL},
	{6, (BODY_INDEX)-1, 376, NULL},
	{7, (BODY_INDEX)-1, 376, NULL},
	{8, (BODY_INDEX)-1, 376, NULL},
	{9, (BODY_INDEX)-1, 376, NULL},
	{10, (BODY_INDEX)-1, 124, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_125},
	{14, (BODY_INDEX)-1, 0, gen_type2_125},
	{15, (BODY_INDEX)-1, 124, NULL},
	{16, (BODY_INDEX)-1, 124, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_125},
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
	{28, (BODY_INDEX)-1, 124, NULL},
	{29, (BODY_INDEX)-1, 379, NULL},
	{30, (BODY_INDEX)-1, 124, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1913, (BODY_INDEX)-1, 389, NULL},
	{1914, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1915, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1916, (BODY_INDEX)-1, 419, NULL},
	{1917, (BODY_INDEX)-1, 288, NULL},
};

extern void Init125(void);
void Init125(void)
{
	IDSC(desc_125, 0, 124);
	IDSC(desc_125 + 1, 4, 124);
	IDSC(desc_125 + 34, 388, 124);
}


#ifdef __cplusplus
}
#endif

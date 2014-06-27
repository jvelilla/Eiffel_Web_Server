/*
 * Class ITP_VARIABLE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_402 [] = {490,401,0xFFFF};
static EIF_TYPE_INDEX gen_type1_402 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_402 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_402 [] = {0,0xFFFF};


static struct desc_info desc_402[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 389, NULL},
	{1, (BODY_INDEX)-1, 490, gen_type0_402},
	{2, (BODY_INDEX)-1, 376, NULL},
	{3, (BODY_INDEX)-1, 376, NULL},
	{11634, (BODY_INDEX)-1, 376, NULL},
	{5, (BODY_INDEX)-1, 376, NULL},
	{6, (BODY_INDEX)-1, 376, NULL},
	{7, (BODY_INDEX)-1, 376, NULL},
	{8, (BODY_INDEX)-1, 376, NULL},
	{9, (BODY_INDEX)-1, 376, NULL},
	{10, (BODY_INDEX)-1, 401, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_402},
	{14, (BODY_INDEX)-1, 0, gen_type2_402},
	{15, (BODY_INDEX)-1, 401, NULL},
	{16, (BODY_INDEX)-1, 401, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_402},
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
	{28, (BODY_INDEX)-1, 401, NULL},
	{29, (BODY_INDEX)-1, 379, NULL},
	{30, (BODY_INDEX)-1, 401, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{11633, (BODY_INDEX)-1, 430, NULL},
	{10355, (BODY_INDEX)-1, 376, NULL},
	{11631, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{11632, (BODY_INDEX)-1, 389, NULL},
	{11635, 0, 430, NULL},
	{11636, (BODY_INDEX)-1, 389, NULL},
	{11637, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init402(void);
void Init402(void)
{
	IDSC(desc_402, 0, 401);
	IDSC(desc_402 + 1, 4, 401);
	IDSC(desc_402 + 34, 85, 401);
	IDSC(desc_402 + 36, 62, 401);
	IDSC(desc_402 + 39, 106, 401);
	IDSC(desc_402 + 40, 222, 401);
}


#ifdef __cplusplus
}
#endif

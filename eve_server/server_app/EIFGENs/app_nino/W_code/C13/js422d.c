/*
 * Class JSON_NULL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_422 [] = {490,421,0xFFFF};
static EIF_TYPE_INDEX gen_type1_422 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_422 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_422 [] = {0,0xFFFF};


static struct desc_info desc_422[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 389, NULL},
	{1, (BODY_INDEX)-1, 490, gen_type0_422},
	{2, (BODY_INDEX)-1, 376, NULL},
	{3, (BODY_INDEX)-1, 376, NULL},
	{4, (BODY_INDEX)-1, 376, NULL},
	{5, (BODY_INDEX)-1, 376, NULL},
	{6, (BODY_INDEX)-1, 376, NULL},
	{7, (BODY_INDEX)-1, 376, NULL},
	{8, (BODY_INDEX)-1, 376, NULL},
	{9, (BODY_INDEX)-1, 376, NULL},
	{10, (BODY_INDEX)-1, 421, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_422},
	{14, (BODY_INDEX)-1, 0, gen_type2_422},
	{15, (BODY_INDEX)-1, 421, NULL},
	{16, (BODY_INDEX)-1, 421, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_422},
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
	{28, (BODY_INDEX)-1, 421, NULL},
	{29, (BODY_INDEX)-1, 379, NULL},
	{30, (BODY_INDEX)-1, 421, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13801, (BODY_INDEX)-1, 430, NULL},
	{10355, (BODY_INDEX)-1, 376, NULL},
	{13802, (BODY_INDEX)-1, 389, NULL},
	{13803, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13804, (BODY_INDEX)-1, 389, NULL},
	{13805, (BODY_INDEX)-1, 389, NULL},
};

extern void Init422(void);
void Init422(void)
{
	IDSC(desc_422, 0, 421);
	IDSC(desc_422 + 1, 4, 421);
	IDSC(desc_422 + 34, 85, 421);
	IDSC(desc_422 + 36, 310, 421);
	IDSC(desc_422 + 38, 106, 421);
	IDSC(desc_422 + 39, 311, 421);
}


#ifdef __cplusplus
}
#endif

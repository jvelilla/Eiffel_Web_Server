/*
 * Class BOUNDED [NATURAL_16]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_448 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type1_448 [] = {0xFF11,180,0xFF12,447,136,0xFFFF};
static EIF_TYPE_INDEX gen_type2_448 [] = {0xFF11,447,136,0xFFFF};
static EIF_TYPE_INDEX gen_type3_448 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_448 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_448 [] = {0xFF11,447,136,0xFFFF};
static EIF_TYPE_INDEX gen_type6_448 [] = {0xFF11,447,136,0xFFFF};
static EIF_TYPE_INDEX gen_type7_448 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_448 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type9_448 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type10_448 [] = {0xFF11,170,0xFFFF};
static EIF_TYPE_INDEX gen_type11_448 [] = {0xFF11,10,0xFFFF};
static EIF_TYPE_INDEX gen_type12_448 [] = {447,136,0xFFFF};
static EIF_TYPE_INDEX gen_type13_448 [] = {0xFF11,447,136,0xFFFF};
static EIF_TYPE_INDEX gen_type14_448 [] = {0xFF11,439,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_448 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_448[] = {
	{(BODY_INDEX) 1508, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 170, gen_type0_448},
	{1, (BODY_INDEX)-1, 180, gen_type1_448},
	{2, (BODY_INDEX)-1, 154, NULL},
	{3, (BODY_INDEX)-1, 154, NULL},
	{4, (BODY_INDEX)-1, 154, NULL},
	{5, (BODY_INDEX)-1, 154, NULL},
	{6, (BODY_INDEX)-1, 154, NULL},
	{7, (BODY_INDEX)-1, 154, NULL},
	{8, (BODY_INDEX)-1, 154, NULL},
	{9, (BODY_INDEX)-1, 154, NULL},
	{10, (BODY_INDEX)-1, 447, gen_type2_448},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_448},
	{14, (BODY_INDEX)-1, 0, gen_type4_448},
	{15, (BODY_INDEX)-1, 447, gen_type5_448},
	{16, (BODY_INDEX)-1, 447, gen_type6_448},
	{17, (BODY_INDEX)-1, 0, gen_type7_448},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, gen_type8_448},
	{21, (BODY_INDEX)-1, 170, gen_type9_448},
	{22, (BODY_INDEX)-1, 170, gen_type10_448},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 10, gen_type11_448},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 447, gen_type12_448},
	{29, (BODY_INDEX)-1, 160, NULL},
	{30, (BODY_INDEX)-1, 447, gen_type13_448},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{1486, (BODY_INDEX)-1, 154, NULL},
	{1191, (BODY_INDEX)-1, 154, NULL},
	{1192, 0, 154, NULL},
	{1193, (BODY_INDEX)-1, 154, NULL},
	{1194, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1195, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 439, gen_type14_448},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_448},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 154, NULL},
	{1507, (BODY_INDEX)-1, 154, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 121, NULL},
};

extern void Init448(void);
void Init448(void)
{
	IDSC(desc_448, 0, 447);
	IDSC(desc_448 + 1, 2, 447);
	IDSC(desc_448 + 34, 184, 447);
	IDSC(desc_448 + 43, 130, 447);
	IDSC(desc_448 + 45, 210, 447);
	IDSC(desc_448 + 46, 186, 447);
}


#ifdef __cplusplus
}
#endif

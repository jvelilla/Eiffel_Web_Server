/*
 * Class TCP_STREAM_SOCKET
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_357 [] = {490,356,0xFFFF};
static EIF_TYPE_INDEX gen_type1_357 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_357 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_357 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_357 [] = {389,0xFFFF};
static EIF_TYPE_INDEX gen_type5_357 [] = {194,0xFFFF};
static EIF_TYPE_INDEX gen_type6_357 [] = {194,0xFFFF};
static EIF_TYPE_INDEX gen_type7_357 [] = {516,171,0xFFFF};
static EIF_TYPE_INDEX gen_type8_357 [] = {835,454,0xFFFF};
static EIF_TYPE_INDEX gen_type9_357 [] = {835,454,0xFFFF};
static EIF_TYPE_INDEX gen_type10_357 [] = {835,454,0xFFFF};
static EIF_TYPE_INDEX gen_type11_357 [] = {516,389,0xFFFF};
static EIF_TYPE_INDEX gen_type12_357 [] = {516,171,0xFFFF};


static struct desc_info desc_357[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 389, NULL},
	{1, (BODY_INDEX)-1, 490, gen_type0_357},
	{2, (BODY_INDEX)-1, 376, NULL},
	{3, (BODY_INDEX)-1, 376, NULL},
	{4, (BODY_INDEX)-1, 376, NULL},
	{5, (BODY_INDEX)-1, 376, NULL},
	{6, (BODY_INDEX)-1, 376, NULL},
	{7, (BODY_INDEX)-1, 376, NULL},
	{8, (BODY_INDEX)-1, 376, NULL},
	{9, (BODY_INDEX)-1, 376, NULL},
	{10, (BODY_INDEX)-1, 356, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_357},
	{14, (BODY_INDEX)-1, 0, gen_type2_357},
	{15, (BODY_INDEX)-1, 356, NULL},
	{16, (BODY_INDEX)-1, 356, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_357},
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
	{28, (BODY_INDEX)-1, 356, NULL},
	{29, (BODY_INDEX)-1, 379, NULL},
	{30, (BODY_INDEX)-1, 356, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9788, (BODY_INDEX)-1, 389, NULL},
	{2772, (BODY_INDEX)-1, 430, NULL},
	{9787, (BODY_INDEX)-1, 376, NULL},
	{2774, (BODY_INDEX)-1, 376, NULL},
	{2775, (BODY_INDEX)-1, 376, NULL},
	{2776, (BODY_INDEX)-1, 376, NULL},
	{2777, (BODY_INDEX)-1, 376, NULL},
	{2778, (BODY_INDEX)-1, 376, NULL},
	{2779, (BODY_INDEX)-1, 376, NULL},
	{2780, (BODY_INDEX)-1, 376, NULL},
	{2781, (BODY_INDEX)-1, 376, NULL},
	{2782, (BODY_INDEX)-1, 376, NULL},
	{2783, (BODY_INDEX)-1, 376, NULL},
	{2784, (BODY_INDEX)-1, 376, NULL},
	{2785, (BODY_INDEX)-1, 376, NULL},
	{2786, (BODY_INDEX)-1, 376, NULL},
	{2787, (BODY_INDEX)-1, 376, NULL},
	{2788, (BODY_INDEX)-1, 376, NULL},
	{2789, (BODY_INDEX)-1, 376, NULL},
	{2790, (BODY_INDEX)-1, 376, NULL},
	{2791, (BODY_INDEX)-1, 376, NULL},
	{2792, (BODY_INDEX)-1, 376, NULL},
	{2793, (BODY_INDEX)-1, 376, NULL},
	{2794, (BODY_INDEX)-1, 430, NULL},
	{2795, (BODY_INDEX)-1, 430, NULL},
	{2796, (BODY_INDEX)-1, 430, NULL},
	{2797, (BODY_INDEX)-1, 430, NULL},
	{2798, (BODY_INDEX)-1, 430, NULL},
	{2799, (BODY_INDEX)-1, 430, NULL},
	{2800, (BODY_INDEX)-1, 430, NULL},
	{2801, (BODY_INDEX)-1, 430, NULL},
	{2802, (BODY_INDEX)-1, 430, NULL},
	{2803, (BODY_INDEX)-1, 430, NULL},
	{2804, (BODY_INDEX)-1, 430, NULL},
	{2805, (BODY_INDEX)-1, 430, NULL},
	{2806, (BODY_INDEX)-1, 430, NULL},
	{2807, (BODY_INDEX)-1, 430, NULL},
	{2808, (BODY_INDEX)-1, 430, NULL},
	{2809, (BODY_INDEX)-1, 430, NULL},
	{2810, (BODY_INDEX)-1, 430, NULL},
	{2811, (BODY_INDEX)-1, 430, NULL},
	{2812, (BODY_INDEX)-1, 430, NULL},
	{2813, (BODY_INDEX)-1, 430, NULL},
	{2814, (BODY_INDEX)-1, 430, NULL},
	{2815, (BODY_INDEX)-1, 430, NULL},
	{2816, (BODY_INDEX)-1, 430, NULL},
	{2817, (BODY_INDEX)-1, 430, NULL},
	{2818, (BODY_INDEX)-1, 430, NULL},
	{2819, (BODY_INDEX)-1, 430, NULL},
	{2820, (BODY_INDEX)-1, 430, NULL},
	{2821, (BODY_INDEX)-1, 430, NULL},
	{2822, (BODY_INDEX)-1, 430, NULL},
	{2823, (BODY_INDEX)-1, 430, NULL},
	{2824, (BODY_INDEX)-1, 430, NULL},
	{2825, (BODY_INDEX)-1, 430, NULL},
	{2826, (BODY_INDEX)-1, 430, NULL},
	{2827, (BODY_INDEX)-1, 430, NULL},
	{2828, (BODY_INDEX)-1, 430, NULL},
	{2829, (BODY_INDEX)-1, 430, NULL},
	{2830, (BODY_INDEX)-1, 430, NULL},
	{2831, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2832, (BODY_INDEX)-1, 430, NULL},
	{2833, (BODY_INDEX)-1, 430, NULL},
	{2834, (BODY_INDEX)-1, 430, NULL},
	{2835, (BODY_INDEX)-1, 430, NULL},
	{2836, (BODY_INDEX)-1, 430, NULL},
	{2837, (BODY_INDEX)-1, 430, NULL},
	{2838, (BODY_INDEX)-1, 430, NULL},
	{2839, (BODY_INDEX)-1, 430, NULL},
	{2840, (BODY_INDEX)-1, 430, NULL},
	{2841, (BODY_INDEX)-1, 430, NULL},
	{2842, (BODY_INDEX)-1, 430, NULL},
	{2843, (BODY_INDEX)-1, 430, NULL},
	{2844, (BODY_INDEX)-1, 430, NULL},
	{2845, (BODY_INDEX)-1, 430, NULL},
	{2846, (BODY_INDEX)-1, 430, NULL},
	{2847, (BODY_INDEX)-1, 430, NULL},
	{2848, (BODY_INDEX)-1, 430, NULL},
	{2849, (BODY_INDEX)-1, 430, NULL},
	{2850, (BODY_INDEX)-1, 430, NULL},
	{2851, (BODY_INDEX)-1, 430, NULL},
	{2852, (BODY_INDEX)-1, 430, NULL},
	{2853, (BODY_INDEX)-1, 430, NULL},
	{2760, (BODY_INDEX)-1, 430, NULL},
	{2761, (BODY_INDEX)-1, 430, NULL},
	{2762, (BODY_INDEX)-1, 430, NULL},
	{2763, (BODY_INDEX)-1, 430, NULL},
	{2764, (BODY_INDEX)-1, 430, NULL},
	{2765, (BODY_INDEX)-1, 430, NULL},
	{2766, (BODY_INDEX)-1, 430, NULL},
	{2767, (BODY_INDEX)-1, 430, NULL},
	{2768, (BODY_INDEX)-1, 430, NULL},
	{2769, (BODY_INDEX)-1, 430, NULL},
	{2770, (BODY_INDEX)-1, 430, NULL},
	{9661, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9430, (BODY_INDEX)-1, 376, NULL},
	{9806, (BODY_INDEX)-1, 389, NULL},
	{9785, (BODY_INDEX)-1, 0, NULL},
	{9792, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9793, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9794, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9903, (BODY_INDEX)-1, 430, NULL},
	{9797, 53, 376, NULL},
	{9664, (BODY_INDEX)-1, 376, NULL},
	{9665, 48, 373, NULL},
	{9663, 0, 389, NULL},
	{9667, 68, 430, NULL},
	{9659, (BODY_INDEX)-1, 430, NULL},
	{9669, 128, 427, NULL},
	{9646, 62, 433, NULL},
	{9647, 59, 436, NULL},
	{9648, 120, 439, NULL},
	{9660, 64, 442, NULL},
	{9650, (BODY_INDEX)-1, 442, NULL},
	{9651, 60, 445, NULL},
	{9662, 58, 454, NULL},
	{9653, 116, 448, NULL},
	{9666, 136, 451, NULL},
	{9668, 72, 430, NULL},
	{9901, (BODY_INDEX)-1, 376, NULL},
	{9835, 51, 376, NULL},
	{9834, 52, 376, NULL},
	{9838, (BODY_INDEX)-1, 376, NULL},
	{9836, (BODY_INDEX)-1, 376, NULL},
	{9837, (BODY_INDEX)-1, 376, NULL},
	{9839, (BODY_INDEX)-1, 376, NULL},
	{9840, (BODY_INDEX)-1, 376, NULL},
	{9907, 57, 376, NULL},
	{9872, (BODY_INDEX)-1, 376, NULL},
	{9796, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9807, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9808, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9809, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9810, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9812, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9813, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9814, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9815, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9818, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9819, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9820, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9821, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9822, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9823, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9824, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9825, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9826, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9827, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9828, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9829, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9830, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9816, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9817, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9811, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9841, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9842, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9843, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9844, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9845, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9846, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9850, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9851, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9852, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9853, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9854, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9855, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9856, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9857, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9858, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9859, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9860, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9861, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9862, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9649, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9864, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9865, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9652, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9863, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9654, (BODY_INDEX)-1, 373, NULL},
	{9655, (BODY_INDEX)-1, 389, gen_type4_357},
	{9656, (BODY_INDEX)-1, 430, NULL},
	{9657, (BODY_INDEX)-1, 448, NULL},
	{9658, (BODY_INDEX)-1, 451, NULL},
	{2481, (BODY_INDEX)-1, 430, NULL},
	{2449, (BODY_INDEX)-1, 430, NULL},
	{2450, (BODY_INDEX)-1, 430, NULL},
	{2451, (BODY_INDEX)-1, 430, NULL},
	{2452, (BODY_INDEX)-1, 430, NULL},
	{2453, (BODY_INDEX)-1, 430, NULL},
	{2454, (BODY_INDEX)-1, 430, NULL},
	{2455, (BODY_INDEX)-1, 430, NULL},
	{2456, (BODY_INDEX)-1, 430, NULL},
	{2457, (BODY_INDEX)-1, 430, NULL},
	{2458, (BODY_INDEX)-1, 430, NULL},
	{2459, (BODY_INDEX)-1, 430, NULL},
	{2460, (BODY_INDEX)-1, 430, NULL},
	{2461, (BODY_INDEX)-1, 430, NULL},
	{2462, (BODY_INDEX)-1, 430, NULL},
	{2463, (BODY_INDEX)-1, 430, NULL},
	{2464, (BODY_INDEX)-1, 430, NULL},
	{2465, (BODY_INDEX)-1, 430, NULL},
	{2466, (BODY_INDEX)-1, 430, NULL},
	{2467, (BODY_INDEX)-1, 430, NULL},
	{2468, (BODY_INDEX)-1, 430, NULL},
	{2469, (BODY_INDEX)-1, 430, NULL},
	{2470, (BODY_INDEX)-1, 430, NULL},
	{2471, (BODY_INDEX)-1, 430, NULL},
	{2472, (BODY_INDEX)-1, 430, NULL},
	{2473, (BODY_INDEX)-1, 430, NULL},
	{2474, (BODY_INDEX)-1, 430, NULL},
	{2475, (BODY_INDEX)-1, 430, NULL},
	{2476, (BODY_INDEX)-1, 430, NULL},
	{2477, (BODY_INDEX)-1, 430, NULL},
	{2478, (BODY_INDEX)-1, 430, NULL},
	{2479, (BODY_INDEX)-1, 430, NULL},
	{2480, (BODY_INDEX)-1, 376, NULL},
	{2892, (BODY_INDEX)-1, 167, NULL},
	{3031, (BODY_INDEX)-1, 389, NULL},
	{3032, (BODY_INDEX)-1, 376, NULL},
	{3033, (BODY_INDEX)-1, 376, NULL},
	{3034, (BODY_INDEX)-1, 376, NULL},
	{3035, (BODY_INDEX)-1, 389, NULL},
	{3036, (BODY_INDEX)-1, 376, NULL},
	{3037, (BODY_INDEX)-1, 376, NULL},
	{3038, (BODY_INDEX)-1, 389, NULL},
	{3014, (BODY_INDEX)-1, 389, NULL},
	{3015, (BODY_INDEX)-1, 389, NULL},
	{3016, (BODY_INDEX)-1, 430, NULL},
	{3017, (BODY_INDEX)-1, 389, NULL},
	{3018, (BODY_INDEX)-1, 389, NULL},
	{3019, (BODY_INDEX)-1, 430, NULL},
	{3020, (BODY_INDEX)-1, 389, NULL},
	{3021, (BODY_INDEX)-1, 389, NULL},
	{3022, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3023, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3024, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3025, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3026, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3027, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3028, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3029, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3030, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{4704, (BODY_INDEX)-1, 376, NULL},
	{4705, (BODY_INDEX)-1, 376, NULL},
	{4706, (BODY_INDEX)-1, 376, NULL},
	{4707, (BODY_INDEX)-1, 376, NULL},
	{4708, (BODY_INDEX)-1, 376, NULL},
	{4709, (BODY_INDEX)-1, 376, NULL},
	{4710, (BODY_INDEX)-1, 376, NULL},
	{4711, (BODY_INDEX)-1, 376, NULL},
	{4712, (BODY_INDEX)-1, 376, NULL},
	{4713, (BODY_INDEX)-1, 430, NULL},
	{4714, (BODY_INDEX)-1, 430, NULL},
	{4715, (BODY_INDEX)-1, 430, NULL},
	{4716, (BODY_INDEX)-1, 430, NULL},
	{4717, (BODY_INDEX)-1, 430, NULL},
	{4718, (BODY_INDEX)-1, 430, NULL},
	{4719, (BODY_INDEX)-1, 430, NULL},
	{4720, (BODY_INDEX)-1, 430, NULL},
	{4721, (BODY_INDEX)-1, 430, NULL},
	{4722, (BODY_INDEX)-1, 430, NULL},
	{4723, (BODY_INDEX)-1, 430, NULL},
	{4724, (BODY_INDEX)-1, 430, NULL},
	{4725, (BODY_INDEX)-1, 430, NULL},
	{4726, (BODY_INDEX)-1, 430, NULL},
	{4727, (BODY_INDEX)-1, 430, NULL},
	{4728, (BODY_INDEX)-1, 430, NULL},
	{4729, (BODY_INDEX)-1, 430, NULL},
	{4730, (BODY_INDEX)-1, 430, NULL},
	{4731, (BODY_INDEX)-1, 430, NULL},
	{4682, (BODY_INDEX)-1, 430, NULL},
	{4683, (BODY_INDEX)-1, 430, NULL},
	{4684, (BODY_INDEX)-1, 430, NULL},
	{4685, (BODY_INDEX)-1, 430, NULL},
	{4686, (BODY_INDEX)-1, 430, NULL},
	{4687, (BODY_INDEX)-1, 430, NULL},
	{4688, (BODY_INDEX)-1, 430, NULL},
	{4689, (BODY_INDEX)-1, 430, NULL},
	{4690, (BODY_INDEX)-1, 430, NULL},
	{4691, (BODY_INDEX)-1, 430, NULL},
	{4692, (BODY_INDEX)-1, 430, NULL},
	{4693, (BODY_INDEX)-1, 430, NULL},
	{4694, (BODY_INDEX)-1, 430, NULL},
	{4695, (BODY_INDEX)-1, 430, NULL},
	{4696, (BODY_INDEX)-1, 430, NULL},
	{4697, (BODY_INDEX)-1, 430, NULL},
	{4698, (BODY_INDEX)-1, 430, NULL},
	{4699, (BODY_INDEX)-1, 430, NULL},
	{4700, (BODY_INDEX)-1, 430, NULL},
	{4701, (BODY_INDEX)-1, 430, NULL},
	{4702, (BODY_INDEX)-1, 430, NULL},
	{4703, (BODY_INDEX)-1, 430, NULL},
	{9786, (BODY_INDEX)-1, 376, NULL},
	{9878, (BODY_INDEX)-1, 376, NULL},
	{9879, (BODY_INDEX)-1, 376, NULL},
	{9905, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9904, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9889, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9795, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9902, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9798, 76, 430, NULL},
	{9799, 80, 430, NULL},
	{9800, 84, 430, NULL},
	{9801, 8, 194, gen_type5_357},
	{9802, 16, 194, gen_type6_357},
	{9906, (BODY_INDEX)-1, 194, NULL},
	{9804, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9805, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9831, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9832, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9847, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9848, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9849, 49, 376, NULL},
	{9866, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9867, (BODY_INDEX)-1, 7, NULL},
	{9868, (BODY_INDEX)-1, 7, NULL},
	{9869, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9870, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9871, (BODY_INDEX)-1, 376, NULL},
	{9750, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9751, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9752, (BODY_INDEX)-1, 376, NULL},
	{9753, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9754, (BODY_INDEX)-1, 430, NULL},
	{9755, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9756, (BODY_INDEX)-1, 430, NULL},
	{9757, (BODY_INDEX)-1, 376, NULL},
	{9887, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9888, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9760, 50, 376, NULL},
	{9761, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9762, (BODY_INDEX)-1, 376, NULL},
	{9763, (BODY_INDEX)-1, 376, NULL},
	{9764, (BODY_INDEX)-1, 430, NULL},
	{9765, (BODY_INDEX)-1, 430, NULL},
	{9766, 24, 389, NULL},
	{9890, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9767, (BODY_INDEX)-1, 344, NULL},
	{9768, 32, 344, NULL},
	{9769, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9770, (BODY_INDEX)-1, 430, NULL},
	{9771, (BODY_INDEX)-1, 430, NULL},
	{9772, (BODY_INDEX)-1, 430, NULL},
	{9773, (BODY_INDEX)-1, 430, NULL},
	{9774, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9775, (BODY_INDEX)-1, 430, NULL},
	{9776, (BODY_INDEX)-1, 430, NULL},
	{9777, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9778, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9779, (BODY_INDEX)-1, 430, NULL},
	{9780, (BODY_INDEX)-1, 430, NULL},
	{9781, (BODY_INDEX)-1, 0, NULL},
	{9782, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9783, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9784, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9835, 51, 376, NULL},
	{9834, 52, 376, NULL},
	{9797, 53, 376, NULL},
	{2264, (BODY_INDEX)-1, 376, NULL},
	{2265, (BODY_INDEX)-1, 376, NULL},
	{2266, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2862, (BODY_INDEX)-1, 171, NULL},
	{2863, (BODY_INDEX)-1, 171, NULL},
	{2864, (BODY_INDEX)-1, 171, NULL},
	{2865, (BODY_INDEX)-1, 171, NULL},
	{2866, (BODY_INDEX)-1, 171, NULL},
	{2867, (BODY_INDEX)-1, 171, NULL},
	{2868, (BODY_INDEX)-1, 157, NULL},
	{2869, (BODY_INDEX)-1, 430, NULL},
	{2870, (BODY_INDEX)-1, 516, gen_type7_357},
	{2871, (BODY_INDEX)-1, 430, NULL},
	{2872, (BODY_INDEX)-1, 835, gen_type8_357},
	{2873, (BODY_INDEX)-1, 835, gen_type9_357},
	{2874, (BODY_INDEX)-1, 835, gen_type10_357},
	{2854, (BODY_INDEX)-1, 376, NULL},
	{2855, (BODY_INDEX)-1, 454, NULL},
	{2856, (BODY_INDEX)-1, 516, gen_type11_357},
	{2857, (BODY_INDEX)-1, 430, NULL},
	{2858, (BODY_INDEX)-1, 516, gen_type12_357},
	{2859, (BODY_INDEX)-1, 91, NULL},
	{2860, (BODY_INDEX)-1, 379, NULL},
	{2861, (BODY_INDEX)-1, 430, NULL},
	{9908, 54, 376, NULL},
	{9874, 55, 376, NULL},
	{9875, 56, 376, NULL},
	{9876, (BODY_INDEX)-1, 430, NULL},
	{9877, (BODY_INDEX)-1, 376, NULL},
	{9880, (BODY_INDEX)-1, 376, NULL},
	{9881, (BODY_INDEX)-1, 376, NULL},
	{9882, (BODY_INDEX)-1, 376, NULL},
	{9883, 88, 430, NULL},
	{9884, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9885, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9886, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9891, 92, 430, NULL},
	{9892, 96, 430, NULL},
	{9893, 100, 430, NULL},
	{9894, 104, 430, NULL},
	{9937, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9935, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9936, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9895, (BODY_INDEX)-1, 430, NULL},
	{9896, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9897, (BODY_INDEX)-1, 430, NULL},
	{9898, (BODY_INDEX)-1, 430, NULL},
	{9899, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9907, 57, 376, NULL},
	{9920, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9873, 40, 356, NULL},
	{9921, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9953, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9910, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9911, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9912, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9913, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9914, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9915, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9916, 108, 430, NULL},
	{9917, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9918, 112, 430, NULL},
	{9919, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9922, (BODY_INDEX)-1, 430, NULL},
	{9923, (BODY_INDEX)-1, 430, NULL},
	{9924, (BODY_INDEX)-1, 376, NULL},
	{9925, (BODY_INDEX)-1, 376, NULL},
	{9926, (BODY_INDEX)-1, 376, NULL},
	{9927, (BODY_INDEX)-1, 430, NULL},
	{9928, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9929, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9930, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9931, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9932, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9933, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9934, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9938, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9939, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9940, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9941, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9942, (BODY_INDEX)-1, 430, NULL},
	{9943, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9944, (BODY_INDEX)-1, 430, NULL},
	{9945, (BODY_INDEX)-1, 376, NULL},
	{9946, (BODY_INDEX)-1, 430, NULL},
	{9954, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9955, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9956, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9957, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{9952, (BODY_INDEX)-1, 376, NULL},
};

extern void Init357(void);
void Init357(void)
{
	IDSC(desc_357, 0, 356);
	IDSC(desc_357 + 1, 4, 356);
	IDSC(desc_357 + 34, 206, 356);
	IDSC(desc_357 + 128, 333, 356);
	IDSC(desc_357 + 130, 365, 356);
	IDSC(desc_357 + 217, 57, 356);
	IDSC(desc_357 + 250, 142, 356);
	IDSC(desc_357 + 251, 65, 356);
	IDSC(desc_357 + 276, 72, 356);
	IDSC(desc_357 + 326, 356, 356);
	IDSC(desc_357 + 392, 205, 356);
	IDSC(desc_357 + 395, 43, 356);
	IDSC(desc_357 + 416, 191, 356);
	IDSC(desc_357 + 441, 192, 356);
	IDSC(desc_357 + 444, 39, 356);
	IDSC(desc_357 + 477, 312, 356);
}


#ifdef __cplusplus
}
#endif

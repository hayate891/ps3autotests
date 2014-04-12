#include "spu_test.spu.h"

int main(void)
{		
	TEST_2(spu_convtf, vec_int4_t, int32_t, vec_float4_t)
	TEST_2(spu_convtf, vec_uint4_t, int32_t, vec_float4_t)
	TEST_1(spu_extend, vec_char16_t, vec_short8_t)
	TEST_1(spu_extend, vec_short8_t, vec_int4_t)
	TEST_1(spu_extend, vec_int4_t, vec_llong2_t)
	TEST_1(spu_extend, vec_float4_t, vec_double2_t)
	TEST_2(spu_add, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_add, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_add, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_add, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_add, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_2(spu_add, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_add, vec_ushort8_t, uint16_t, vec_ushort8_t)
	TEST_2(spu_add, vec_short8_t, int16_t, vec_short8_t)
	TEST_2(spu_add, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2(spu_add, vec_int4_t, int32_t, vec_int4_t)
	TEST_3(spu_addx, vec_int4_t, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_3(spu_addx, vec_uint4_t, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_genc, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_genc, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_3(spu_gencx, vec_int4_t, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_3(spu_gencx, vec_uint4_t, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_3(spu_madd, vec_short8_t, vec_short8_t, vec_int4_t, vec_int4_t)
	TEST_3(spu_madd, vec_float4_t, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_3(spu_madd, vec_double2_t, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_3(spu_msub, vec_float4_t, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_3(spu_msub, vec_double2_t, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_3(spu_mhhadd, vec_ushort8_t, vec_ushort8_t, vec_uint4_t, vec_uint4_t)
	TEST_3(spu_mhhadd, vec_short8_t, vec_short8_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_mule, vec_ushort8_t, vec_ushort8_t, vec_uint4_t)
	TEST_2(spu_mule, vec_short8_t, vec_short8_t, vec_int4_t)
	TEST_2(spu_mul, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_2(spu_mul, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_mulo, vec_short8_t, vec_short8_t, vec_int4_t)
	TEST_2(spu_mulo, vec_ushort8_t, vec_ushort8_t, vec_uint4_t)
	TEST_2(spu_mulo, vec_short8_t, int16_t, vec_int4_t)
	TEST_2(spu_mulo, vec_ushort8_t, uint16_t, vec_uint4_t)
	TEST_3(spu_nmsub, vec_float4_t, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_3(spu_nmsub, vec_double2_t, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_sub, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_sub, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_sub, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_sub, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_sub, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_2(spu_sub, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_sub, uint16_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_sub, int16_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_sub, uint32_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_sub, int32_t, vec_int4_t, vec_int4_t)
	TEST_3(spu_subx, vec_uint4_t, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_3(spu_subx, vec_int4_t, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_genb, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_genb, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_3(spu_genbx, vec_uint4_t, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_3(spu_genbx, vec_int4_t, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_cmpeq, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_cmpeq, vec_char16_t, vec_char16_t, vec_uchar16_t)
	TEST_2(spu_cmpeq, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_cmpeq, vec_short8_t, vec_short8_t, vec_ushort8_t)
	TEST_2(spu_cmpeq, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_cmpeq, vec_int4_t, vec_int4_t, vec_uint4_t)
	TEST_2(spu_cmpeq, vec_float4_t, vec_float4_t, vec_uint4_t)
	TEST_2(spu_cmpeq, vec_uchar16_t, uint8_t, vec_uchar16_t)
	TEST_2(spu_cmpeq, vec_char16_t, int8_t, vec_uchar16_t)
	TEST_2(spu_cmpeq, vec_ushort8_t, uint16_t, vec_ushort8_t)
	TEST_2(spu_cmpeq, vec_short8_t, int16_t, vec_ushort8_t)
	TEST_2(spu_cmpeq, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2(spu_cmpeq, vec_int4_t, int32_t, vec_uint4_t)
	TEST_2(spu_cmpgt, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_cmpgt, vec_char16_t, vec_char16_t, vec_uchar16_t)
	TEST_2(spu_cmpgt, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_cmpgt, vec_short8_t, vec_short8_t, vec_ushort8_t)
	TEST_2(spu_cmpgt, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_cmpgt, vec_int4_t, vec_int4_t, vec_uint4_t)
	TEST_2(spu_cmpgt, vec_float4_t, vec_float4_t, vec_uint4_t)
	TEST_2(spu_cmpgt, vec_uchar16_t, uint8_t, vec_uchar16_t)
	TEST_2(spu_cmpgt, vec_char16_t, int8_t, vec_uchar16_t)
	TEST_2(spu_cmpgt, vec_ushort8_t, uint16_t, vec_ushort8_t)
	TEST_2(spu_cmpgt, vec_short8_t, int16_t, vec_ushort8_t)
	TEST_2(spu_cmpgt, vec_int4_t, int32_t, vec_uint4_t)
	TEST_2(spu_cmpgt, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_1(spu_cntb, vec_char16_t, vec_uchar16_t)
	TEST_1(spu_cntb, vec_uchar16_t, vec_uchar16_t)
	TEST_1(spu_cntlz, vec_int4_t, vec_uint4_t)
	TEST_1(spu_cntlz, vec_uint4_t, vec_uint4_t)
	TEST_1(spu_cntlz, vec_float4_t, vec_uint4_t)
	TEST_1(spu_gather, vec_int4_t, vec_uint4_t)
	TEST_1(spu_gather, vec_uint4_t, vec_uint4_t)
	TEST_1(spu_gather, vec_short8_t, vec_uint4_t)
	TEST_1(spu_gather, vec_ushort8_t, vec_uint4_t)
	TEST_1(spu_gather, vec_char16_t, vec_uint4_t)
	TEST_1(spu_gather, vec_uchar16_t, vec_uint4_t)
	TEST_1(spu_gather, vec_float4_t, vec_uint4_t)
	TEST_1(spu_maskb, uint16_t, vec_uchar16_t)
	TEST_1(spu_maskb, int16_t, vec_uchar16_t)
	TEST_1(spu_maskb, uint32_t, vec_uchar16_t)
	TEST_1(spu_maskb, int32_t, vec_uchar16_t)
	TEST_1(spu_maskh, uint8_t, vec_ushort8_t)
	TEST_1(spu_maskh, int8_t, vec_ushort8_t)
	TEST_1(spu_maskh, char, vec_ushort8_t)
	TEST_1(spu_maskh, uint16_t, vec_ushort8_t)
	TEST_1(spu_maskh, int16_t, vec_ushort8_t)
	TEST_1(spu_maskh, uint32_t, vec_ushort8_t)
	TEST_1(spu_maskh, int32_t, vec_ushort8_t)
	TEST_1(spu_maskw, uint8_t, vec_uint4_t)
	TEST_1(spu_maskw, int8_t, vec_uint4_t)
	TEST_1(spu_maskw, char, vec_uint4_t)
	TEST_1(spu_maskw, uint16_t, vec_uint4_t)
	TEST_1(spu_maskw, int16_t, vec_uint4_t)
	TEST_1(spu_maskw, uint32_t, vec_uint4_t)
	TEST_1(spu_maskw, int32_t, vec_uint4_t)
	TEST_3(spu_sel, vec_llong2_t, vec_llong2_t, vec_ullong2_t, vec_llong2_t)
	TEST_3(spu_sel, vec_ullong2_t, vec_ullong2_t, vec_ullong2_t, vec_ullong2_t)
	TEST_3(spu_sel, vec_int4_t, vec_int4_t, vec_uint4_t, vec_int4_t)
	TEST_3(spu_sel, vec_uint4_t, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_3(spu_sel, vec_short8_t, vec_short8_t, vec_ushort8_t, vec_short8_t)
	TEST_3(spu_sel, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_3(spu_sel, vec_char16_t, vec_char16_t, vec_uchar16_t, vec_char16_t)
	TEST_3(spu_sel, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_3(spu_sel, vec_float4_t, vec_float4_t, vec_uint4_t, vec_float4_t)
	TEST_3(spu_sel, vec_double2_t, vec_double2_t, vec_ullong2_t, vec_double2_t)
	TEST_3(spu_sel, vec_llong2_t, vec_llong2_t, vec_uchar16_t, vec_llong2_t)
	TEST_3(spu_sel, vec_ullong2_t, vec_ullong2_t, vec_uchar16_t, vec_ullong2_t)
	TEST_3(spu_sel, vec_int4_t, vec_int4_t, vec_uchar16_t, vec_int4_t)
	TEST_3(spu_sel, vec_uint4_t, vec_uint4_t, vec_uchar16_t, vec_uint4_t)
	TEST_3(spu_sel, vec_short8_t, vec_short8_t, vec_uchar16_t, vec_short8_t)
	TEST_3(spu_sel, vec_ushort8_t, vec_ushort8_t, vec_uchar16_t, vec_ushort8_t)
	TEST_3(spu_sel, vec_float4_t, vec_float4_t, vec_uchar16_t, vec_float4_t)
	TEST_3(spu_sel, vec_double2_t, vec_double2_t, vec_uchar16_t, vec_double2_t)
	TEST_3(spu_shuffle, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_3(spu_shuffle, vec_char16_t, vec_char16_t, vec_uchar16_t, vec_char16_t)
	TEST_3(spu_shuffle, vec_ushort8_t, vec_ushort8_t, vec_uchar16_t, vec_ushort8_t)
	TEST_3(spu_shuffle, vec_short8_t, vec_short8_t, vec_uchar16_t, vec_short8_t)
	TEST_3(spu_shuffle, vec_uint4_t, vec_uint4_t, vec_uchar16_t, vec_uint4_t)
	TEST_3(spu_shuffle, vec_int4_t, vec_int4_t, vec_uchar16_t, vec_int4_t)
	TEST_3(spu_shuffle, vec_ullong2_t, vec_ullong2_t, vec_uchar16_t, vec_ullong2_t)
	TEST_3(spu_shuffle, vec_llong2_t, vec_llong2_t, vec_uchar16_t, vec_llong2_t)
	TEST_3(spu_shuffle, vec_float4_t, vec_float4_t, vec_uchar16_t, vec_float4_t)
	TEST_3(spu_shuffle, vec_double2_t, vec_double2_t, vec_uchar16_t, vec_double2_t)
	TEST_2(spu_and, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_and, vec_char16_t, vec_char16_t, vec_char16_t)
	TEST_2(spu_and, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_and, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_and, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_and, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_and, vec_ullong2_t, vec_ullong2_t, vec_ullong2_t)
	TEST_2(spu_and, vec_llong2_t, vec_llong2_t, vec_llong2_t)
	TEST_2(spu_and, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_2(spu_and, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_and, vec_uchar16_t, uint8_t, vec_uchar16_t)
	TEST_2(spu_and, vec_char16_t, int8_t, vec_char16_t)
	TEST_2(spu_and, vec_ushort8_t, uint16_t, vec_ushort8_t)
	TEST_2(spu_and, vec_short8_t, int16_t, vec_short8_t)
	TEST_2(spu_and, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2(spu_and, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_andc, vec_llong2_t, vec_llong2_t, vec_llong2_t)
	TEST_2(spu_andc, vec_ullong2_t, vec_ullong2_t, vec_ullong2_t)
	TEST_2(spu_andc, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_andc, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_andc, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_andc, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_andc, vec_char16_t, vec_char16_t, vec_char16_t)
	TEST_2(spu_andc, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_andc, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_2(spu_andc, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_eqv, vec_llong2_t, vec_llong2_t, vec_llong2_t)
	TEST_2(spu_eqv, vec_ullong2_t, vec_ullong2_t, vec_ullong2_t)
	TEST_2(spu_eqv, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_eqv, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_eqv, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_eqv, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_eqv, vec_char16_t, vec_char16_t, vec_char16_t)
	TEST_2(spu_eqv, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_eqv, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_2(spu_eqv, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_nand, vec_llong2_t, vec_llong2_t, vec_llong2_t)
	TEST_2(spu_nand, vec_ullong2_t, vec_ullong2_t, vec_ullong2_t)
	TEST_2(spu_nand, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_nand, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_nand, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_nand, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_nand, vec_char16_t, vec_char16_t, vec_char16_t)
	TEST_2(spu_nand, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_nand, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_2(spu_nand, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_nor, vec_llong2_t, vec_llong2_t, vec_llong2_t)
	TEST_2(spu_nor, vec_ullong2_t, vec_ullong2_t, vec_ullong2_t)
	TEST_2(spu_nor, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_nor, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_nor, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_nor, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_nor, vec_char16_t, vec_char16_t, vec_char16_t)
	TEST_2(spu_nor, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_nor, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_2(spu_nor, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_or, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_or, vec_char16_t, vec_char16_t, vec_char16_t)
	TEST_2(spu_or, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_or, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_or, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_or, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_or, vec_ullong2_t, vec_ullong2_t, vec_ullong2_t)
	TEST_2(spu_or, vec_llong2_t, vec_llong2_t, vec_llong2_t)
	TEST_2(spu_or, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_2(spu_or, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_or, vec_uchar16_t, uint8_t, vec_uchar16_t)
	TEST_2(spu_or, vec_char16_t, int8_t, vec_char16_t)
	TEST_2(spu_or, vec_ushort8_t, uint16_t, vec_ushort8_t)
	TEST_2(spu_or, vec_short8_t, int16_t, vec_short8_t)
	TEST_2(spu_or, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2(spu_or, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_orc, vec_llong2_t, vec_llong2_t, vec_llong2_t)
	TEST_2(spu_orc, vec_ullong2_t, vec_ullong2_t, vec_ullong2_t)
	TEST_2(spu_orc, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_orc, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_orc, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_orc, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_orc, vec_char16_t, vec_char16_t, vec_char16_t)
	TEST_2(spu_orc, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_orc, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_2(spu_orc, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_1(spu_orx, vec_int4_t, vec_int4_t)
	TEST_1(spu_orx, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_xor, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_xor, vec_char16_t, vec_char16_t, vec_char16_t)
	TEST_2(spu_xor, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_xor, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_xor, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_xor, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_xor, vec_ullong2_t, vec_ullong2_t, vec_ullong2_t)
	TEST_2(spu_xor, vec_llong2_t, vec_llong2_t, vec_llong2_t)
	TEST_2(spu_xor, vec_float4_t, vec_float4_t, vec_float4_t)
	TEST_2(spu_xor, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_xor, vec_uchar16_t, uint8_t, vec_uchar16_t)
	TEST_2(spu_xor, vec_char16_t, int8_t, vec_char16_t)
	TEST_2(spu_xor, vec_ushort8_t, uint16_t, vec_ushort8_t)
	TEST_2(spu_xor, vec_short8_t, int16_t, vec_short8_t)
	TEST_2(spu_xor, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2(spu_xor, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_rl, vec_ushort8_t, vec_short8_t, vec_ushort8_t)
	TEST_2(spu_rl, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_rl, vec_uint4_t, vec_int4_t, vec_uint4_t)
	TEST_2(spu_rl, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_rl, vec_ushort8_t, int16_t, vec_ushort8_t)
	TEST_2(spu_rl, vec_short8_t, int16_t, vec_short8_t)
	TEST_2(spu_rl, vec_uint4_t, int32_t, vec_uint4_t)
	TEST_2(spu_rl, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_rlqw, vec_uchar16_t, int32_t, vec_uchar16_t)
	TEST_2(spu_rlqw, vec_char16_t, int32_t, vec_char16_t)
	TEST_2(spu_rlqw, vec_ushort8_t, int32_t, vec_ushort8_t)
	TEST_2(spu_rlqw, vec_short8_t, int32_t, vec_short8_t)
	TEST_2(spu_rlqw, vec_uint4_t, int32_t, vec_uint4_t)
	TEST_2(spu_rlqw, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_rlqw, vec_ullong2_t, int32_t, vec_ullong2_t)
	TEST_2(spu_rlqw, vec_llong2_t, int32_t, vec_llong2_t)
	TEST_2(spu_rlqw, vec_float4_t, int32_t, vec_float4_t)
	TEST_2(spu_rlqw, vec_double2_t, int32_t, vec_double2_t)
	TEST_2(spu_rlqwbyte, vec_uchar16_t, int32_t, vec_uchar16_t)
	TEST_2(spu_rlqwbyte, vec_char16_t, int32_t, vec_char16_t)
	TEST_2(spu_rlqwbyte, vec_ushort8_t, int32_t, vec_ushort8_t)
	TEST_2(spu_rlqwbyte, vec_short8_t, int32_t, vec_short8_t)
	TEST_2(spu_rlqwbyte, vec_uint4_t, int32_t, vec_uint4_t)
	TEST_2(spu_rlqwbyte, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_rlqwbyte, vec_ullong2_t, int32_t, vec_ullong2_t)
	TEST_2(spu_rlqwbyte, vec_llong2_t, int32_t, vec_llong2_t)
	TEST_2(spu_rlqwbyte, vec_float4_t, int32_t, vec_float4_t)
	TEST_2(spu_rlqwbyte, vec_double2_t, int32_t, vec_double2_t)
	TEST_2(spu_rlqwbytebc, vec_uchar16_t, int32_t, vec_uchar16_t)
	TEST_2(spu_rlqwbytebc, vec_char16_t, int32_t, vec_char16_t)
	TEST_2(spu_rlqwbytebc, vec_ushort8_t, int32_t, vec_ushort8_t)
	TEST_2(spu_rlqwbytebc, vec_short8_t, int32_t, vec_short8_t)
	TEST_2(spu_rlqwbytebc, vec_uint4_t, int32_t, vec_uint4_t)
	TEST_2(spu_rlqwbytebc, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_rlqwbytebc, vec_ullong2_t, int32_t, vec_ullong2_t)
	TEST_2(spu_rlqwbytebc, vec_llong2_t, int32_t, vec_llong2_t)
	TEST_2(spu_rlqwbytebc, vec_float4_t, int32_t, vec_float4_t)
	TEST_2(spu_rlqwbytebc, vec_double2_t, int32_t, vec_double2_t)
	TEST_2(spu_rlmask, vec_ushort8_t, vec_short8_t, vec_ushort8_t)
	TEST_2(spu_rlmask, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_rlmask, vec_uint4_t, vec_int4_t, vec_uint4_t)
	TEST_2(spu_rlmask, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_rlmask, vec_ushort8_t, int32_t, vec_ushort8_t)
	TEST_2(spu_rlmask, vec_short8_t, int32_t, vec_short8_t)
	TEST_2(spu_rlmask, vec_uint4_t, int32_t, vec_uint4_t)
	TEST_2(spu_rlmask, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_rlmaska, vec_ushort8_t, vec_short8_t, vec_ushort8_t)
	TEST_2(spu_rlmaska, vec_short8_t, vec_short8_t, vec_short8_t)
	TEST_2(spu_rlmaska, vec_uint4_t, vec_int4_t, vec_uint4_t)
	TEST_2(spu_rlmaska, vec_int4_t, vec_int4_t, vec_int4_t)
	TEST_2(spu_rlmaska, vec_ushort8_t, int32_t, vec_ushort8_t)
	TEST_2(spu_rlmaska, vec_short8_t, int32_t, vec_short8_t)
	TEST_2(spu_rlmaska, vec_uint4_t, int32_t, vec_uint4_t)
	TEST_2(spu_rlmaska, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_rlmaskqw, vec_uchar16_t, int32_t, vec_uchar16_t)
	TEST_2(spu_rlmaskqw, vec_char16_t, int32_t, vec_char16_t)
	TEST_2(spu_rlmaskqw, vec_ushort8_t, int32_t, vec_ushort8_t)
	TEST_2(spu_rlmaskqw, vec_short8_t, int32_t, vec_short8_t)
	TEST_2(spu_rlmaskqw, vec_uint4_t, int32_t, vec_uint4_t)
	TEST_2(spu_rlmaskqw, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_rlmaskqw, vec_ullong2_t, int32_t, vec_ullong2_t)
	TEST_2(spu_rlmaskqw, vec_llong2_t, int32_t, vec_llong2_t)
	TEST_2(spu_rlmaskqw, vec_float4_t, int32_t, vec_float4_t)
	TEST_2(spu_rlmaskqw, vec_double2_t, int32_t, vec_double2_t)
	TEST_2(spu_rlmaskqwbyte, vec_uchar16_t, int32_t, vec_uchar16_t)
	TEST_2(spu_rlmaskqwbyte, vec_char16_t, int32_t, vec_char16_t)
	TEST_2(spu_rlmaskqwbyte, vec_ushort8_t, int32_t, vec_ushort8_t)
	TEST_2(spu_rlmaskqwbyte, vec_short8_t, int32_t, vec_short8_t)
	TEST_2(spu_rlmaskqwbyte, vec_uint4_t, int32_t, vec_uint4_t)
	TEST_2(spu_rlmaskqwbyte, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_rlmaskqwbyte, vec_ullong2_t, int32_t, vec_ullong2_t)
	TEST_2(spu_rlmaskqwbyte, vec_llong2_t, int32_t, vec_llong2_t)
	TEST_2(spu_rlmaskqwbyte, vec_float4_t, int32_t, vec_float4_t)
	TEST_2(spu_rlmaskqwbyte, vec_double2_t, int32_t, vec_double2_t)
	TEST_2(spu_rlmaskqwbytebc, vec_uchar16_t, int32_t, vec_uchar16_t)
	TEST_2(spu_rlmaskqwbytebc, vec_char16_t, int32_t, vec_char16_t)
	TEST_2(spu_rlmaskqwbytebc, vec_ushort8_t, int32_t, vec_ushort8_t)
	TEST_2(spu_rlmaskqwbytebc, vec_short8_t, int32_t, vec_short8_t)
	TEST_2(spu_rlmaskqwbytebc, vec_uint4_t, int32_t, vec_uint4_t)
	TEST_2(spu_rlmaskqwbytebc, vec_int4_t, int32_t, vec_int4_t)
	TEST_2(spu_rlmaskqwbytebc, vec_ullong2_t, int32_t, vec_ullong2_t)
	TEST_2(spu_rlmaskqwbytebc, vec_llong2_t, int32_t, vec_llong2_t)
	TEST_2(spu_rlmaskqwbytebc, vec_float4_t, int32_t, vec_float4_t)
	TEST_2(spu_rlmaskqwbytebc, vec_double2_t, int32_t, vec_double2_t)
	TEST_2(spu_sl, vec_ushort8_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2(spu_sl, vec_short8_t, vec_ushort8_t, vec_short8_t)
	TEST_2(spu_sl, vec_uint4_t, vec_uint4_t, vec_uint4_t)
	TEST_2(spu_sl, vec_int4_t, vec_uint4_t, vec_int4_t)
	TEST_2(spu_sl, vec_ushort8_t, uint32_t, vec_ushort8_t)
	TEST_2(spu_sl, vec_short8_t, uint32_t, vec_short8_t)
	TEST_2(spu_sl, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2(spu_sl, vec_int4_t, uint32_t, vec_int4_t)
	TEST_2(spu_slqw, vec_llong2_t, uint32_t, vec_llong2_t)
	TEST_2(spu_slqw, vec_ullong2_t, uint32_t, vec_ullong2_t)
	TEST_2(spu_slqw, vec_int4_t, uint32_t, vec_int4_t)
	TEST_2(spu_slqw, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2(spu_slqw, vec_short8_t, uint32_t, vec_short8_t)
	TEST_2(spu_slqw, vec_ushort8_t, uint32_t, vec_ushort8_t)
	TEST_2(spu_slqw, vec_char16_t, uint32_t, vec_char16_t)
	TEST_2(spu_slqw, vec_uchar16_t, uint32_t, vec_uchar16_t)
	TEST_2(spu_slqw, vec_float4_t, uint32_t, vec_float4_t)
	TEST_2(spu_slqw, vec_double2_t, uint32_t, vec_double2_t)
	TEST_2(spu_slqwbyte, vec_llong2_t, uint32_t, vec_llong2_t)
	TEST_2(spu_slqwbyte, vec_ullong2_t, uint32_t, vec_ullong2_t)
	TEST_2(spu_slqwbyte, vec_int4_t, uint32_t, vec_int4_t)
	TEST_2(spu_slqwbyte, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2(spu_slqwbyte, vec_short8_t, uint32_t, vec_short8_t)
	TEST_2(spu_slqwbyte, vec_ushort8_t, uint32_t, vec_ushort8_t)
	TEST_2(spu_slqwbyte, vec_char16_t, uint32_t, vec_char16_t)
	TEST_2(spu_slqwbyte, vec_uchar16_t, uint32_t, vec_uchar16_t)
	TEST_2(spu_slqwbyte, vec_float4_t, uint32_t, vec_float4_t)
	TEST_2(spu_slqwbyte, vec_double2_t, uint32_t, vec_double2_t)
	TEST_2(spu_slqwbytebc, vec_llong2_t, uint32_t, vec_llong2_t)
	TEST_2(spu_slqwbytebc, vec_ullong2_t, uint32_t, vec_ullong2_t)
	TEST_2(spu_slqwbytebc, vec_int4_t, uint32_t, vec_int4_t)
	TEST_2(spu_slqwbytebc, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2(spu_slqwbytebc, vec_short8_t, uint32_t, vec_short8_t)
	TEST_2(spu_slqwbytebc, vec_ushort8_t, uint32_t, vec_ushort8_t)
	TEST_2(spu_slqwbytebc, vec_char16_t, uint32_t, vec_char16_t)
	TEST_2(spu_slqwbytebc, vec_uchar16_t, uint32_t, vec_uchar16_t)
	TEST_2(spu_slqwbytebc, vec_float4_t, uint32_t, vec_float4_t)
	TEST_2(spu_slqwbytebc, vec_double2_t, uint32_t, vec_double2_t)
	TEST_1(spu_splats, uint8_t, vec_uchar16_t)
	TEST_1(spu_splats, int8_t, vec_char16_t)
	TEST_1(spu_splats, char, vec_char16_t)
	TEST_1(spu_splats, uint16_t, vec_ushort8_t)
	TEST_1(spu_splats, int16_t, vec_short8_t)
	TEST_1(spu_splats, uint32_t, vec_uint4_t)
	TEST_1(spu_splats, int32_t, vec_int4_t)
	TEST_1(spu_splats, uint64_t, vec_ullong2_t)
	TEST_1(spu_splats, int64_t, vec_llong2_t)
	TEST_1(spu_splats, float, vec_float4_t)
	TEST_1(spu_splats, double, vec_double2_t)
	TEST_2(spu_extract, vec_uchar16_t, int32_t, uint8_t)
	TEST_2(spu_extract, vec_char16_t, int32_t, int8_t)
	TEST_2(spu_extract, vec_ushort8_t, int32_t, uint16_t)
	TEST_2(spu_extract, vec_short8_t, int32_t, int16_t)
	TEST_2(spu_extract, vec_uint4_t, int32_t, uint32_t)
	TEST_2(spu_extract, vec_int4_t, int32_t, int32_t)
	TEST_2(spu_extract, vec_ullong2_t, int32_t, uint64_t)
	TEST_2(spu_extract, vec_llong2_t, int32_t, int64_t)
	TEST_2(spu_extract, vec_float4_t, int32_t, float)
	TEST_2(spu_extract, vec_double2_t, int32_t, double)
	TEST_3(spu_insert, uint8_t, vec_uchar16_t, int32_t, vec_uchar16_t)
	TEST_3(spu_insert, int8_t, vec_char16_t, int32_t, vec_char16_t)
	TEST_3(spu_insert, uint16_t, vec_ushort8_t, int32_t, vec_ushort8_t)
	TEST_3(spu_insert, int16_t, vec_short8_t, int32_t, vec_short8_t)
	TEST_3(spu_insert, uint32_t, vec_uint4_t, int32_t, vec_uint4_t)
	TEST_3(spu_insert, int32_t, vec_int4_t, int32_t, vec_int4_t)
	TEST_3(spu_insert, uint64_t, vec_ullong2_t, int32_t, vec_ullong2_t)
	TEST_3(spu_insert, int64_t, vec_llong2_t, int32_t, vec_llong2_t)
	TEST_3(spu_insert, float, vec_float4_t, int32_t, vec_float4_t)
	TEST_3(spu_insert, double, vec_double2_t, int32_t, vec_double2_t)
	TEST_2(spu_promote, uint8_t, int32_t, vec_uchar16_t)
	TEST_2(spu_promote, int8_t, int32_t, vec_char16_t)
	TEST_2(spu_promote, char, int32_t, vec_char16_t)
	TEST_2(spu_promote, uint16_t, int32_t, vec_ushort8_t)
	TEST_2(spu_promote, int16_t, int32_t, vec_short8_t)
	TEST_2(spu_promote, uint32_t, int32_t, vec_uint4_t)
	TEST_2(spu_promote, int32_t, int32_t, vec_int4_t)
	TEST_2(spu_promote, uint64_t, int32_t, vec_ullong2_t)
	TEST_2(spu_promote, int64_t, int32_t, vec_llong2_t)
	TEST_2(spu_promote, float, int32_t, vec_float4_t)
	TEST_2(spu_promote, double, int32_t, vec_double2_t)
	TEST_1(spu_re, vec_float4_t, vec_float4_t)
	TEST_1(spu_rsqrte, vec_float4_t, vec_float4_t)
	TEST_2(spu_convts, vec_float4_t, uint32_t, vec_int4_t)
	TEST_2(spu_convtu, vec_float4_t, uint32_t, vec_uint4_t)
	TEST_1(spu_roundtf, vec_double2_t, vec_float4_t)
	TEST_2(spu_mulh, vec_short8_t, vec_short8_t, vec_int4_t)
	TEST_2(spu_mulsr, vec_short8_t, vec_short8_t, vec_int4_t)
	TEST_1(spu_frest, vec_float4_t, vec_float4_t)
	TEST_1(spu_frsqest, vec_float4_t, vec_float4_t)
	TEST_3(spu_nmadd, vec_double2_t, vec_double2_t, vec_double2_t, vec_double2_t)
	TEST_2(spu_absd, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_avg, vec_uchar16_t, vec_uchar16_t, vec_uchar16_t)
	TEST_2(spu_sumb, vec_uchar16_t, vec_uchar16_t, vec_ushort8_t)
	TEST_2(spu_cmpabseq, vec_float4_t, vec_float4_t, vec_uint4_t)
	TEST_2(spu_cmpabsgt, vec_float4_t, vec_float4_t, vec_uint4_t)
	
	return 0;
}
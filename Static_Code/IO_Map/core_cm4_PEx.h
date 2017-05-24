/*
** ###################################################################
**     Compilers:           ARM Compiler
**                          Freescale C/C++ for Embedded ARM
**                          GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**
**
**     Abstract:
**         This header file implements compatibility layer between
**         Freescale Processor Expert and CMSIS Cortex-M4 Core Peripheral 
**         Access Layer Header File.
**
**     Copyright: 1997 - 2013 Freescale, Inc. All Rights Reserved.
**
**     http:                 www.freescale.com
**     mail:                 support@freescale.com
** ###################################################################
*/
/*!
 * @file core_cm4_PEx.h
 * @version 1.0
 * @date 2013-10-04
 * @brief CMSIS compatibility layer forFreescale Processor Expert
 *
 * This header file implements compatibility layer between Freescale Processor Expert and CMSIS Cortex-M4 Core Peripheral Access Layer Header File.
 */

#ifndef __PEx_CORE_CM4_H
#define __PEx_CORE_CM4_H

/* ----------------------------------------------------------------------------
   -- NVIC - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NVIC_Register_Accessor_Macros NVIC - Register accessor macros
 * @{
 */


/* NVIC - Register accessors */
#define NVIC_ISER_REG(base,index)                ((base)->ISER[index])
#define NVIC_ICER_REG(base,index)                ((base)->ICER[index])
#define NVIC_ISPR_REG(base,index)                ((base)->ISPR[index])
#define NVIC_ICPR_REG(base,index)                ((base)->ICPR[index])
#define NVIC_IABR_REG(base,index)                ((base)->IABR[index])
#define NVIC_IP_REG(base,index)                  ((base)->IP[index])
#define NVIC_STIR_REG(base,index)                ((base)->STIR)

/*!
 * @}
 */ /* end of group NVIC_Register_Accessor_Macros */


/* ----------------------------------------------------------------------------
   -- NVIC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NVIC_Register_Masks NVIC Register Masks
 * @{
 */

/* ISER Bit Fields */
#define NVIC_ISER_SETENA_MASK                    0xFFFFFFFFu
#define NVIC_ISER_SETENA_SHIFT                   0
#define NVIC_ISER_SETENA(x)                      (((uint32_t)(((uint32_t)(x))<<NVIC_ISER_SETENA_SHIFT))&NVIC_ISER_SETENA_MASK)
/* ICER Bit Fields */
#define NVIC_ICER_CLRENA_MASK                    0xFFFFFFFFu
#define NVIC_ICER_CLRENA_SHIFT                   0
#define NVIC_ICER_CLRENA(x)                      (((uint32_t)(((uint32_t)(x))<<NVIC_ICER_CLRENA_SHIFT))&NVIC_ICER_CLRENA_MASK)
/* ISPR Bit Fields */
#define NVIC_ISPR_SETPEND_MASK                   0xFFFFFFFFu
#define NVIC_ISPR_SETPEND_SHIFT                  0
#define NVIC_ISPR_SETPEND(x)                     (((uint32_t)(((uint32_t)(x))<<NVIC_ISPR_SETPEND_SHIFT))&NVIC_ISPR_SETPEND_MASK)
/* ICPR Bit Fields */
#define NVIC_ICPR_CLRPEND_MASK                   0xFFFFFFFFu
#define NVIC_ICPR_CLRPEND_SHIFT                  0
#define NVIC_ICPR_CLRPEND(x)                     (((uint32_t)(((uint32_t)(x))<<NVIC_ICPR_CLRPEND_SHIFT))&NVIC_ICPR_CLRPEND_MASK)
/* IABR Bit Fields */
#define NVIC_IABR_ACTIVE_MASK                    0xFFFFFFFFu
#define NVIC_IABR_ACTIVE_SHIFT                   0
#define NVIC_IABR_ACTIVE(x)                      (((uint32_t)(((uint32_t)(x))<<NVIC_IABR_ACTIVE_SHIFT))&NVIC_IABR_ACTIVE_MASK)
/* IP Bit Fields */
#define NVIC_IP_PRI0_MASK                        0xFFu
#define NVIC_IP_PRI0_SHIFT                       0
#define NVIC_IP_PRI0(x)                          (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI0_SHIFT))&NVIC_IP_PRI0_MASK)
#define NVIC_IP_PRI1_MASK                        0xFFu
#define NVIC_IP_PRI1_SHIFT                       0
#define NVIC_IP_PRI1(x)                          (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI1_SHIFT))&NVIC_IP_PRI1_MASK)
#define NVIC_IP_PRI2_MASK                        0xFFu
#define NVIC_IP_PRI2_SHIFT                       0
#define NVIC_IP_PRI2(x)                          (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI2_SHIFT))&NVIC_IP_PRI2_MASK)
#define NVIC_IP_PRI3_MASK                        0xFFu
#define NVIC_IP_PRI3_SHIFT                       0
#define NVIC_IP_PRI3(x)                          (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI3_SHIFT))&NVIC_IP_PRI3_MASK)
#define NVIC_IP_PRI4_MASK                        0xFFu
#define NVIC_IP_PRI4_SHIFT                       0
#define NVIC_IP_PRI4(x)                          (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI4_SHIFT))&NVIC_IP_PRI4_MASK)
#define NVIC_IP_PRI5_MASK                        0xFFu
#define NVIC_IP_PRI5_SHIFT                       0
#define NVIC_IP_PRI5(x)                          (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI5_SHIFT))&NVIC_IP_PRI5_MASK)
#define NVIC_IP_PRI6_MASK                        0xFFu
#define NVIC_IP_PRI6_SHIFT                       0
#define NVIC_IP_PRI6(x)                          (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI6_SHIFT))&NVIC_IP_PRI6_MASK)
#define NVIC_IP_PRI7_MASK                        0xFFu
#define NVIC_IP_PRI7_SHIFT                       0
#define NVIC_IP_PRI7(x)                          (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI7_SHIFT))&NVIC_IP_PRI7_MASK)
#define NVIC_IP_PRI8_MASK                        0xFFu
#define NVIC_IP_PRI8_SHIFT                       0
#define NVIC_IP_PRI8(x)                          (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI8_SHIFT))&NVIC_IP_PRI8_MASK)
#define NVIC_IP_PRI9_MASK                        0xFFu
#define NVIC_IP_PRI9_SHIFT                       0
#define NVIC_IP_PRI9(x)                          (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI9_SHIFT))&NVIC_IP_PRI9_MASK)
#define NVIC_IP_PRI10_MASK                       0xFFu
#define NVIC_IP_PRI10_SHIFT                      0
#define NVIC_IP_PRI10(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI10_SHIFT))&NVIC_IP_PRI10_MASK)
#define NVIC_IP_PRI11_MASK                       0xFFu
#define NVIC_IP_PRI11_SHIFT                      0
#define NVIC_IP_PRI11(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI11_SHIFT))&NVIC_IP_PRI11_MASK)
#define NVIC_IP_PRI12_MASK                       0xFFu
#define NVIC_IP_PRI12_SHIFT                      0
#define NVIC_IP_PRI12(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI12_SHIFT))&NVIC_IP_PRI12_MASK)
#define NVIC_IP_PRI13_MASK                       0xFFu
#define NVIC_IP_PRI13_SHIFT                      0
#define NVIC_IP_PRI13(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI13_SHIFT))&NVIC_IP_PRI13_MASK)
#define NVIC_IP_PRI14_MASK                       0xFFu
#define NVIC_IP_PRI14_SHIFT                      0
#define NVIC_IP_PRI14(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI14_SHIFT))&NVIC_IP_PRI14_MASK)
#define NVIC_IP_PRI15_MASK                       0xFFu
#define NVIC_IP_PRI15_SHIFT                      0
#define NVIC_IP_PRI15(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI15_SHIFT))&NVIC_IP_PRI15_MASK)
#define NVIC_IP_PRI16_MASK                       0xFFu
#define NVIC_IP_PRI16_SHIFT                      0
#define NVIC_IP_PRI16(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI16_SHIFT))&NVIC_IP_PRI16_MASK)
#define NVIC_IP_PRI17_MASK                       0xFFu
#define NVIC_IP_PRI17_SHIFT                      0
#define NVIC_IP_PRI17(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI17_SHIFT))&NVIC_IP_PRI17_MASK)
#define NVIC_IP_PRI18_MASK                       0xFFu
#define NVIC_IP_PRI18_SHIFT                      0
#define NVIC_IP_PRI18(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI18_SHIFT))&NVIC_IP_PRI18_MASK)
#define NVIC_IP_PRI19_MASK                       0xFFu
#define NVIC_IP_PRI19_SHIFT                      0
#define NVIC_IP_PRI19(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI19_SHIFT))&NVIC_IP_PRI19_MASK)
#define NVIC_IP_PRI20_MASK                       0xFFu
#define NVIC_IP_PRI20_SHIFT                      0
#define NVIC_IP_PRI20(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI20_SHIFT))&NVIC_IP_PRI20_MASK)
#define NVIC_IP_PRI21_MASK                       0xFFu
#define NVIC_IP_PRI21_SHIFT                      0
#define NVIC_IP_PRI21(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI21_SHIFT))&NVIC_IP_PRI21_MASK)
#define NVIC_IP_PRI22_MASK                       0xFFu
#define NVIC_IP_PRI22_SHIFT                      0
#define NVIC_IP_PRI22(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI22_SHIFT))&NVIC_IP_PRI22_MASK)
#define NVIC_IP_PRI23_MASK                       0xFFu
#define NVIC_IP_PRI23_SHIFT                      0
#define NVIC_IP_PRI23(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI23_SHIFT))&NVIC_IP_PRI23_MASK)
#define NVIC_IP_PRI24_MASK                       0xFFu
#define NVIC_IP_PRI24_SHIFT                      0
#define NVIC_IP_PRI24(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI24_SHIFT))&NVIC_IP_PRI24_MASK)
#define NVIC_IP_PRI25_MASK                       0xFFu
#define NVIC_IP_PRI25_SHIFT                      0
#define NVIC_IP_PRI25(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI25_SHIFT))&NVIC_IP_PRI25_MASK)
#define NVIC_IP_PRI26_MASK                       0xFFu
#define NVIC_IP_PRI26_SHIFT                      0
#define NVIC_IP_PRI26(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI26_SHIFT))&NVIC_IP_PRI26_MASK)
#define NVIC_IP_PRI27_MASK                       0xFFu
#define NVIC_IP_PRI27_SHIFT                      0
#define NVIC_IP_PRI27(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI27_SHIFT))&NVIC_IP_PRI27_MASK)
#define NVIC_IP_PRI28_MASK                       0xFFu
#define NVIC_IP_PRI28_SHIFT                      0
#define NVIC_IP_PRI28(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI28_SHIFT))&NVIC_IP_PRI28_MASK)
#define NVIC_IP_PRI29_MASK                       0xFFu
#define NVIC_IP_PRI29_SHIFT                      0
#define NVIC_IP_PRI29(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI29_SHIFT))&NVIC_IP_PRI29_MASK)
#define NVIC_IP_PRI30_MASK                       0xFFu
#define NVIC_IP_PRI30_SHIFT                      0
#define NVIC_IP_PRI30(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI30_SHIFT))&NVIC_IP_PRI30_MASK)
#define NVIC_IP_PRI31_MASK                       0xFFu
#define NVIC_IP_PRI31_SHIFT                      0
#define NVIC_IP_PRI31(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI31_SHIFT))&NVIC_IP_PRI31_MASK)
#define NVIC_IP_PRI32_MASK                       0xFFu
#define NVIC_IP_PRI32_SHIFT                      0
#define NVIC_IP_PRI32(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI32_SHIFT))&NVIC_IP_PRI32_MASK)
#define NVIC_IP_PRI33_MASK                       0xFFu
#define NVIC_IP_PRI33_SHIFT                      0
#define NVIC_IP_PRI33(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI33_SHIFT))&NVIC_IP_PRI33_MASK)
#define NVIC_IP_PRI34_MASK                       0xFFu
#define NVIC_IP_PRI34_SHIFT                      0
#define NVIC_IP_PRI34(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI34_SHIFT))&NVIC_IP_PRI34_MASK)
#define NVIC_IP_PRI35_MASK                       0xFFu
#define NVIC_IP_PRI35_SHIFT                      0
#define NVIC_IP_PRI35(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI35_SHIFT))&NVIC_IP_PRI35_MASK)
#define NVIC_IP_PRI36_MASK                       0xFFu
#define NVIC_IP_PRI36_SHIFT                      0
#define NVIC_IP_PRI36(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI36_SHIFT))&NVIC_IP_PRI36_MASK)
#define NVIC_IP_PRI37_MASK                       0xFFu
#define NVIC_IP_PRI37_SHIFT                      0
#define NVIC_IP_PRI37(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI37_SHIFT))&NVIC_IP_PRI37_MASK)
#define NVIC_IP_PRI38_MASK                       0xFFu
#define NVIC_IP_PRI38_SHIFT                      0
#define NVIC_IP_PRI38(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI38_SHIFT))&NVIC_IP_PRI38_MASK)
#define NVIC_IP_PRI39_MASK                       0xFFu
#define NVIC_IP_PRI39_SHIFT                      0
#define NVIC_IP_PRI39(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI39_SHIFT))&NVIC_IP_PRI39_MASK)
#define NVIC_IP_PRI40_MASK                       0xFFu
#define NVIC_IP_PRI40_SHIFT                      0
#define NVIC_IP_PRI40(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI40_SHIFT))&NVIC_IP_PRI40_MASK)
#define NVIC_IP_PRI41_MASK                       0xFFu
#define NVIC_IP_PRI41_SHIFT                      0
#define NVIC_IP_PRI41(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI41_SHIFT))&NVIC_IP_PRI41_MASK)
#define NVIC_IP_PRI42_MASK                       0xFFu
#define NVIC_IP_PRI42_SHIFT                      0
#define NVIC_IP_PRI42(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI42_SHIFT))&NVIC_IP_PRI42_MASK)
#define NVIC_IP_PRI43_MASK                       0xFFu
#define NVIC_IP_PRI43_SHIFT                      0
#define NVIC_IP_PRI43(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI43_SHIFT))&NVIC_IP_PRI43_MASK)
#define NVIC_IP_PRI44_MASK                       0xFFu
#define NVIC_IP_PRI44_SHIFT                      0
#define NVIC_IP_PRI44(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI44_SHIFT))&NVIC_IP_PRI44_MASK)
#define NVIC_IP_PRI45_MASK                       0xFFu
#define NVIC_IP_PRI45_SHIFT                      0
#define NVIC_IP_PRI45(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI45_SHIFT))&NVIC_IP_PRI45_MASK)
#define NVIC_IP_PRI46_MASK                       0xFFu
#define NVIC_IP_PRI46_SHIFT                      0
#define NVIC_IP_PRI46(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI46_SHIFT))&NVIC_IP_PRI46_MASK)
#define NVIC_IP_PRI47_MASK                       0xFFu
#define NVIC_IP_PRI47_SHIFT                      0
#define NVIC_IP_PRI47(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI47_SHIFT))&NVIC_IP_PRI47_MASK)
#define NVIC_IP_PRI48_MASK                       0xFFu
#define NVIC_IP_PRI48_SHIFT                      0
#define NVIC_IP_PRI48(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI48_SHIFT))&NVIC_IP_PRI48_MASK)
#define NVIC_IP_PRI49_MASK                       0xFFu
#define NVIC_IP_PRI49_SHIFT                      0
#define NVIC_IP_PRI49(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI49_SHIFT))&NVIC_IP_PRI49_MASK)
#define NVIC_IP_PRI50_MASK                       0xFFu
#define NVIC_IP_PRI50_SHIFT                      0
#define NVIC_IP_PRI50(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI50_SHIFT))&NVIC_IP_PRI50_MASK)
#define NVIC_IP_PRI51_MASK                       0xFFu
#define NVIC_IP_PRI51_SHIFT                      0
#define NVIC_IP_PRI51(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI51_SHIFT))&NVIC_IP_PRI51_MASK)
#define NVIC_IP_PRI52_MASK                       0xFFu
#define NVIC_IP_PRI52_SHIFT                      0
#define NVIC_IP_PRI52(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI52_SHIFT))&NVIC_IP_PRI52_MASK)
#define NVIC_IP_PRI53_MASK                       0xFFu
#define NVIC_IP_PRI53_SHIFT                      0
#define NVIC_IP_PRI53(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI53_SHIFT))&NVIC_IP_PRI53_MASK)
#define NVIC_IP_PRI54_MASK                       0xFFu
#define NVIC_IP_PRI54_SHIFT                      0
#define NVIC_IP_PRI54(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI54_SHIFT))&NVIC_IP_PRI54_MASK)
#define NVIC_IP_PRI55_MASK                       0xFFu
#define NVIC_IP_PRI55_SHIFT                      0
#define NVIC_IP_PRI55(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI55_SHIFT))&NVIC_IP_PRI55_MASK)
#define NVIC_IP_PRI56_MASK                       0xFFu
#define NVIC_IP_PRI56_SHIFT                      0
#define NVIC_IP_PRI56(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI56_SHIFT))&NVIC_IP_PRI56_MASK)
#define NVIC_IP_PRI57_MASK                       0xFFu
#define NVIC_IP_PRI57_SHIFT                      0
#define NVIC_IP_PRI57(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI57_SHIFT))&NVIC_IP_PRI57_MASK)
#define NVIC_IP_PRI58_MASK                       0xFFu
#define NVIC_IP_PRI58_SHIFT                      0
#define NVIC_IP_PRI58(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI58_SHIFT))&NVIC_IP_PRI58_MASK)
#define NVIC_IP_PRI59_MASK                       0xFFu
#define NVIC_IP_PRI59_SHIFT                      0
#define NVIC_IP_PRI59(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI59_SHIFT))&NVIC_IP_PRI59_MASK)
#define NVIC_IP_PRI60_MASK                       0xFFu
#define NVIC_IP_PRI60_SHIFT                      0
#define NVIC_IP_PRI60(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI60_SHIFT))&NVIC_IP_PRI60_MASK)
#define NVIC_IP_PRI61_MASK                       0xFFu
#define NVIC_IP_PRI61_SHIFT                      0
#define NVIC_IP_PRI61(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI61_SHIFT))&NVIC_IP_PRI61_MASK)
#define NVIC_IP_PRI62_MASK                       0xFFu
#define NVIC_IP_PRI62_SHIFT                      0
#define NVIC_IP_PRI62(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI62_SHIFT))&NVIC_IP_PRI62_MASK)
#define NVIC_IP_PRI63_MASK                       0xFFu
#define NVIC_IP_PRI63_SHIFT                      0
#define NVIC_IP_PRI63(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI63_SHIFT))&NVIC_IP_PRI63_MASK)
#define NVIC_IP_PRI64_MASK                       0xFFu
#define NVIC_IP_PRI64_SHIFT                      0
#define NVIC_IP_PRI64(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI64_SHIFT))&NVIC_IP_PRI64_MASK)
#define NVIC_IP_PRI65_MASK                       0xFFu
#define NVIC_IP_PRI65_SHIFT                      0
#define NVIC_IP_PRI65(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI65_SHIFT))&NVIC_IP_PRI65_MASK)
#define NVIC_IP_PRI66_MASK                       0xFFu
#define NVIC_IP_PRI66_SHIFT                      0
#define NVIC_IP_PRI66(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI66_SHIFT))&NVIC_IP_PRI66_MASK)
#define NVIC_IP_PRI67_MASK                       0xFFu
#define NVIC_IP_PRI67_SHIFT                      0
#define NVIC_IP_PRI67(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI67_SHIFT))&NVIC_IP_PRI67_MASK)
#define NVIC_IP_PRI68_MASK                       0xFFu
#define NVIC_IP_PRI68_SHIFT                      0
#define NVIC_IP_PRI68(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI68_SHIFT))&NVIC_IP_PRI68_MASK)
#define NVIC_IP_PRI69_MASK                       0xFFu
#define NVIC_IP_PRI69_SHIFT                      0
#define NVIC_IP_PRI69(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI69_SHIFT))&NVIC_IP_PRI69_MASK)
#define NVIC_IP_PRI70_MASK                       0xFFu
#define NVIC_IP_PRI70_SHIFT                      0
#define NVIC_IP_PRI70(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI70_SHIFT))&NVIC_IP_PRI70_MASK)
#define NVIC_IP_PRI71_MASK                       0xFFu
#define NVIC_IP_PRI71_SHIFT                      0
#define NVIC_IP_PRI71(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI71_SHIFT))&NVIC_IP_PRI71_MASK)
#define NVIC_IP_PRI72_MASK                       0xFFu
#define NVIC_IP_PRI72_SHIFT                      0
#define NVIC_IP_PRI72(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI72_SHIFT))&NVIC_IP_PRI72_MASK)
#define NVIC_IP_PRI73_MASK                       0xFFu
#define NVIC_IP_PRI73_SHIFT                      0
#define NVIC_IP_PRI73(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI73_SHIFT))&NVIC_IP_PRI73_MASK)
#define NVIC_IP_PRI74_MASK                       0xFFu
#define NVIC_IP_PRI74_SHIFT                      0
#define NVIC_IP_PRI74(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI74_SHIFT))&NVIC_IP_PRI74_MASK)
#define NVIC_IP_PRI75_MASK                       0xFFu
#define NVIC_IP_PRI75_SHIFT                      0
#define NVIC_IP_PRI75(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI75_SHIFT))&NVIC_IP_PRI75_MASK)
#define NVIC_IP_PRI76_MASK                       0xFFu
#define NVIC_IP_PRI76_SHIFT                      0
#define NVIC_IP_PRI76(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI76_SHIFT))&NVIC_IP_PRI76_MASK)
#define NVIC_IP_PRI77_MASK                       0xFFu
#define NVIC_IP_PRI77_SHIFT                      0
#define NVIC_IP_PRI77(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI77_SHIFT))&NVIC_IP_PRI77_MASK)
#define NVIC_IP_PRI78_MASK                       0xFFu
#define NVIC_IP_PRI78_SHIFT                      0
#define NVIC_IP_PRI78(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI78_SHIFT))&NVIC_IP_PRI78_MASK)
#define NVIC_IP_PRI79_MASK                       0xFFu
#define NVIC_IP_PRI79_SHIFT                      0
#define NVIC_IP_PRI79(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI79_SHIFT))&NVIC_IP_PRI79_MASK)
#define NVIC_IP_PRI80_MASK                       0xFFu
#define NVIC_IP_PRI80_SHIFT                      0
#define NVIC_IP_PRI80(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI80_SHIFT))&NVIC_IP_PRI80_MASK)
#define NVIC_IP_PRI81_MASK                       0xFFu
#define NVIC_IP_PRI81_SHIFT                      0
#define NVIC_IP_PRI81(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI81_SHIFT))&NVIC_IP_PRI81_MASK)
#define NVIC_IP_PRI82_MASK                       0xFFu
#define NVIC_IP_PRI82_SHIFT                      0
#define NVIC_IP_PRI82(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI82_SHIFT))&NVIC_IP_PRI82_MASK)
#define NVIC_IP_PRI83_MASK                       0xFFu
#define NVIC_IP_PRI83_SHIFT                      0
#define NVIC_IP_PRI83(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI83_SHIFT))&NVIC_IP_PRI83_MASK)
#define NVIC_IP_PRI84_MASK                       0xFFu
#define NVIC_IP_PRI84_SHIFT                      0
#define NVIC_IP_PRI84(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI84_SHIFT))&NVIC_IP_PRI84_MASK)
#define NVIC_IP_PRI85_MASK                       0xFFu
#define NVIC_IP_PRI85_SHIFT                      0
#define NVIC_IP_PRI85(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI85_SHIFT))&NVIC_IP_PRI85_MASK)
#define NVIC_IP_PRI86_MASK                       0xFFu
#define NVIC_IP_PRI86_SHIFT                      0
#define NVIC_IP_PRI86(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI86_SHIFT))&NVIC_IP_PRI86_MASK)
#define NVIC_IP_PRI87_MASK                       0xFFu
#define NVIC_IP_PRI87_SHIFT                      0
#define NVIC_IP_PRI87(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI87_SHIFT))&NVIC_IP_PRI87_MASK)
#define NVIC_IP_PRI88_MASK                       0xFFu
#define NVIC_IP_PRI88_SHIFT                      0
#define NVIC_IP_PRI88(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI88_SHIFT))&NVIC_IP_PRI88_MASK)
#define NVIC_IP_PRI89_MASK                       0xFFu
#define NVIC_IP_PRI89_SHIFT                      0
#define NVIC_IP_PRI89(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI89_SHIFT))&NVIC_IP_PRI89_MASK)
#define NVIC_IP_PRI90_MASK                       0xFFu
#define NVIC_IP_PRI90_SHIFT                      0
#define NVIC_IP_PRI90(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI90_SHIFT))&NVIC_IP_PRI90_MASK)
#define NVIC_IP_PRI91_MASK                       0xFFu
#define NVIC_IP_PRI91_SHIFT                      0
#define NVIC_IP_PRI91(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI91_SHIFT))&NVIC_IP_PRI91_MASK)
#define NVIC_IP_PRI92_MASK                       0xFFu
#define NVIC_IP_PRI92_SHIFT                      0
#define NVIC_IP_PRI92(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI92_SHIFT))&NVIC_IP_PRI92_MASK)
#define NVIC_IP_PRI93_MASK                       0xFFu
#define NVIC_IP_PRI93_SHIFT                      0
#define NVIC_IP_PRI93(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI93_SHIFT))&NVIC_IP_PRI93_MASK)
#define NVIC_IP_PRI94_MASK                       0xFFu
#define NVIC_IP_PRI94_SHIFT                      0
#define NVIC_IP_PRI94(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI94_SHIFT))&NVIC_IP_PRI94_MASK)
#define NVIC_IP_PRI95_MASK                       0xFFu
#define NVIC_IP_PRI95_SHIFT                      0
#define NVIC_IP_PRI95(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI95_SHIFT))&NVIC_IP_PRI95_MASK)
#define NVIC_IP_PRI96_MASK                       0xFFu
#define NVIC_IP_PRI96_SHIFT                      0
#define NVIC_IP_PRI96(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI96_SHIFT))&NVIC_IP_PRI96_MASK)
#define NVIC_IP_PRI97_MASK                       0xFFu
#define NVIC_IP_PRI97_SHIFT                      0
#define NVIC_IP_PRI97(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI97_SHIFT))&NVIC_IP_PRI97_MASK)
#define NVIC_IP_PRI98_MASK                       0xFFu
#define NVIC_IP_PRI98_SHIFT                      0
#define NVIC_IP_PRI98(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI98_SHIFT))&NVIC_IP_PRI98_MASK)
#define NVIC_IP_PRI99_MASK                       0xFFu
#define NVIC_IP_PRI99_SHIFT                      0
#define NVIC_IP_PRI99(x)                         (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI99_SHIFT))&NVIC_IP_PRI99_MASK)
#define NVIC_IP_PRI100_MASK                      0xFFu
#define NVIC_IP_PRI100_SHIFT                     0
#define NVIC_IP_PRI100(x)                        (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI100_SHIFT))&NVIC_IP_PRI100_MASK)
#define NVIC_IP_PRI101_MASK                      0xFFu
#define NVIC_IP_PRI101_SHIFT                     0
#define NVIC_IP_PRI101(x)                        (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI101_SHIFT))&NVIC_IP_PRI101_MASK)
#define NVIC_IP_PRI102_MASK                      0xFFu
#define NVIC_IP_PRI102_SHIFT                     0
#define NVIC_IP_PRI102(x)                        (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI102_SHIFT))&NVIC_IP_PRI102_MASK)
#define NVIC_IP_PRI103_MASK                      0xFFu
#define NVIC_IP_PRI103_SHIFT                     0
#define NVIC_IP_PRI103(x)                        (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI103_SHIFT))&NVIC_IP_PRI103_MASK)
#define NVIC_IP_PRI104_MASK                      0xFFu
#define NVIC_IP_PRI104_SHIFT                     0
#define NVIC_IP_PRI104(x)                        (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI104_SHIFT))&NVIC_IP_PRI104_MASK)
#define NVIC_IP_PRI105_MASK                      0xFFu
#define NVIC_IP_PRI105_SHIFT                     0
#define NVIC_IP_PRI105(x)                        (((uint8_t)(((uint8_t)(x))<<NVIC_IP_PRI105_SHIFT))&NVIC_IP_PRI105_MASK)
/* STIR Bit Fields */
#define NVIC_STIR_INTID_MASK                     0x1FFu
#define NVIC_STIR_INTID_SHIFT                    0
#define NVIC_STIR_INTID(x)                       (((uint32_t)(((uint32_t)(x))<<NVIC_STIR_INTID_SHIFT))&NVIC_STIR_INTID_MASK)

/*!
 * @}
 */ /* end of group NVIC_Register_Masks */


/* NVIC - Peripheral instance base addresses */
/** Peripheral NVIC base pointer */
#define NVIC_BASE_PTR                            (NVIC)
/** Array initializer of NVIC peripheral base pointers */
#define NVIC_BASE_PTRS                           { NVIC_BASE_PTR }

/* ----------------------------------------------------------------------------
   -- NVIC - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NVIC_Register_Accessor_Macros NVIC - Register accessor macros
 * @{
 */


/* NVIC - Register instance definitions */
/* NVIC */
#define NVICISER0                                NVIC_ISER_REG(NVIC_BASE_PTR,0)
#define NVICISER1                                NVIC_ISER_REG(NVIC_BASE_PTR,1)
#define NVICISER2                                NVIC_ISER_REG(NVIC_BASE_PTR,2)
#define NVICISER3                                NVIC_ISER_REG(NVIC_BASE_PTR,3)
#define NVICICER0                                NVIC_ICER_REG(NVIC_BASE_PTR,0)
#define NVICICER1                                NVIC_ICER_REG(NVIC_BASE_PTR,1)
#define NVICICER2                                NVIC_ICER_REG(NVIC_BASE_PTR,2)
#define NVICICER3                                NVIC_ICER_REG(NVIC_BASE_PTR,3)
#define NVICISPR0                                NVIC_ISPR_REG(NVIC_BASE_PTR,0)
#define NVICISPR1                                NVIC_ISPR_REG(NVIC_BASE_PTR,1)
#define NVICISPR2                                NVIC_ISPR_REG(NVIC_BASE_PTR,2)
#define NVICISPR3                                NVIC_ISPR_REG(NVIC_BASE_PTR,3)
#define NVICICPR0                                NVIC_ICPR_REG(NVIC_BASE_PTR,0)
#define NVICICPR1                                NVIC_ICPR_REG(NVIC_BASE_PTR,1)
#define NVICICPR2                                NVIC_ICPR_REG(NVIC_BASE_PTR,2)
#define NVICICPR3                                NVIC_ICPR_REG(NVIC_BASE_PTR,3)
#define NVICIABR0                                NVIC_IABR_REG(NVIC_BASE_PTR,0)
#define NVICIABR1                                NVIC_IABR_REG(NVIC_BASE_PTR,1)
#define NVICIABR2                                NVIC_IABR_REG(NVIC_BASE_PTR,2)
#define NVICIABR3                                NVIC_IABR_REG(NVIC_BASE_PTR,3)
#define NVICIP0                                  NVIC_IP_REG(NVIC_BASE_PTR,0)
#define NVICIP1                                  NVIC_IP_REG(NVIC_BASE_PTR,1)
#define NVICIP2                                  NVIC_IP_REG(NVIC_BASE_PTR,2)
#define NVICIP3                                  NVIC_IP_REG(NVIC_BASE_PTR,3)
#define NVICIP4                                  NVIC_IP_REG(NVIC_BASE_PTR,4)
#define NVICIP5                                  NVIC_IP_REG(NVIC_BASE_PTR,5)
#define NVICIP6                                  NVIC_IP_REG(NVIC_BASE_PTR,6)
#define NVICIP7                                  NVIC_IP_REG(NVIC_BASE_PTR,7)
#define NVICIP8                                  NVIC_IP_REG(NVIC_BASE_PTR,8)
#define NVICIP9                                  NVIC_IP_REG(NVIC_BASE_PTR,9)
#define NVICIP10                                 NVIC_IP_REG(NVIC_BASE_PTR,10)
#define NVICIP11                                 NVIC_IP_REG(NVIC_BASE_PTR,11)
#define NVICIP12                                 NVIC_IP_REG(NVIC_BASE_PTR,12)
#define NVICIP13                                 NVIC_IP_REG(NVIC_BASE_PTR,13)
#define NVICIP14                                 NVIC_IP_REG(NVIC_BASE_PTR,14)
#define NVICIP15                                 NVIC_IP_REG(NVIC_BASE_PTR,15)
#define NVICIP16                                 NVIC_IP_REG(NVIC_BASE_PTR,16)
#define NVICIP17                                 NVIC_IP_REG(NVIC_BASE_PTR,17)
#define NVICIP18                                 NVIC_IP_REG(NVIC_BASE_PTR,18)
#define NVICIP19                                 NVIC_IP_REG(NVIC_BASE_PTR,19)
#define NVICIP20                                 NVIC_IP_REG(NVIC_BASE_PTR,20)
#define NVICIP21                                 NVIC_IP_REG(NVIC_BASE_PTR,21)
#define NVICIP22                                 NVIC_IP_REG(NVIC_BASE_PTR,22)
#define NVICIP23                                 NVIC_IP_REG(NVIC_BASE_PTR,23)
#define NVICIP24                                 NVIC_IP_REG(NVIC_BASE_PTR,24)
#define NVICIP25                                 NVIC_IP_REG(NVIC_BASE_PTR,25)
#define NVICIP26                                 NVIC_IP_REG(NVIC_BASE_PTR,26)
#define NVICIP27                                 NVIC_IP_REG(NVIC_BASE_PTR,27)
#define NVICIP28                                 NVIC_IP_REG(NVIC_BASE_PTR,28)
#define NVICIP29                                 NVIC_IP_REG(NVIC_BASE_PTR,29)
#define NVICIP30                                 NVIC_IP_REG(NVIC_BASE_PTR,30)
#define NVICIP31                                 NVIC_IP_REG(NVIC_BASE_PTR,31)
#define NVICIP32                                 NVIC_IP_REG(NVIC_BASE_PTR,32)
#define NVICIP33                                 NVIC_IP_REG(NVIC_BASE_PTR,33)
#define NVICIP34                                 NVIC_IP_REG(NVIC_BASE_PTR,34)
#define NVICIP35                                 NVIC_IP_REG(NVIC_BASE_PTR,35)
#define NVICIP36                                 NVIC_IP_REG(NVIC_BASE_PTR,36)
#define NVICIP37                                 NVIC_IP_REG(NVIC_BASE_PTR,37)
#define NVICIP38                                 NVIC_IP_REG(NVIC_BASE_PTR,38)
#define NVICIP39                                 NVIC_IP_REG(NVIC_BASE_PTR,39)
#define NVICIP40                                 NVIC_IP_REG(NVIC_BASE_PTR,40)
#define NVICIP41                                 NVIC_IP_REG(NVIC_BASE_PTR,41)
#define NVICIP42                                 NVIC_IP_REG(NVIC_BASE_PTR,42)
#define NVICIP43                                 NVIC_IP_REG(NVIC_BASE_PTR,43)
#define NVICIP44                                 NVIC_IP_REG(NVIC_BASE_PTR,44)
#define NVICIP45                                 NVIC_IP_REG(NVIC_BASE_PTR,45)
#define NVICIP46                                 NVIC_IP_REG(NVIC_BASE_PTR,46)
#define NVICIP47                                 NVIC_IP_REG(NVIC_BASE_PTR,47)
#define NVICIP48                                 NVIC_IP_REG(NVIC_BASE_PTR,48)
#define NVICIP49                                 NVIC_IP_REG(NVIC_BASE_PTR,49)
#define NVICIP50                                 NVIC_IP_REG(NVIC_BASE_PTR,50)
#define NVICIP51                                 NVIC_IP_REG(NVIC_BASE_PTR,51)
#define NVICIP52                                 NVIC_IP_REG(NVIC_BASE_PTR,52)
#define NVICIP53                                 NVIC_IP_REG(NVIC_BASE_PTR,53)
#define NVICIP54                                 NVIC_IP_REG(NVIC_BASE_PTR,54)
#define NVICIP55                                 NVIC_IP_REG(NVIC_BASE_PTR,55)
#define NVICIP56                                 NVIC_IP_REG(NVIC_BASE_PTR,56)
#define NVICIP57                                 NVIC_IP_REG(NVIC_BASE_PTR,57)
#define NVICIP58                                 NVIC_IP_REG(NVIC_BASE_PTR,58)
#define NVICIP59                                 NVIC_IP_REG(NVIC_BASE_PTR,59)
#define NVICIP60                                 NVIC_IP_REG(NVIC_BASE_PTR,60)
#define NVICIP61                                 NVIC_IP_REG(NVIC_BASE_PTR,61)
#define NVICIP62                                 NVIC_IP_REG(NVIC_BASE_PTR,62)
#define NVICIP63                                 NVIC_IP_REG(NVIC_BASE_PTR,63)
#define NVICIP64                                 NVIC_IP_REG(NVIC_BASE_PTR,64)
#define NVICIP65                                 NVIC_IP_REG(NVIC_BASE_PTR,65)
#define NVICIP66                                 NVIC_IP_REG(NVIC_BASE_PTR,66)
#define NVICIP67                                 NVIC_IP_REG(NVIC_BASE_PTR,67)
#define NVICIP68                                 NVIC_IP_REG(NVIC_BASE_PTR,68)
#define NVICIP69                                 NVIC_IP_REG(NVIC_BASE_PTR,69)
#define NVICIP70                                 NVIC_IP_REG(NVIC_BASE_PTR,70)
#define NVICIP71                                 NVIC_IP_REG(NVIC_BASE_PTR,71)
#define NVICIP72                                 NVIC_IP_REG(NVIC_BASE_PTR,72)
#define NVICIP73                                 NVIC_IP_REG(NVIC_BASE_PTR,73)
#define NVICIP74                                 NVIC_IP_REG(NVIC_BASE_PTR,74)
#define NVICIP75                                 NVIC_IP_REG(NVIC_BASE_PTR,75)
#define NVICIP76                                 NVIC_IP_REG(NVIC_BASE_PTR,76)
#define NVICIP77                                 NVIC_IP_REG(NVIC_BASE_PTR,77)
#define NVICIP78                                 NVIC_IP_REG(NVIC_BASE_PTR,78)
#define NVICIP79                                 NVIC_IP_REG(NVIC_BASE_PTR,79)
#define NVICIP80                                 NVIC_IP_REG(NVIC_BASE_PTR,80)
#define NVICIP81                                 NVIC_IP_REG(NVIC_BASE_PTR,81)
#define NVICIP82                                 NVIC_IP_REG(NVIC_BASE_PTR,82)
#define NVICIP83                                 NVIC_IP_REG(NVIC_BASE_PTR,83)
#define NVICIP84                                 NVIC_IP_REG(NVIC_BASE_PTR,84)
#define NVICIP85                                 NVIC_IP_REG(NVIC_BASE_PTR,85)
#define NVICIP86                                 NVIC_IP_REG(NVIC_BASE_PTR,86)
#define NVICIP87                                 NVIC_IP_REG(NVIC_BASE_PTR,87)
#define NVICIP88                                 NVIC_IP_REG(NVIC_BASE_PTR,88)
#define NVICIP89                                 NVIC_IP_REG(NVIC_BASE_PTR,89)
#define NVICIP90                                 NVIC_IP_REG(NVIC_BASE_PTR,90)
#define NVICIP91                                 NVIC_IP_REG(NVIC_BASE_PTR,91)
#define NVICIP92                                 NVIC_IP_REG(NVIC_BASE_PTR,92)
#define NVICIP93                                 NVIC_IP_REG(NVIC_BASE_PTR,93)
#define NVICIP94                                 NVIC_IP_REG(NVIC_BASE_PTR,94)
#define NVICIP95                                 NVIC_IP_REG(NVIC_BASE_PTR,95)
#define NVICIP96                                 NVIC_IP_REG(NVIC_BASE_PTR,96)
#define NVICIP97                                 NVIC_IP_REG(NVIC_BASE_PTR,97)
#define NVICIP98                                 NVIC_IP_REG(NVIC_BASE_PTR,98)
#define NVICIP99                                 NVIC_IP_REG(NVIC_BASE_PTR,99)
#define NVICIP100                                NVIC_IP_REG(NVIC_BASE_PTR,100)
#define NVICIP101                                NVIC_IP_REG(NVIC_BASE_PTR,101)
#define NVICIP102                                NVIC_IP_REG(NVIC_BASE_PTR,102)
#define NVICIP103                                NVIC_IP_REG(NVIC_BASE_PTR,103)
#define NVICIP104                                NVIC_IP_REG(NVIC_BASE_PTR,104)
#define NVICIP105                                NVIC_IP_REG(NVIC_BASE_PTR,105)
#define NVICSTIR                                 NVIC_STIR_REG(NVIC_BASE_PTR,0)

/* NVIC - Register array accessors */
#define NVIC_ISER(index)                         NVIC_ISER_REG(NVIC_BASE_PTR,index)
#define NVIC_ICER(index)                         NVIC_ICER_REG(NVIC_BASE_PTR,index)
#define NVIC_ISPR(index)                         NVIC_ISPR_REG(NVIC_BASE_PTR,index)
#define NVIC_ICPR(index)                         NVIC_ICPR_REG(NVIC_BASE_PTR,index)
#define NVIC_IABR(index)                         NVIC_IABR_REG(NVIC_BASE_PTR,index)
#define NVIC_IP(index)                           NVIC_IP_REG(NVIC_BASE_PTR,index)
#define NVIC_STIR(index)                         NVIC_STIR_REG(NVIC_BASE_PTR,index)

/*!
 * @}
 */ /* end of group NVIC_Register_Accessor_Macros */


/* ----------------------------------------------------------------------------
   -- SCB
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCB_Peripheral SCB
 * @{
 */

/* ----------------------------------------------------------------------------
   -- SCB - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCB_Register_Accessor_Macros SCB - Register accessor macros
 * @{
 */


/* SCB - Register accessors */
#define SCB_ACTLR_REG(base)                      ((SCnSCB)->ACTLR)
#define SCB_CPUID_REG(base)                      ((base)->CPUID)
#define SCB_ICSR_REG(base)                       ((base)->ICSR)
#define SCB_VTOR_REG(base)                       ((base)->VTOR)
#define SCB_AIRCR_REG(base)                      ((base)->AIRCR)
#define SCB_SCR_REG(base)                        ((base)->SCR)
#define SCB_CCR_REG(base)                        ((base)->CCR)
#define SCB_SHPR1_REG(base)                      (*(uint32_t*)&((base)->SHP))
#define SCB_SHPR2_REG(base)                      (*(uint32_t*)&((base)->SHP[3]))
#define SCB_SHPR3_REG(base)                      (*(uint32_t*)&((base)->SHP[7]))
#define SCB_SHCSR_REG(base)                      ((base)->SHCSR)
#define SCB_CFSR_REG(base)                       ((base)->CFSR)
#define SCB_HFSR_REG(base)                       ((base)->HFSR)
#define SCB_DFSR_REG(base)                       ((base)->DFSR)
#define SCB_MMFAR_REG(base)                      ((base)->MMFAR)
#define SCB_BFAR_REG(base)                       ((base)->BFAR)
#define SCB_AFSR_REG(base)                       ((base)->AFSR)
#define SCB_CPACR_REG(base)                      ((base)->CPACR)

/*!
 * @}
 */ /* end of group SCB_Register_Accessor_Macros */


/* ----------------------------------------------------------------------------
   -- SCB Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCB_Register_Masks SCB Register Masks
 * @{
 */

/* ACTLR Bit Fields */
#define SCB_ACTLR_DISMCYCINT_MASK                0x1u
#define SCB_ACTLR_DISMCYCINT_SHIFT               0
#define SCB_ACTLR_DISDEFWBUF_MASK                0x2u
#define SCB_ACTLR_DISDEFWBUF_SHIFT               1
#define SCB_ACTLR_DISFOLD_MASK                   0x4u
#define SCB_ACTLR_DISFOLD_SHIFT                  2
/* CPUID Bit Fields */
#define SCB_CPUID_REVISION_MASK                  0xFu
#define SCB_CPUID_REVISION_SHIFT                 0
#define SCB_CPUID_REVISION(x)                    (((uint32_t)(((uint32_t)(x))<<SCB_CPUID_REVISION_SHIFT))&SCB_CPUID_REVISION_MASK)
#define SCB_CPUID_PARTNO_MASK                    0xFFF0u
#define SCB_CPUID_PARTNO_SHIFT                   4
#define SCB_CPUID_PARTNO(x)                      (((uint32_t)(((uint32_t)(x))<<SCB_CPUID_PARTNO_SHIFT))&SCB_CPUID_PARTNO_MASK)
#define SCB_CPUID_VARIANT_MASK                   0xF00000u
#define SCB_CPUID_VARIANT_SHIFT                  20
#define SCB_CPUID_VARIANT(x)                     (((uint32_t)(((uint32_t)(x))<<SCB_CPUID_VARIANT_SHIFT))&SCB_CPUID_VARIANT_MASK)
#define SCB_CPUID_IMPLEMENTER_MASK               0xFF000000u
#define SCB_CPUID_IMPLEMENTER_SHIFT              24
#define SCB_CPUID_IMPLEMENTER(x)                 (((uint32_t)(((uint32_t)(x))<<SCB_CPUID_IMPLEMENTER_SHIFT))&SCB_CPUID_IMPLEMENTER_MASK)
/* ICSR Bit Fields */
#define SCB_ICSR_VECTACTIVE_MASK                 0x1FFu
#define SCB_ICSR_VECTACTIVE_SHIFT                0
#define SCB_ICSR_VECTACTIVE(x)                   (((uint32_t)(((uint32_t)(x))<<SCB_ICSR_VECTACTIVE_SHIFT))&SCB_ICSR_VECTACTIVE_MASK)
#define SCB_ICSR_RETTOBASE_MASK                  0x800u
#define SCB_ICSR_RETTOBASE_SHIFT                 11
#define SCB_ICSR_VECTPENDING_MASK                0x3F000u
#define SCB_ICSR_VECTPENDING_SHIFT               12
#define SCB_ICSR_VECTPENDING(x)                  (((uint32_t)(((uint32_t)(x))<<SCB_ICSR_VECTPENDING_SHIFT))&SCB_ICSR_VECTPENDING_MASK)
#define SCB_ICSR_ISRPENDING_MASK                 0x400000u
#define SCB_ICSR_ISRPENDING_SHIFT                22
#define SCB_ICSR_ISRPREEMPT_MASK                 0x800000u
#define SCB_ICSR_ISRPREEMPT_SHIFT                23
#define SCB_ICSR_PENDSTCLR_MASK                  0x2000000u
#define SCB_ICSR_PENDSTCLR_SHIFT                 25
#define SCB_ICSR_PENDSTSET_MASK                  0x4000000u
#define SCB_ICSR_PENDSTSET_SHIFT                 26
#define SCB_ICSR_PENDSVCLR_MASK                  0x8000000u
#define SCB_ICSR_PENDSVCLR_SHIFT                 27
#define SCB_ICSR_PENDSVSET_MASK                  0x10000000u
#define SCB_ICSR_PENDSVSET_SHIFT                 28
#define SCB_ICSR_NMIPENDSET_MASK                 0x80000000u
#define SCB_ICSR_NMIPENDSET_SHIFT                31
/* VTOR Bit Fields */
#define SCB_VTOR_TBLOFF_MASK                     0xFFFFFF80u
#define SCB_VTOR_TBLOFF_SHIFT                    7
#define SCB_VTOR_TBLOFF(x)                       (((uint32_t)(((uint32_t)(x))<<SCB_VTOR_TBLOFF_SHIFT))&SCB_VTOR_TBLOFF_MASK)
/* AIRCR Bit Fields */
#define SCB_AIRCR_VECTRESET_MASK                 0x1u
#define SCB_AIRCR_VECTRESET_SHIFT                0
#define SCB_AIRCR_VECTCLRACTIVE_MASK             0x2u
#define SCB_AIRCR_VECTCLRACTIVE_SHIFT            1
#define SCB_AIRCR_SYSRESETREQ_MASK               0x4u
#define SCB_AIRCR_SYSRESETREQ_SHIFT              2
#define SCB_AIRCR_PRIGROUP_MASK                  0x700u
#define SCB_AIRCR_PRIGROUP_SHIFT                 8
#define SCB_AIRCR_PRIGROUP(x)                    (((uint32_t)(((uint32_t)(x))<<SCB_AIRCR_PRIGROUP_SHIFT))&SCB_AIRCR_PRIGROUP_MASK)
#define SCB_AIRCR_ENDIANNESS_MASK                0x8000u
#define SCB_AIRCR_ENDIANNESS_SHIFT               15
#define SCB_AIRCR_VECTKEY_MASK                   0xFFFF0000u
#define SCB_AIRCR_VECTKEY_SHIFT                  16
#define SCB_AIRCR_VECTKEY(x)                     (((uint32_t)(((uint32_t)(x))<<SCB_AIRCR_VECTKEY_SHIFT))&SCB_AIRCR_VECTKEY_MASK)
/* SCR Bit Fields */
#define SCB_SCR_SLEEPONEXIT_MASK                 0x2u
#define SCB_SCR_SLEEPONEXIT_SHIFT                1
#define SCB_SCR_SLEEPDEEP_MASK                   0x4u
#define SCB_SCR_SLEEPDEEP_SHIFT                  2
#define SCB_SCR_SEVONPEND_MASK                   0x10u
#define SCB_SCR_SEVONPEND_SHIFT                  4
/* CCR Bit Fields */
#define SCB_CCR_NONBASETHRDENA_MASK              0x1u
#define SCB_CCR_NONBASETHRDENA_SHIFT             0
#define SCB_CCR_USERSETMPEND_MASK                0x2u
#define SCB_CCR_USERSETMPEND_SHIFT               1
#define SCB_CCR_UNALIGN_TRP_MASK                 0x8u
#define SCB_CCR_UNALIGN_TRP_SHIFT                3
#define SCB_CCR_DIV_0_TRP_MASK                   0x10u
#define SCB_CCR_DIV_0_TRP_SHIFT                  4
#define SCB_CCR_BFHFNMIGN_MASK                   0x100u
#define SCB_CCR_BFHFNMIGN_SHIFT                  8
#define SCB_CCR_STKALIGN_MASK                    0x200u
#define SCB_CCR_STKALIGN_SHIFT                   9
/* SHPR1 Bit Fields */
#define SCB_SHPR1_PRI_4_MASK                     0xFFu
#define SCB_SHPR1_PRI_4_SHIFT                    0
#define SCB_SHPR1_PRI_4(x)                       (((uint32_t)(((uint32_t)(x))<<SCB_SHPR1_PRI_4_SHIFT))&SCB_SHPR1_PRI_4_MASK)
#define SCB_SHPR1_PRI_5_MASK                     0xFF00u
#define SCB_SHPR1_PRI_5_SHIFT                    8
#define SCB_SHPR1_PRI_5(x)                       (((uint32_t)(((uint32_t)(x))<<SCB_SHPR1_PRI_5_SHIFT))&SCB_SHPR1_PRI_5_MASK)
#define SCB_SHPR1_PRI_6_MASK                     0xFF0000u
#define SCB_SHPR1_PRI_6_SHIFT                    16
#define SCB_SHPR1_PRI_6(x)                       (((uint32_t)(((uint32_t)(x))<<SCB_SHPR1_PRI_6_SHIFT))&SCB_SHPR1_PRI_6_MASK)
/* SHPR2 Bit Fields */
#define SCB_SHPR2_PRI_11_MASK                    0xFF000000u
#define SCB_SHPR2_PRI_11_SHIFT                   24
#define SCB_SHPR2_PRI_11(x)                      (((uint32_t)(((uint32_t)(x))<<SCB_SHPR2_PRI_11_SHIFT))&SCB_SHPR2_PRI_11_MASK)
/* SHPR3 Bit Fields */
#define SCB_SHPR3_PRI_14_MASK                    0xFF0000u
#define SCB_SHPR3_PRI_14_SHIFT                   16
#define SCB_SHPR3_PRI_14(x)                      (((uint32_t)(((uint32_t)(x))<<SCB_SHPR3_PRI_14_SHIFT))&SCB_SHPR3_PRI_14_MASK)
#define SCB_SHPR3_PRI_15_MASK                    0xFF000000u
#define SCB_SHPR3_PRI_15_SHIFT                   24
#define SCB_SHPR3_PRI_15(x)                      (((uint32_t)(((uint32_t)(x))<<SCB_SHPR3_PRI_15_SHIFT))&SCB_SHPR3_PRI_15_MASK)
/* SHCSR Bit Fields */
#define SCB_SHCSR_MEMFAULTACT_MASK               0x1u
#define SCB_SHCSR_MEMFAULTACT_SHIFT              0
#define SCB_SHCSR_BUSFAULTACT_MASK               0x2u
#define SCB_SHCSR_BUSFAULTACT_SHIFT              1
#define SCB_SHCSR_USGFAULTACT_MASK               0x8u
#define SCB_SHCSR_USGFAULTACT_SHIFT              3
#define SCB_SHCSR_SVCALLACT_MASK                 0x80u
#define SCB_SHCSR_SVCALLACT_SHIFT                7
#define SCB_SHCSR_MONITORACT_MASK                0x100u
#define SCB_SHCSR_MONITORACT_SHIFT               8
#define SCB_SHCSR_PENDSVACT_MASK                 0x400u
#define SCB_SHCSR_PENDSVACT_SHIFT                10
#define SCB_SHCSR_SYSTICKACT_MASK                0x800u
#define SCB_SHCSR_SYSTICKACT_SHIFT               11
#define SCB_SHCSR_USGFAULTPENDED_MASK            0x1000u
#define SCB_SHCSR_USGFAULTPENDED_SHIFT           12
#define SCB_SHCSR_MEMFAULTPENDED_MASK            0x2000u
#define SCB_SHCSR_MEMFAULTPENDED_SHIFT           13
#define SCB_SHCSR_BUSFAULTPENDED_MASK            0x4000u
#define SCB_SHCSR_BUSFAULTPENDED_SHIFT           14
#define SCB_SHCSR_SVCALLPENDED_MASK              0x8000u
#define SCB_SHCSR_SVCALLPENDED_SHIFT             15
#define SCB_SHCSR_MEMFAULTENA_MASK               0x10000u
#define SCB_SHCSR_MEMFAULTENA_SHIFT              16
#define SCB_SHCSR_BUSFAULTENA_MASK               0x20000u
#define SCB_SHCSR_BUSFAULTENA_SHIFT              17
#define SCB_SHCSR_USGFAULTENA_MASK               0x40000u
#define SCB_SHCSR_USGFAULTENA_SHIFT              18
/* CFSR Bit Fields */
#define SCB_CFSR_IACCVIOL_MASK                   0x1u
#define SCB_CFSR_IACCVIOL_SHIFT                  0
#define SCB_CFSR_DACCVIOL_MASK                   0x2u
#define SCB_CFSR_DACCVIOL_SHIFT                  1
#define SCB_CFSR_MUNSTKERR_MASK                  0x8u
#define SCB_CFSR_MUNSTKERR_SHIFT                 3
#define SCB_CFSR_MSTKERR_MASK                    0x10u
#define SCB_CFSR_MSTKERR_SHIFT                   4
#define SCB_CFSR_MLSPERR_MASK                    0x20u
#define SCB_CFSR_MLSPERR_SHIFT                   5
#define SCB_CFSR_MMARVALID_MASK                  0x80u
#define SCB_CFSR_MMARVALID_SHIFT                 7
#define SCB_CFSR_IBUSERR_MASK                    0x100u
#define SCB_CFSR_IBUSERR_SHIFT                   8
#define SCB_CFSR_PRECISERR_MASK                  0x200u
#define SCB_CFSR_PRECISERR_SHIFT                 9
#define SCB_CFSR_IMPRECISERR_MASK                0x400u
#define SCB_CFSR_IMPRECISERR_SHIFT               10
#define SCB_CFSR_UNSTKERR_MASK                   0x800u
#define SCB_CFSR_UNSTKERR_SHIFT                  11
#define SCB_CFSR_STKERR_MASK                     0x1000u
#define SCB_CFSR_STKERR_SHIFT                    12
#define SCB_CFSR_LSPERR_MASK                     0x2000u
#define SCB_CFSR_LSPERR_SHIFT                    13
#define SCB_CFSR_BFARVALID_MASK                  0x8000u
#define SCB_CFSR_BFARVALID_SHIFT                 15
#define SCB_CFSR_UNDEFINSTR_MASK                 0x10000u
#define SCB_CFSR_UNDEFINSTR_SHIFT                16
#define SCB_CFSR_INVSTATE_MASK                   0x20000u
#define SCB_CFSR_INVSTATE_SHIFT                  17
#define SCB_CFSR_INVPC_MASK                      0x40000u
#define SCB_CFSR_INVPC_SHIFT                     18
#define SCB_CFSR_NOCP_MASK                       0x80000u
#define SCB_CFSR_NOCP_SHIFT                      19
#define SCB_CFSR_UNALIGNED_MASK                  0x1000000u
#define SCB_CFSR_UNALIGNED_SHIFT                 24
#define SCB_CFSR_DIVBYZERO_MASK                  0x2000000u
#define SCB_CFSR_DIVBYZERO_SHIFT                 25
/* HFSR Bit Fields */
#define SCB_HFSR_VECTTBL_MASK                    0x2u
#define SCB_HFSR_VECTTBL_SHIFT                   1
#define SCB_HFSR_FORCED_MASK                     0x40000000u
#define SCB_HFSR_FORCED_SHIFT                    30
#define SCB_HFSR_DEBUGEVT_MASK                   0x80000000u
#define SCB_HFSR_DEBUGEVT_SHIFT                  31
/* DFSR Bit Fields */
#define SCB_DFSR_HALTED_MASK                     0x1u
#define SCB_DFSR_HALTED_SHIFT                    0
#define SCB_DFSR_BKPT_MASK                       0x2u
#define SCB_DFSR_BKPT_SHIFT                      1
#define SCB_DFSR_DWTTRAP_MASK                    0x4u
#define SCB_DFSR_DWTTRAP_SHIFT                   2
#define SCB_DFSR_VCATCH_MASK                     0x8u
#define SCB_DFSR_VCATCH_SHIFT                    3
#define SCB_DFSR_EXTERNAL_MASK                   0x10u
#define SCB_DFSR_EXTERNAL_SHIFT                  4
/* MMFAR Bit Fields */
#define SCB_MMFAR_ADDRESS_MASK                   0xFFFFFFFFu
#define SCB_MMFAR_ADDRESS_SHIFT                  0
#define SCB_MMFAR_ADDRESS(x)                     (((uint32_t)(((uint32_t)(x))<<SCB_MMFAR_ADDRESS_SHIFT))&SCB_MMFAR_ADDRESS_MASK)
/* BFAR Bit Fields */
#define SCB_BFAR_ADDRESS_MASK                    0xFFFFFFFFu
#define SCB_BFAR_ADDRESS_SHIFT                   0
#define SCB_BFAR_ADDRESS(x)                      (((uint32_t)(((uint32_t)(x))<<SCB_BFAR_ADDRESS_SHIFT))&SCB_BFAR_ADDRESS_MASK)
/* AFSR Bit Fields */
#define SCB_AFSR_AUXFAULT_MASK                   0xFFFFFFFFu
#define SCB_AFSR_AUXFAULT_SHIFT                  0
#define SCB_AFSR_AUXFAULT(x)                     (((uint32_t)(((uint32_t)(x))<<SCB_AFSR_AUXFAULT_SHIFT))&SCB_AFSR_AUXFAULT_MASK)
/* CPACR Bit Fields */
#define SCB_CPACR_CP10_MASK                      0x300000u
#define SCB_CPACR_CP10_SHIFT                     20
#define SCB_CPACR_CP10(x)                        (((uint32_t)(((uint32_t)(x))<<SCB_CPACR_CP10_SHIFT))&SCB_CPACR_CP10_MASK)
#define SCB_CPACR_CP11_MASK                      0xC00000u
#define SCB_CPACR_CP11_SHIFT                     22
#define SCB_CPACR_CP11(x)                        (((uint32_t)(((uint32_t)(x))<<SCB_CPACR_CP11_SHIFT))&SCB_CPACR_CP11_MASK)

/*!
 * @}
 */ /* end of group SCB_Register_Masks */


/* SCB - Peripheral instance base addresses */
/** Peripheral SystemControl base pointer */
#define SystemControl_BASE_PTR                   (SCB)
/** Array initializer of SCB peripheral base pointers */
#define SCB_BASE_PTRS                            { SystemControl_BASE_PTR }

/* ----------------------------------------------------------------------------
   -- SCB - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCB_Register_Accessor_Macros SCB - Register accessor macros
 * @{
 */


/* SCB - Register instance definitions */
/* SystemControl */
#define SCB_ACTLR                                SCB_ACTLR_REG(SystemControl_BASE_PTR)
#define SCB_CPUID                                SCB_CPUID_REG(SystemControl_BASE_PTR)
#define SCB_ICSR                                 SCB_ICSR_REG(SystemControl_BASE_PTR)
#define SCB_VTOR                                 SCB_VTOR_REG(SystemControl_BASE_PTR)
#define SCB_AIRCR                                SCB_AIRCR_REG(SystemControl_BASE_PTR)
#define SCB_SCR                                  SCB_SCR_REG(SystemControl_BASE_PTR)
#define SCB_CCR                                  SCB_CCR_REG(SystemControl_BASE_PTR)
#define SCB_SHPR1                                SCB_SHPR1_REG(SystemControl_BASE_PTR)
#define SCB_SHPR2                                SCB_SHPR2_REG(SystemControl_BASE_PTR)
#define SCB_SHPR3                                SCB_SHPR3_REG(SystemControl_BASE_PTR)
#define SCB_SHCSR                                SCB_SHCSR_REG(SystemControl_BASE_PTR)
#define SCB_CFSR                                 SCB_CFSR_REG(SystemControl_BASE_PTR)
#define SCB_HFSR                                 SCB_HFSR_REG(SystemControl_BASE_PTR)
#define SCB_DFSR                                 SCB_DFSR_REG(SystemControl_BASE_PTR)
#define SCB_MMFAR                                SCB_MMFAR_REG(SystemControl_BASE_PTR)
#define SCB_BFAR                                 SCB_BFAR_REG(SystemControl_BASE_PTR)
#define SCB_AFSR                                 SCB_AFSR_REG(SystemControl_BASE_PTR)
#define SCB_CPACR                                SCB_CPACR_REG(SystemControl_BASE_PTR)

/*!
 * @}
 */ /* end of group SCB_Register_Accessor_Macros */


/*!
 * @}
 */ /* end of group SCB_Peripheral */



 /* ----------------------------------------------------------------------------
   -- SysTick
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SysTick_Peripheral SysTick
 * @{
 */

/* ----------------------------------------------------------------------------
   -- SysTick - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SysTick_Register_Accessor_Macros SysTick - Register accessor macros
 * @{
 */


/* SysTick - Register accessors */
#define SysTick_CSR_REG(base)                    ((base)->CTRL)
#define SysTick_RVR_REG(base)                    ((base)->LOAD)
#define SysTick_CVR_REG(base)                    ((base)->VAL)
#define SysTick_CALIB_REG(base)                  ((base)->CALIB)

/*!
 * @}
 */ /* end of group SysTick_Register_Accessor_Macros */


/* ----------------------------------------------------------------------------
   -- SysTick Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SysTick_Register_Masks SysTick Register Masks
 * @{
 */

/* CSR Bit Fields */
#define SysTick_CSR_ENABLE_MASK                  0x1u
#define SysTick_CSR_ENABLE_SHIFT                 0
#define SysTick_CSR_TICKINT_MASK                 0x2u
#define SysTick_CSR_TICKINT_SHIFT                1
#define SysTick_CSR_CLKSOURCE_MASK               0x4u
#define SysTick_CSR_CLKSOURCE_SHIFT              2
#define SysTick_CSR_COUNTFLAG_MASK               0x10000u
#define SysTick_CSR_COUNTFLAG_SHIFT              16
/* RVR Bit Fields */
#define SysTick_RVR_RELOAD_MASK                  0xFFFFFFu
#define SysTick_RVR_RELOAD_SHIFT                 0
#define SysTick_RVR_RELOAD(x)                    (((uint32_t)(((uint32_t)(x))<<SysTick_RVR_RELOAD_SHIFT))&SysTick_RVR_RELOAD_MASK)
/* CVR Bit Fields */
#define SysTick_CVR_CURRENT_MASK                 0xFFFFFFu
#define SysTick_CVR_CURRENT_SHIFT                0
#define SysTick_CVR_CURRENT(x)                   (((uint32_t)(((uint32_t)(x))<<SysTick_CVR_CURRENT_SHIFT))&SysTick_CVR_CURRENT_MASK)
/* CALIB Bit Fields */
#define SysTick_CALIB_TENMS_MASK                 0xFFFFFFu
#define SysTick_CALIB_TENMS_SHIFT                0
#define SysTick_CALIB_TENMS(x)                   (((uint32_t)(((uint32_t)(x))<<SysTick_CALIB_TENMS_SHIFT))&SysTick_CALIB_TENMS_MASK)
#define SysTick_CALIB_SKEW_MASK                  0x40000000u
#define SysTick_CALIB_SKEW_SHIFT                 30
#define SysTick_CALIB_NOREF_MASK                 0x80000000u
#define SysTick_CALIB_NOREF_SHIFT                31

/*!
 * @}
 */ /* end of group SysTick_Register_Masks */


/* SysTick - Peripheral instance base addresses */
/** Peripheral SysTick base pointer */
#define SysTick_BASE_PTR                         (SysTick)
/** Array initializer of SysTick peripheral base pointers */
#define SysTick_BASE_PTRS                        { SysTick_BASE_PTR }

/* ----------------------------------------------------------------------------
   -- SysTick - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SysTick_Register_Accessor_Macros SysTick - Register accessor macros
 * @{
 */


/* SysTick - Register instance definitions */
/* SysTick */
#define SYST_CSR                                 SysTick_CSR_REG(SysTick_BASE_PTR)
#define SYST_RVR                                 SysTick_RVR_REG(SysTick_BASE_PTR)
#define SYST_CVR                                 SysTick_CVR_REG(SysTick_BASE_PTR)
#define SYST_CALIB                               SysTick_CALIB_REG(SysTick_BASE_PTR)

/*!
 * @}
 */ /* end of group SysTick_Register_Accessor_Macros */


/*!
 * @}
 */ /* end of group SysTick_Peripheral */

#endif /* __PEx_CORE_CM4_H */
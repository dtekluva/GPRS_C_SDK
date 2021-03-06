/* Copyright (C) 2016 RDA Technologies Limited and/or its affiliates("RDA").
* All rights reserved.
*
* This software is supplied "AS IS" without any warranties.
* RDA assumes no responsibility or liability for the use of the software,
* conveys no license or title under any patent, copyright, or mask work
* right to the product. RDA reserves the right to make changes in the
* software without notification.  RDA also make no representation or
* warranty that such application will be suitable for the specified use
* without further testing or modification.
*/


#ifndef _IOMUX_H_
#define _IOMUX_H_

#ifdef CT_ASM
#error "You are trying to use in an assembly code the normal H description of 'iomux'."
#endif

typedef volatile unsigned char      REG8;
typedef volatile unsigned short     REG16;
typedef volatile unsigned int       REG32;

#define KSEG0(addr)     ( (addr) | 0x80000000 )
#define KSEG1(addr)     ( (addr) | 0xa0000000 )
#define KSEG01_PHY_ADDR(addr)       ((UINT32)(addr) & 0x0FFFFFFF)

// =============================================================================
//  MACROS
// =============================================================================

// =============================================================================
//  TYPES
// =============================================================================

// ============================================================================
// IOMUX_T
// -----------------------------------------------------------------------------
///
// =============================================================================
#define REG_IOMUX_BASE             0x01A2A000

typedef volatile struct
{
    REG32                          pad_M_DQ_0_cfg;               //0x00000000
    REG32                          pad_M_DQ_1_cfg;               //0x00000004
    REG32                          pad_M_DQ_2_cfg;               //0x00000008
    REG32                          pad_M_DQ_3_cfg;               //0x0000000C
    REG32                          pad_M_DQ_4_cfg;               //0x00000010
    REG32                          pad_M_DQ_5_cfg;               //0x00000014
    REG32                          pad_M_DQ_6_cfg;               //0x00000018
    REG32                          pad_M_DQ_7_cfg;               //0x0000001C
    REG32                          pad_M_CS_cfg;                 //0x00000020
    REG32                          pad_M_DM_cfg;                 //0x00000024
    REG32                          pad_M_CLK_cfg;                //0x00000028
    REG32                          pad_M_CLKB_cfg;               //0x0000002C
    REG32                          pad_M_DQS_cfg;                //0x00000030
    REG32                          pad_M_SPI_CLK_cfg;            //0x00000034
    REG32                          pad_M_SPI_CS_cfg;             //0x00000038
    REG32                          pad_M_SPI_D_0_cfg;            //0x0000003C
    REG32                          pad_M_SPI_D_1_cfg;            //0x00000040
    REG32                          pad_M_SPI_D_2_cfg;            //0x00000044
    REG32                          pad_M_SPI_D_3_cfg;            //0x00000048
    REG32                          pad_SDMMC_CLK_cfg;            //0x0000004C
    REG32                          pad_SDMMC_CMD_cfg;            //0x00000050
    REG32                          pad_SDMMC_DATA_0_cfg;         //0x00000054
    REG32                          pad_SDMMC_DATA_1_cfg;         //0x00000058
    REG32                          pad_SDMMC_DATA_2_cfg;         //0x0000005C
    REG32                          pad_SDMMC_DATA_3_cfg;         //0x00000060
    REG32                          pad_LCD_RSTB_cfg;             //0x00000064
    REG32                          pad_SPI_LCD_CS_cfg;           //0x00000068
    REG32                          pad_SPI_LCD_SCK_cfg;          //0x0000006C
    REG32                          pad_SPI_LCD_DIO_cfg;          //0x00000070
    REG32                          pad_SPI_LCD_SDC_cfg;          //0x00000074
    REG32                          pad_CAM_PWDN_cfg;             //0x00000078
    REG32                          pad_CAM_RSTB_cfg;             //0x0000007C
    REG32                          pad_CAM_CLK_cfg;              //0x00000080
    REG32                          pad_SPI_CAM_SCK_cfg;          //0x00000084
    REG32                          pad_SPI_CAM_DI_0_cfg;         //0x00000088
    REG32                          pad_SPI_CAM_DI_1_cfg;         //0x0000008C
    REG32                          pad_GPIO_0_cfg;               //0x00000090
    REG32                          pad_GPIO_1_cfg;               //0x00000094
    REG32                          pad_GPIO_2_cfg;               //0x00000098
    REG32                          pad_GPIO_3_cfg;               //0x0000009C
    REG32                          pad_GPIO_4_cfg;               //0x000000A0
    REG32                          pad_GPIO_5_cfg;               //0x000000A4
    REG32                          pad_GPIO_6_cfg;               //0x000000A8
    REG32                          pad_GPIO_7_cfg;               //0x000000AC
    REG32                          pad_KEYIN_0_cfg;              //0x000000B0
    REG32                          pad_KEYIN_1_cfg;              //0x000000B4
    REG32                          pad_KEYIN_2_cfg;              //0x000000B8
    REG32                          pad_KEYIN_3_cfg;              //0x000000BC
    REG32                          pad_KEYIN_4_cfg;              //0x000000C0
    REG32                          pad_KEYOUT_0_cfg;             //0x000000C4
    REG32                          pad_KEYOUT_1_cfg;             //0x000000C8
    REG32                          pad_KEYOUT_2_cfg;             //0x000000CC
    REG32                          pad_KEYOUT_3_cfg;             //0x000000D0
    REG32                          pad_KEYOUT_4_cfg;             //0x000000D4
    REG32                          pad_HST_RXD_cfg;              //0x000000D8
    REG32                          pad_HST_TXD_cfg;              //0x000000DC
} HWP_IOMUX_T;

#define hwp_iomux                  ((HWP_IOMUX_T*) KSEG1(REG_IOMUX_BASE))


//pad_M_DQ_0_cfg
#define IOMUX_PAD_M_DQ_0_OEN_FRC   (1<<28)
#define IOMUX_PAD_M_DQ_0_OUT_FRC   (1<<24)
#define IOMUX_PAD_M_DQ_0_OUT_REG   (1<<20)
#define IOMUX_PAD_M_DQ_0_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_DQ_0_OEN_REG   (1<<17)
#define IOMUX_PAD_M_DQ_0_PULL_FRC  (1<<16)
#define IOMUX_PAD_M_DQ_0_PULL_UP   (1<<9)
#define IOMUX_PAD_M_DQ_0_PULL_DN   (1<<8)
#define IOMUX_PAD_M_DQ_0_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_M_DQ_0_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_M_DQ_0_SEL_MASK  (15<<0)
#define IOMUX_PAD_M_DQ_0_SEL_SHIFT (0)
#define IOMUX_PAD_M_DQ_0_SEL_FUN_M_DQ_0_SEL (0<<0)

//pad_M_DQ_1_cfg
#define IOMUX_PAD_M_DQ_1_OEN_FRC   (1<<28)
#define IOMUX_PAD_M_DQ_1_OUT_FRC   (1<<24)
#define IOMUX_PAD_M_DQ_1_OUT_REG   (1<<20)
#define IOMUX_PAD_M_DQ_1_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_DQ_1_OEN_REG   (1<<17)
#define IOMUX_PAD_M_DQ_1_PULL_FRC  (1<<16)
#define IOMUX_PAD_M_DQ_1_PULL_UP   (1<<9)
#define IOMUX_PAD_M_DQ_1_PULL_DN   (1<<8)
#define IOMUX_PAD_M_DQ_1_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_M_DQ_1_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_M_DQ_1_SEL_MASK  (15<<0)
#define IOMUX_PAD_M_DQ_1_SEL_SHIFT (0)
#define IOMUX_PAD_M_DQ_1_SEL_FUN_M_DQ_1_SEL (0<<0)

//pad_M_DQ_2_cfg
#define IOMUX_PAD_M_DQ_2_OEN_FRC   (1<<28)
#define IOMUX_PAD_M_DQ_2_OUT_FRC   (1<<24)
#define IOMUX_PAD_M_DQ_2_OUT_REG   (1<<20)
#define IOMUX_PAD_M_DQ_2_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_DQ_2_OEN_REG   (1<<17)
#define IOMUX_PAD_M_DQ_2_PULL_FRC  (1<<16)
#define IOMUX_PAD_M_DQ_2_PULL_UP   (1<<9)
#define IOMUX_PAD_M_DQ_2_PULL_DN   (1<<8)
#define IOMUX_PAD_M_DQ_2_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_M_DQ_2_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_M_DQ_2_SEL_MASK  (15<<0)
#define IOMUX_PAD_M_DQ_2_SEL_SHIFT (0)
#define IOMUX_PAD_M_DQ_2_SEL_FUN_M_DQ_2_SEL (0<<0)

//pad_M_DQ_3_cfg
#define IOMUX_PAD_M_DQ_3_OEN_FRC   (1<<28)
#define IOMUX_PAD_M_DQ_3_OUT_FRC   (1<<24)
#define IOMUX_PAD_M_DQ_3_OUT_REG   (1<<20)
#define IOMUX_PAD_M_DQ_3_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_DQ_3_OEN_REG   (1<<17)
#define IOMUX_PAD_M_DQ_3_PULL_FRC  (1<<16)
#define IOMUX_PAD_M_DQ_3_PULL_UP   (1<<9)
#define IOMUX_PAD_M_DQ_3_PULL_DN   (1<<8)
#define IOMUX_PAD_M_DQ_3_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_M_DQ_3_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_M_DQ_3_SEL_MASK  (15<<0)
#define IOMUX_PAD_M_DQ_3_SEL_SHIFT (0)
#define IOMUX_PAD_M_DQ_3_SEL_FUN_M_DQ_3_SEL (0<<0)

//pad_M_DQ_4_cfg
#define IOMUX_PAD_M_DQ_4_OEN_FRC   (1<<28)
#define IOMUX_PAD_M_DQ_4_OUT_FRC   (1<<24)
#define IOMUX_PAD_M_DQ_4_OUT_REG   (1<<20)
#define IOMUX_PAD_M_DQ_4_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_DQ_4_OEN_REG   (1<<17)
#define IOMUX_PAD_M_DQ_4_PULL_FRC  (1<<16)
#define IOMUX_PAD_M_DQ_4_PULL_UP   (1<<9)
#define IOMUX_PAD_M_DQ_4_PULL_DN   (1<<8)
#define IOMUX_PAD_M_DQ_4_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_M_DQ_4_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_M_DQ_4_SEL_MASK  (15<<0)
#define IOMUX_PAD_M_DQ_4_SEL_SHIFT (0)
#define IOMUX_PAD_M_DQ_4_SEL_FUN_M_DQ_4_SEL (0<<0)

//pad_M_DQ_5_cfg
#define IOMUX_PAD_M_DQ_5_OEN_FRC   (1<<28)
#define IOMUX_PAD_M_DQ_5_OUT_FRC   (1<<24)
#define IOMUX_PAD_M_DQ_5_OUT_REG   (1<<20)
#define IOMUX_PAD_M_DQ_5_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_DQ_5_OEN_REG   (1<<17)
#define IOMUX_PAD_M_DQ_5_PULL_FRC  (1<<16)
#define IOMUX_PAD_M_DQ_5_PULL_UP   (1<<9)
#define IOMUX_PAD_M_DQ_5_PULL_DN   (1<<8)
#define IOMUX_PAD_M_DQ_5_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_M_DQ_5_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_M_DQ_5_SEL_MASK  (15<<0)
#define IOMUX_PAD_M_DQ_5_SEL_SHIFT (0)
#define IOMUX_PAD_M_DQ_5_SEL_FUN_M_DQ_5_SEL (0<<0)

//pad_M_DQ_6_cfg
#define IOMUX_PAD_M_DQ_6_OEN_FRC   (1<<28)
#define IOMUX_PAD_M_DQ_6_OUT_FRC   (1<<24)
#define IOMUX_PAD_M_DQ_6_OUT_REG   (1<<20)
#define IOMUX_PAD_M_DQ_6_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_DQ_6_OEN_REG   (1<<17)
#define IOMUX_PAD_M_DQ_6_PULL_FRC  (1<<16)
#define IOMUX_PAD_M_DQ_6_PULL_UP   (1<<9)
#define IOMUX_PAD_M_DQ_6_PULL_DN   (1<<8)
#define IOMUX_PAD_M_DQ_6_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_M_DQ_6_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_M_DQ_6_SEL_MASK  (15<<0)
#define IOMUX_PAD_M_DQ_6_SEL_SHIFT (0)
#define IOMUX_PAD_M_DQ_6_SEL_FUN_M_DQ_6_SEL (0<<0)

//pad_M_DQ_7_cfg
#define IOMUX_PAD_M_DQ_7_OEN_FRC   (1<<28)
#define IOMUX_PAD_M_DQ_7_OUT_FRC   (1<<24)
#define IOMUX_PAD_M_DQ_7_OUT_REG   (1<<20)
#define IOMUX_PAD_M_DQ_7_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_DQ_7_OEN_REG   (1<<17)
#define IOMUX_PAD_M_DQ_7_PULL_FRC  (1<<16)
#define IOMUX_PAD_M_DQ_7_PULL_UP   (1<<9)
#define IOMUX_PAD_M_DQ_7_PULL_DN   (1<<8)
#define IOMUX_PAD_M_DQ_7_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_M_DQ_7_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_M_DQ_7_SEL_MASK  (15<<0)
#define IOMUX_PAD_M_DQ_7_SEL_SHIFT (0)
#define IOMUX_PAD_M_DQ_7_SEL_FUN_M_DQ_7_SEL (0<<0)

//pad_M_CS_cfg
#define IOMUX_PAD_M_CS_OEN_FRC     (1<<28)
#define IOMUX_PAD_M_CS_OUT_FRC     (1<<24)
#define IOMUX_PAD_M_CS_OUT_REG     (1<<20)
#define IOMUX_PAD_M_CS_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_CS_OEN_REG     (1<<17)
#define IOMUX_PAD_M_CS_PULL_FRC    (1<<16)
#define IOMUX_PAD_M_CS_PULL_UP     (1<<9)
#define IOMUX_PAD_M_CS_PULL_DN     (1<<8)
#define IOMUX_PAD_M_CS_ANA(n)      (((n)&15)<<4)
#define IOMUX_PAD_M_CS_SEL(n)      (((n)&15)<<0)
#define IOMUX_PAD_M_CS_SEL_MASK    (15<<0)
#define IOMUX_PAD_M_CS_SEL_SHIFT   (0)
#define IOMUX_PAD_M_CS_SEL_FUN_M_CS_SEL (0<<0)

//pad_M_DM_cfg
#define IOMUX_PAD_M_DM_OEN_FRC     (1<<28)
#define IOMUX_PAD_M_DM_OUT_FRC     (1<<24)
#define IOMUX_PAD_M_DM_OUT_REG     (1<<20)
#define IOMUX_PAD_M_DM_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_DM_OEN_REG     (1<<17)
#define IOMUX_PAD_M_DM_PULL_FRC    (1<<16)
#define IOMUX_PAD_M_DM_PULL_UP     (1<<9)
#define IOMUX_PAD_M_DM_PULL_DN     (1<<8)
#define IOMUX_PAD_M_DM_ANA(n)      (((n)&15)<<4)
#define IOMUX_PAD_M_DM_SEL(n)      (((n)&15)<<0)
#define IOMUX_PAD_M_DM_SEL_MASK    (15<<0)
#define IOMUX_PAD_M_DM_SEL_SHIFT   (0)
#define IOMUX_PAD_M_DM_SEL_FUN_M_DM_SEL (0<<0)

//pad_M_CLK_cfg
#define IOMUX_PAD_M_CLK_OEN_FRC    (1<<28)
#define IOMUX_PAD_M_CLK_OUT_FRC    (1<<24)
#define IOMUX_PAD_M_CLK_OUT_REG    (1<<20)
#define IOMUX_PAD_M_CLK_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_CLK_OEN_REG    (1<<17)
#define IOMUX_PAD_M_CLK_PULL_FRC   (1<<16)
#define IOMUX_PAD_M_CLK_PULL_UP    (1<<9)
#define IOMUX_PAD_M_CLK_PULL_DN    (1<<8)
#define IOMUX_PAD_M_CLK_ANA(n)     (((n)&15)<<4)
#define IOMUX_PAD_M_CLK_SEL(n)     (((n)&15)<<0)
#define IOMUX_PAD_M_CLK_SEL_MASK   (15<<0)
#define IOMUX_PAD_M_CLK_SEL_SHIFT  (0)
#define IOMUX_PAD_M_CLK_SEL_FUN_M_CLK_SEL (0<<0)

//pad_M_CLKB_cfg
#define IOMUX_PAD_M_CLKB_OEN_FRC   (1<<28)
#define IOMUX_PAD_M_CLKB_OUT_FRC   (1<<24)
#define IOMUX_PAD_M_CLKB_OUT_REG   (1<<20)
#define IOMUX_PAD_M_CLKB_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_CLKB_OEN_REG   (1<<17)
#define IOMUX_PAD_M_CLKB_PULL_FRC  (1<<16)
#define IOMUX_PAD_M_CLKB_PULL_UP   (1<<9)
#define IOMUX_PAD_M_CLKB_PULL_DN   (1<<8)
#define IOMUX_PAD_M_CLKB_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_M_CLKB_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_M_CLKB_SEL_MASK  (15<<0)
#define IOMUX_PAD_M_CLKB_SEL_SHIFT (0)
#define IOMUX_PAD_M_CLKB_SEL_FUN_M_CLKB_SEL (0<<0)

//pad_M_DQS_cfg
#define IOMUX_PAD_M_DQS_OEN_FRC    (1<<28)
#define IOMUX_PAD_M_DQS_OUT_FRC    (1<<24)
#define IOMUX_PAD_M_DQS_OUT_REG    (1<<20)
#define IOMUX_PAD_M_DQS_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_DQS_OEN_REG    (1<<17)
#define IOMUX_PAD_M_DQS_PULL_FRC   (1<<16)
#define IOMUX_PAD_M_DQS_PULL_UP    (1<<9)
#define IOMUX_PAD_M_DQS_PULL_DN    (1<<8)
#define IOMUX_PAD_M_DQS_ANA(n)     (((n)&15)<<4)
#define IOMUX_PAD_M_DQS_SEL(n)     (((n)&15)<<0)
#define IOMUX_PAD_M_DQS_SEL_MASK   (15<<0)
#define IOMUX_PAD_M_DQS_SEL_SHIFT  (0)
#define IOMUX_PAD_M_DQS_SEL_FUN_M_DQS_SEL (0<<0)

//pad_M_SPI_CLK_cfg
#define IOMUX_PAD_M_SPI_CLK_OEN_FRC (1<<28)
#define IOMUX_PAD_M_SPI_CLK_OUT_FRC (1<<24)
#define IOMUX_PAD_M_SPI_CLK_OUT_REG (1<<20)
#define IOMUX_PAD_M_SPI_CLK_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_SPI_CLK_OEN_REG (1<<17)
#define IOMUX_PAD_M_SPI_CLK_PULL_FRC (1<<16)
#define IOMUX_PAD_M_SPI_CLK_PULL_UP (1<<9)
#define IOMUX_PAD_M_SPI_CLK_PULL_DN (1<<8)
#define IOMUX_PAD_M_SPI_CLK_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_M_SPI_CLK_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_M_SPI_CLK_SEL_MASK (15<<0)
#define IOMUX_PAD_M_SPI_CLK_SEL_SHIFT (0)
#define IOMUX_PAD_M_SPI_CLK_SEL_FUN_M_SPI_CLK_SEL (0<<0)

//pad_M_SPI_CS_cfg
#define IOMUX_PAD_M_SPI_CS_OEN_FRC (1<<28)
#define IOMUX_PAD_M_SPI_CS_OUT_FRC (1<<24)
#define IOMUX_PAD_M_SPI_CS_OUT_REG (1<<20)
#define IOMUX_PAD_M_SPI_CS_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_SPI_CS_OEN_REG (1<<17)
#define IOMUX_PAD_M_SPI_CS_PULL_FRC (1<<16)
#define IOMUX_PAD_M_SPI_CS_PULL_UP (1<<9)
#define IOMUX_PAD_M_SPI_CS_PULL_DN (1<<8)
#define IOMUX_PAD_M_SPI_CS_ANA(n)  (((n)&15)<<4)
#define IOMUX_PAD_M_SPI_CS_SEL(n)  (((n)&15)<<0)
#define IOMUX_PAD_M_SPI_CS_SEL_MASK (15<<0)
#define IOMUX_PAD_M_SPI_CS_SEL_SHIFT (0)
#define IOMUX_PAD_M_SPI_CS_SEL_FUN_M_SPI_CS_SEL (0<<0)

//pad_M_SPI_D_0_cfg
#define IOMUX_PAD_M_SPI_D_0_OEN_FRC (1<<28)
#define IOMUX_PAD_M_SPI_D_0_OUT_FRC (1<<24)
#define IOMUX_PAD_M_SPI_D_0_OUT_REG (1<<20)
#define IOMUX_PAD_M_SPI_D_0_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_SPI_D_0_OEN_REG (1<<17)
#define IOMUX_PAD_M_SPI_D_0_PULL_FRC (1<<16)
#define IOMUX_PAD_M_SPI_D_0_PULL_UP (1<<9)
#define IOMUX_PAD_M_SPI_D_0_PULL_DN (1<<8)
#define IOMUX_PAD_M_SPI_D_0_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_M_SPI_D_0_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_M_SPI_D_0_SEL_MASK (15<<0)
#define IOMUX_PAD_M_SPI_D_0_SEL_SHIFT (0)
#define IOMUX_PAD_M_SPI_D_0_SEL_FUN_M_SPI_D_0_SEL (0<<0)

//pad_M_SPI_D_1_cfg
#define IOMUX_PAD_M_SPI_D_1_OEN_FRC (1<<28)
#define IOMUX_PAD_M_SPI_D_1_OUT_FRC (1<<24)
#define IOMUX_PAD_M_SPI_D_1_OUT_REG (1<<20)
#define IOMUX_PAD_M_SPI_D_1_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_SPI_D_1_OEN_REG (1<<17)
#define IOMUX_PAD_M_SPI_D_1_PULL_FRC (1<<16)
#define IOMUX_PAD_M_SPI_D_1_PULL_UP (1<<9)
#define IOMUX_PAD_M_SPI_D_1_PULL_DN (1<<8)
#define IOMUX_PAD_M_SPI_D_1_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_M_SPI_D_1_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_M_SPI_D_1_SEL_MASK (15<<0)
#define IOMUX_PAD_M_SPI_D_1_SEL_SHIFT (0)
#define IOMUX_PAD_M_SPI_D_1_SEL_FUN_M_SPI_D_1_SEL (0<<0)

//pad_M_SPI_D_2_cfg
#define IOMUX_PAD_M_SPI_D_2_OEN_FRC (1<<28)
#define IOMUX_PAD_M_SPI_D_2_OUT_FRC (1<<24)
#define IOMUX_PAD_M_SPI_D_2_OUT_REG (1<<20)
#define IOMUX_PAD_M_SPI_D_2_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_SPI_D_2_OEN_REG (1<<17)
#define IOMUX_PAD_M_SPI_D_2_PULL_FRC (1<<16)
#define IOMUX_PAD_M_SPI_D_2_PULL_UP (1<<9)
#define IOMUX_PAD_M_SPI_D_2_PULL_DN (1<<8)
#define IOMUX_PAD_M_SPI_D_2_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_M_SPI_D_2_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_M_SPI_D_2_SEL_MASK (15<<0)
#define IOMUX_PAD_M_SPI_D_2_SEL_SHIFT (0)
#define IOMUX_PAD_M_SPI_D_2_SEL_FUN_M_SPI_D_2_SEL (0<<0)

//pad_M_SPI_D_3_cfg
#define IOMUX_PAD_M_SPI_D_3_OEN_FRC (1<<28)
#define IOMUX_PAD_M_SPI_D_3_OUT_FRC (1<<24)
#define IOMUX_PAD_M_SPI_D_3_OUT_REG (1<<20)
#define IOMUX_PAD_M_SPI_D_3_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_M_SPI_D_3_OEN_REG (1<<17)
#define IOMUX_PAD_M_SPI_D_3_PULL_FRC (1<<16)
#define IOMUX_PAD_M_SPI_D_3_PULL_UP (1<<9)
#define IOMUX_PAD_M_SPI_D_3_PULL_DN (1<<8)
#define IOMUX_PAD_M_SPI_D_3_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_M_SPI_D_3_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_M_SPI_D_3_SEL_MASK (15<<0)
#define IOMUX_PAD_M_SPI_D_3_SEL_SHIFT (0)
#define IOMUX_PAD_M_SPI_D_3_SEL_FUN_M_SPI_D_3_SEL (0<<0)

//pad_SDMMC_CLK_cfg
#define IOMUX_PAD_SDMMC_CLK_OEN_FRC (1<<28)
#define IOMUX_PAD_SDMMC_CLK_OUT_FRC (1<<24)
#define IOMUX_PAD_SDMMC_CLK_OUT_REG (1<<20)
#define IOMUX_PAD_SDMMC_CLK_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SDMMC_CLK_OEN_REG (1<<17)
#define IOMUX_PAD_SDMMC_CLK_PULL_FRC (1<<16)
#define IOMUX_PAD_SDMMC_CLK_PULL_UP (1<<9)
#define IOMUX_PAD_SDMMC_CLK_PULL_DN (1<<8)
#define IOMUX_PAD_SDMMC_CLK_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SDMMC_CLK_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SDMMC_CLK_SEL_MASK (15<<0)
#define IOMUX_PAD_SDMMC_CLK_SEL_SHIFT (0)
#define IOMUX_PAD_SDMMC_CLK_SEL_FUN_SDMMC_CLK_SEL (0<<0)
#define IOMUX_PAD_SDMMC_CLK_SEL_FUN_GPIO_8_SEL (1<<0)
#define IOMUX_PAD_SDMMC_CLK_SEL_FUN_SPI1_CLK_SEL (2<<0)
#define IOMUX_PAD_SDMMC_CLK_SEL_FUN_I2C1_SCL_SEL (3<<0)

//pad_SDMMC_CMD_cfg
#define IOMUX_PAD_SDMMC_CMD_OEN_FRC (1<<28)
#define IOMUX_PAD_SDMMC_CMD_OUT_FRC (1<<24)
#define IOMUX_PAD_SDMMC_CMD_OUT_REG (1<<20)
#define IOMUX_PAD_SDMMC_CMD_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SDMMC_CMD_OEN_REG (1<<17)
#define IOMUX_PAD_SDMMC_CMD_PULL_FRC (1<<16)
#define IOMUX_PAD_SDMMC_CMD_PULL_UP (1<<9)
#define IOMUX_PAD_SDMMC_CMD_PULL_DN (1<<8)
#define IOMUX_PAD_SDMMC_CMD_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SDMMC_CMD_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SDMMC_CMD_SEL_MASK (15<<0)
#define IOMUX_PAD_SDMMC_CMD_SEL_SHIFT (0)
#define IOMUX_PAD_SDMMC_CMD_SEL_FUN_SDMMC_CMD_SEL (0<<0)
#define IOMUX_PAD_SDMMC_CMD_SEL_FUN_GPIO_9_SEL (1<<0)
#define IOMUX_PAD_SDMMC_CMD_SEL_FUN_SPI1_CS_0_SEL (2<<0)
#define IOMUX_PAD_SDMMC_CMD_SEL_FUN_I2C1_SDA_SEL (3<<0)

//pad_SDMMC_DATA_0_cfg
#define IOMUX_PAD_SDMMC_DATA_0_OEN_FRC (1<<28)
#define IOMUX_PAD_SDMMC_DATA_0_OUT_FRC (1<<24)
#define IOMUX_PAD_SDMMC_DATA_0_OUT_REG (1<<20)
#define IOMUX_PAD_SDMMC_DATA_0_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SDMMC_DATA_0_OEN_REG (1<<17)
#define IOMUX_PAD_SDMMC_DATA_0_PULL_FRC (1<<16)
#define IOMUX_PAD_SDMMC_DATA_0_PULL_UP (1<<9)
#define IOMUX_PAD_SDMMC_DATA_0_PULL_DN (1<<8)
#define IOMUX_PAD_SDMMC_DATA_0_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SDMMC_DATA_0_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SDMMC_DATA_0_SEL_MASK (15<<0)
#define IOMUX_PAD_SDMMC_DATA_0_SEL_SHIFT (0)
#define IOMUX_PAD_SDMMC_DATA_0_SEL_FUN_SDMMC_DATA_0_SEL (0<<0)
#define IOMUX_PAD_SDMMC_DATA_0_SEL_FUN_GPIO_10_SEL (1<<0)
#define IOMUX_PAD_SDMMC_DATA_0_SEL_FUN_SPI1_CS_1_SEL (2<<0)

//pad_SDMMC_DATA_1_cfg
#define IOMUX_PAD_SDMMC_DATA_1_OEN_FRC (1<<28)
#define IOMUX_PAD_SDMMC_DATA_1_OUT_FRC (1<<24)
#define IOMUX_PAD_SDMMC_DATA_1_OUT_REG (1<<20)
#define IOMUX_PAD_SDMMC_DATA_1_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SDMMC_DATA_1_OEN_REG (1<<17)
#define IOMUX_PAD_SDMMC_DATA_1_PULL_FRC (1<<16)
#define IOMUX_PAD_SDMMC_DATA_1_PULL_UP (1<<9)
#define IOMUX_PAD_SDMMC_DATA_1_PULL_DN (1<<8)
#define IOMUX_PAD_SDMMC_DATA_1_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SDMMC_DATA_1_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SDMMC_DATA_1_SEL_MASK (15<<0)
#define IOMUX_PAD_SDMMC_DATA_1_SEL_SHIFT (0)
#define IOMUX_PAD_SDMMC_DATA_1_SEL_FUN_SDMMC_DATA_1_SEL (0<<0)
#define IOMUX_PAD_SDMMC_DATA_1_SEL_FUN_GPIO_11_SEL (1<<0)
#define IOMUX_PAD_SDMMC_DATA_1_SEL_FUN_SPI1_DI_0_SEL (2<<0)

//pad_SDMMC_DATA_2_cfg
#define IOMUX_PAD_SDMMC_DATA_2_OEN_FRC (1<<28)
#define IOMUX_PAD_SDMMC_DATA_2_OUT_FRC (1<<24)
#define IOMUX_PAD_SDMMC_DATA_2_OUT_REG (1<<20)
#define IOMUX_PAD_SDMMC_DATA_2_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SDMMC_DATA_2_OEN_REG (1<<17)
#define IOMUX_PAD_SDMMC_DATA_2_PULL_FRC (1<<16)
#define IOMUX_PAD_SDMMC_DATA_2_PULL_UP (1<<9)
#define IOMUX_PAD_SDMMC_DATA_2_PULL_DN (1<<8)
#define IOMUX_PAD_SDMMC_DATA_2_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SDMMC_DATA_2_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SDMMC_DATA_2_SEL_MASK (15<<0)
#define IOMUX_PAD_SDMMC_DATA_2_SEL_SHIFT (0)
#define IOMUX_PAD_SDMMC_DATA_2_SEL_FUN_SDMMC_DATA_2_SEL (0<<0)
#define IOMUX_PAD_SDMMC_DATA_2_SEL_FUN_GPIO_12_SEL (1<<0)
#define IOMUX_PAD_SDMMC_DATA_2_SEL_FUN_SPI1_DI_1_SEL (2<<0)

//pad_SDMMC_DATA_3_cfg
#define IOMUX_PAD_SDMMC_DATA_3_OEN_FRC (1<<28)
#define IOMUX_PAD_SDMMC_DATA_3_OUT_FRC (1<<24)
#define IOMUX_PAD_SDMMC_DATA_3_OUT_REG (1<<20)
#define IOMUX_PAD_SDMMC_DATA_3_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SDMMC_DATA_3_OEN_REG (1<<17)
#define IOMUX_PAD_SDMMC_DATA_3_PULL_FRC (1<<16)
#define IOMUX_PAD_SDMMC_DATA_3_PULL_UP (1<<9)
#define IOMUX_PAD_SDMMC_DATA_3_PULL_DN (1<<8)
#define IOMUX_PAD_SDMMC_DATA_3_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SDMMC_DATA_3_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SDMMC_DATA_3_SEL_MASK (15<<0)
#define IOMUX_PAD_SDMMC_DATA_3_SEL_SHIFT (0)
#define IOMUX_PAD_SDMMC_DATA_3_SEL_FUN_SDMMC_DATA_3_SEL (0<<0)
#define IOMUX_PAD_SDMMC_DATA_3_SEL_FUN_GPIO_13_SEL (1<<0)

//pad_LCD_RSTB_cfg
#define IOMUX_PAD_LCD_RSTB_OEN_FRC (1<<28)
#define IOMUX_PAD_LCD_RSTB_OUT_FRC (1<<24)
#define IOMUX_PAD_LCD_RSTB_OUT_REG (1<<20)
#define IOMUX_PAD_LCD_RSTB_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_LCD_RSTB_OEN_REG (1<<17)
#define IOMUX_PAD_LCD_RSTB_PULL_FRC (1<<16)
#define IOMUX_PAD_LCD_RSTB_PULL_UP (1<<9)
#define IOMUX_PAD_LCD_RSTB_PULL_DN (1<<8)
#define IOMUX_PAD_LCD_RSTB_ANA(n)  (((n)&15)<<4)
#define IOMUX_PAD_LCD_RSTB_SEL(n)  (((n)&15)<<0)
#define IOMUX_PAD_LCD_RSTB_SEL_MASK (15<<0)
#define IOMUX_PAD_LCD_RSTB_SEL_SHIFT (0)
#define IOMUX_PAD_LCD_RSTB_SEL_FUN_LCD_RSTB_SEL (0<<0)
#define IOMUX_PAD_LCD_RSTB_SEL_FUN_GPIO_14_SEL (1<<0)
#define IOMUX_PAD_LCD_RSTB_SEL_FUN_DAI_RST_SEL (2<<0)
#define IOMUX_PAD_LCD_RSTB_SEL_FUN_I2S_BCK_SEL (3<<0)

//pad_SPI_LCD_CS_cfg
#define IOMUX_PAD_SPI_LCD_CS_OEN_FRC (1<<28)
#define IOMUX_PAD_SPI_LCD_CS_OUT_FRC (1<<24)
#define IOMUX_PAD_SPI_LCD_CS_OUT_REG (1<<20)
#define IOMUX_PAD_SPI_LCD_CS_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SPI_LCD_CS_OEN_REG (1<<17)
#define IOMUX_PAD_SPI_LCD_CS_PULL_FRC (1<<16)
#define IOMUX_PAD_SPI_LCD_CS_PULL_UP (1<<9)
#define IOMUX_PAD_SPI_LCD_CS_PULL_DN (1<<8)
#define IOMUX_PAD_SPI_LCD_CS_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SPI_LCD_CS_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SPI_LCD_CS_SEL_MASK (15<<0)
#define IOMUX_PAD_SPI_LCD_CS_SEL_SHIFT (0)
#define IOMUX_PAD_SPI_LCD_CS_SEL_FUN_SPI_LCD_CS_SEL (0<<0)
#define IOMUX_PAD_SPI_LCD_CS_SEL_FUN_GPIO_15_SEL (1<<0)
#define IOMUX_PAD_SPI_LCD_CS_SEL_FUN_DAI_CLK_SEL (2<<0)
#define IOMUX_PAD_SPI_LCD_CS_SEL_FUN_I2S_LRCK_SEL (3<<0)

//pad_SPI_LCD_SCK_cfg
#define IOMUX_PAD_SPI_LCD_SCK_OEN_FRC (1<<28)
#define IOMUX_PAD_SPI_LCD_SCK_OUT_FRC (1<<24)
#define IOMUX_PAD_SPI_LCD_SCK_OUT_REG (1<<20)
#define IOMUX_PAD_SPI_LCD_SCK_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SPI_LCD_SCK_OEN_REG (1<<17)
#define IOMUX_PAD_SPI_LCD_SCK_PULL_FRC (1<<16)
#define IOMUX_PAD_SPI_LCD_SCK_PULL_UP (1<<9)
#define IOMUX_PAD_SPI_LCD_SCK_PULL_DN (1<<8)
#define IOMUX_PAD_SPI_LCD_SCK_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SPI_LCD_SCK_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SPI_LCD_SCK_SEL_MASK (15<<0)
#define IOMUX_PAD_SPI_LCD_SCK_SEL_SHIFT (0)
#define IOMUX_PAD_SPI_LCD_SCK_SEL_FUN_SPI_LCD_SCK_SEL (0<<0)
#define IOMUX_PAD_SPI_LCD_SCK_SEL_FUN_GPIO_16_SEL (1<<0)
#define IOMUX_PAD_SPI_LCD_SCK_SEL_FUN_DAI_DI_SEL (2<<0)
#define IOMUX_PAD_SPI_LCD_SCK_SEL_FUN_I2S_DI_SEL (3<<0)

//pad_SPI_LCD_DIO_cfg
#define IOMUX_PAD_SPI_LCD_DIO_OEN_FRC (1<<28)
#define IOMUX_PAD_SPI_LCD_DIO_OUT_FRC (1<<24)
#define IOMUX_PAD_SPI_LCD_DIO_OUT_REG (1<<20)
#define IOMUX_PAD_SPI_LCD_DIO_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SPI_LCD_DIO_OEN_REG (1<<17)
#define IOMUX_PAD_SPI_LCD_DIO_PULL_FRC (1<<16)
#define IOMUX_PAD_SPI_LCD_DIO_PULL_UP (1<<9)
#define IOMUX_PAD_SPI_LCD_DIO_PULL_DN (1<<8)
#define IOMUX_PAD_SPI_LCD_DIO_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SPI_LCD_DIO_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SPI_LCD_DIO_SEL_MASK (15<<0)
#define IOMUX_PAD_SPI_LCD_DIO_SEL_SHIFT (0)
#define IOMUX_PAD_SPI_LCD_DIO_SEL_FUN_SPI_LCD_DIO_SEL (0<<0)
#define IOMUX_PAD_SPI_LCD_DIO_SEL_FUN_GPIO_17_SEL (1<<0)
#define IOMUX_PAD_SPI_LCD_DIO_SEL_FUN_DAI_DO_SEL (2<<0)
#define IOMUX_PAD_SPI_LCD_DIO_SEL_FUN_I2S_DO_SEL (3<<0)

//pad_SPI_LCD_SDC_cfg
#define IOMUX_PAD_SPI_LCD_SDC_OEN_FRC (1<<28)
#define IOMUX_PAD_SPI_LCD_SDC_OUT_FRC (1<<24)
#define IOMUX_PAD_SPI_LCD_SDC_OUT_REG (1<<20)
#define IOMUX_PAD_SPI_LCD_SDC_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SPI_LCD_SDC_OEN_REG (1<<17)
#define IOMUX_PAD_SPI_LCD_SDC_PULL_FRC (1<<16)
#define IOMUX_PAD_SPI_LCD_SDC_PULL_UP (1<<9)
#define IOMUX_PAD_SPI_LCD_SDC_PULL_DN (1<<8)
#define IOMUX_PAD_SPI_LCD_SDC_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SPI_LCD_SDC_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SPI_LCD_SDC_SEL_MASK (15<<0)
#define IOMUX_PAD_SPI_LCD_SDC_SEL_SHIFT (0)
#define IOMUX_PAD_SPI_LCD_SDC_SEL_FUN_SPI_LCD_SDC_SEL (0<<0)
#define IOMUX_PAD_SPI_LCD_SDC_SEL_FUN_GPIO_18_SEL (1<<0)

//pad_CAM_PWDN_cfg
#define IOMUX_PAD_CAM_PWDN_OEN_FRC (1<<28)
#define IOMUX_PAD_CAM_PWDN_OUT_FRC (1<<24)
#define IOMUX_PAD_CAM_PWDN_OUT_REG (1<<20)
#define IOMUX_PAD_CAM_PWDN_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_CAM_PWDN_OEN_REG (1<<17)
#define IOMUX_PAD_CAM_PWDN_PULL_FRC (1<<16)
#define IOMUX_PAD_CAM_PWDN_PULL_UP (1<<9)
#define IOMUX_PAD_CAM_PWDN_PULL_DN (1<<8)
#define IOMUX_PAD_CAM_PWDN_ANA(n)  (((n)&15)<<4)
#define IOMUX_PAD_CAM_PWDN_SEL(n)  (((n)&15)<<0)
#define IOMUX_PAD_CAM_PWDN_SEL_MASK (15<<0)
#define IOMUX_PAD_CAM_PWDN_SEL_SHIFT (0)
#define IOMUX_PAD_CAM_PWDN_SEL_FUN_CAM_PWDN_SEL (0<<0)
#define IOMUX_PAD_CAM_PWDN_SEL_FUN_GPIO_19_SEL (1<<0)
#define IOMUX_PAD_CAM_PWDN_SEL_FUN_I2C2_SCL_SEL (2<<0)

//pad_CAM_RSTB_cfg
#define IOMUX_PAD_CAM_RSTB_OEN_FRC (1<<28)
#define IOMUX_PAD_CAM_RSTB_OUT_FRC (1<<24)
#define IOMUX_PAD_CAM_RSTB_OUT_REG (1<<20)
#define IOMUX_PAD_CAM_RSTB_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_CAM_RSTB_OEN_REG (1<<17)
#define IOMUX_PAD_CAM_RSTB_PULL_FRC (1<<16)
#define IOMUX_PAD_CAM_RSTB_PULL_UP (1<<9)
#define IOMUX_PAD_CAM_RSTB_PULL_DN (1<<8)
#define IOMUX_PAD_CAM_RSTB_ANA(n)  (((n)&15)<<4)
#define IOMUX_PAD_CAM_RSTB_SEL(n)  (((n)&15)<<0)
#define IOMUX_PAD_CAM_RSTB_SEL_MASK (15<<0)
#define IOMUX_PAD_CAM_RSTB_SEL_SHIFT (0)
#define IOMUX_PAD_CAM_RSTB_SEL_FUN_CAM_RSTB_SEL (0<<0)
#define IOMUX_PAD_CAM_RSTB_SEL_FUN_GPIO_20_SEL (1<<0)
#define IOMUX_PAD_CAM_RSTB_SEL_FUN_I2C2_SDA_SEL (2<<0)

//pad_CAM_CLK_cfg
#define IOMUX_PAD_CAM_CLK_OEN_FRC  (1<<28)
#define IOMUX_PAD_CAM_CLK_OUT_FRC  (1<<24)
#define IOMUX_PAD_CAM_CLK_OUT_REG  (1<<20)
#define IOMUX_PAD_CAM_CLK_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_CAM_CLK_OEN_REG  (1<<17)
#define IOMUX_PAD_CAM_CLK_PULL_FRC (1<<16)
#define IOMUX_PAD_CAM_CLK_PULL_UP  (1<<9)
#define IOMUX_PAD_CAM_CLK_PULL_DN  (1<<8)
#define IOMUX_PAD_CAM_CLK_ANA(n)   (((n)&15)<<4)
#define IOMUX_PAD_CAM_CLK_SEL(n)   (((n)&15)<<0)
#define IOMUX_PAD_CAM_CLK_SEL_MASK (15<<0)
#define IOMUX_PAD_CAM_CLK_SEL_SHIFT (0)
#define IOMUX_PAD_CAM_CLK_SEL_FUN_CAM_CLK_SEL (0<<0)
#define IOMUX_PAD_CAM_CLK_SEL_FUN_GPIO_21_SEL (1<<0)

//pad_SPI_CAM_SCK_cfg
#define IOMUX_PAD_SPI_CAM_SCK_OEN_FRC (1<<28)
#define IOMUX_PAD_SPI_CAM_SCK_OUT_FRC (1<<24)
#define IOMUX_PAD_SPI_CAM_SCK_OUT_REG (1<<20)
#define IOMUX_PAD_SPI_CAM_SCK_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SPI_CAM_SCK_OEN_REG (1<<17)
#define IOMUX_PAD_SPI_CAM_SCK_PULL_FRC (1<<16)
#define IOMUX_PAD_SPI_CAM_SCK_PULL_UP (1<<9)
#define IOMUX_PAD_SPI_CAM_SCK_PULL_DN (1<<8)
#define IOMUX_PAD_SPI_CAM_SCK_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SPI_CAM_SCK_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SPI_CAM_SCK_SEL_MASK (15<<0)
#define IOMUX_PAD_SPI_CAM_SCK_SEL_SHIFT (0)
#define IOMUX_PAD_SPI_CAM_SCK_SEL_FUN_SPI_CAM_SCK_SEL (0<<0)
#define IOMUX_PAD_SPI_CAM_SCK_SEL_FUN_GPIO_22_SEL (1<<0)

//pad_SPI_CAM_DI_0_cfg
#define IOMUX_PAD_SPI_CAM_DI_0_OEN_FRC (1<<28)
#define IOMUX_PAD_SPI_CAM_DI_0_OUT_FRC (1<<24)
#define IOMUX_PAD_SPI_CAM_DI_0_OUT_REG (1<<20)
#define IOMUX_PAD_SPI_CAM_DI_0_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SPI_CAM_DI_0_OEN_REG (1<<17)
#define IOMUX_PAD_SPI_CAM_DI_0_PULL_FRC (1<<16)
#define IOMUX_PAD_SPI_CAM_DI_0_PULL_UP (1<<9)
#define IOMUX_PAD_SPI_CAM_DI_0_PULL_DN (1<<8)
#define IOMUX_PAD_SPI_CAM_DI_0_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SPI_CAM_DI_0_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SPI_CAM_DI_0_SEL_MASK (15<<0)
#define IOMUX_PAD_SPI_CAM_DI_0_SEL_SHIFT (0)
#define IOMUX_PAD_SPI_CAM_DI_0_SEL_FUN_SPI_CAM_DI_0_SEL (0<<0)
#define IOMUX_PAD_SPI_CAM_DI_0_SEL_FUN_GPIO_23_SEL (1<<0)
#define IOMUX_PAD_SPI_CAM_DI_0_SEL_FUN_SPI_CAM_DI_1_SEL (2<<0)

//pad_SPI_CAM_DI_1_cfg
#define IOMUX_PAD_SPI_CAM_DI_1_OEN_FRC (1<<28)
#define IOMUX_PAD_SPI_CAM_DI_1_OUT_FRC (1<<24)
#define IOMUX_PAD_SPI_CAM_DI_1_OUT_REG (1<<20)
#define IOMUX_PAD_SPI_CAM_DI_1_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_SPI_CAM_DI_1_OEN_REG (1<<17)
#define IOMUX_PAD_SPI_CAM_DI_1_PULL_FRC (1<<16)
#define IOMUX_PAD_SPI_CAM_DI_1_PULL_UP (1<<9)
#define IOMUX_PAD_SPI_CAM_DI_1_PULL_DN (1<<8)
#define IOMUX_PAD_SPI_CAM_DI_1_ANA(n) (((n)&15)<<4)
#define IOMUX_PAD_SPI_CAM_DI_1_SEL(n) (((n)&15)<<0)
#define IOMUX_PAD_SPI_CAM_DI_1_SEL_MASK (15<<0)
#define IOMUX_PAD_SPI_CAM_DI_1_SEL_SHIFT (0)
#define IOMUX_PAD_SPI_CAM_DI_1_SEL_FUN_SPI_CAM_DI_1_SEL (0<<0)
#define IOMUX_PAD_SPI_CAM_DI_1_SEL_FUN_GPIO_24_SEL (1<<0)
#define IOMUX_PAD_SPI_CAM_DI_1_SEL_FUN_SPI_CAM_DI_0_SEL (2<<0)
#define IOMUX_PAD_SPI_CAM_DI_1_SEL_FUN_SPI_CAM_SSN_SEL (3<<0)

//pad_GPIO_0_cfg
#define IOMUX_PAD_GPIO_0_OEN_FRC   (1<<28)
#define IOMUX_PAD_GPIO_0_OUT_FRC   (1<<24)
#define IOMUX_PAD_GPIO_0_OUT_REG   (1<<20)
#define IOMUX_PAD_GPIO_0_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_GPIO_0_OEN_REG   (1<<17)
#define IOMUX_PAD_GPIO_0_PULL_FRC  (1<<16)
#define IOMUX_PAD_GPIO_0_PULL_UP   (1<<9)
#define IOMUX_PAD_GPIO_0_PULL_DN   (1<<8)
#define IOMUX_PAD_GPIO_0_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_GPIO_0_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_GPIO_0_SEL_MASK  (15<<0)
#define IOMUX_PAD_GPIO_0_SEL_SHIFT (0)
#define IOMUX_PAD_GPIO_0_SEL_FUN_GPIO_0_SEL (0<<0)
#define IOMUX_PAD_GPIO_0_SEL_FUN_UART1_RXD_SEL (1<<0)
#define IOMUX_PAD_GPIO_0_SEL_FUN_SPI2_CLK_SEL (2<<0)
#define IOMUX_PAD_GPIO_0_SEL_FUN_SEGOUT_0_SEL (4<<0)
#define IOMUX_PAD_GPIO_0_SEL_FUN_DBG_DO_0_SEL (5<<0)

//pad_GPIO_1_cfg
#define IOMUX_PAD_GPIO_1_OEN_FRC   (1<<28)
#define IOMUX_PAD_GPIO_1_OUT_FRC   (1<<24)
#define IOMUX_PAD_GPIO_1_OUT_REG   (1<<20)
#define IOMUX_PAD_GPIO_1_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_GPIO_1_OEN_REG   (1<<17)
#define IOMUX_PAD_GPIO_1_PULL_FRC  (1<<16)
#define IOMUX_PAD_GPIO_1_PULL_UP   (1<<9)
#define IOMUX_PAD_GPIO_1_PULL_DN   (1<<8)
#define IOMUX_PAD_GPIO_1_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_GPIO_1_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_GPIO_1_SEL_MASK  (15<<0)
#define IOMUX_PAD_GPIO_1_SEL_SHIFT (0)
#define IOMUX_PAD_GPIO_1_SEL_FUN_GPIO_1_SEL (0<<0)
#define IOMUX_PAD_GPIO_1_SEL_FUN_UART1_TXD_SEL (1<<0)
#define IOMUX_PAD_GPIO_1_SEL_FUN_SPI2_CS_0_SEL (2<<0)
#define IOMUX_PAD_GPIO_1_SEL_FUN_SEGOUT_1_SEL (4<<0)
#define IOMUX_PAD_GPIO_1_SEL_FUN_DBG_DO_1_SEL (5<<0)

//pad_GPIO_2_cfg
#define IOMUX_PAD_GPIO_2_OEN_FRC   (1<<28)
#define IOMUX_PAD_GPIO_2_OUT_FRC   (1<<24)
#define IOMUX_PAD_GPIO_2_OUT_REG   (1<<20)
#define IOMUX_PAD_GPIO_2_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_GPIO_2_OEN_REG   (1<<17)
#define IOMUX_PAD_GPIO_2_PULL_FRC  (1<<16)
#define IOMUX_PAD_GPIO_2_PULL_UP   (1<<9)
#define IOMUX_PAD_GPIO_2_PULL_DN   (1<<8)
#define IOMUX_PAD_GPIO_2_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_GPIO_2_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_GPIO_2_SEL_MASK  (15<<0)
#define IOMUX_PAD_GPIO_2_SEL_SHIFT (0)
#define IOMUX_PAD_GPIO_2_SEL_FUN_GPIO_2_SEL (0<<0)
#define IOMUX_PAD_GPIO_2_SEL_FUN_UART1_CTS_SEL (1<<0)
#define IOMUX_PAD_GPIO_2_SEL_FUN_SPI2_CS_1_SEL (2<<0)
#define IOMUX_PAD_GPIO_2_SEL_FUN_PWL_1_SEL (3<<0)
#define IOMUX_PAD_GPIO_2_SEL_FUN_SEGOUT_2_SEL (4<<0)
#define IOMUX_PAD_GPIO_2_SEL_FUN_DBG_DO_2_SEL (5<<0)

//pad_GPIO_3_cfg
#define IOMUX_PAD_GPIO_3_OEN_FRC   (1<<28)
#define IOMUX_PAD_GPIO_3_OUT_FRC   (1<<24)
#define IOMUX_PAD_GPIO_3_OUT_REG   (1<<20)
#define IOMUX_PAD_GPIO_3_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_GPIO_3_OEN_REG   (1<<17)
#define IOMUX_PAD_GPIO_3_PULL_FRC  (1<<16)
#define IOMUX_PAD_GPIO_3_PULL_UP   (1<<9)
#define IOMUX_PAD_GPIO_3_PULL_DN   (1<<8)
#define IOMUX_PAD_GPIO_3_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_GPIO_3_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_GPIO_3_SEL_MASK  (15<<0)
#define IOMUX_PAD_GPIO_3_SEL_SHIFT (0)
#define IOMUX_PAD_GPIO_3_SEL_FUN_GPIO_3_SEL (0<<0)
#define IOMUX_PAD_GPIO_3_SEL_FUN_UART1_RTS_SEL (1<<0)
#define IOMUX_PAD_GPIO_3_SEL_FUN_SPI2_DI_0_SEL (2<<0)
#define IOMUX_PAD_GPIO_3_SEL_FUN_LPSCO_1_SEL (3<<0)
#define IOMUX_PAD_GPIO_3_SEL_FUN_SEGOUT_3_SEL (4<<0)
#define IOMUX_PAD_GPIO_3_SEL_FUN_DBG_DO_3_SEL (5<<0)

//pad_GPIO_4_cfg
#define IOMUX_PAD_GPIO_4_OEN_FRC   (1<<28)
#define IOMUX_PAD_GPIO_4_OUT_FRC   (1<<24)
#define IOMUX_PAD_GPIO_4_OUT_REG   (1<<20)
#define IOMUX_PAD_GPIO_4_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_GPIO_4_OEN_REG   (1<<17)
#define IOMUX_PAD_GPIO_4_PULL_FRC  (1<<16)
#define IOMUX_PAD_GPIO_4_PULL_UP   (1<<9)
#define IOMUX_PAD_GPIO_4_PULL_DN   (1<<8)
#define IOMUX_PAD_GPIO_4_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_GPIO_4_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_GPIO_4_SEL_MASK  (15<<0)
#define IOMUX_PAD_GPIO_4_SEL_SHIFT (0)
#define IOMUX_PAD_GPIO_4_SEL_FUN_GPIO_4_SEL (0<<0)
#define IOMUX_PAD_GPIO_4_SEL_FUN_UART2_RXD_SEL (1<<0)
#define IOMUX_PAD_GPIO_4_SEL_FUN_SPI2_DI_1_SEL (2<<0)
#define IOMUX_PAD_GPIO_4_SEL_FUN_LPG_SEL (3<<0)
#define IOMUX_PAD_GPIO_4_SEL_FUN_SEGOUT_4_SEL (4<<0)
#define IOMUX_PAD_GPIO_4_SEL_FUN_DBG_DO_4_SEL (5<<0)

//pad_GPIO_5_cfg
#define IOMUX_PAD_GPIO_5_OEN_FRC   (1<<28)
#define IOMUX_PAD_GPIO_5_OUT_FRC   (1<<24)
#define IOMUX_PAD_GPIO_5_OUT_REG   (1<<20)
#define IOMUX_PAD_GPIO_5_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_GPIO_5_OEN_REG   (1<<17)
#define IOMUX_PAD_GPIO_5_PULL_FRC  (1<<16)
#define IOMUX_PAD_GPIO_5_PULL_UP   (1<<9)
#define IOMUX_PAD_GPIO_5_PULL_DN   (1<<8)
#define IOMUX_PAD_GPIO_5_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_GPIO_5_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_GPIO_5_SEL_MASK  (15<<0)
#define IOMUX_PAD_GPIO_5_SEL_SHIFT (0)
#define IOMUX_PAD_GPIO_5_SEL_FUN_GPIO_5_SEL (0<<0)
#define IOMUX_PAD_GPIO_5_SEL_FUN_UART2_TXD_SEL (1<<0)
#define IOMUX_PAD_GPIO_5_SEL_FUN_LCD_TE_SEL (2<<0)
#define IOMUX_PAD_GPIO_5_SEL_FUN_PWT_SEL (3<<0)
#define IOMUX_PAD_GPIO_5_SEL_FUN_SEGOUT_5_SEL (4<<0)
#define IOMUX_PAD_GPIO_5_SEL_FUN_DBG_DO_5_SEL (5<<0)

//pad_GPIO_6_cfg
#define IOMUX_PAD_GPIO_6_OEN_FRC   (1<<28)
#define IOMUX_PAD_GPIO_6_OUT_FRC   (1<<24)
#define IOMUX_PAD_GPIO_6_OUT_REG   (1<<20)
#define IOMUX_PAD_GPIO_6_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_GPIO_6_OEN_REG   (1<<17)
#define IOMUX_PAD_GPIO_6_PULL_FRC  (1<<16)
#define IOMUX_PAD_GPIO_6_PULL_UP   (1<<9)
#define IOMUX_PAD_GPIO_6_PULL_DN   (1<<8)
#define IOMUX_PAD_GPIO_6_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_GPIO_6_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_GPIO_6_SEL_MASK  (15<<0)
#define IOMUX_PAD_GPIO_6_SEL_SHIFT (0)
#define IOMUX_PAD_GPIO_6_SEL_FUN_GPIO_6_SEL (0<<0)
#define IOMUX_PAD_GPIO_6_SEL_FUN_UART2_CTS_SEL (1<<0)
#define IOMUX_PAD_GPIO_6_SEL_FUN_I2C3_SCL_SEL (2<<0)
#define IOMUX_PAD_GPIO_6_SEL_FUN_TCO_3_SEL (3<<0)
#define IOMUX_PAD_GPIO_6_SEL_FUN_SEGOUT_6_SEL (4<<0)
#define IOMUX_PAD_GPIO_6_SEL_FUN_DBG_DO_6_SEL (5<<0)

//pad_GPIO_7_cfg
#define IOMUX_PAD_GPIO_7_OEN_FRC   (1<<28)
#define IOMUX_PAD_GPIO_7_OUT_FRC   (1<<24)
#define IOMUX_PAD_GPIO_7_OUT_REG   (1<<20)
#define IOMUX_PAD_GPIO_7_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_GPIO_7_OEN_REG   (1<<17)
#define IOMUX_PAD_GPIO_7_PULL_FRC  (1<<16)
#define IOMUX_PAD_GPIO_7_PULL_UP   (1<<9)
#define IOMUX_PAD_GPIO_7_PULL_DN   (1<<8)
#define IOMUX_PAD_GPIO_7_ANA(n)    (((n)&15)<<4)
#define IOMUX_PAD_GPIO_7_SEL(n)    (((n)&15)<<0)
#define IOMUX_PAD_GPIO_7_SEL_MASK  (15<<0)
#define IOMUX_PAD_GPIO_7_SEL_SHIFT (0)
#define IOMUX_PAD_GPIO_7_SEL_FUN_GPIO_7_SEL (0<<0)
#define IOMUX_PAD_GPIO_7_SEL_FUN_UART2_RTS_SEL (1<<0)
#define IOMUX_PAD_GPIO_7_SEL_FUN_I2C3_SDA_SEL (2<<0)
#define IOMUX_PAD_GPIO_7_SEL_FUN_TCO_4_SEL (3<<0)
#define IOMUX_PAD_GPIO_7_SEL_FUN_SEGOUT_7_SEL (4<<0)
#define IOMUX_PAD_GPIO_7_SEL_FUN_DBG_DO_7_SEL (5<<0)

//pad_KEYIN_0_cfg
#define IOMUX_PAD_KEYIN_0_OEN_FRC  (1<<28)
#define IOMUX_PAD_KEYIN_0_OUT_FRC  (1<<24)
#define IOMUX_PAD_KEYIN_0_OUT_REG  (1<<20)
#define IOMUX_PAD_KEYIN_0_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_KEYIN_0_OEN_REG  (1<<17)
#define IOMUX_PAD_KEYIN_0_PULL_FRC (1<<16)
#define IOMUX_PAD_KEYIN_0_PULL_UP  (1<<9)
#define IOMUX_PAD_KEYIN_0_PULL_DN  (1<<8)
#define IOMUX_PAD_KEYIN_0_ANA(n)   (((n)&15)<<4)
#define IOMUX_PAD_KEYIN_0_SEL(n)   (((n)&15)<<0)
#define IOMUX_PAD_KEYIN_0_SEL_MASK (15<<0)
#define IOMUX_PAD_KEYIN_0_SEL_SHIFT (0)
#define IOMUX_PAD_KEYIN_0_SEL_FUN_KEYIN_0_SEL (0<<0)
#define IOMUX_PAD_KEYIN_0_SEL_FUN_GPIO_25_SEL (1<<0)
#define IOMUX_PAD_KEYIN_0_SEL_FUN_SEGOUT_8_SEL (4<<0)
#define IOMUX_PAD_KEYIN_0_SEL_FUN_DBG_DO_8_SEL (5<<0)

//pad_KEYIN_1_cfg
#define IOMUX_PAD_KEYIN_1_OEN_FRC  (1<<28)
#define IOMUX_PAD_KEYIN_1_OUT_FRC  (1<<24)
#define IOMUX_PAD_KEYIN_1_OUT_REG  (1<<20)
#define IOMUX_PAD_KEYIN_1_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_KEYIN_1_OEN_REG  (1<<17)
#define IOMUX_PAD_KEYIN_1_PULL_FRC (1<<16)
#define IOMUX_PAD_KEYIN_1_PULL_UP  (1<<9)
#define IOMUX_PAD_KEYIN_1_PULL_DN  (1<<8)
#define IOMUX_PAD_KEYIN_1_ANA(n)   (((n)&15)<<4)
#define IOMUX_PAD_KEYIN_1_SEL(n)   (((n)&15)<<0)
#define IOMUX_PAD_KEYIN_1_SEL_MASK (15<<0)
#define IOMUX_PAD_KEYIN_1_SEL_SHIFT (0)
#define IOMUX_PAD_KEYIN_1_SEL_FUN_KEYIN_1_SEL (0<<0)
#define IOMUX_PAD_KEYIN_1_SEL_FUN_GPIO_26_SEL (1<<0)
#define IOMUX_PAD_KEYIN_1_SEL_FUN_SEGOUT_9_SEL (4<<0)
#define IOMUX_PAD_KEYIN_1_SEL_FUN_DBG_DO_9_SEL (5<<0)

//pad_KEYIN_2_cfg
#define IOMUX_PAD_KEYIN_2_OEN_FRC  (1<<28)
#define IOMUX_PAD_KEYIN_2_OUT_FRC  (1<<24)
#define IOMUX_PAD_KEYIN_2_OUT_REG  (1<<20)
#define IOMUX_PAD_KEYIN_2_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_KEYIN_2_OEN_REG  (1<<17)
#define IOMUX_PAD_KEYIN_2_PULL_FRC (1<<16)
#define IOMUX_PAD_KEYIN_2_PULL_UP  (1<<9)
#define IOMUX_PAD_KEYIN_2_PULL_DN  (1<<8)
#define IOMUX_PAD_KEYIN_2_ANA(n)   (((n)&15)<<4)
#define IOMUX_PAD_KEYIN_2_SEL(n)   (((n)&15)<<0)
#define IOMUX_PAD_KEYIN_2_SEL_MASK (15<<0)
#define IOMUX_PAD_KEYIN_2_SEL_SHIFT (0)
#define IOMUX_PAD_KEYIN_2_SEL_FUN_KEYIN_2_SEL (0<<0)
#define IOMUX_PAD_KEYIN_2_SEL_FUN_GPIO_27_SEL (1<<0)
#define IOMUX_PAD_KEYIN_2_SEL_FUN_SEGOUT_10_SEL (4<<0)
#define IOMUX_PAD_KEYIN_2_SEL_FUN_DBG_DO_10_SEL (5<<0)

//pad_KEYIN_3_cfg
#define IOMUX_PAD_KEYIN_3_OEN_FRC  (1<<28)
#define IOMUX_PAD_KEYIN_3_OUT_FRC  (1<<24)
#define IOMUX_PAD_KEYIN_3_OUT_REG  (1<<20)
#define IOMUX_PAD_KEYIN_3_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_KEYIN_3_OEN_REG  (1<<17)
#define IOMUX_PAD_KEYIN_3_PULL_FRC (1<<16)
#define IOMUX_PAD_KEYIN_3_PULL_UP  (1<<9)
#define IOMUX_PAD_KEYIN_3_PULL_DN  (1<<8)
#define IOMUX_PAD_KEYIN_3_ANA(n)   (((n)&15)<<4)
#define IOMUX_PAD_KEYIN_3_SEL(n)   (((n)&15)<<0)
#define IOMUX_PAD_KEYIN_3_SEL_MASK (15<<0)
#define IOMUX_PAD_KEYIN_3_SEL_SHIFT (0)
#define IOMUX_PAD_KEYIN_3_SEL_FUN_KEYIN_3_SEL (0<<0)
#define IOMUX_PAD_KEYIN_3_SEL_FUN_GPIO_28_SEL (1<<0)
#define IOMUX_PAD_KEYIN_3_SEL_FUN_SEGOUT_11_SEL (4<<0)
#define IOMUX_PAD_KEYIN_3_SEL_FUN_DBG_DO_11_SEL (5<<0)

//pad_KEYIN_4_cfg
#define IOMUX_PAD_KEYIN_4_OEN_FRC  (1<<28)
#define IOMUX_PAD_KEYIN_4_OUT_FRC  (1<<24)
#define IOMUX_PAD_KEYIN_4_OUT_REG  (1<<20)
#define IOMUX_PAD_KEYIN_4_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_KEYIN_4_OEN_REG  (1<<17)
#define IOMUX_PAD_KEYIN_4_PULL_FRC (1<<16)
#define IOMUX_PAD_KEYIN_4_PULL_UP  (1<<9)
#define IOMUX_PAD_KEYIN_4_PULL_DN  (1<<8)
#define IOMUX_PAD_KEYIN_4_ANA(n)   (((n)&15)<<4)
#define IOMUX_PAD_KEYIN_4_SEL(n)   (((n)&15)<<0)
#define IOMUX_PAD_KEYIN_4_SEL_MASK (15<<0)
#define IOMUX_PAD_KEYIN_4_SEL_SHIFT (0)
#define IOMUX_PAD_KEYIN_4_SEL_FUN_KEYIN_4_SEL (0<<0)
#define IOMUX_PAD_KEYIN_4_SEL_FUN_GPIO_29_SEL (1<<0)
#define IOMUX_PAD_KEYIN_4_SEL_FUN_SEGOUT_12_SEL (4<<0)
#define IOMUX_PAD_KEYIN_4_SEL_FUN_DBG_DO_12_SEL (5<<0)

//pad_KEYOUT_0_cfg
#define IOMUX_PAD_KEYOUT_0_OEN_FRC (1<<28)
#define IOMUX_PAD_KEYOUT_0_OUT_FRC (1<<24)
#define IOMUX_PAD_KEYOUT_0_OUT_REG (1<<20)
#define IOMUX_PAD_KEYOUT_0_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_KEYOUT_0_OEN_REG (1<<17)
#define IOMUX_PAD_KEYOUT_0_PULL_FRC (1<<16)
#define IOMUX_PAD_KEYOUT_0_PULL_UP (1<<9)
#define IOMUX_PAD_KEYOUT_0_PULL_DN (1<<8)
#define IOMUX_PAD_KEYOUT_0_ANA(n)  (((n)&15)<<4)
#define IOMUX_PAD_KEYOUT_0_SEL(n)  (((n)&15)<<0)
#define IOMUX_PAD_KEYOUT_0_SEL_MASK (15<<0)
#define IOMUX_PAD_KEYOUT_0_SEL_SHIFT (0)
#define IOMUX_PAD_KEYOUT_0_SEL_FUN_KEYOUT_0_SEL (0<<0)
#define IOMUX_PAD_KEYOUT_0_SEL_FUN_GPIO_30_SEL (1<<0)
#define IOMUX_PAD_KEYOUT_0_SEL_FUN_SEGOUT_13_SEL (4<<0)
#define IOMUX_PAD_KEYOUT_0_SEL_FUN_DBG_DO_13_SEL (5<<0)

//pad_KEYOUT_1_cfg
#define IOMUX_PAD_KEYOUT_1_OEN_FRC (1<<28)
#define IOMUX_PAD_KEYOUT_1_OUT_FRC (1<<24)
#define IOMUX_PAD_KEYOUT_1_OUT_REG (1<<20)
#define IOMUX_PAD_KEYOUT_1_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_KEYOUT_1_OEN_REG (1<<17)
#define IOMUX_PAD_KEYOUT_1_PULL_FRC (1<<16)
#define IOMUX_PAD_KEYOUT_1_PULL_UP (1<<9)
#define IOMUX_PAD_KEYOUT_1_PULL_DN (1<<8)
#define IOMUX_PAD_KEYOUT_1_ANA(n)  (((n)&15)<<4)
#define IOMUX_PAD_KEYOUT_1_SEL(n)  (((n)&15)<<0)
#define IOMUX_PAD_KEYOUT_1_SEL_MASK (15<<0)
#define IOMUX_PAD_KEYOUT_1_SEL_SHIFT (0)
#define IOMUX_PAD_KEYOUT_1_SEL_FUN_KEYOUT_1_SEL (0<<0)
#define IOMUX_PAD_KEYOUT_1_SEL_FUN_GPIO_31_SEL (1<<0)
#define IOMUX_PAD_KEYOUT_1_SEL_FUN_SEGOUT_14_SEL (4<<0)
#define IOMUX_PAD_KEYOUT_1_SEL_FUN_DBG_DO_14_SEL (5<<0)

//pad_KEYOUT_2_cfg
#define IOMUX_PAD_KEYOUT_2_OEN_FRC (1<<28)
#define IOMUX_PAD_KEYOUT_2_OUT_FRC (1<<24)
#define IOMUX_PAD_KEYOUT_2_OUT_REG (1<<20)
#define IOMUX_PAD_KEYOUT_2_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_KEYOUT_2_OEN_REG (1<<17)
#define IOMUX_PAD_KEYOUT_2_PULL_FRC (1<<16)
#define IOMUX_PAD_KEYOUT_2_PULL_UP (1<<9)
#define IOMUX_PAD_KEYOUT_2_PULL_DN (1<<8)
#define IOMUX_PAD_KEYOUT_2_ANA(n)  (((n)&15)<<4)
#define IOMUX_PAD_KEYOUT_2_SEL(n)  (((n)&15)<<0)
#define IOMUX_PAD_KEYOUT_2_SEL_MASK (15<<0)
#define IOMUX_PAD_KEYOUT_2_SEL_SHIFT (0)
#define IOMUX_PAD_KEYOUT_2_SEL_FUN_KEYOUT_2_SEL (0<<0)
#define IOMUX_PAD_KEYOUT_2_SEL_FUN_GPIO_32_SEL (1<<0)
#define IOMUX_PAD_KEYOUT_2_SEL_FUN_SEGOUT_15_SEL (4<<0)
#define IOMUX_PAD_KEYOUT_2_SEL_FUN_DBG_DO_15_SEL (5<<0)

//pad_KEYOUT_3_cfg
#define IOMUX_PAD_KEYOUT_3_OEN_FRC (1<<28)
#define IOMUX_PAD_KEYOUT_3_OUT_FRC (1<<24)
#define IOMUX_PAD_KEYOUT_3_OUT_REG (1<<20)
#define IOMUX_PAD_KEYOUT_3_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_KEYOUT_3_OEN_REG (1<<17)
#define IOMUX_PAD_KEYOUT_3_PULL_FRC (1<<16)
#define IOMUX_PAD_KEYOUT_3_PULL_UP (1<<9)
#define IOMUX_PAD_KEYOUT_3_PULL_DN (1<<8)
#define IOMUX_PAD_KEYOUT_3_ANA(n)  (((n)&15)<<4)
#define IOMUX_PAD_KEYOUT_3_SEL(n)  (((n)&15)<<0)
#define IOMUX_PAD_KEYOUT_3_SEL_MASK (15<<0)
#define IOMUX_PAD_KEYOUT_3_SEL_SHIFT (0)
#define IOMUX_PAD_KEYOUT_3_SEL_FUN_KEYOUT_3_SEL (0<<0)
#define IOMUX_PAD_KEYOUT_3_SEL_FUN_GPIO_33_SEL (1<<0)
#define IOMUX_PAD_KEYOUT_3_SEL_FUN_SEGOUT_16_SEL (4<<0)
#define IOMUX_PAD_KEYOUT_3_SEL_FUN_DBG_CLK_SEL (5<<0)

//pad_KEYOUT_4_cfg
#define IOMUX_PAD_KEYOUT_4_OEN_FRC (1<<28)
#define IOMUX_PAD_KEYOUT_4_OUT_FRC (1<<24)
#define IOMUX_PAD_KEYOUT_4_OUT_REG (1<<20)
#define IOMUX_PAD_KEYOUT_4_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_KEYOUT_4_OEN_REG (1<<17)
#define IOMUX_PAD_KEYOUT_4_PULL_FRC (1<<16)
#define IOMUX_PAD_KEYOUT_4_PULL_UP (1<<9)
#define IOMUX_PAD_KEYOUT_4_PULL_DN (1<<8)
#define IOMUX_PAD_KEYOUT_4_ANA(n)  (((n)&15)<<4)
#define IOMUX_PAD_KEYOUT_4_SEL(n)  (((n)&15)<<0)
#define IOMUX_PAD_KEYOUT_4_SEL_MASK (15<<0)
#define IOMUX_PAD_KEYOUT_4_SEL_SHIFT (0)
#define IOMUX_PAD_KEYOUT_4_SEL_FUN_KEYOUT_4_SEL (0<<0)
#define IOMUX_PAD_KEYOUT_4_SEL_FUN_GPIO_34_SEL (1<<0)
#define IOMUX_PAD_KEYOUT_4_SEL_FUN_SEGOUT_17_SEL (4<<0)
#define IOMUX_PAD_KEYOUT_4_SEL_FUN_HST_CLK_SEL (5<<0)

//pad_HST_RXD_cfg
#define IOMUX_PAD_HST_RXD_OEN_FRC  (1<<28)
#define IOMUX_PAD_HST_RXD_OUT_FRC  (1<<24)
#define IOMUX_PAD_HST_RXD_OUT_REG  (1<<20)
#define IOMUX_PAD_HST_RXD_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_HST_RXD_OEN_REG  (1<<17)
#define IOMUX_PAD_HST_RXD_PULL_FRC (1<<16)
#define IOMUX_PAD_HST_RXD_PULL_UP  (1<<9)
#define IOMUX_PAD_HST_RXD_PULL_DN  (1<<8)
#define IOMUX_PAD_HST_RXD_ANA(n)   (((n)&15)<<4)
#define IOMUX_PAD_HST_RXD_SEL(n)   (((n)&15)<<0)
#define IOMUX_PAD_HST_RXD_SEL_MASK (15<<0)
#define IOMUX_PAD_HST_RXD_SEL_SHIFT (0)
#define IOMUX_PAD_HST_RXD_SEL_FUN_HST_RXD_SEL (0<<0)
#define IOMUX_PAD_HST_RXD_SEL_FUN_GPIO_35_SEL (1<<0)

//pad_HST_TXD_cfg
#define IOMUX_PAD_HST_TXD_OEN_FRC  (1<<28)
#define IOMUX_PAD_HST_TXD_OUT_FRC  (1<<24)
#define IOMUX_PAD_HST_TXD_OUT_REG  (1<<20)
#define IOMUX_PAD_HST_TXD_DRV_STRENGTH(n) (((n)&3)<<18)
#define IOMUX_PAD_HST_TXD_OEN_REG  (1<<17)
#define IOMUX_PAD_HST_TXD_PULL_FRC (1<<16)
#define IOMUX_PAD_HST_TXD_PULL_UP  (1<<9)
#define IOMUX_PAD_HST_TXD_PULL_DN  (1<<8)
#define IOMUX_PAD_HST_TXD_ANA(n)   (((n)&15)<<4)
#define IOMUX_PAD_HST_TXD_SEL(n)   (((n)&15)<<0)
#define IOMUX_PAD_HST_TXD_SEL_MASK (15<<0)
#define IOMUX_PAD_HST_TXD_SEL_SHIFT (0)
#define IOMUX_PAD_HST_TXD_SEL_FUN_HST_TXD_SEL (0<<0)
#define IOMUX_PAD_HST_TXD_SEL_FUN_GPIO_36_SEL (1<<0)





#endif


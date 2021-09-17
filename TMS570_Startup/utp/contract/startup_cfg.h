/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : startup_cfg.h
* Module Description: This file contains the configuration of the startup sequence
* Product           : Gen II Plus EA3.0
* Author            : Lucas Wendling
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri May 11 12:17:00 2012
 * %version:          4 %
 * %derived_by:       zz4r1x %
 * %date_modified:    Fri Feb 15 16:29:22 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 02/15/13  3        BWL        Renamed and moved to contract folder.
 */

#ifndef STARTUP_CFG_H_
#define STARTUP_CFG_H_

#include "Std_Types.h"

/* Clock Frequency */
#define FREQ_150MHZ				STD_OFF		/* STD_OFF will default to 160MHz */

/* Clock Enables */
#define PLL2ENABLE  				STD_OFF 	/* FLEXRAY PLL */

/* RAM Bank Configuration */
#define ESRAM1ENABLE  				STD_ON

/* Misc Peripherals */
#define DMAMEM_PBIST				STD_OFF
#define DMAMEM_INIT					STD_ON

/* Peripheral Clock Enable */
#define MIBADC_PWRENABLE  			STD_ON
#define GIO_PWRENABLE  				STD_ON
#define N2HET_PWRENABLE  			STD_ON
#define HTU_PWRENABLE  				STD_ON
#define FTU_PWRENABLE  				STD_ON
#define FLEXRAY_PWRENABLE  			STD_ON
#define I2C_PWRENABLE  				STD_ON
#define DCAN1_DCAN2_PWRENABLE  		STD_ON
#define DCAN3_PWRENABLE  			STD_ON
#define LIN_SCI_PWRENABLE  			STD_ON
#define MIBSPI1_PWRENABLE  			STD_ON
#define MIBSPI3_SPI4_PWRENABLE  	STD_ON
#define MIBSPI5_PWRENABLE  			STD_ON

/* Peripheral Memory Clock Enable */
#define MIBSPI1MEM_PWRENABLE  		STD_ON
#define MIBSPI3MEM_PWRENABLE  		STD_ON
#define MIBSPI5MEM_PWRENABLE  		STD_ON
#define DCAN3MEM_PWRENABLE			STD_ON
#define DCAN2MEM_PWRENABLE			STD_ON
#define DCAN1MEM_PWRENABLE			STD_ON
#define MIBADC2MEM_PWRENABLE		STD_ON
#define MIBADC1MEM_PWRENABLE		STD_ON
#define N2HET2MEM_PWRENABLE			STD_ON
#define N2HET1MEM_PWRENABLE			STD_ON
#define N2HET2TUMEM_PWRENABLE		STD_ON
#define N2HET1TUMEM_PWRENABLE		STD_ON
#define FLEXRAYTUMEM_PWRENABLE		STD_ON

/********************** DO NOT MODIFY BELOW THIS LINE ***********************/
#if (STD_ON == MIBADC_PWRENABLE)
	#define  MIBADC_PSPWRDWNCLR1MASK		0xF0000000U
#else
	#define  MIBADC_PSPWRDWNCLR1MASK		0x00000000U
#endif

#if (STD_ON == GIO_PWRENABLE)
	#define  GIO_PSPWRDWNCLR2MASK			0x0000000FU
#else
	#define  GIO_PSPWRDWNCLR2MASK			0x00000000U
#endif

#if (STD_ON == N2HET_PWRENABLE)
	#define  N2HET_PSPWRDWNCLR2MASK			0x000000F0U
#else
	#define  N2HET_PSPWRDWNCLR2MASK			0x00000000U
#endif

#if (STD_ON == HTU_PWRENABLE)
	#define  HTU_PSPWRDWNCLR2MASK			0x0F000000U
#else
	#define  HTU_PSPWRDWNCLR2MASK			0x00000000U
#endif

#if (STD_ON == FTU_PWRENABLE)
	#define  FTU_PSPWRDWNCLR2MASK			0xF0000000U
#else
	#define  FTU_PSPWRDWNCLR2MASK			0x00000000U
#endif

#if (STD_ON == FLEXRAY_PWRENABLE)
	#define  FLEXRAY_PSPWRDWNCLR1MASK		0x00FF0000U
#else
	#define  FLEXRAY_PSPWRDWNCLR1MASK		0x00000000U
#endif

#if (STD_ON == I2C_PWRENABLE)
	#define  I2C_PSPWRDWNCLR1MASK			0x00000F00U
#else
	#define  I2C_PSPWRDWNCLR1MASK			0x00000000U
#endif

#if (STD_ON == DCAN1_DCAN2_PWRENABLE)
	#define  DCAN1_DCAN2_PSPWRDWNCLR1MASK	0x0000000FU
#else
	#define  DCAN1_DCAN2_PSPWRDWNCLR1MASK	0x00000000U
#endif

#if (STD_ON == DCAN3_PWRENABLE)
	#define  DCAN3_PSPWRDWNCLR0MASK			0xF0000000U
#else
	#define  DCAN3_PSPWRDWNCLR0MASK			0x00000000U
#endif

#if (STD_ON == LIN_SCI_PWRENABLE)
	#define  LIN_SCI_PSPWRDWNCLR0MASK		0x0F000000U
#else
	#define  LIN_SCI_PSPWRDWNCLR0MASK		0x00000000U
#endif

#if (STD_ON == MIBSPI1_PWRENABLE)
	#define  MIBSPI1_PSPWRDWNCLR0MASK		0x00000F00U
#else
	#define  MIBSPI1_PSPWRDWNCLR0MASK		0x00000000U
#endif

#if (STD_ON == MIBSPI3_SPI4_PWRENABLE)
	#define  MIBSPI3_SPI4_PSPWRDWNCLR0MASK	0x000000F0U
#else
	#define  MIBSPI3_SPI4_PSPWRDWNCLR0MASK	0x00000000U
#endif

#if (STD_ON == MIBSPI5_PWRENABLE)
	#define  MIBSPI5_PSPWRDWNCLR0MASK		0x0000000FU
#else
	#define  MIBSPI5_PSPWRDWNCLR0MASK		0x00000000U
#endif


#define  D_PCSPWRDWNCLR0VAL_CNT_U32 (((uint32)MIBSPI1MEM_PWRENABLE<<5)|((uint32)MIBSPI3MEM_PWRENABLE<<6)|((uint32)MIBSPI5MEM_PWRENABLE<<7)|((uint32)DCAN3MEM_PWRENABLE<<13)|((uint32)DCAN2MEM_PWRENABLE<<14)|((uint32)DCAN1MEM_PWRENABLE<<15)|((uint32)MIBADC2MEM_PWRENABLE<<29)|((uint32)MIBADC1MEM_PWRENABLE<<31))
#define  D_PCSPWRDWNCLR1VAL_CNT_U32 (((uint32)N2HET2MEM_PWRENABLE<<2)|((uint32)N2HET1MEM_PWRENABLE<<3)|((uint32)N2HET2TUMEM_PWRENABLE<<6)|((uint32)N2HET1TUMEM_PWRENABLE<<7)|((uint32)FLEXRAYTUMEM_PWRENABLE<<8))

#define  D_PSPWRDWNCLR0VAL_CNT_U32 (DCAN3_PSPWRDWNCLR0MASK | LIN_SCI_PSPWRDWNCLR0MASK | MIBSPI1_PSPWRDWNCLR0MASK | MIBSPI3_SPI4_PSPWRDWNCLR0MASK | MIBSPI5_PSPWRDWNCLR0MASK)
#define  D_PSPWRDWNCLR1VAL_CNT_U32 (DCAN1_DCAN2_PSPWRDWNCLR1MASK | I2C_PSPWRDWNCLR1MASK | FLEXRAY_PSPWRDWNCLR1MASK | MIBADC_PSPWRDWNCLR1MASK)
#define  D_PSPWRDWNCLR2VAL_CNT_U32 (FTU_PSPWRDWNCLR2MASK | HTU_PSPWRDWNCLR2MASK | N2HET_PSPWRDWNCLR2MASK | GIO_PSPWRDWNCLR2MASK)
#define  D_PSPWRDWNCLR3VAL_CNT_U32 0U

#if (STD_ON == PLL2ENABLE)
	#define  D_CSDISCLRVAL_CNT_U32		0x00000073U
	#define  D_CSVSTATMASK_CNT_U32		0x00000042U
#else
	#define  D_CSDISCLRVAL_CNT_U32		0x00000033U
	#define  D_CSVSTATMASK_CNT_U32		0x00000002U
#endif

#define  D_PLLCTL2VAL_CNT_U32			0x3FC0723DU

#if (STD_ON == FREQ_150MHZ)
	#define  D_FRDCNTLVAL_CNT_U32		0x00000201U
	#define  D_PLLCTL1VAL_CNT_U32		0x1F066800U
#else
	#define  D_FRDCNTLVAL_CNT_U32		0x00000311U
	#define  D_PLLCTL1VAL_CNT_U32		0x1F055F00U
#endif

#define D_SPRAMGRPSTMS_CNT_U32	(((uint32)FLEXRAY_PWRENABLE<<16)|((uint32)ESRAM1ENABLE<<5))
#define D_DPRAMGRPSTMS_CNT_U32 (((uint32)DCAN1MEM_PWRENABLE<<2)|((uint32)DCAN2MEM_PWRENABLE<<3)|((uint32)DCAN3MEM_PWRENABLE<<4)|((uint32)MIBSPI1MEM_PWRENABLE<<6)|((uint32)MIBSPI3_SPI4_PWRENABLE<<7)|((uint32)MIBSPI5MEM_PWRENABLE<<8)|((uint32)1<<9)|((uint32)MIBADC1MEM_PWRENABLE<<10)|((uint32)DMAMEM_PBIST<<11)|((uint32)N2HET1MEM_PWRENABLE<<12)|((uint32)N2HET1TUMEM_PWRENABLE<<13)|((uint32)FLEXRAYTUMEM_PWRENABLE<<15)|((uint32)MIBADC2MEM_PWRENABLE<<17)|((uint32)N2HET2MEM_PWRENABLE<<18)|((uint32)N2HET2TUMEM_PWRENABLE<<19))

#define D_RAMRESETINITMASKTMS_CNT_U32 (((uint32)DCAN3MEM_PWRENABLE<<10)|((uint32)DCAN2MEM_PWRENABLE<<6)|((uint32)DCAN1MEM_PWRENABLE<<5)|((uint32)MIBADC2MEM_PWRENABLE<<14)|((uint32)MIBADC1MEM_PWRENABLE<<8)|((uint32)N2HET2MEM_PWRENABLE<<15)|((uint32)N2HET1MEM_PWRENABLE<<3)|((uint32)N2HET2TUMEM_PWRENABLE<<16)|((uint32)N2HET1TUMEM_PWRENABLE<<4)|((uint32)DMAMEM_INIT<<1)|((uint32)1<<2))
#define D_RAMPWRONINITMASKTMS_CNT_U32 (D_RAMRESETINITMASKTMS_CNT_U32 | 0x000000001U)


#endif /* STARTUP_CFG_H_ */

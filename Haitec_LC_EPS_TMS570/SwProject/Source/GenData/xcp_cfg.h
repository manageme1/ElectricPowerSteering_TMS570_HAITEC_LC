/* -----------------------------------------------------------------------------
  Filename:    xcp_cfg.h
  Description: Toolversion: 11.08.02.01.30.01.24.00.00.00
               
               Serial Number: CBD1300124
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR_Vector_SLP3
                              Micro: TMS570LS30376USC
                              Compiler: TexasInstruments ccs 4.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: Xcp
               
               Configuration   : C:\SynergyProjects\Haitec_LC_EPS_TMS570-nzx5jd\Haitec_LC_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CAN00":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2015-08-25  11:20:34
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__XCP_CFG_H__)
#define __XCP_CFG_H__

/*  */
#include "v_inc.h"
/*  */
/* General settings */
#define XCP_ENABLE_PARAMETER_CHECK
#define XCP_ENABLE_CALIBRATION
#define XCP_DISABLE_SEND_EVENT
#define XCP_DISABLE_TESTMODE
#define XCP_DISABLE_BOOTLOADER_DOWNLOAD
#define XCP_ENABLE_WRITE_PROTECTION
#define XCP_ENABLE_READ_PROTECTION
#define XCP_DISABLE_CONTROL
#define XCP_DISABLE_GET_XCP_DATA_POINTER
#define XCP_DISABLE_OPENCMDIF
#define XCP_DISABLE_DEV_ERROR_DETECT
#define XCP_ENABLE_MEM_MAPPING
#define XCP_DISABLE_VERSION_INFO_API
#define XCP_DISABLE_ADDRESS_DOUBLING_SUPPORT
#define XCP_DISABLE_USE_BYTE_ACCESS
/*  */
/* EEPROM access */
#define XCP_DISABLE_READ_EEPROM
#define XCP_DISABLE_WRITE_EEPROM
/*  */
/* Service request message */
#define XCP_DISABLE_SERV_TEXT
#define XCP_DISABLE_SERV_TEXT_PUTCHAR
#define XCP_DISABLE_SERV_TEXT_PRINT
/*  */
/* Standard commands */
#define XCP_ENABLE_COMM_MODE_INFO
#define XCP_DISABLE_SEED_KEY
#define XCP_DISABLE_MODIFY_BITS
#define XCP_ENABLE_SHORT_DOWNLOAD
#define XCP_ENABLE_USER_COMMAND
#define XCP_DISABLE_VECTOR_MAPNAMES
#define XCP_DISABLE_TL_COMMAND
/*  */
/* Block transfer */
#define XCP_ENABLE_BLOCK_UPLOAD
#define XCP_ENABLE_BLOCK_DOWNLOAD
#define kXcpBlockDownloadMinSt               40u
/*  */
/* Checksum */
#define XCP_DISABLE_CHECKSUM
/*  */
/* Synchronous Data Acquisition (DAQ) */
#define XCP_ENABLE_DAQ
#define kXcpDaqMemSize                       512u
#define XCP_DISABLE_STIM
#define XCP_DISABLE_UNALIGNED_MEM_ACCESS
#define XCP_ENABLE_SEND_QUEUE
#define XCP_ENABLE_DAQ_PRESCALER
#define XCP_ENABLE_DAQ_OVERRUN_INDICATION
#define XCP_ENABLE_WRITE_DAQ_MULTIPLE
#define XCP_DISABLE_DAQ_HDR_ODT_DAQ
#define XCP_DISABLE_DAQ_RESUME
#define XCP_ENABLE_DAQ_PROCESSOR_INFO
#define XCP_ENABLE_DAQ_RESOLUTION_INFO
#define XCP_DISABLE_VIRTUAL_MEASUREMENT
/*  */
/* Events */
#define XCP_ENABLE_DAQ_EVENT_INFO
#define kXcpMaxEvent                         1u
/*  */
/* DAQ Timestamp */
#define XCP_ENABLE_DAQ_TIMESTAMP
#define XCP_DISABLE_DAQ_TIMESTAMP_FIXED
#define kXcpDaqTimestampSize                 DAQ_TIMESTAMP_WORD
#define kXcpDaqTimestampUnit                 DAQ_TIMESTAMP_UNIT_1US
#define kXcpDaqTimestampTicksPerUnit         1u
/*  */
/* Page switching */
#define XCP_DISABLE_CALIBRATION_PAGE
/*  */
/* Programming */
#define XCP_ENABLE_PROGRAM
#define kXcpProgramMinStPgm                  0u
#define XCP_DISABLE_PROGRAMMING_WRITE_PROTECTION
#define CP_XCPDLL_VERSION                    0x0219
#define CP_XCPDLL_RELEASE_VERSION            0x01
#ifndef XCP_OSTYPE_AUTOSAR
#define XCP_OSTYPE_AUTOSAR
#endif


#ifndef XCP_USE_DUMMY_FUNCTIONS
#define XCP_USE_DUMMY_FUNCTIONS              STD_OFF
#endif


#ifndef XCP_USE_DUMMY_STATEMENT
#define XCP_USE_DUMMY_STATEMENT              STD_ON
#endif


#ifndef XCP_CPU_TMS470
#define XCP_CPU_TMS470
#endif


#ifndef XCP_PROCESSOR_TI_TMS470_LS30316U
#define XCP_PROCESSOR_TI_TMS470_LS30316U
#endif


#ifndef XCP_COMP_TI
#define XCP_COMP_TI
#endif


#ifndef XCP_CRC_CHECK
#define XCP_CRC_CHECK                        STD_OFF
#endif


#ifndef XCP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define XCP_ATOMIC_BIT_ACCESS_IN_BITFIELD    STD_OFF
#endif


#ifndef XCP_ATOMIC_VARIABLE_ACCESS
#define XCP_ATOMIC_VARIABLE_ACCESS           32
#endif


/* -----------------------------------------------------------------------------
    &&&~ Multiple transport layer support
 ----------------------------------------------------------------------------- */

#define kXcpMaxCTOMax                        8u
#define kXcpMaxDTOMax                        8u
/* Multiple transport layer support */
#define NUMBER_OF_TRANSPORTLAYERS            1u
/* CompilerAbstractionEnabled == TRUE */
#define XCP_TRANSPORT_LAYER_CAN              0u


/* -----------------------------------------------------------------------------
    &&&~ FlexRay parameter access
 ----------------------------------------------------------------------------- */

#define XCP_DISABLE_READCCCONFIG
#define XCP_DISABLE_VECTOR_GENERICMEASUREMENT


#define XCP_TRANSPORT_LAYER_TYPE_CAN_ASR

/* -----------------------------------------------------------------------------
    &&&~ 
 ----------------------------------------------------------------------------- */

#define XCP_ENABLE_CALIBRATION_MEM_ACCESS_BY_APPL


#endif /* __XCP_CFG_H__ */

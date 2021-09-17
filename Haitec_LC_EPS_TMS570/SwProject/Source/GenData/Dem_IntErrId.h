/* -----------------------------------------------------------------------------
  Filename:    Dem_IntErrId.h
  Description: Toolversion: 11.08.02.01.30.01.24.00.00.00
               
               Serial Number: CBD1300124
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR_Vector_SLP3
                              Micro: TMS570LS30376USC
                              Compiler: TexasInstruments ccs 4.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: Dem
               
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

  Generated by , 2014-03-07  10:52:22
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

#if !defined(DEM_INTERRID_H)
#define DEM_INTERRID_H

/* -----------------------------------------------------------------------------
    &&&~ 
 ----------------------------------------------------------------------------- */

#define CANTRCV_E_NO_TRCV_CONTROL            15
#define PDUR_E_PDU_INSTANCE_LOST             16
#define PDUR_E_INIT_FAILED                   17
#define CAN_E_TIMEOUT                        18
#define CANIF_E_INVALID_DLC                  19
#define CANSM_E_MODE_CHANGE_NETWORK_0        20
#define CANSM_E_MODE_CHANGE_NETWORK_1        21
#define CANSM_E_BUSOFF_NETWORK_0             22
#define CANSM_E_BUSOFF_NETWORK_1             23
#define CANSM_E_SETTRANSCEIVERMODE_NETWORK_1 24
#define LINSM_E_CONFIRMATION_TIMEOUT         25
#define COMM_E_NET_START_IND_CHANNEL_1       26
#define COMM_E_NET_START_IND_CHANNEL_2       27
#define ECUM_E_ALL_RUN_REQUESTS_KILLED       28
#define ECUM_E_RAM_CHECKED_FAILED            29
#define NVM_E_REQ_FAILED                     30
#define NVM_E_INTEGRITY_FAILED               31
#define FLS_E_ERASE_FAILED                   32
#define FLS_E_WRITE_FAILED                   33
#define FLS_E_READ_FAILED                    34
#define FLS_E_COMPARE_FAILED                 35
#define FRIF_E_JLE_SYNC                      36
#define FRNM_E_INIT_FAILED                   37
#define FRSM_E_CLUSTER_STARTUP               38
#define FRTRCV_E_FR_NO_TRCV_CONTROL          39
#define WDGM_E_SET_MODE                      40
#define WDGM_E_ALIVE_SUPERVISION             41
#define CANIF_E_SLEEP_REQ_FAILED             42
#define CANIF_E_FULL_TX_BUFFER               43
#define CANIF_E_STOPPED                      44
#define CANTP_E_COM                          45 /* Nexteer Manual Edit */


#endif /* DEM_INTERRID_H */

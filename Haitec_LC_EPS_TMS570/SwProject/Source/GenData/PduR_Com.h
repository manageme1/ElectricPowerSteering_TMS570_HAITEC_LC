/* -----------------------------------------------------------------------------
  Filename:    PduR_Com.h
  Description: Toolversion: 11.08.02.01.30.01.24.00.00.00
               
               Serial Number: CBD1300124
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR_Vector_SLP3
                              Micro: TMS570LS30376USC
                              Compiler: TexasInstruments ccs 4.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: PduR
               
               Configuration   : C:\Temp\Haitec_LC_EPS_TMS570\Haitec_LC_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CAN00":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2013-07-19  08:51:13
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

#if !defined(PDUR_COM_H)
#define PDUR_COM_H

/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

#include "PduR.h"


#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* RULE 19.1: The memory abstraction concept uses includes of MemMap.h at any place in the source code. This is required by AUTOSAR. */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ GLOBAL FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */

/**
\brief    The function serves to request the transmission of an IF layer I-PDU.\n
          The PDU Router evaluates the Com I-PDU handle and performs appropriate handle and port conversion.
          The call is routed to a lower IF module using the appropriate I-PDU handle of the destination layer.
\param    ComTxPduId        ID of the Com I-PDU to be transmitted
\param    PduInfoPtr        Payload information of the I-PDU (pointer to data and data length)
\return   Std_ReturnType

          E_OK              The request was accepted by the PDU Router and by the destination layer.\n
          E_NOT_OK          The PDU Router is in the PDUR_UNINIT state\n
                            or the ComTxPduId is not valid\n
                            or the ComTxPduId is not forwarded in this identity\n
                            or the PduInfoPtr is not valid

                            or the request was not accepted by the destination layer.\n
\pre      PduR_Init() is executed sucessfully and the PDU Router is in PDUR_ONLINE state. 
\context  The function can be called on interrupt and task level and has not to be interrupted by other
          PduR_ComTransmit calls for the same ComTxPduId.
\note     The function is called by Com.
*/
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType ComTxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr);


#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* RULE 19.1: The memory abstraction concept uses includes of MemMap.h at any place in the source code. This is required by AUTOSAR. */
#include "MemMap.h"


#endif /* PDUR_COM_H */

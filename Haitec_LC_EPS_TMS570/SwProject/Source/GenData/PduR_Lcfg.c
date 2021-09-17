/* -----------------------------------------------------------------------------
  Filename:    PduR_Lcfg.c
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

/* PRQA        S 3109 EOF *//* RULE 19.4: See justification of RULE 19.4. Due to this ";" cannot be set on a line by himself. */
/* PRQA        S 3453 EOF *//* RULE 19.7: Function like macros are used to increase runtime efficiency and the readability of code. */
/* PRQA        S 2006 EOF *//* RULE 14.7: Functions has more than 1 return path to improve the readability of code. */
/* PRQA        S 0488 EOF *//* RULE 17.4: Performing pointer arithmetic. See ESCAN00049809. */
#define PDUR_LCFG_SOURCE
/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

#include "PduR.h"
#include "PduR_CanIf.h"
#include "CanIf.h"
#include "PduR_CanTp.h"
#include "CanTp.h"
#include "PduR_Com.h"
#include "Com_Cbk.h"
#include "PduR_Dcm.h"
#include "Dcm_Cbk.h"


/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA PROTOTYPES
 ----------------------------------------------------------------------------- */

#define PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define PDUR_START_SEC_VAR_NOINIT_BOOLEAN
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define PDUR_STOP_SEC_VAR_NOINIT_BOOLEAN
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define PDUR_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define PDUR_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define PDUR_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define PDUR_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* RULE 19.1: The memory abstraction concept uses includes of MemMap.h at any place in the source code. This is required by AUTOSAR. */
#include "MemMap.h"

CONST(PduR_Core_TransmitFctPtrType, PDUR_PBCFG) PduR_Core_TransmitFctPtrTbl[21] = 
{
  NULL_PTR /* ApplIf */, 
  NULL_PTR /* ApplTp */, 
  CanIf_Transmit /* CanIf */, 
  NULL_PTR /* CanNm */, 
  CanTp_Transmit /* CanTp */, 
  NULL_PTR /* Com */, 
  NULL_PTR /* Dcm */, 
  NULL_PTR /* FrIf */, 
  NULL_PTR /* FrNm */, 
  NULL_PTR /* FrTp */, 
  NULL_PTR /* Gw */, 
  NULL_PTR /* Invalid */, 
  NULL_PTR /* IpduM */, 
  NULL_PTR /* J1939Tp */, 
  NULL_PTR /* LinIf */, 
  NULL_PTR /* LinTp */, 
  NULL_PTR /* MostIf */, 
  NULL_PTR /* MostTp */, 
  NULL_PTR /* Multi */, 
  NULL_PTR /* NmOsek */, 
  NULL_PTR /* SoAd */
};
CONST(PduR_UpIfTriggerTransmitFctPtrType, PDUR_PBCFG) PduR_Core_UpIfTriggerTransmit[21] = 
{
  NULL_PTR /* ApplIf */, 
  NULL_PTR /* ApplTp */, 
  NULL_PTR /* CanIf */, 
  NULL_PTR /* CanNm */, 
  NULL_PTR /* CanTp */, 
  NULL_PTR /* Com */, 
  NULL_PTR /* Dcm */, 
  NULL_PTR /* FrIf */, 
  NULL_PTR /* FrNm */, 
  NULL_PTR /* FrTp */, 
  NULL_PTR /* Gw */, 
  NULL_PTR /* Invalid */, 
  NULL_PTR /* IpduM */, 
  NULL_PTR /* J1939Tp */, 
  NULL_PTR /* LinIf */, 
  NULL_PTR /* LinTp */, 
  NULL_PTR /* MostIf */, 
  NULL_PTR /* MostTp */, 
  NULL_PTR /* Multi */, 
  NULL_PTR /* NmOsek */, 
  NULL_PTR /* SoAd */
};
CONST(PduR_UpIfTxConfirmationFctPtrType, PDUR_PBCFG) PduR_Core_UpIfTxConfirmation[21] = 
{
  NULL_PTR /* ApplIf */, 
  NULL_PTR /* ApplTp */, 
  NULL_PTR /* CanIf */, 
  NULL_PTR /* CanNm */, 
  NULL_PTR /* CanTp */, 
  Com_TxConfirmation /* Com */, 
  NULL_PTR /* Dcm */, 
  NULL_PTR /* FrIf */, 
  NULL_PTR /* FrNm */, 
  NULL_PTR /* FrTp */, 
  NULL_PTR /* Gw */, 
  NULL_PTR /* Invalid */, 
  NULL_PTR /* IpduM */, 
  NULL_PTR /* J1939Tp */, 
  NULL_PTR /* LinIf */, 
  NULL_PTR /* LinTp */, 
  NULL_PTR /* MostIf */, 
  NULL_PTR /* MostTp */, 
  NULL_PTR /* Multi */, 
  NULL_PTR /* NmOsek */, 
  NULL_PTR /* SoAd */
};
CONST(PduR_UpIfRxIndicationFctPtrType, PDUR_PBCFG) PduR_Core_UpIfRxIndication[21] = 
{
  NULL_PTR /* ApplIf */, 
  NULL_PTR /* ApplTp */, 
  NULL_PTR /* CanIf */, 
  NULL_PTR /* CanNm */, 
  NULL_PTR /* CanTp */, 
  Com_RxIndication /* Com */, 
  NULL_PTR /* Dcm */, 
  NULL_PTR /* FrIf */, 
  NULL_PTR /* FrNm */, 
  NULL_PTR /* FrTp */, 
  NULL_PTR /* Gw */, 
  NULL_PTR /* Invalid */, 
  NULL_PTR /* IpduM */, 
  NULL_PTR /* J1939Tp */, 
  NULL_PTR /* LinIf */, 
  NULL_PTR /* LinTp */, 
  NULL_PTR /* MostIf */, 
  NULL_PTR /* MostTp */, 
  NULL_PTR /* Multi */, 
  NULL_PTR /* NmOsek */, 
  NULL_PTR /* SoAd */
};
CONST(PduR_UpTpProvideTxBufferFctPtrType, PDUR_PBCFG) PduR_Core_UpTpProvideTxBuffer[21] = 
{
  NULL_PTR /* ApplIf */, 
  NULL_PTR /* ApplTp */, 
  NULL_PTR /* CanIf */, 
  NULL_PTR /* CanNm */, 
  NULL_PTR /* CanTp */, 
  NULL_PTR /* Com */, 
  Dcm_ProvideTxBuffer /* Dcm */, 
  NULL_PTR /* FrIf */, 
  NULL_PTR /* FrNm */, 
  NULL_PTR /* FrTp */, 
  NULL_PTR /* Gw */, 
  NULL_PTR /* Invalid */, 
  NULL_PTR /* IpduM */, 
  NULL_PTR /* J1939Tp */, 
  NULL_PTR /* LinIf */, 
  NULL_PTR /* LinTp */, 
  NULL_PTR /* MostIf */, 
  NULL_PTR /* MostTp */, 
  NULL_PTR /* Multi */, 
  NULL_PTR /* NmOsek */, 
  NULL_PTR /* SoAd */
};
CONST(PduR_UpTpTxConfirmationFctPtrType, PDUR_PBCFG) PduR_Core_UpTpTxConfirmation[21] = 
{
  NULL_PTR /* ApplIf */, 
  NULL_PTR /* ApplTp */, 
  NULL_PTR /* CanIf */, 
  NULL_PTR /* CanNm */, 
  NULL_PTR /* CanTp */, 
  NULL_PTR /* Com */, 
  Dcm_TpTxConfirmation /* Dcm */, 
  NULL_PTR /* FrIf */, 
  NULL_PTR /* FrNm */, 
  NULL_PTR /* FrTp */, 
  NULL_PTR /* Gw */, 
  NULL_PTR /* Invalid */, 
  NULL_PTR /* IpduM */, 
  NULL_PTR /* J1939Tp */, 
  NULL_PTR /* LinIf */, 
  NULL_PTR /* LinTp */, 
  NULL_PTR /* MostIf */, 
  NULL_PTR /* MostTp */, 
  NULL_PTR /* Multi */, 
  NULL_PTR /* NmOsek */, 
  NULL_PTR /* SoAd */
};
CONST(PduR_UpTpProvideRxBufferFctPtrType, PDUR_PBCFG) PduR_Core_UpTpProvideRxBuffer[21] = 
{
  NULL_PTR /* ApplIf */, 
  NULL_PTR /* ApplTp */, 
  NULL_PTR /* CanIf */, 
  NULL_PTR /* CanNm */, 
  NULL_PTR /* CanTp */, 
  NULL_PTR /* Com */, 
  Dcm_ProvideRxBuffer /* Dcm */, 
  NULL_PTR /* FrIf */, 
  NULL_PTR /* FrNm */, 
  NULL_PTR /* FrTp */, 
  NULL_PTR /* Gw */, 
  NULL_PTR /* Invalid */, 
  NULL_PTR /* IpduM */, 
  NULL_PTR /* J1939Tp */, 
  NULL_PTR /* LinIf */, 
  NULL_PTR /* LinTp */, 
  NULL_PTR /* MostIf */, 
  NULL_PTR /* MostTp */, 
  NULL_PTR /* Multi */, 
  NULL_PTR /* NmOsek */, 
  NULL_PTR /* SoAd */
};
CONST(PduR_UpTpRxIndicationFctPtrType, PDUR_PBCFG) PduR_Core_UpTpRxIndication[21] = 
{
  NULL_PTR /* ApplIf */, 
  NULL_PTR /* ApplTp */, 
  NULL_PTR /* CanIf */, 
  NULL_PTR /* CanNm */, 
  NULL_PTR /* CanTp */, 
  NULL_PTR /* Com */, 
  Dcm_TpRxIndication /* Dcm */, 
  NULL_PTR /* FrIf */, 
  NULL_PTR /* FrNm */, 
  NULL_PTR /* FrTp */, 
  NULL_PTR /* Gw */, 
  NULL_PTR /* Invalid */, 
  NULL_PTR /* IpduM */, 
  NULL_PTR /* J1939Tp */, 
  NULL_PTR /* LinIf */, 
  NULL_PTR /* LinTp */, 
  NULL_PTR /* MostIf */, 
  NULL_PTR /* MostTp */, 
  NULL_PTR /* Multi */, 
  NULL_PTR /* NmOsek */, 
  NULL_PTR /* SoAd */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* RULE 19.1: The memory abstraction concept uses includes of MemMap.h at any place in the source code. This is required by AUTOSAR. */
#include "MemMap.h"

#define PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* RULE 19.1: The memory abstraction concept uses includes of MemMap.h at any place in the source code. This is required by AUTOSAR. */
#include "MemMap.h"

#define PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* RULE 19.1: The memory abstraction concept uses includes of MemMap.h at any place in the source code. This is required by AUTOSAR. */
#include "MemMap.h"

#define PDUR_START_SEC_CONST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define PDUR_STOP_SEC_CONST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define PDUR_START_SEC_CONST_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(uint16, PDUR_CONST) pdur_NumberOfRoutingGroupDestPdus = 1;
#define PDUR_STOP_SEC_CONST_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define PDUR_START_SEC_CONST_32BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define PDUR_STOP_SEC_CONST_32BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"




/* -----------------------------------------------------------------------------
    &&&~ GLOBAL FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */

#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - Gw_AsrPduRLinktimeCRC */
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType ComTxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr)
{
  PduR_Core_DestITypePtr pDI;
  PduR_Det_AssertReturnFuncValue(PduR_Core_GetState() == PDUR_ONLINE, PDUR_FCT_COMTX, PDUR_E_INVALID_REQUEST, E_NOT_OK);
  PduR_Det_AssertReturnFuncValue(PduInfoPtr != NULL_PTR, PDUR_FCT_COMTX, PDUR_E_DATA_PTR_INVALID, E_NOT_OK);
  PduR_Det_AssertReturnFuncValue(ComTxPduId < PduR_GetCfgElement(TxCom2LoCnt), PDUR_FCT_COMTX, PDUR_E_PDU_ID_INVALID, E_NOT_OK);
  pDI = &PduR_GetCfgElement(TxCom2Lo)[ComTxPduId];
  {
    {
  #if (PDUR_MULTIPLE_CONFIGURATION == STD_ON)
      if (pDI->destPort == PDUR_PORT_INVALID)
      {
        return E_OK;
      }
  #else
      PduR_Det_AssertReturnFuncValue(pDI->destPort != PDUR_PORT_INVALID, PDUR_FCT_COMTX, PDUR_E_PDU_ID_INVALID, E_NOT_OK);
  #endif
      {
        {
          PduR_Core_TransmitFctPtrType pDestFunc = PduR_Core_TransmitFctPtrTbl[pDI->destPort];
          if (pDestFunc != NULL_PTR)
          {
            return pDestFunc(pDI->destPduId, PduInfoPtr);
          }
  #if (PDUR_DEV_ERROR_DETECT == STD_ON)
          else
          {
            PduR_Det_ReportError(PDUR_FCT_COMTX, PDUR_E_PDU_ID_INVALID);
          }
  #endif
        }
      }
    }
  }
  return E_NOT_OK;
}


FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType DcmTxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr)
{
  PduR_Core_DestITypePtr pDI;
  PduR_Det_AssertReturnFuncValue(PduR_Core_GetState() == PDUR_ONLINE, PDUR_FCT_DCMTX, PDUR_E_INVALID_REQUEST, E_NOT_OK);
  PduR_Det_AssertReturnFuncValue(PduInfoPtr != NULL_PTR, PDUR_FCT_DCMTX, PDUR_E_DATA_PTR_INVALID, E_NOT_OK);
  PduR_Det_AssertReturnFuncValue(DcmTxPduId < PduR_GetCfgElement(TxDcm2LoCnt), PDUR_FCT_DCMTX, PDUR_E_PDU_ID_INVALID, E_NOT_OK);
  pDI = &PduR_GetCfgElement(TxDcm2Lo)[DcmTxPduId];
  {
    {
  #if (PDUR_MULTIPLE_CONFIGURATION == STD_ON)
      if (pDI->destPort == PDUR_PORT_INVALID)
      {
        return E_OK;
      }
  #else
      PduR_Det_AssertReturnFuncValue(pDI->destPort != PDUR_PORT_INVALID, PDUR_FCT_DCMTX, PDUR_E_PDU_ID_INVALID, E_NOT_OK);
  #endif
      {
        {
          PduR_Core_TransmitFctPtrType pDestFunc = PduR_Core_TransmitFctPtrTbl[pDI->destPort];
          if (pDestFunc != NULL_PTR)
          {
            return pDestFunc(pDI->destPduId, PduInfoPtr);
          }
  #if (PDUR_DEV_ERROR_DETECT == STD_ON)
          else
          {
            PduR_Det_ReportError(PDUR_FCT_DCMTX, PDUR_E_PDU_ID_INVALID);
          }
  #endif
        }
      }
    }
  }
  return E_NOT_OK;
}


/* END of Checksum include for
  - Gw_AsrPduRLinktimeCRC */

#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"






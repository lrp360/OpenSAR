/*
* Configuration of module: Com
*
* Created by:   parai          
* Copyright:    (C)parai@foxmail.com  
*
* Configured for (MCU):    MinGW ...
*
* Module vendor:           ArcCore
* Generator version:       2.0.34
*
* Generated by easySAR Studio (https://github.com/parai/OpenSAR)
*/

#include "Com.h"
#include "Com_Internal.h"
#if defined(USE_PDUR)
#include "PduR.h"
#endif 

//Signal init values.
/* TODO */static uint8 SystemTime_ShadowBuffer[8];
/* TODO */static const uint8 SystemTime_ShadowBufferMask[8]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
static const uint16 year_InitValue = 2013;
static const uint8 month_InitValue = 12;
static const uint8 day_InitValue = 15;
static const uint8 hour_InitValue = 19;
static const uint8 minute_InitValue = 49;
static const uint8 second_InitValue = 0;
static const uint16 VehicleSpeed_InitValue = 0;
static const uint16 TachoSpeed_InitValue = 0;
static const uint8 Led1Sts_InitValue = 0;
static const uint8 Led2Sts_InitValue = 0;
static const uint8 Led3Sts_InitValue = 0;

static const ComGroupSignal_type ComGroupSignal[] = {
    
    {
        .ComBitPosition= 0,
        .ComBitSize= 16,
        .ComHandleId= COM_ID_TxMsgTime,
        .ComSignalEndianess= COM_LITTLE_ENDIAN,
        .ComSignalInitValue= &year_InitValue,
        .ComSignalType= UINT16,
        .Com_Arc_EOL= FALSE
    },
    
    {
        .ComBitPosition= 16,
        .ComBitSize= 8,
        .ComHandleId= COM_ID_TxMsgTime,
        .ComSignalEndianess= COM_LITTLE_ENDIAN,
        .ComSignalInitValue= &month_InitValue,
        .ComSignalType= UINT8,
        .Com_Arc_EOL= FALSE
    },
    
    {
        .ComBitPosition= 24,
        .ComBitSize= 8,
        .ComHandleId= COM_ID_TxMsgTime,
        .ComSignalEndianess= COM_LITTLE_ENDIAN,
        .ComSignalInitValue= &day_InitValue,
        .ComSignalType= UINT8,
        .Com_Arc_EOL= FALSE
    },
    
    {
        .ComBitPosition= 32,
        .ComBitSize= 8,
        .ComHandleId= COM_ID_TxMsgTime,
        .ComSignalEndianess= COM_LITTLE_ENDIAN,
        .ComSignalInitValue= &hour_InitValue,
        .ComSignalType= UINT8,
        .Com_Arc_EOL= FALSE
    },
    
    {
        .ComBitPosition= 40,
        .ComBitSize= 8,
        .ComHandleId= COM_ID_TxMsgTime,
        .ComSignalEndianess= COM_LITTLE_ENDIAN,
        .ComSignalInitValue= &minute_InitValue,
        .ComSignalType= UINT8,
        .Com_Arc_EOL= FALSE
    },
    
    {
        .ComBitPosition= 48,
        .ComBitSize= 8,
        .ComHandleId= COM_ID_TxMsgTime,
        .ComSignalEndianess= COM_LITTLE_ENDIAN,
        .ComSignalInitValue= &second_InitValue,
        .ComSignalType= UINT8,
        .Com_Arc_EOL= FALSE
    },

};
//SignalGroup GroupSignals lists.
static const ComGroupSignal_type * const SystemTime_GrpSignalRefs[] =
{
	&ComGroupSignal[ COM_GSID_year ],
	&ComGroupSignal[ COM_GSID_month ],
	&ComGroupSignal[ COM_GSID_day ],
	&ComGroupSignal[ COM_GSID_hour ],
	&ComGroupSignal[ COM_GSID_minute ],
	&ComGroupSignal[ COM_GSID_second ],
	NULL
};


//IPdu buffers and signal group buffers
static uint8 TxMsgTime_IPduBuffer[8];
static uint8 RxMsgAbsInfo_IPduBuffer[8];
static uint8 RxMsgAbsInfo_IPduDefferredBuffer[8];

//Signal definitions
static const ComSignal_type ComSignal[] = {

    {
        #if defined(__GTK__)
        .name = "SystemTime",
        #endif
        .ComBitPosition =  0,
        .ComBitSize =  64,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  0xDB,
        .ComHandleId =  COM_SID_SystemTime,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  COM_LITTLE_ENDIAN, 
        .ComSignalInitValue =  NULL,
        .ComSignalType =  UINT8, // For group signal, this means nothing
        .ComTimeoutFactor =  0xDB,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    
        .ComUpdateBitPosition =  0,         
        .ComSignalArcUseUpdateBit =  TRUE, 
        .Com_Arc_IsSignalGroup =  TRUE,
        .ComGroupSignal =  SystemTime_GrpSignalRefs,
        .Com_Arc_ShadowBuffer =  SystemTime_ShadowBuffer,
        .Com_Arc_ShadowBuffer_Mask =  SystemTime_ShadowBufferMask,
        .ComIPduHandleId = COM_ID_TxMsgTime,
        .Com_Arc_EOL =  FALSE
    },

    {
        #if defined(__GTK__)
        .name = "VehicleSpeed",
        #endif
        .ComBitPosition =  0,
        .ComBitSize =  16,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  100,
        .ComHandleId =  COM_SID_VehicleSpeed,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  COM_LITTLE_ENDIAN, 
        .ComSignalInitValue =  &VehicleSpeed_InitValue,
        .ComSignalType =  UINT16,
        .ComTimeoutFactor =  100,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    
        .ComUpdateBitPosition =  0xDB,         
        .ComSignalArcUseUpdateBit =  FALSE, 
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_ID_RxMsgAbsInfo,
        .Com_Arc_EOL =  FALSE
    },

    {
        #if defined(__GTK__)
        .name = "TachoSpeed",
        #endif
        .ComBitPosition =  16,
        .ComBitSize =  16,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  100,
        .ComHandleId =  COM_SID_TachoSpeed,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  COM_LITTLE_ENDIAN, 
        .ComSignalInitValue =  &TachoSpeed_InitValue,
        .ComSignalType =  UINT16,
        .ComTimeoutFactor =  100,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    
        .ComUpdateBitPosition =  0xDB,         
        .ComSignalArcUseUpdateBit =  FALSE, 
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_ID_RxMsgAbsInfo,
        .Com_Arc_EOL =  FALSE
    },

    {
        #if defined(__GTK__)
        .name = "Led1Sts",
        #endif
        .ComBitPosition =  32,
        .ComBitSize =  2,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  500,
        .ComHandleId =  COM_SID_Led1Sts,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  COM_LITTLE_ENDIAN, 
        .ComSignalInitValue =  &Led1Sts_InitValue,
        .ComSignalType =  UINT8,
        .ComTimeoutFactor =  500,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    
        .ComUpdateBitPosition =  0xDB,         
        .ComSignalArcUseUpdateBit =  FALSE, 
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_ID_RxMsgAbsInfo,
        .Com_Arc_EOL =  FALSE
    },

    {
        #if defined(__GTK__)
        .name = "Led2Sts",
        #endif
        .ComBitPosition =  34,
        .ComBitSize =  2,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  500,
        .ComHandleId =  COM_SID_Led2Sts,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  COM_LITTLE_ENDIAN, 
        .ComSignalInitValue =  &Led2Sts_InitValue,
        .ComSignalType =  UINT8,
        .ComTimeoutFactor =  500,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    
        .ComUpdateBitPosition =  0xDB,         
        .ComSignalArcUseUpdateBit =  FALSE, 
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_ID_RxMsgAbsInfo,
        .Com_Arc_EOL =  FALSE
    },

    {
        #if defined(__GTK__)
        .name = "Led3Sts",
        #endif
        .ComBitPosition =  36,
        .ComBitSize =  2,
        .ComErrorNotification =  NULL,
        .ComFirstTimeoutFactor =  500,
        .ComHandleId =  COM_SID_Led3Sts,
        .ComNotification =  NULL,
        .ComRxDataTimeoutAction =  COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSignalEndianess =  COM_LITTLE_ENDIAN, 
        .ComSignalInitValue =  &Led3Sts_InitValue,
        .ComSignalType =  UINT8,
        .ComTimeoutFactor =  500,
        .ComTimeoutNotification =  NULL,
        .ComTransferProperty =  PENDING,    
        .ComUpdateBitPosition =  0xDB,         
        .ComSignalArcUseUpdateBit =  FALSE, 
        .Com_Arc_IsSignalGroup =  FALSE,
        .ComGroupSignal =  NULL,
        .Com_Arc_ShadowBuffer =  NULL,
        .Com_Arc_ShadowBuffer_Mask =  NULL,
        .ComIPduHandleId = COM_ID_RxMsgAbsInfo,
        .Com_Arc_EOL =  FALSE
    },

    {
         .Com_Arc_EOL =  True,
    }
};

    
//I-PDU group definitions
static const ComIPduGroup_type ComIPduGroup[] = {

    {
        .ComIPduGroupHandleId =  COM_IPDU_GROUP_PduGroup1, 
        .Com_Arc_EOL =  FALSE
    },

};


//IPdu signal lists.
static const ComSignal_type * const TxMsgTime_SignalRefs[] = {
	&ComSignal[ COM_SID_SystemTime ],
	NULL
};
static const ComSignal_type * const RxMsgAbsInfo_SignalRefs[] = {
	&ComSignal[ COM_SID_VehicleSpeed ],
	&ComSignal[ COM_SID_TachoSpeed ],
	&ComSignal[ COM_SID_Led1Sts ],
	&ComSignal[ COM_SID_Led2Sts ],
	&ComSignal[ COM_SID_Led3Sts ],
	NULL
};
    
    
//I-PDU definitions
static const ComIPdu_type ComIPdu[] = {

    {
        #if defined(__GTK__)
        .name = "MsgTime",
        #endif
        .ComIPduCallout =  NULL,
        .ArcIPduOutgoingId =  PDUR_ID_TxMsgTime,
        .ComIPduSignalProcessing =  DEFERRED,
        .ComIPduSize =  8,
        .ComIPduDirection =  SEND,
        .ComIPduGroupRef =  COM_IPDU_GROUP_PduGroup1,
        .ComTxIPdu ={
            .ComTxIPduMinimumDelayFactor =  1,
            .ComTxIPduUnusedAreasDefault =  0x5A,
            .ComTxModeTrue ={
                .ComTxModeMode =   PERIODIC,
                .ComTxModeNumberOfRepetitions =   0,
                .ComTxModeRepetitionPeriodFactor =   10,
                .ComTxModeTimeOffsetFactor =   0,
                .ComTxModeTimePeriodFactor =   100,
            },
        },
        .ComIPduDataPtr =  TxMsgTime_IPduBuffer,
        .ComIPduDeferredDataPtr =  NULL,
        .ComIPduSignalRef =  TxMsgTime_SignalRefs,
        .ComIPduDynSignalRef =  NULL,
        .Com_Arc_EOL =  FALSE,
    },

    {
        #if defined(__GTK__)
        .name = "AbsInfo",
        #endif
        .ComIPduCallout =  NULL,
        .ArcIPduOutgoingId =  PDUR_ID_RxMsgAbsInfo,
        .ComIPduSignalProcessing =  DEFERRED,
        .ComIPduSize =  8,
        .ComIPduDirection =  RECEIVE,
        .ComIPduGroupRef =  COM_IPDU_GROUP_PduGroup1,
        .ComTxIPdu ={
            .ComTxIPduMinimumDelayFactor =  1,
            .ComTxIPduUnusedAreasDefault =  0x5A,
            .ComTxModeTrue ={
                .ComTxModeMode =   PERIODIC,
                .ComTxModeNumberOfRepetitions =   0,
                .ComTxModeRepetitionPeriodFactor =   10,
                .ComTxModeTimeOffsetFactor =   0,
                .ComTxModeTimePeriodFactor =   10,
            },
        },
        .ComIPduDataPtr =  RxMsgAbsInfo_IPduBuffer,
        .ComIPduDeferredDataPtr =  RxMsgAbsInfo_IPduDefferredBuffer,
        .ComIPduSignalRef =  RxMsgAbsInfo_SignalRefs,
        .ComIPduDynSignalRef =  NULL,
        .Com_Arc_EOL =  FALSE,
    },

    {
        .Com_Arc_EOL =  TRUE
    }
};

const Com_ConfigType ComConfiguration = {
    .ComConfigurationId =  1,
    .ComIPdu =  ComIPdu,
    .ComIPduGroup =  ComIPduGroup,
    .ComSignal =  ComSignal,
#if(COM_N_GROUP_SIGNALS > 0)
    .ComGroupSignal =  ComGroupSignal
#else
    .ComGroupSignal =  NULL
#endif
};

static Com_Arc_IPdu_type Com_Arc_IPdu[] = {

    { // TxMsgTime
        .Com_Arc_TxIPduTimers ={
            .ComTxIPduNumberOfRepetitionsLeft =  0,
            .ComTxModeRepetitionPeriodTimer =  0,
            .ComTxIPduMinimumDelayTimer =  0,
            .ComTxModeTimePeriodTimer =  0
        },
        .Com_Arc_IpduStarted =  0
    },

    { // RxMsgAbsInfo
        .Com_Arc_TxIPduTimers ={
            .ComTxIPduNumberOfRepetitionsLeft =  0,
            .ComTxModeRepetitionPeriodTimer =  0,
            .ComTxIPduMinimumDelayTimer =  0,
            .ComTxModeTimePeriodTimer =  0
        },
        .Com_Arc_IpduStarted =  0
    },
};

Com_Arc_Signal_type Com_Arc_Signal[] = {

    { // Led3Sts
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // VehicleSpeed
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // TachoSpeed
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // Led1Sts
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // Led2Sts
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },

    { // Led3Sts
        .Com_Arc_DeadlineCounter =  0,
        .ComSignalUpdated =  0,
    },
};

   
#if(COM_N_GROUP_SIGNALS > 0)
static Com_Arc_GroupSignal_type Com_Arc_GroupSignal[COM_N_GROUP_SIGNALS];
#endif

const Com_Arc_Config_type Com_Arc_Config = {
    .ComIPdu =  Com_Arc_IPdu,
    .ComSignal =  Com_Arc_Signal,
#if(COM_N_GROUP_SIGNALS > 0)
    .ComGroupSignal =  Com_Arc_GroupSignal
#else
    .ComGroupSignal =  NULL
#endif
};    
    
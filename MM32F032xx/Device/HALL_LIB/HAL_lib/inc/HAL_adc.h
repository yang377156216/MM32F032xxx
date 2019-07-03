/**
******************************************************************************
* @file  HAL_adc.h
* @author   FAE team
* @version  V1.0.0
* @date     2019.7.1
* @brief    This file contains all the functions prototypes for the ADC firmware
*           library.
******************************************************************************
* @copy
*
* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
* TIME. AS A RESULT, MindMotion SHALL NOT BE HELD LIABLE FOR ANY
* DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
* FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
* CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*
* <h2><center>&copy; COPYRIGHT 2019 MindMotion</center></h2>
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HAL_ADC_H
#define __HAL_ADC_H

/* Includes ------------------------------------------------------------------*/
#include "HAL_device.h"

/** @addtogroup StdPeriph_Driver
 * @{
 */

/** @addtogroup ADC
 * @{
 */

/** @defgroup ADC_Exported_Types
 * @{
 */

/**
 * @brief  ADC Init structure definition
 */

typedef struct {
    uint32_t ADC_Resolution;
    uint32_t ADC_PRESCARE;
    uint32_t ADC_Mode;
//    FunctionalState ADC_ContinuousConvMode;
    uint32_t ADC_TRGEN;
    uint32_t ADC_ExternalTrigConv;
    uint32_t ADC_DataAlign;
} ADC_InitTypeDef;
/**
 * @}
 */

/** @defgroup ADC_Exported_Constants
 * @{
 */

#define IS_ADC_ALL_PERIPH(PERIPH) (((*(uint32_t*)&(PERIPH)) == ADC1_BASE))

#define IS_ADC_DMA_PERIPH(PERIPH) (((*(uint32_t*)&(PERIPH)) == ADC1_BASE))

/** @defgroup ADC_Resolution
 * @{
 */
#define ADC_Resolution_12b ((uint32_t)0x00000000)
#define ADC_Resolution_11b ((uint32_t)0x00000080)
#define ADC_Resolution_10b ((uint32_t)0x00000100)
#define ADC_Resolution_9b  ((uint32_t)0x00000180)
#define ADC_Resolution_8b  ((uint32_t)0x00000200)

#define IS_ADC_RESOLUTION(RESOLUTION)                                                         \
    (((RESOLUTION) == ADC_Resolution_12b) || ((RESOLUTION) == ADC_Resolution_11b) ||          \
		((RESOLUTION) == ADC_Resolution_10b) || ((RESOLUTION) == ADC_Resolution_9b) ||            \
    ((RESOLUTION) == ADC_Resolution_8b)

/**
 * @brief  for ADC1
 */
#define ADC_PCLK2_PRESCARE_2  ((uint32_t)0x00000000)
#define ADC_PCLK2_PRESCARE_3  ((uint32_t)0x00004000)
#define ADC_PCLK2_PRESCARE_4  ((uint32_t)0x00000010)
#define ADC_PCLK2_PRESCARE_5  ((uint32_t)0x00004010)
#define ADC_PCLK2_PRESCARE_6  ((uint32_t)0x00000020)
#define ADC_PCLK2_PRESCARE_7  ((uint32_t)0x00004020)
#define ADC_PCLK2_PRESCARE_8  ((uint32_t)0x00000030)
#define ADC_PCLK2_PRESCARE_9  ((uint32_t)0x00004030)
#define ADC_PCLK2_PRESCARE_10 ((uint32_t)0x00000080)
#define ADC_PCLK2_PRESCARE_11 ((uint32_t)0x00004040)
#define ADC_PCLK2_PRESCARE_12 ((uint32_t)0x00000050)
#define ADC_PCLK2_PRESCARE_13 ((uint32_t)0x00004050)
#define ADC_PCLK2_PRESCARE_14 ((uint32_t)0x00000060)
#define ADC_PCLK2_PRESCARE_15 ((uint32_t)0x00004060)
#define ADC_PCLK2_PRESCARE_16 ((uint32_t)0x00000070)
#define ADC_PCLK2_PRESCARE_17 ((uint32_t)0x00004070)

/** @defgroup ADC_mode
 * @{
 */
#define ADC_Mode_Single          ((uint32_t)0x00000000)
#define ADC_Mode_Single_Period   ((uint32_t)0x00000200)
#define ADC_Mode_Continuous_Scan ((uint32_t)0x00000400)

#define IS_ADC_MODE(MODE)                                                                                                        \
    (((MODE) == ADC_Mode_Single) || ((MODE) == ADC_Mode_Single_Period) || ((MODE) == ADC_Mode_Continuous_Scan))
/**
 * @}
 */
 
/** @defgroup ADC_extrenal_trigger_sources_for_regular_channels_conversion
 * @{
 */
#define ADC_TRG_Disable ((uint32_t)0xfffffffB)
#define ADC_TRG_Enable  ((uint32_t)0x00000004)

/**
 * @brief  for ADC1
 */
#define ADC_ExternalTrigConv_T1_CC1     ((uint32_t)0x00000000)
#define ADC_ExternalTrigConv_T1_CC2     ((uint32_t)0x00000010)
#define ADC_ExternalTrigConv_T1_CC3     ((uint32_t)0x00000020)
#define ADC_ExternalTrigConv_T2_CC2     ((uint32_t)0x00000030)
#define ADC_ExternalTrigConv_T3_TRGO    ((uint32_t)0x00000040)
#define ADC_ExternalTrigConv_T1_CC4_CC5 ((uint32_t)0x00000050)
#define ADC_ExternalTrigConv_T3_CC1 	  ((uint32_t)0x00000060)
#define ADC_ExternalTrigConv_EXTI_11		((uint32_t)0x00000070)
#define ADC_ExternalTrigConv_T1_TRGO 		((uint32_t)0x00020000)
#define ADC_ExternalTrigConv_T2_CC1 		((uint32_t)0x00020030)
#define ADC_ExternalTrigConv_T3_CC4 		((uint32_t)0x00020040)
#define ADC_ExternalTrigConv_T2_TRGO  	((uint32_t)0x00020050)
#define ADC_ExternalTrigConv_EXTI_15    ((uint32_t)0x00020070)
#define ADC_ExternalTrigConv_T1_CC4     ((uint32_t)0x00040000)
#define ADC_ExternalTrigConv_T1_CC5     ((uint32_t)0x00040010)

#define IS_ADC_EXT_TRIG(REGTRIG)                                                                                                 \
    (((REGTRIG) == ADC_ExternalTrigConv_T1_CC1) || ((REGTRIG) == ADC_ExternalTrigConv_T1_CC2) ||                                 \
     ((REGTRIG) == ADC_ExternalTrigConv_T1_CC3) || ((REGTRIG) == ADC_ExternalTrigConv_T2_CC2) ||                                 \
     ((REGTRIG) == ADC_ExternalTrigConv_T3_TRGO)|| ((REGTRIG) == ADC_ExternalTrigConv_T1_CC4_CC5) ||                            \
     ((REGTRIG) == ADC_ExternalTrigConv_T3_CC1) || ((REGTRIG) == ADC_ExternalTrigConv_EXTI_11) ||                                \
     ((REGTRIG) == ADC_ExternalTrigConv_T1_TRGO)|| ((REGTRIG) == ADC_ExternalTrigConv_T2_CC1) ||                                \
     ((REGTRIG) == ADC_ExternalTrigConv_T3_CC4) || ((REGTRIG) == ADC_ExternalTrigConv_T2_TRGO) ||                                \
     ((REGTRIG) == ADC_ExternalTrigConv_EXTI_15)|| ((REGTRIG) == ADC_ExternalTrigConv_T1_CC4))||                                \
	   ((REGTRIG) == ADC_ExternalTrigConv_T1_CC5)) 
/**
 * @}
 */

/**
 * @brief  for ADC1
 */
#define ADC_ExternalTrigShiftTime_0_Cycles     ((uint32_t)0x00000000)
#define ADC_ExternalTrigShiftTime_4_Cycles     ((uint32_t)0x00080000)
#define ADC_ExternalTrigShiftTime_16_Cycles    ((uint32_t)0x00100000)
#define ADC_ExternalTrigShiftTime_32_Cycles    ((uint32_t)0x00180000)
#define ADC_ExternalTrigShiftTime_64_Cycles    ((uint32_t)0x00200000)
#define ADC_ExternalTrigShiftTime_128_Cycles   ((uint32_t)0x00280000)
#define ADC_ExternalTrigShiftTime_256_Cycles   ((uint32_t)0x00300000)
#define ADC_ExternalTrigShiftTime_512_Cycles   ((uint32_t)0x00380000)


/** @defgroup ADC_data_align
 * @{
 */
#define ADC_DataAlign_Right ((uint32_t)0x00000000)
#define ADC_DataAlign_Left  ((uint32_t)0x00000800)
#define IS_ADC_DATA_ALIGN(ALIGN) (((ALIGN) == ADC_DataAlign_Right) || ((ALIGN) == ADC_DataAlign_Left))
/**
 * @}
 */

/** @defgroup Direction_x_to_x 
* @{
*/
#define Direction_MASK                              ((uint32_t)0x00010000)
#define Direction_Low_to_High                       ((uint32_t)0x00000000)
#define Direction_High_to_Low                       ((uint32_t)0x00010000)

/** @defgroup ADC_channels 
* @{
*/

#define ADC_Channel_0                               ((uint8_t)0x00)
#define ADC_Channel_1                               ((uint8_t)0x01)
#define ADC_Channel_2                               ((uint8_t)0x02)
#define ADC_Channel_3                               ((uint8_t)0x03)
#define ADC_Channel_4                               ((uint8_t)0x04)
#define ADC_Channel_5                               ((uint8_t)0x05)
#define ADC_Channel_6                               ((uint8_t)0x06)
#define ADC_Channel_7                               ((uint8_t)0x07)
#define ADC_Channel_8                               ((uint8_t)0x08)
#define ADC_Channel_9                               ((uint8_t)0x09)
#define ADC_Channel_14                              ((uint8_t)0x0E) 
#define ADC_Channel_15                              ((uint8_t)0x0F)
#define ADC_Channel_All							                ((uint8_t)0xFF)
#define ADC_Channel_DisableAll						          ((uint8_t)0xFA)

#define IS_ADC_CHANNEL(CHANNEL)                                                                         \
    (((CHANNEL) == ADC_Channel_0) || ((CHANNEL) == ADC_Channel_1) ||                                    \
     ((CHANNEL) == ADC_Channel_2) || ((CHANNEL) == ADC_Channel_3) ||                                    \
     ((CHANNEL) == ADC_Channel_4) || ((CHANNEL) == ADC_Channel_5) ||                                    \
     ((CHANNEL) == ADC_Channel_6) || ((CHANNEL) == ADC_Channel_7) ||                                    \
     ((CHANNEL) == ADC_Channel_8) || ((CHANNEL) == ADC_Channel_9) ||                                    \
     ((CHANNEL) == ADC_Channel_14) || ((CHANNEL) == ADC_Channel_15) ||                                  \
     ((CHANNEL) == ADC_Channel_All)) || ADC_Channel_DisableAll
/**
* @}
*/

#define  ADC_SMPR_SMP                      ((uint32_t)0x0000000F)        /*!< SMP[2:0] bits (Sampling time selection) */
#define  ADC_SMPR_SMP_0                    ((uint32_t)0x00000001)        /*!< Bit 0 */
#define  ADC_SMPR_SMP_1                    ((uint32_t)0x00000002)        /*!< Bit 1 */
#define  ADC_SMPR_SMP_2                    ((uint32_t)0x00000004)        /*!< Bit 2 */

/** @defgroup ADC_sampling_times 
* @{
*/ 

#define ADC_SampleTime_2_5Cycles                     ((uint32_t)0x00000000)
#define ADC_SampleTime_3_5Cycles                     ((uint32_t)0x00000008)
#define ADC_SampleTime_4_5Cycles                     ((uint32_t)0x00000009)
#define ADC_SampleTime_5_5Cycles                     ((uint32_t)0x0000000A)
#define ADC_SampleTime_6_5Cycles                     ((uint32_t)0x0000000B)
#define ADC_SampleTime_7_5Cycles                     ((uint32_t)0x0000000C)
#define ADC_SampleTime_8_5Cycles                     ((uint32_t)0x00000001)
#define ADC_SampleTime_14_5Cycles                    ((uint32_t)0x00000002)
#define ADC_SampleTime_29_5Cycles                    ((uint32_t)0x00000003)
#define ADC_SampleTime_42_5Cycles                    ((uint32_t)0x00000004)
#define ADC_SampleTime_56_5Cycles                    ((uint32_t)0x00000005)
#define ADC_SampleTime_72_5Cycles                    ((uint32_t)0x00000006)
#define ADC_SampleTime_240_5Cycles                   ((uint32_t)0x00000007)

#define IS_ADC_SAMPLE_TIME(TIME)                                                                                                   \
    (((TIME) == ADC_SampleTime_2_5Cycles)  ||  ((TIME) == ADC_SampleTime_3_5Cycles) || ((TIME) == ADC_SampleTime_4_5Cycles) ||     \
	   ((TIME) == ADC_SampleTime_5_5Cycles)  ||  ((TIME) == ADC_SampleTime_6_5Cycles) || ((TIME) == ADC_SampleTime_7_5Cycles) ||     \
		 ((TIME) == ADC_SampleTime_8_5Cycles)  ||  ((TIME) == ADC_SampleTime_14_5Cycles) || ((TIME) == ADC_SampleTime_29_5Cycles) ||   \
     ((TIME) == ADC_SampleTime_42_5Cycles) ||  ((TIME) == ADC_SampleTime_56_5Cycles) || ((TIME) == ADC_SampleTime_72_5Cycles) ||   \
     ((TIME) == ADC_SampleTime_240_5Cycles))

/** @defgroup ADC_analog_watchdog_selection
 * @{
 */
#define ADC_AnalogWatchdog_SingleRegEnable            ((uint32_t)0x00000002)
#define ADC_AnalogWatchdog_None                       ((uint32_t)0x00000000)

#define IS_ADC_ANALOG_WATCHDOG(WATCHDOG)                                                                                            \
    (((WATCHDOG) == ADC_AnalogWatchdog_SingleRegEnable) || ((WATCHDOG) == ADC_AnalogWatchdog_None))
/**
 * @}
 */

/** @defgroup ADC_interrupts_definition
 * @{
 */

#define ADC_IT_EOC                      ((uint16_t)0x0001)
#define ADC_IT_AWD                      ((uint16_t)0x0002)
#define IS_ADC_IT(IT) ((((IT) & (uint16_t)0xFFFC) == 0x00) && ((IT) != 0x00))

#define IS_ADC_GET_IT(IT) (((IT) == ADC_IT_EOC) || ((IT) == ADC_IT_AWD))

/**
 * @}
 */

/** @defgroup ADC_flags_definition
 * @{
 */

#define ADC_FLAG_AWD                      ((uint8_t)0x02) 
#define ADC_FLAG_EOC                      ((uint8_t)0x01) 
#define IS_ADC_CLEAR_FLAG(FLAG) ((((FLAG) & (uint8_t)0xF0) == 0x00) && ((FLAG) != 0x00))

#define IS_ADC_GET_FLAG(FLAG)  (((FLAG) == ADC_FLAG_AWD) || ((FLAG) == ADC_FLAG_EOC))



/**
 * @}
 */

/**
 * @}
 */

/** @defgroup ADC_Exported_Macros
 * @{
 */

/**
 * @}
 */

/** @defgroup ADC_Exported_Functions
 * @{
 */

void       ADC_DeInit(ADC_TypeDef* ADCx);
void       ADC_Init(ADC_TypeDef* ADCx, ADC_InitTypeDef* ADC_InitStruct);
void       ADC_StructInit(ADC_InitTypeDef* ADC_InitStruct);
void       ADC_Cmd(ADC_TypeDef* ADCx, FunctionalState NewState);
void       ADC_DMACmd(ADC_TypeDef* ADCx, FunctionalState NewState);
void       ADC_ITConfig(ADC_TypeDef* ADCx, uint16_t ADC_IT, FunctionalState NewState);
void       ADC_SoftwareStartConvCmd(ADC_TypeDef* ADCx, FunctionalState NewState);
FlagStatus ADC_GetSoftwareStartConvStatus(ADC_TypeDef* ADCx);
void       ADC_RegularChannelConfig(ADC_TypeDef* ADCx, uint8_t ADC_Channel, uint8_t Rank, uint8_t ADC_SampleTime);
void       ADC_ExternalTrigConvCmd(ADC_TypeDef* ADCx, FunctionalState NewState);
void       ADC_ExternalTrigShiftTimeSet(ADC_TypeDef* ADCx, u32 ADC_ExternalTrigShiftTime_x_Cycles);
uint16_t   ADC_GetConversionValue(ADC_TypeDef* ADCx);
void       ADC_AnalogWatchdogCmd(ADC_TypeDef* ADCx, uint32_t ADC_AnalogWatchdog);
void       ADC_AnalogWatchdogThresholdsConfig(ADC_TypeDef* ADCx, uint16_t HighThreshold, uint16_t LowThreshold);
void       ADC_AnalogWatchdogSingleChannelConfig(ADC_TypeDef* ADCx, uint8_t ADC_Channel);
void       ADC_TempSensorVrefintCmd(FunctionalState NewState);
FlagStatus ADC_GetFlagStatus(ADC_TypeDef* ADCx, uint8_t ADC_FLAG);
void       ADC_ClearFlag(ADC_TypeDef* ADCx, uint8_t ADC_FLAG);
ITStatus   ADC_GetITStatus(ADC_TypeDef* ADCx, uint16_t ADC_IT);
void       ADC_ClearITPendingBit(ADC_TypeDef* ADCx, uint16_t ADC_IT);
void       ADC_ANY_CH_Config(ADC_TypeDef* ADCx, uint8_t ADC_Channel, uint8_t Rank, uint8_t ADC_SampleTime);
void       ADC_ANY_NUM_Config(ADC_TypeDef* ADCx, u8 len);
#endif /*__HAL_ADC_H */

/**
 * @}
 */

/**
 * @}
 */

/**
 * @}
 */

/*-------------------------(C) COPYRIGHT 2019 MindMotion ----------------------*/

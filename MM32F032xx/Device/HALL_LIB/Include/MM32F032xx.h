/**
******************************************************************************
* @file    MM32F032xx.h
* @brief   CMSIS Cortex-M3 Device Peripheral Access Layer Header File.
*          This file contains all the peripheral register's definitions, bits
*          definitions and memory mapping for MM32F032xx High Density, Medium
*          Density and Low Density devices.
* @author  FAE team
* @version V1.0.0
* @date    2019.7.1
******************************************************************************
*
* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
* TIME. AS A RESULT, MindMotion SHALL NOT BE HELD LIABLE FOR ANY
* DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
* FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
* CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*
* <h2><center>&copy; COPYRIGHT 2019 Mindmotion</center></h2>
******************************************************************************
*/

/** @addtogroup CMSIS
 * @{
 */

/** @addtogroup MM32F032xx
 * @{
 */

#ifndef MM32F032xx_H
#define MM32F032xx_H

/** @addtogroup Library_configuration_section
 * @{
 */

#if !defined USE_STDPERIPH_DRIVER
/**
* @brief Comment the line below if you will not use the peripherals drivers.
In this case, these drivers will not be included and the application code will
be based on direct access to peripherals registers
*/
/*#define USE_STDPERIPH_DRIVER*/
#endif

/**
* @brief In the following line adjust the value of External High Speed oscillator (HSE)
used in your application
*/
#define HSE_Value ((uint32_t)8000000) /*!< Value of the External oscillator in Hz*/
#define HSE_VALUE HSE_Value
/**
* @brief In the following line adjust the External High Speed oscillator (HSE) Startup
Timeout value
*/
#define HSEStartUp_TimeOut ((uint16_t)0x0500) /*!< Time out for HSE start up */
#define HSE_STARTUP_TIMEOUT HSEStartUp_TimeOut

#define HSI_Value ((uint32_t)8000000) /*!< Value of the Internal oscillator in Hz*/
#define HSI_VALUE HSI_Value

#define HSI_Value_Pll_ON ((uint32_t)48000000 / 4) /*!< Value of the Internal oscillator in Hz*/
#define HSI_VALUE_PLL_ON HSI_Value_Pll_ON

#define HSI_Value_Pll_OFF ((uint32_t)48000000 / 6) /*!< Value of the Internal oscillator in Hz*/
#define HSI_VALUE_PLL_OFF HSI_Value_Pll_OFF

/*!< [31:16] MM32F032xx Standard Peripheral Library main version */
#define MM32F032xx_STDPERIPH_VERSION_MAIN (0x01)
/*!< [15:8]  MM32F032xx Standard Peripheral Library sub1 version */
#define MM32F032xx_STDPERIPH_VERSION_SUB1 (0x00)
/*!< [7:0]  MM32F032xx Standard Peripheral Library sub2 version */
#define MM32F032xx_STDPERIPH_VERSION_SUB2 (0x00)
/*!<MM32F032xx Standard Peripheral Library version number */
#define MM32F032xx_STDPERIPH_VERSION                                                                                             \
    ((MM32F032xx_STDPERIPH_VERSION_MAIN << 16) | (MM32F032xx_STDPERIPH_VERSION_SUB1 << 8) | MM32F032xx_STDPERIPH_VERSION_SUB2)

/**
 * @}
 */

/** @addtogroup Configuration_section_for_CMSIS
 * @{
 */

/**
 * @brief Configuration of the Cortex-M3 Processor and Core Peripherals
 */
#define __MPU_PRESENT 0          /*!< MM32F032xx does not provide a MPU present or not  */
#define __NVIC_PRIO_BITS 2       /*!< MM32F032xx uses 2 Bits for the Priority Levels    */
#define __Vendor_SysTickConfig 0 /*!< Set to 1 if different SysTick Config is used */

/*!< Interrupt Number Definition */

typedef enum IRQn {
    /******  Cortex-M0 Processor Exceptions Numbers ***************************************************/
    NonMaskableInt_IRQn = -14, /*!< 2 Non Maskable Interrupt                                */
    HardFault_IRQn      = -13, /*!< 3 Cortex-M0 Hard Fault Interrupt                        */
    SVC_IRQn            = -5,  /*!< 11 Cortex-M0 SV Call Interrupt                          */
    PendSV_IRQn         = -2,  /*!< 14 Cortex-M0 Pend SV Interrupt                          */
    SysTick_IRQn        = -1,  /*!< 15 Cortex-M0 System Tick Interrupt                      */

    WWDG_IWDG_IRQn           = 0,  /*!< Window WatchDog Interrupt                               */
    PVD_IRQn                 = 1,  /*!< PVD through EXTI Line detect Interrupt                  */
    RTC_BKP_IRQn             = 2,  /*!< RTC through EXTI Line Interrupt                         */
    FLASH_IRQn               = 3,  /*!< FLASH Interrupt                                         */
    RCC_CRS_IRQn             = 4,  /*!< RCC Interrupt                                           */
    EXTI0_1_IRQn             = 5,  /*!< EXTI Line 0 and 1 Interrupts                            */
    EXTI2_3_IRQn             = 6,  /*!< EXTI Line 2 and 3 Interrupts                            */
    EXTI4_15_IRQn            = 7,  /*!< EXTI Line 4 to 15 Interrupts                            */
    HWDIV_IRQn               = 8,  /*!< RTC Alarm Interrupt and USB wake up Interuupt           */
    DMA1_Channel1_IRQn       = 9,  /*!< DMA1 Channel 1 Interrupt                                */
    DMA1_Channel2_3_IRQn     = 10, /*!< DMA1 Channel 2 and Channel 3 Interrupts                 */
    DMA1_Channel4_5_IRQn     = 11, /*!< DMA1 Channel 4 and Channel 5 Interrupts                 */
    ADC1_COMP_IRQn           = 12, /*!< ADC1, COMP1 and COMP2 Interrupts                        */
    TIM1_BRK_UP_TRG_COM_IRQn = 13, /*!< TIM1 Break, Update, Trigger and Commutation Interrupts  */
    TIM1_CC_IRQn             = 14, /*!< TIM1 Capture Compare Interrupt                          */
    TIM2_IRQn                = 15, /*!< TIM2 Interrupt                                          */
    TIM3_IRQn                = 16, /*!< TIM3 Interrupt                                          */
    TIM14_IRQn = 19, /*!< TIM14 Interrupt                                         */
    TIM16_IRQn = 21, /*!< TIM16 Interrupt                                         */
    TIM17_IRQn = 22, /*!< TIM17 Interrupt                                         */
    I2C1_IRQn  = 23, /*!< I2C1 Interrupt                                          */
    SPI1_IRQn  = 25, /*!< SPI1 Interrupt                                          */
    SPI2_IRQn  = 26, /*!< SPI1 Interrupt                                          */
    UART1_IRQn = 27, /*!< UART1 Interrupt                                         */
    UART2_IRQn = 28, /*!< UART2 Interrupt                                         */
    CAN_IRQn   = 30, /*!<CAN Interrupt                                            */
    USB_IRQn   = 31, /*!<USB Interrupt                                            */

} IRQn_Type;

#endif

/**
 * @}
 */

#include "core_cm0.h"

#include <stdint.h>

/** @addtogroup Exported_types
 * @{
 */

/*!< MM32F032xx Standard Peripheral Library old types (maintained for legacy prupose) */

typedef int32_t s32;
typedef int16_t s16;
typedef int8_t  s8;

typedef const int32_t sc32; /*!< Read Only */
typedef const int16_t sc16; /*!< Read Only */
typedef const int8_t  sc8;  /*!< Read Only */

typedef __IO int32_t vs32;
typedef __IO int16_t vs16;
typedef __IO int8_t vs8;

typedef __I int32_t vsc32; /*!< Read Only */
typedef __I int16_t vsc16; /*!< Read Only */
typedef __I int8_t vsc8;   /*!< Read Only */

typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t  u8;

typedef const uint32_t uc32; /*!< Read Only */
typedef const uint16_t uc16; /*!< Read Only */
typedef const uint8_t  uc8;  /*!< Read Only */

typedef __IO uint32_t vu32;
typedef __IO uint16_t vu16;
typedef __IO uint8_t vu8;

typedef __I uint32_t vuc32; /*!< Read Only */
typedef __I uint16_t vuc16; /*!< Read Only */
typedef __I uint8_t vuc8;   /*!< Read Only */

typedef enum { FALSE = 0, TRUE = !FALSE } bool;

typedef enum { RESET = 0, SET = !RESET } FlagStatus, ITStatus;

typedef enum { DISABLE = 0, ENABLE = !DISABLE } FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum { ERROR = 0, SUCCESS = !ERROR } ErrorStatus;

#define SETnBIT(VALUE, BITs) ((VALUE) |= (1 << BITs))
#define RSTnBIT(VALUE, BITs) ((VALUE) &= ~(1 << BITs))

/**
 * @}
 */

/** @addtogroup Peripheral_registers_structures
 * @{
 */

/**
 * @brief Analog to Digital Converter
 */

typedef struct {
    __IO uint32_t ADDATA;     //Address offset: 0x00
    __IO uint32_t ADCFG;      //Address offset: 0x04
    __IO uint32_t ADCR;       //Address offset: 0x08
    __IO uint32_t ADCHS;      //Address offset: 0x0C
    __IO uint32_t ADCMPR;     //Address offset: 0x10
    __IO uint32_t ADSTA;      //Address offset: 0x14
    __IO uint32_t ADDR0;      //Address offset: 0x18
    __IO uint32_t ADDR1;      //Address offset: 0x1C
    __IO uint32_t ADDR2;      //Address offset: 0x20
    __IO uint32_t ADDR3;      //Address offset: 0x24
    __IO uint32_t ADDR4;      //Address offset: 0x28
    __IO uint32_t ADDR5;      //Address offset: 0x2C
    __IO uint32_t ADDR6;      //Address offset: 0x30
    __IO uint32_t ADDR7;      //Address offset: 0x34
    __IO uint32_t ADDR8;      //Address offset: 0x38
    __IO uint32_t ADDR9;      //Address offset: 0x3C
    __IO uint32_t RESERVED0;
    __IO uint32_t RESERVED1;
    __IO uint32_t RESERVED2;
    __IO uint32_t RESERVED3;
    __IO uint32_t ADDR14;      //Address offset: 0x50
    __IO uint32_t ADDR15;      //Address offset: 0x54
    __IO uint32_t ADSTA_EXT;   //Address offset: 0x58
    __IO uint32_t ADCH_ANY0;   //Address offset: 0x5C
    __IO uint32_t ADCH_ANY1;   //Address offset: 0x60
    __IO uint32_t ADANY_CFG;   //Address offset: 0x64
    __IO uint32_t ADANY_CR;    //Address offset: 0x68
} ADC_TypeDef;
/**
 * @brief Backup Registers
 */

typedef struct {
    uint32_t RESERVED0;       //Address offset: 0x00
    uint32_t RESERVED1;
    uint32_t RESERVED2;
    uint32_t RESERVED3;
    uint32_t RESERVED4;  
    uint32_t RESERVED5;
    uint32_t RESERVED6;
    uint32_t RESERVED7;
    uint32_t RESERVED8;  
    uint32_t RESERVED9;
    uint32_t RESERVED10;
    uint32_t RESERVED11;
    uint32_t RESERVED12;
    uint32_t RESERVED13;
    uint32_t RESERVED14;
    uint32_t RESERVED15;
    __IO uint32_t RTCCR;     //Address offset: 0x40
    __IO uint32_t CR;        //Address offset: 0x44
    __IO uint32_t CSR;       //Address offset: 0x48
    uint32_t      RESERVED16;
    __IO uint32_t DR1;       //Address offset: 0x50
    __IO uint32_t DR2;       //Address offset: 0x54
    __IO uint32_t DR3;       //Address offset: 0x58
    __IO uint32_t DR4;       //Address offset: 0x5C
    __IO uint32_t DR5;       //Address offset: 0x60
    __IO uint32_t DR6;       //Address offset: 0x64
    __IO uint32_t DR7;       //Address offset: 0x68
    __IO uint32_t DR8;       //Address offset: 0x6C
    __IO uint32_t DR9;       //Address offset: 0x70
    __IO uint32_t DR10;      //Address offset: 0x74

} BKP_TypeDef;
/**
 * @brief CAN basic
 */
typedef struct {
    __IO uint32_t CR;         //Address offset: 0x00
    __IO uint32_t CMR;        //Address offset: 0x04
    __IO uint32_t SR;         //Address offset: 0x08
    __IO uint32_t IR;         //Address offset: 0x0c
    __IO uint32_t ACR;        //Address offset: 0x10
    __IO uint32_t AMR;        //Address offset: 0x14
    __IO uint32_t BTR0;       //Address offset: 0x18
    __IO uint32_t BTR1;       //Address offset: 0x1C
    uint32_t      RESERVED0;  //Address offset: 0x20
    uint32_t      RESERVED1;  //Address offset: 0x24
    __IO uint32_t TXID0;      //Address offset: 0x28
    __IO uint32_t TXID1;      //Address offset: 0x2c
    __IO uint32_t TXDR0;      //Address offset: 0x30
    __IO uint32_t TXDR1;      //Address offset: 0x34
    __IO uint32_t TXDR2;      //Address offset: 0x38
    __IO uint32_t TXDR3;      //Address offset: 0x3c
    __IO uint32_t TXDR4;      //Address offset: 0x40
    __IO uint32_t TXDR5;      //Address offset: 0x44
    __IO uint32_t TXDR6;      //Address offset: 0x48
    __IO uint32_t TXDR7;      //Address offset: 0x4c
    __IO uint32_t RXID0;      //Address offset: 0x50
    __IO uint32_t RXID1;      //Address offset: 0x54
    __IO uint32_t RXDR0;      //Address offset: 0x58
    __IO uint32_t RXDR1;      //Address offset: 0x5C
    __IO uint32_t RXDR2;      //Address offset: 0x60
    __IO uint32_t RXDR3;
    __IO uint32_t RXDR4;
    __IO uint32_t RXDR5;      //Address offset: 0x6c
    __IO uint32_t RXDR6;      //Address offset: 0x70
    __IO uint32_t RXDR7;      //Address offset: 0x74
    uint32_t      RESERVED2;
    __IO uint32_t CDR;  // 0x7c
} CAN_TypeDef;

/**
 * @brief CAN Peli
 */
typedef struct {
    __IO uint32_t MOD;
    __IO uint32_t CMR;
    __IO uint32_t SR;
    __IO uint32_t IR;
    __IO uint32_t IER;        //Address offset:0x10h
    uint32_t      RESERVED0;
    __IO uint32_t BTR0;
    __IO uint32_t BTR1;
    uint32_t      RESERVED1;  //Address offset:0x20h
    uint32_t      RESERVED2;
    uint32_t      RESERVED3;
    __IO uint32_t ALC;
    __IO uint32_t ECC;       //Address offset: 0x30h
    __IO uint32_t EWLR;
    __IO uint32_t RXERR;
    __IO uint32_t TXERR;
    __IO uint32_t SFF;      //Address offset: 0x40
    __IO uint32_t ID0;
    __IO uint32_t ID1;
    __IO uint32_t DATA0;
    __IO uint32_t DATA1;    //Address offset: 0x50
    __IO uint32_t DATA2;
    __IO uint32_t DATA3;
    __IO uint32_t DATA4;
    __IO uint32_t DATA5;    //Address offset: 0x60
    __IO uint32_t DATA6;
    __IO uint32_t DATA7;
    __IO uint32_t DATA8;
    __IO uint32_t DATA9;    //Address offset: 0x70
    __IO uint32_t RMC;
    __IO uint32_t RBSA;
    __IO uint32_t CDR;
    __IO uint32_t AFM0;     //Address offset: 0x80
    __IO uint32_t AFM1;
    __IO uint32_t AFM2;
    __IO uint32_t FGA0;
    __IO uint32_t FGA1;     //Address offset: 0x90
    __IO uint32_t FGA2;
    __IO uint32_t ACR0;
    __IO uint32_t ACR1;
    __IO uint32_t ACR2;     //Address offset: 0xA0
    __IO uint32_t ACR3;
    __IO uint32_t AMR0;
    __IO uint32_t AMR1;
    __IO uint32_t AMR2;     //Address offset: 0xB0
    __IO uint32_t AMR3;
} CAN_Peli_TypeDef;

typedef struct {
    __IO uint32_t ACR0;
    __IO uint32_t ACR1;
    __IO uint32_t ACR2;
    __IO uint32_t ACR3;
    __IO uint32_t AMR0;
    __IO uint32_t AMR1;
    __IO uint32_t AMR2;
    __IO uint32_t AMR3;

} CAN_FLT_GROUP;

typedef struct {
    CAN_FLT_GROUP GROUP0;  // 0x40
    uint32_t      RESERVED[8];
    __IO uint32_t AFM0;  // 0x80
    __IO uint32_t AFM1;
    __IO uint32_t AFM2;
    __IO uint32_t FGA0;
    __IO uint32_t FGA1;  // 0x90
    __IO uint32_t FGA2;
    CAN_FLT_GROUP GROUP1;   //Address offset: 0x98
    CAN_FLT_GROUP GROUP2;   //Address offset: 0xB8
    CAN_FLT_GROUP GROUP3;   //Address offset: 0xD8
    CAN_FLT_GROUP GROUP4;   //Address offset: 0xF8
    CAN_FLT_GROUP GROUP5;   //Address offset: 0x118
    CAN_FLT_GROUP GROUP6;   //Address offset: 0x138
    CAN_FLT_GROUP GROUP7;   //Address offset: 0x158
    CAN_FLT_GROUP GROUP8;   //Address offset: 0x178
    CAN_FLT_GROUP GROUP9;   //Address offset: 0x198
    CAN_FLT_GROUP GROUP10;  //Address offset: 0x1B8
    CAN_FLT_GROUP GROUP11;  //Address offset: 0x1D8
    CAN_FLT_GROUP GROUP12;  //Address offset: 0x1F8
    CAN_FLT_GROUP GROUP13;  //Address offset: 0x218
    CAN_FLT_GROUP GROUP14;  //Address offset: 0x238
    CAN_FLT_GROUP GROUP15;  //Address offset: 0x258
    CAN_FLT_GROUP GROUP16;  //Address offset: 0x278
    CAN_FLT_GROUP GROUP17;  //Address offset: 0x298
    CAN_FLT_GROUP GROUP18;  //Address offset: 0x2B8
    CAN_FLT_GROUP GROUP19;  //Address offset: 0x2D8

} CAN_Peli_FLT_TypeDef;

/**
 * @brief CSM unit
 */

typedef struct {
    __IO uint32_t TXREG1;
    __IO uint32_t TXREG2;
    __IO uint32_t RXREG1;
    __IO uint32_t RXREG2;
    __IO uint32_t INTSTAT;
    __IO uint32_t INTEN;
    __IO uint32_t CTL1;
    __IO uint32_t CTL2;
    __IO uint32_t CFG;
    __IO uint32_t SPBRG;
    __IO uint32_t BCNT;
} CSM_TypeDef;

/**
 * @brief CRC calculation unit
 */

typedef struct {
    __IO uint32_t DR;       //Address offset: 0x00
    __IO uint32_t IDR;      //Address offset: 0x04
    __IO uint32_t CTRL;     //Address offset: 0x08
} CRC_TypeDef;


/**
 * @brief Divider
 */

typedef struct {
    __IO uint32_t DVDR;      //Address offset: 0x00
    __IO uint32_t DVSR;      //Address offset: 0x04
    __IO uint32_t QUOTR;     //Address offset: 0x08
    __IO uint32_t RMDR;      //Address offset: 0x0C
    __IO uint32_t SR;        //Address offset: 0x10
    __IO uint32_t CR;        //Address offset: 0x14
} DIVIDER_TypeDef;

/**
 * @brief Debug MCU
 */

typedef struct {
    __IO uint32_t IDCODE;   //Basic Address : 0x40013400
    __IO uint32_t CR;       //Basic Address : 0x40013404
} DBGMCU_TypeDef;

/**
 * @brief DMA Controller
 */

typedef struct {
    __IO uint32_t CCR;        //Address offset: 0x08
    __IO uint32_t CNDTR;      //Address offset: 0x0C
    __IO uint32_t CPAR;       //Address offset: 0x10
    __IO uint32_t CMAR;       //Address offset: 0x14
} DMA_Channel_TypeDef;      

typedef struct {
    __IO uint32_t ISR;      //Address offset: 0x00
    __IO uint32_t IFCR;     //Address offset: 0x04
} DMA_TypeDef;

/**
 * @brief External Interrupt/Event Controller
 */

typedef struct {
    __IO uint32_t IMR;       //Address offset: 0x00
    __IO uint32_t EMR;       //Address offset: 0x04
    __IO uint32_t RTSR;      //Address offset: 0x08
    __IO uint32_t FTSR;      //Address offset: 0x0C
    __IO uint32_t SWIER;     //Address offset: 0x10
    __IO uint32_t PR;        //Address offset: 0x14
} EXTI_TypeDef;

/**
 * @brief FLASH Registers
 */

typedef struct {
    __IO uint32_t ACR;               //Address offset: 0x00
    __IO uint32_t KEYR;              //Address offset: 0x04
    __IO uint32_t OPTKEYR;           //Address offset: 0x08
    __IO uint32_t SR;                //Address offset: 0x0C
    __IO uint32_t CR;                //Address offset: 0x10
    __IO uint32_t AR;                //Address offset: 0x14
    __IO uint32_t RESERVED;  
    __IO uint32_t OBR;               //Address offset: 0x1C
    __IO uint32_t WRP0R;             //Address offset: 0x20
    __IO uint32_t WRP1R;
    __IO uint32_t WRP2R;
    __IO uint32_t WRP3R;
    __IO uint32_t RESERVED0;
    __IO uint32_t RESERVED1;
    __IO uint32_t RESERVED2;
    __IO uint32_t RESERVED3;
    __IO uint32_t SECUKEY0R;
    __IO uint32_t SECUKEY1R;
    __IO uint32_t RESERVED4;
    __IO uint32_t RESERVED5;
    __IO uint32_t EEPKEYR;           //Address offset: 0x50
    __IO uint32_t CPU_RSTN_KEYR;     //Address offset: 0x54
    __IO uint32_t CPU_RSTN_MATCH;    //Address offset: 0x58
    __IO uint32_t SEC4_KEY;          //Address offset: 0x5C

} FLASH_TypeDef;

/**
 * @brief Option Bytes Registers
 */

typedef struct {
    __IO uint16_t RDP;
    __IO uint16_t USER;
    __IO uint16_t Data0;
    __IO uint16_t Data1;
    __IO uint16_t WRP0;
    __IO uint16_t WRP1;
    __IO uint16_t WRP2;
    __IO uint16_t WRP3;
} OB_TypeDef;

/**
 * @brief General Purpose IO
 */

typedef struct {
    __IO uint32_t CRL;       //Address offset: 0x00
    __IO uint32_t CRH;       //Address offset: 0x04
    __IO uint32_t IDR;       //Address offset: 0x08
    __IO uint32_t ODR;       //Address offset: 0x0C
    __IO uint32_t BSRR;      //Address offset: 0x10
    __IO uint32_t BRR;       //Address offset: 0x14
    __IO uint32_t LCKR;      //Address offset: 0x18
    __IO uint32_t DCR;       //Address offset: 0x1C
    __IO uint32_t AFRL;      //Address offset: 0x20
    __IO uint32_t AFRH;      //Address offset: 0x24
} GPIO_TypeDef;

/**
 * @brief SysTem Configuration
 */

typedef struct {
    __IO uint32_t CFGR;       //Address offset: 0x00
    __IO uint32_t RESERVED0;
    __IO uint32_t EXTICR[4];  //Address offset: 0x08
    __IO uint32_t PADHYS;     //Address offset: 0x18
} SYSCFG_TypeDef;

/**
 * @brief Inter-integrated Circuit Interface
 */

typedef struct {
//    __IO uint16_t I2C_CR;         //Address offset: 0x00
//    uint16_t      RESERVED0;  
//    __IO uint16_t I2C_TAR;        //Address offset: 0x04
//    uint16_t      RESERVED1;
//    __IO uint16_t I2C_SAR;        //Address offset: 0x08
//   __IO uint16_t  RESERVED2;
//    uint32_t      RESERVED3;  
//    __IO uint16_t I2C_DR;         //Address offset: 0x10
//    uint16_t      RESERVED4;
//    __IO uint16_t I2C_SSHR;       //Address offset: 0x14
//    uint16_t      RESERVED5;
//    __IO uint16_t I2C_SSLR;       //Address offset: 0x18
//    uint16_t      RESERVED6;
//    __IO uint16_t I2C_FSHR;       //Address offset: 0x1C
//    uint16_t      RESERVED7;
//    __IO uint16_t I2C_FSLR;       //Address offset: 0x20
//    uint16_t      RESERVED8;
//    uint32_t      RESERVED9;  
//    uint32_t      RESERVED10;  
//    __IO uint16_t I2C_ISR;        //Address offset: 0x2C
//    uint16_t      RESERVED11;
//    __IO uint16_t I2C_IMR;        //Address offset: 0x30
//    uint16_t      RESERVED12;
//    __IO uint16_t I2C_RAWISR;     //Address offset: 0x34
//    uint16_t      RESERVED13;
//    __IO uint16_t I2C_RXTLR;      //Address offset: 0x38
//    uint16_t      RESERVED14;
//    __IO uint16_t I2C_TXTLR;      //Address offset: 0x3C
//    uint16_t      RESERVED15;
//    __IO uint16_t I2C_ICR;        //Address offset: 0x40
//    uint16_t      RESERVED16;
//    __IO uint16_t I2C_RX_UNDER;   //Address offset: 0x44
//    uint16_t      RESERVED17;
//    __IO uint16_t I2C_RX_OVER;    //Address offset: 0x48
//    uint16_t      RESERVED18;
//    __IO uint16_t I2C_TX_OVER;    //Address offset: 0x4C
//    uint16_t      RESERVED19;
//    __IO uint16_t I2C_RD_REQ;     //Address offset: 0x50
//    uint16_t      RESERVED20;
//    __IO uint16_t I2C_TX_ABRT;    //Address offset: 0x54
//    uint16_t      RESERVED21;
//    __IO uint16_t I2C_RX_DONE;    //Address offset: 0x58
//    uint16_t      RESERVED22;
//    __IO uint16_t I2C_ACTIV;      //Address offset: 0x5C
//    uint16_t      RESERVED23;
//    __IO uint16_t I2C_STOP;       //Address offset: 0x60
//    uint16_t      RESERVED24;
//    __IO uint16_t I2C_START;      //Address offset: 0x64
//    uint16_t      RESERVED25;
//    __IO uint16_t I2C_GC;         //Address offset: 0x68
//    uint16_t      RESERVED26;
//    __IO uint16_t I2C_ENR;        //Address offset: 0x6C
//    uint16_t      RESERVED27;
//    __IO uint16_t I2C_SR;         //Address offset: 0x70
//    uint16_t      RESERVED28;
//    __IO uint16_t I2C_TXFLR;      //Address offset: 0x74
//    uint16_t      RESERVED29;
//    __IO uint16_t I2C_RXFLR;      //Address offset: 0x78
//    uint16_t      RESERVED30;
//    __IO uint32_t I2C_HOLD;       //Address offset: 0x7C
//    __IO uint32_t I2C_DMA;        //Address offset: 0x88
//    __IO uint32_t I2C_SETUP;      //Address offset: 0x94
//    __IO uint32_t I2C_GCR;        //Address offset: 0x98
  __IO uint16_t IC_CON;
  uint16_t  RESERVED0;
  __IO uint16_t IC_TAR;
  uint16_t  RESERVED1;
  __IO uint16_t IC_SAR;
  uint16_t  RESERVED2;
//  __IO uint16_t IC_HS_MADDR;
  uint16_t  RESERVED00;
  uint16_t  RESERVED3;
  __IO uint16_t IC_DATA_CMD;
  uint16_t  RESERVED4;
  __IO uint16_t IC_SS_SCL_HCNT;
  uint16_t  RESERVED5;
  __IO uint16_t IC_SS_SCL_LCNT;
  uint16_t  RESERVED6;
  __IO uint16_t IC_FS_SCL_HCNT;
  uint16_t  RESERVED7;
  __IO uint16_t IC_FS_SCL_LCNT;
  uint16_t  RESERVED8;
//  __IO uint16_t IC_HS_SCL_HCNT;
  uint16_t  RESERVED01;
  uint16_t  RESERVED9;
  //  __IO uint16_t IC_HS_SCL_LCNT;
  uint16_t  RESERVED02;
  uint16_t  RESERVED10;
  __IO uint16_t IC_INTR_STAT;
  uint16_t  RESERVED11;
  __IO uint16_t IC_INTR_MASK;
  uint16_t  RESERVED12;
  __IO uint16_t IC_RAW_INTR_STAT;
  uint16_t  RESERVED13;
  __IO uint16_t IC_RX_TL;
  uint16_t  RESERVED14;
  __IO uint16_t IC_TX_TL;
  uint16_t  RESERVED15;
  __IO uint16_t IC_CLR_INTR;
  uint16_t  RESERVED16;
  __IO uint16_t IC_CLR_RX_UNDER;
  uint16_t  RESERVED17;
  __IO uint16_t IC_CLR_RX_OVER;
  uint16_t  RESERVED18;
  __IO uint16_t IC_CLR_TX_OVER;
  uint16_t  RESERVED19;
  __IO uint16_t IC_CLR_RD_REQ;
  uint16_t  RESERVED20;
  __IO uint16_t IC_CLR_TX_ABRT;
  uint16_t  RESERVED21;
  __IO uint16_t IC_CLR_RX_DONE;
  uint16_t  RESERVED22;
  __IO uint16_t IC_CLR_ACTIVITY;
  uint16_t  RESERVED23;
  __IO uint16_t IC_CLR_STOP_DET;
  uint16_t  RESERVED24;
  __IO uint16_t IC_CLR_START_DET;
  uint16_t  RESERVED25;
  __IO uint16_t IC_CLR_GEN_CALL;
  uint16_t  RESERVED26;
  __IO uint16_t IC_ENABLE;
  uint16_t  RESERVED27;
  
  __IO uint32_t IC_STATUS;
  __IO uint32_t IC_TXFLR;
  __IO uint32_t IC_RXFLR;
  __IO uint32_t IC_SDA_HOLD;
  uint32_t  RESERVED03;
  uint32_t  RESERVED04;
  __IO uint32_t IC_DMA_CR;
  uint32_t  RESERVED05;
  uint32_t  RESERVED06;
  __IO uint32_t IC_SDA_SETUP;
  __IO uint32_t IC_ACK_GENERAL_CALL;
} I2C_TypeDef;

/**
 * @brief Independent WATCHDOG
 */

typedef struct {
    __IO uint32_t KR;      //Address offset: 0x00
    __IO uint32_t PR;      //Address offset: 0x04
    __IO uint32_t RLR;     //Address offset: 0x08
    __IO uint32_t SR;      //Address offset: 0x0C
    __IO uint32_t CTRL;    //Address offset: 0x10
    __IO uint32_t IGEN;    //Address offset: 0x14
} IWDG_TypeDef;

/**
 * @brief Power Control
 */

typedef struct {
    __IO uint32_t CR;      //Address offset: 0x00
    __IO uint32_t CSR;     //Address offset: 0x04
} PWR_TypeDef;

/**
 * @brief Reset and Clock Control
 */

typedef struct {
    __IO uint32_t CR;           //Address offset: 0x00
    __IO uint32_t CFGR;         //Address offset: 0x04
    __IO uint32_t CIR;          //Address offset: 0x08
    __IO uint32_t APB2RSTR;     //Address offset: 0x0C
    __IO uint32_t APB1RSTR;     //Address offset: 0x10
    __IO uint32_t AHBENR;       //Address offset: 0x14
    __IO uint32_t APB2ENR;      //Address offset: 0x18
    __IO uint32_t APB1ENR;      //Address offset: 0x1C
    __IO uint32_t BDCR;         //Address offset: 0x20
    __IO uint32_t CSR;          //Address offset: 0x24
    __IO uint32_t AHBRSTR;      //Address offset: 0x28
    __IO uint32_t RCC_CFGR2;    //Address offset: 0x2C
    __IO uint32_t RCC_RNG;      //Address offset: 0x30
    __IO uint32_t RESERVED1;    
    __IO uint32_t RESERVED2;    
    __IO uint32_t RESERVED3;    
    __IO uint32_t SYSCFG;       //Address offset: 0x40
    __IO uint32_t HSIDLY;       //Address offset: 0x44
    __IO uint32_t HSEDLY;       //Address offset: 0x48

} RCC_TypeDef;

/**
 * @brief RTC
 */

typedef struct {
    __IO uint32_t CRH;         //Address offset: 0x00
    __IO uint32_t CRL;         //Address offset: 0x04
    __IO uint32_t PRLH;        //Address offset: 0x08
    __IO uint32_t PRLL;        //Address offset: 0x0C
    __IO uint32_t DIVH;        //Address offset: 0x10
    __IO uint32_t DIVL;        //Address offset: 0x14
    __IO uint32_t CNTH;        //Address offset: 0x18
    __IO uint32_t CNTL;        //Address offset: 0x1C
    __IO uint32_t ALRH;        //Address offset: 0x20
    __IO uint32_t ALRL;        //Address offset: 0x24
    __IO uint32_t MSRH;        //Address offset: 0x28
    __IO uint32_t MSRL;        //Address offset: 0x2C
} RTC_TypeDef;

/**
 * @brief Serial Peripheral Interface
 */

typedef struct {
    __IO uint32_t TXREG;         //Address offset: 0x00
    __IO uint32_t RXREG;         //Address offset: 0x04
    __IO uint32_t CSTAT;         //Address offset: 0x08   
    __IO uint32_t INTSTAT;       //Address offset: 0x0C
    __IO uint32_t INTEN;         //Address offset: 0x10
    __IO uint32_t INTCLR;        //Address offset: 0x14
		__IO uint16_t GCTL;
		uint16_t  RESERVED2;
		__IO uint16_t CCTL;
		uint16_t  RESERVED3;
    __IO uint32_t SPBRG;         //Address offset: 0x20
    __IO uint32_t RXDNR;         //Address offset: 0x24
    __IO uint16_t NSSR;          //Address offset: 0x28
    uint16_t      RESERVED4;
    __IO uint32_t EXTCTL;        //Address offset: 0x2C
} SPI_TypeDef;

/**
 * @brief TIM
 */

typedef struct {
    __IO uint32_t CR1;           //Address offset: 0x00
    __IO uint32_t CR2;           //Address offset: 0x04
    __IO uint32_t SMCR;          //Address offset: 0x08   
    __IO uint32_t DIER;          //Address offset: 0x0C
    __IO uint32_t SR;            //Address offset: 0x10
    __IO uint32_t EGR;           //Address offset: 0x14
    __IO uint32_t CCMR1;         //Address offset: 0x18
    __IO uint32_t CCMR2;         //Address offset: 0x1C
    __IO uint32_t CCER;          //Address offset: 0x20
    __IO uint32_t CNT;           //Address offset: 0x24
    __IO uint32_t PSC;           //Address offset: 0x28
    __IO uint32_t ARR;           //Address offset: 0x2C
    __IO uint32_t RCR;           //Address offset: 0x30
    __IO uint32_t CCR1;          //Address offset: 0x34
    __IO uint32_t CCR2;          //Address offset: 0x38
    __IO uint32_t CCR3;          //Address offset: 0x3C
    __IO uint32_t CCR4;          //Address offset: 0x40
    __IO uint32_t BDTR;          //Address offset: 0x44
    __IO uint32_t DCR;           //Address offset: 0x48
    __IO uint32_t DMAR;          //Address offset: 0x4C
    uint32_t RESERVED0;            
    __IO uint32_t CCMR3;         //Address offset: 0x54 
    __IO uint32_t CCR5;          //Address offset: 0x58
    __IO uint32_t PDER;          //Address offset: 0x5C 
    __IO uint32_t CCR1FALL;      //Address offset: 0x60 
    __IO uint32_t CCR2FALL;      //Address offset: 0x64 
    __IO uint32_t CCR3FALL;      //Address offset: 0x68 
    __IO uint32_t CCR4FALL;      //Address offset: 0x6C 
    __IO uint32_t CCR5FALL;      //Address offset: 0x70 

} TIM_TypeDef;

/**
 * @brief Universal Synchronous Asynchronous Receiver Transmitter
 */

typedef struct {
    __IO uint32_t TDR;           //Address offset: 0x00
    __IO uint32_t RDR;           //Address offset: 0x04
    __IO uint32_t CSR;           //Address offset: 0x08 
    __IO uint32_t ISR;           //Address offset: 0x0C
    __IO uint32_t IER;           //Address offset: 0x10
    __IO uint32_t ICR;           //Address offset: 0x14
    __IO uint32_t GCR;           //Address offset: 0x18
    __IO uint32_t CCR;           //Address offset: 0x1C
    __IO uint32_t BRR;           //Address offset: 0x20
    __IO uint32_t FRA;           //Address offset: 0x24
    __IO uint32_t RXADD;         //Address offset: 0x28
    __IO uint32_t RXMASK;        //Address offset: 0x2C
    __IO uint32_t SCR;           //Address offset: 0x30
    __IO uint32_t IDLR;          //Address offset: 0x34
} UART_TypeDef;

/**
 * @brief Analog Comparators
 */
typedef struct {
    __IO uint32_t COMP1_CSR;           //Address offset: 0x00
    __IO uint32_t COMP2_CSR;           //Address offset: 0x04
    uint32_t RESERVED0;  
    uint32_t RESERVED1;  
    uint32_t RESERVED2;  
    uint32_t RESERVED3;    
    __IO uint32_t COMP_CRV;            //Address offset: 0x18
    __IO uint32_t COMP1_POLL;          //Address offset: 0x1C
    __IO uint32_t COMP2_POLL;          //Address offset: 0x20

} COMP_TypeDef;

/**
 * @brief Window WATCHDOG
 */

typedef struct {
    __IO uint32_t CR;                //Address offset: 0x00
    __IO uint32_t CFR;               //Address offset: 0x04
    __IO uint32_t SR;                //Address offset: 0x08
} WWDG_TypeDef;

/**
 * @brief CRS
 */
typedef struct {
    __IO uint32_t CR;                 //Address offset: 0x00
    __IO uint32_t CFGR;               //Address offset: 0x04
    __IO uint32_t ISR;                //Address offset: 0x08
    __IO uint32_t ICR;                //Address offset: 0x0C

} CRS_TypeDef;

/**
 * @brief USB
 */
typedef struct {
    __IO uint32_t rTOP;                      //Address offset: 0x00 
    __IO uint32_t rINT_STATE;                //Address offset: 0x04 
    __IO uint32_t rEP_INT_STATE;             //Address offset: 0x08 
    __IO uint32_t rEP0_INT_STATE;            //Address offset: 0x0C 
    __IO uint32_t rINT_EN;                   //Address offset: 0x10 
    __IO uint32_t rEP_INT_EN;                //Address offset: 0x14 
    __IO uint32_t rEP0_INT_EN;               //Address offset: 0x18 
    __IO uint32_t RESERVED0;
    __IO uint32_t rEP1_INT_STATE;            //Address offset: 0x20 
    __IO uint32_t rEP2_INT_STATE;            //Address offset: 0x24 
    __IO uint32_t rEP3_INT_STATE;            //Address offset: 0x28 
    __IO uint32_t rEP4_INT_STATE;            //Address offset: 0x2C 
    __IO uint32_t RESERVED1;                 //Address offset: 0x30 
    __IO uint32_t RESERVED2;                 //Address offset: 0x34 
    __IO uint32_t RESERVED3;                 //Address offset: 0x38 
    __IO uint32_t RESERVED4;                 //Address offset: 0x3C 
    __IO uint32_t rEP1_INT_EN;               //Address offset: 0x40 
    __IO uint32_t rEP2_INT_EN;               //Address offset: 0x44 
    __IO uint32_t rEP3_INT_EN;               //Address offset: 0x48 
    __IO uint32_t rEP4_INT_EN;               //Address offset: 0x4C 
    __IO uint32_t RESERVED5;                 //Address offset: 0x50 
    __IO uint32_t RESERVED6;                 //Address offset: 0x54 
    __IO uint32_t RESERVED7;                 //Address offset: 0x58 
    __IO uint32_t RESERVED8;                 //Address offset: 0x5C 
    __IO uint32_t rADDR;                     //Address offset: 0x60 
    __IO uint32_t rEP_EN;                    //Address offset: 0x64 
    __IO uint32_t rEP_DMA_DIR;               //Address offset: 0x68 
    __IO uint32_t rEP_TYPE;                  //Address offset: 0x6C 
    __IO uint32_t rEP_INDEX1_2;              //Address offset: 0x70 
    __IO uint32_t rEP_INDEX3_4;             // Address offset: 0x74 
    __IO uint32_t rTOG_CTRL1_4;              //Address offset: 0x78 
    __IO uint32_t rTOG_STST1_4;              //Address offset: 0x7C 

    __IO uint32_t rSETUP0;                   //Address offset: 0x80 
    __IO uint32_t rSETUP1;                   //Address offset: 0x84 
    __IO uint32_t rSETUP2;                   //Address offset: 0x88 
    __IO uint32_t rSETUP3;                   //Address offset: 0x8C 
    __IO uint32_t rSETUP4;                   //Address offset: 0x90 
    __IO uint32_t rSETUP5;                   //Address offset: 0x94
    __IO uint32_t rSETUP6;                   //Address offset: 0x98 
    __IO uint32_t rSETUP7;                   //Address offset: 0x9C 
    __IO uint32_t rPAKET_SIZEL;              //Address offset: 0xA0 
    __IO uint32_t rPAKET_SIZEH;              //Address offset: 0xA4 
    __IO uint32_t RESERVED9;                 //Address offset: 0xA8 
    __IO uint32_t RESERVED10;                //Address offset: 0xAC 

    __IO uint32_t RESERVED11;                //Address offset: 0xB0 
    __IO uint32_t RESERVED12;                //Address offset: 0xB4 
    __IO uint32_t RESERVED13;                //Address offset: 0xB8 
    __IO uint32_t RESERVED14;                //Address offset: 0xBC 
    __IO uint32_t RESERVED15;                //Address offset: 0xC0 
    __IO uint32_t RESERVED16;                //Address offset: 0xC4 
    __IO uint32_t RESERVED17;                //Address offset: 0xC8 
    __IO uint32_t RESERVED18;                //Address offset: 0xCC 
    __IO uint32_t RESERVED19;                //Address offset: 0xD0 
    __IO uint32_t RESERVED20;                //Address offset: 0xD4 
    __IO uint32_t RESERVED21;                //Address offset: 0xD8 
    __IO uint32_t RESERVED22;                //Address offset: 0xDC 

    __IO uint32_t RESERVED23;                //Address offset: 0xE0 
    __IO uint32_t RESERVED24;                //Address offset: 0xE4 
    __IO uint32_t RESERVED25;                //Address offset: 0xE8 
    __IO uint32_t RESERVED26;                //Address offset: 0xEC 

    __IO uint32_t RESERVED27;                //Address offset: 0xF0 
    __IO uint32_t RESERVED28;                //Address offset: 0xF4 
    __IO uint32_t RESERVED29;                //Address offset: 0xF8 
    __IO uint32_t RESERVED30;                //Address offset: 0xFC 

    __IO uint32_t rEP0_AVIL;                //Address offset: 0x100 
    __IO uint32_t rEP1_AVIL;                //Address offset: 0x104 
    __IO uint32_t rEP2_AVIL;                //Address offset: 0x108 
    __IO uint32_t rEP3_AVIL;                //Address offset: 0x10C 
    __IO uint32_t rEP4_AVIL;                //Address offset: 0x110 

    __IO uint32_t RESERVED31;               //Address offset: 0x114 
    __IO uint32_t RESERVED32;               //Address offset: 0x118 
    __IO uint32_t RESERVED33;               //Address offset: 0x11C 
    __IO uint32_t DMA1_NUML;                //Address offset: 0x120 

    __IO uint32_t DMA1_NUMH;                //Address offset: 0x124 
    __IO uint32_t RESERVED34;               //Address offset: 0x128 
    __IO uint32_t RESERVED35;               //Address offset: 0x12C 
    __IO uint32_t DMA2_NUML;                //Address offset: 0x130 
    __IO uint32_t DMA2_NUMH;                //Address offset: 0x134 
    __IO uint32_t RESERVED36;               //Address offset: 0x138 
    __IO uint32_t RESERVED37;               //Address offset: 0x13C

    __IO uint32_t rEP0_CTRL;                //Address offset: 0x140 
    __IO uint32_t rEP1_CTRL;                //Address offset: 0x144 
    __IO uint32_t rEP2_CTRL;                //Address offset: 0x148 
    __IO uint32_t rEP3_CTRL;                //Address offset: 0x14C 
    __IO uint32_t rEP4_CTRL;                //Address offset: 0x150 

    __IO uint32_t RESERVED38;               //Address offset: 0x154 
    __IO uint32_t RESERVED39;               //Address offset: 0x158 
    __IO uint32_t RESERVED40;               //Address offset: 0x15C 

    __IO uint32_t rEP0_FIFO;                //Address offset: 0x160 
    __IO uint32_t rEP1_FIFO;                //Address offset: 0x164 
    __IO uint32_t rEP2_FIFO;                //Address offset: 0x168 
    __IO uint32_t rEP3_FIFO;                //Address offset: 0x16C 
    __IO uint32_t rEP4_FIFO;                //Address offset: 0x170 

    __IO uint32_t RESERVED41;               //Address offset: 0x174
    __IO uint32_t RESERVED42;               //Address offset: 0x178 
    __IO uint32_t RESERVED43;               //Address offset: 0x17C 

    __IO uint32_t rEP_MEM;                  //Address offset: 0x180 
    __IO uint32_t rEP_DMA;                  //Address offset: 0x184 
    __IO uint32_t rEP_HALT;                 //Address offset: 0x188 
    __IO uint32_t RESERVED44;               //Address offset: 0x18C 
    __IO uint32_t RESERVED45;               //Address offset: 0x190 
    __IO uint32_t RESERVED46;               //Address offset: 0x194 
    __IO uint32_t RESERVED47;               //Address offset: 0x198 
    __IO uint32_t RESERVED48;               //Address offset: 0x19C 
    __IO uint32_t RESERVED49;               //Address offset: 0x1A0 
    __IO uint32_t RESERVED50;               //Address offset: 0x1A4 
    __IO uint32_t RESERVED51;               //Address offset: 0x1A8 
    __IO uint32_t RESERVED52;               //Address offset: 0x1AC 
    __IO uint32_t RESERVED53;               //Address offset: 0x1B0 
    __IO uint32_t RESERVED54;               //Address offset: 0x1B4 
    __IO uint32_t RESERVED55;               //Address offset: 0x1B8 
    __IO uint32_t RESERVED56;               //Address offset: 0x1BC 
    __IO uint32_t rPOWER;                   //Address offset: 0x1C0 
    __IO uint32_t rAHB_DMA;                 //Address offset: 0x1C4 
} USB_TypeDef;

/**
 * @}
 */

/** @addtogroup Peripheral_memory_map
 * @{
 */
#define FLASH_R_BASE         (AHBPERIPH_BASE + 0x2000) /*!< Flash registers base address */

#define OB_BASE              ((uint32_t)0x1FFFF800) /*!< Flash Option Bytes base address */

#define PERIPH_BB_BASE       ((uint32_t)0x42000000) /*!< Peripheral base address in the alias region */
#define SRAM_BB_BASE         ((uint32_t)0x22000000)   /*!< SRAM base address in the alias region */

#define SRAM_BASE            ((uint32_t)0x20000000)   /*!< Peripheral base address in the bit-band region */
#define PERIPH_BASE          ((uint32_t)0x40000000) /*!< SRAM base address in the bit-band region */

/*!< Peripheral memory map */
#define APB1PERIPH_BASE PERIPH_BASE
#define APBPERIPH_BASE PERIPH_BASE
#define APB2PERIPH_BASE     (PERIPH_BASE + 0x10000)
#define AHBPERIPH_BASE      (PERIPH_BASE + 0x20000)

#define TIM2_BASE           (APB1PERIPH_BASE + 0x0000)
#define TIM3_BASE           (APB1PERIPH_BASE + 0x0400)
#define RTC_BASE            (APB1PERIPH_BASE + 0x2800)
#define BKP_BASE            (APB1PERIPH_BASE + 0x2850)
#define WWDG_BASE           (APB1PERIPH_BASE + 0x2C00)
#define IWDG_BASE           (APB1PERIPH_BASE + 0x3000)
#define SPI2_BASE           (APB1PERIPH_BASE + 0x3800)
#define UART2_BASE          (APB1PERIPH_BASE + 0x4400)
#define I2C1_BASE           (APB1PERIPH_BASE + 0x5400)
#define USB_BASE            (APB1PERIPH_BASE + 0x5C00)
#define CAN1_BASE           (APB1PERIPH_BASE + 0x6400)
#define CRS_BASE            (APB1PERIPH_BASE + 0x6C00)
#define PWR_BASE            (APB1PERIPH_BASE + 0x7000)

#define SYSCFG_BASE         (APB2PERIPH_BASE + 0x0000)
#define EXTI_BASE           (APB2PERIPH_BASE + 0x0400)
#define ADC1_BASE           (APB2PERIPH_BASE + 0x2400)
#define TIM1_BASE           (APB2PERIPH_BASE + 0x2C00)
#define SPI1_BASE           (APB2PERIPH_BASE + 0x3000)
#define DBGMCU_BASE         (APB2PERIPH_BASE + 0x3400)
#define UART1_BASE          (APB2PERIPH_BASE + 0x3800)
#define COMP_BASE           (APB2PERIPH_BASE + 0x3C00)
#define COMP1_BASE          (COMP_BASE + 0x0000)
#define COMP2_BASE          (COMP_BASE + 0x0004)
#define TIM14_BASE          (APB2PERIPH_BASE + 0x4000)
#define TIM16_BASE          (APB2PERIPH_BASE + 0x4400)
#define TIM17_BASE          (APB2PERIPH_BASE + 0x4800)

#define DMA1_BASE           (AHBPERIPH_BASE + 0x0000)
#define DMA1_Channel1_BASE  (AHBPERIPH_BASE + 0x0008)
#define DMA1_Channel2_BASE  (AHBPERIPH_BASE + 0x001C)
#define DMA1_Channel3_BASE  (AHBPERIPH_BASE + 0x0030)
#define DMA1_Channel4_BASE  (AHBPERIPH_BASE + 0x0044)
#define DMA1_Channel5_BASE  (AHBPERIPH_BASE + 0x0058)
#define RCC_BASE            (AHBPERIPH_BASE + 0x1000)
#define CRC_BASE            (AHBPERIPH_BASE + 0x3000)

#define HWDIV_BASE          (0x40030000)
#define GPIOA_BASE          (0x48000000)
#define GPIOB_BASE          (0x48000400)
#define GPIOC_BASE          (0x48000800)
#define GPIOD_BASE          (0x48000C00)

#define OB                  ((OB_TypeDef *) OB_BASE) 
/**
 * @}
 */

/** @addtogroup Peripheral_declaration
 * @{
 */
#define TIM2           ((TIM_TypeDef*)TIM2_BASE)
#define TIM3           ((TIM_TypeDef*)TIM3_BASE)
#define RTC            ((BKP_TypeDef*)RTC_BASE)
#define BKP            ((BKP_TypeDef*)BKP_BASE)
#define WWDG           ((WWDG_TypeDef*)WWDG_BASE)
#define IWDG           ((IWDG_TypeDef*)IWDG_BASE)
#define SPI2           ((SPI_TypeDef*)SPI2_BASE)
#define UART2          ((UART_TypeDef*)UART2_BASE)
#define I2C1           ((I2C_TypeDef*)I2C1_BASE)
#define USB            ((USB_TypeDef*)USB_BASE)
#define CAN1           ((CAN_TypeDef*)CAN1_BASE)
#define CAN1_PELI      ((CAN_Peli_TypeDef*)CAN1_BASE)
#define CAN_Peli_FLT   ((CAN_Peli_FLT_TypeDef*)(CAN1_BASE + 0x40))
#define CRS            ((CRS_TypeDef*)CRS_BASE)
#define PWR            ((PWR_TypeDef*)PWR_BASE)

#define SYSCFG         ((SYSCFG_TypeDef*)SYSCFG_BASE)
#define EXTI           ((EXTI_TypeDef*)EXTI_BASE)
#define ADC1           ((ADC_TypeDef*)ADC1_BASE)
#define TIM1           ((TIM_TypeDef*)TIM1_BASE)
#define SPI1           ((SPI_TypeDef*)SPI1_BASE)
#define DBGMCU         ((DBGMCU_TypeDef*)DBGMCU_BASE)
#define UART1          ((UART_TypeDef*)UART1_BASE)
#define COMP           ((COMP_TypeDef *) COMP_BASE)
#define COMP1          ((COMP_TypeDef *) COMP1_BASE)
#define COMP2          ((COMP_TypeDef *) COMP2_BASE)
#define TIM14          ((TIM_TypeDef*)TIM14_BASE)
#define TIM16          ((TIM_TypeDef*)TIM16_BASE)
#define TIM17          ((TIM_TypeDef*)TIM17_BASE)

#define DMA1           ((DMA_TypeDef *) DMA1_BASE)
#define DMA1_Channel1  ((DMA_Channel_TypeDef *) DMA1_Channel1_BASE)
#define DMA1_Channel2  ((DMA_Channel_TypeDef *) DMA1_Channel2_BASE)
#define DMA1_Channel3  ((DMA_Channel_TypeDef *) DMA1_Channel3_BASE)
#define DMA1_Channel4  ((DMA_Channel_TypeDef *) DMA1_Channel4_BASE)
#define DMA1_Channel5  ((DMA_Channel_TypeDef *) DMA1_Channel5_BASE)
#define RCC            ((RCC_TypeDef *) RCC_BASE)
#define FLASH          ((FLASH_TypeDef *) FLASH_R_BASE)
#define CRC            ((CRC_TypeDef *)   CRC_BASE)
#define HWDIV          ((HWDIV_TypeDef *) HWDIV_BASE)
#define GPIOA          ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB          ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC          ((GPIO_TypeDef *) GPIOC_BASE)
#define GPIOD          ((GPIO_TypeDef *) GPIOD_BASE)

/**
 * @}
 */
 
/** @addtogroup Peripheral_Registers_Bits_Definition
 * @{
 */

/******************************************************************************/
/*                         Peripheral Registers_Bits_Definition               */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*                             Power Control                                  */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for PWR_CR register  ********************/
#define PWR_CR_LPDS         ((uint16_t)0x0001) /*!< Low-Power Deepsleep */
#define PWR_CR_PDDS         ((uint16_t)0x0002) /*!< Power Down Deepsleep */
#define PWR_CR_CWUF         ((uint16_t)0x0004) /*!< Clear Wakeup Flag */
#define PWR_CR_CSBF         ((uint16_t)0x0008) /*!< Clear Standby Flag */
#define PWR_CR_PVDE         ((uint16_t)0x0010) /*!< Power Voltage Detector Enable */

#define PWR_CR_PLS          ((uint16_t)0x00E0)   /*!< PLS[2:0] bits (PVD Level Selection) */
#define PWR_CR_PLS_0        ((uint16_t)0x0020) /*!< Bit 0 */
#define PWR_CR_PLS_1        ((uint16_t)0x0040) /*!< Bit 1 */
#define PWR_CR_PLS_2        ((uint16_t)0x0080) /*!< Bit 2 */

/*!< PVD level configuration */
#define PWR_CR_PLS_1V8      ((uint16_t)0x00000) /*!< PVD level 1.8V */
#define PWR_CR_PLS_2V1      ((uint16_t)0x00200) /*!< PVD level 2.1V */
#define PWR_CR_PLS_2V4      ((uint16_t)0x00400) /*!< PVD level 2.4V */
#define PWR_CR_PLS_2V7      ((uint16_t)0x00600) /*!< PVD level 2.7V */
#define PWR_CR_PLS_3V0      ((uint16_t)0x00800) /*!< PVD level 3.0V */
#define PWR_CR_PLS_3V3      ((uint16_t)0x00A00) /*!< PVD level 3.3V */
#define PWR_CR_PLS_3V6      ((uint16_t)0x00C00) /*!< PVD level 3.6V */
#define PWR_CR_PLS_3V9      ((uint16_t)0x00E00) /*!< PVD level 3.9V */
#define PWR_CR_PLS_4V2      ((uint16_t)0x01000) /*!< PVD level 4.2V */
#define PWR_CR_PLS_4V5      ((uint16_t)0x01200) /*!< PVD level 4.5V */
#define PWR_CR_PLS_4V8      ((uint16_t)0x01400) /*!< PVD level 4.8V */

#define PWR_CR_DBP ((uint16_t)0x0100) /*!< Disable Backup Domain write protection */

/*******************  Bit definition for PWR_CSR register  ********************/
#define PWR_CSR_WUF         ((uint16_t)0x0001)  /*!< Wakeup Flag */
#define PWR_CSR_SBF         ((uint16_t)0x0002)  /*!< Standby Flag */
#define PWR_CSR_PVDO        ((uint16_t)0x0004) /*!< PVD Output */
#define PWR_CSR_EWUP        ((uint16_t)0x0100) /*!< Enable WKUP pin */

/******************************************************************************/
/*                                                                            */
/*                            Backup registers                                */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for BKP_DR1 register  ********************/
#define BKP_DR1_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR2 register  ********************/
#define BKP_DR2_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR3 register  ********************/
#define BKP_DR3_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR4 register  ********************/
#define BKP_DR4_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR5 register  ********************/
#define BKP_DR5_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR6 register  ********************/
#define BKP_DR6_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR7 register  ********************/
#define BKP_DR7_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR8 register  ********************/
#define BKP_DR8_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR9 register  ********************/
#define BKP_DR9_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR10_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR11_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR12_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR13_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR14_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR15_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR16_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR17_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR18_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR19_D           ((uint16_t)0xFFFF) /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define BKP_DR20_D           ((uint16_t)0xFFFF) /*!< Backup data */

/******************  Bit definition for BKP_RTCCR register  *******************/
#define BKP_RTCCR_CAL        ((uint16_t)0x007F)  /*!< Calibration value */
#define BKP_RTCCR_CCO        ((uint16_t)0x0080)  /*!< Calibration Clock Output */
#define BKP_RTCCR_ASOE       ((uint16_t)0x0100) /*!< Alarm or Second Output Enable */
#define BKP_RTCCR_ASOS       ((uint16_t)0x0200) /*!< Alarm or Second Output Selection */

/********************  Bit definition for BKP_CR register  ********************/
#define BKP_CR_TPE           ((uint8_t)0x01)  /*!< TAMPER pin enable */
#define BKP_CR_TPAL          ((uint8_t)0x02) /*!< TAMPER pin active level */

/*******************  Bit definition for BKP_CSR register  ********************/
#define BKP_CSR_CTE          ((uint16_t)0x0001)  /*!< Clear Tamper event */
#define BKP_CSR_CTI          ((uint16_t)0x0002)  /*!< Clear Tamper Interrupt */
#define BKP_CSR_TPIE         ((uint16_t)0x0004) /*!< TAMPER Pin interrupt enable */
#define BKP_CSR_TEF          ((uint16_t)0x0100)  /*!< Tamper Event Flag */
#define BKP_CSR_TIF          ((uint16_t)0x0200)  /*!< Tamper Interrupt Flag */

/******************************************************************************/
/*                                                                            */
/*                         Reset and Clock Control                            */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for RCC_CR register  ********************/
#define RCC_CR_HSION         ((uint32_t)0x00000001)   /*!< Internal High Speed clock enable */
#define RCC_CR_HSIRDY        ((uint32_t)0x00000002)  /*!< Internal High Speed clock ready flag */
#define RCC_CR_HSITRIM       ((uint32_t)0x000000F8) /*!< Internal High Speed clock trimming */
#define RCC_CR_HSICAL        ((uint32_t)0x0000FF00)  /*!< Internal High Speed clock Calibration */
#define RCC_CR_HSEON         ((uint32_t)0x00010000)   /*!< External High Speed clock enable */
#define RCC_CR_HSERDY        ((uint32_t)0x00020000)  /*!< External High Speed clock ready flag */
#define RCC_CR_HSEBYP        ((uint32_t)0x00040000)  /*!< External High Speed clock Bypass */
#define RCC_CR_CSSON         ((uint32_t)0x00080000)   /*!< Clock Security System enable */
#define RCC_CR_PLLON         ((uint32_t)0x01000000)   /*!< PLL enable */
#define RCC_CR_PLLRDY        ((uint32_t)0x02000000)  /*!< PLL clock ready flag */

#define RCC_CR_PLLDN        ((uint32_t)0xFC000000)   /*!< PLLDN[5:0] bits */
#define RCC_CR_PLLDN_0      ((uint32_t)0x04000000) /*!< Bit 0 */
#define RCC_CR_PLLDN_1      ((uint32_t)0x08000000) /*!< Bit 1 */
#define RCC_CR_PLLDN_2      ((uint32_t)0x10000000) /*!< Bit 2 */
#define RCC_CR_PLLDN_3      ((uint32_t)0x20000000) /*!< Bit 3 */
#define RCC_CR_PLLDN_4      ((uint32_t)0x40000000) /*!< Bit 4 */
#define RCC_CR_PLLDN_5      ((uint32_t)0x80000000) /*!< Bit 5 */

#define RCC_CR_PLLDM        ((uint32_t)0x00700000)   /*!< PLLDM[2:0] bits */
#define RCC_CR_PLLDM_0      ((uint32_t)0x00100000) /*!< Bit 0 */
#define RCC_CR_PLLDM_1      ((uint32_t)0x00200000) /*!< Bit 1 */
#define RCC_CR_PLLDM_2      (((uint32_t)0x00400000) /*!< Bit 2 */
/*******************  Bit definition for RCC_CFGR register  *******************/
#define RCC_CFGR_SW         ((uint32_t)0x00000003)   /*!< SW[1:0] bits (System clock Switch) */
#define RCC_CFGR_SW_0       ((uint32_t)0x00000001) /*!< Bit 0 */
#define RCC_CFGR_SW_1       (uint32_t)0x00000002) /*!< Bit 1 */

/*!< SW configuration */
#define RCC_CFGR_SW_HSI ((uint32_t)0x00000000) /*!< HSI selected as system clock */
#define RCC_CFGR_SW_HSE ((uint32_t)0x00000001) /*!< HSE selected as system clock */
#define RCC_CFGR_SW_PLL ((uint32_t)0x00000002) /*!< PLL selected as system clock */

#define RCC_CFGR_SWS ((uint32_t)0x0000000C)   /*!< SWS[1:0] bits (System Clock Switch Status) */
#define RCC_CFGR_SWS_0 ((uint32_t)0x00000004) /*!< Bit 0 */
#define RCC_CFGR_SWS_1 ((uint32_t)0x00000008) /*!< Bit 1 */

/*!< SWS configuration */
#define RCC_CFGR_SWS_HSI ((uint32_t)0x00000000) /*!< HSI oscillator used as system clock */
#define RCC_CFGR_SWS_HSE ((uint32_t)0x00000004) /*!< HSE oscillator used as system clock */
#define RCC_CFGR_SWS_PLL ((uint32_t)0x00000008) /*!< PLL used as system clock */

#define RCC_CFGR_HPRE ((uint32_t)0x000000F0)   /*!< HPRE[3:0] bits (AHB prescaler) */
#define RCC_CFGR_HPRE_0 ((uint32_t)0x00000010) /*!< Bit 0 */
#define RCC_CFGR_HPRE_1 ((uint32_t)0x00000020) /*!< Bit 1 */
#define RCC_CFGR_HPRE_2 ((uint32_t)0x00000040) /*!< Bit 2 */
#define RCC_CFGR_HPRE_3 ((uint32_t)0x00000080) /*!< Bit 3 */

/*!< HPRE configuration */
#define RCC_CFGR_HPRE_DIV1 ((uint32_t)0x00000000)   /*!< SYSCLK not divided */
#define RCC_CFGR_HPRE_DIV2 ((uint32_t)0x00000080)   /*!< SYSCLK divided by 2 */
#define RCC_CFGR_HPRE_DIV4 ((uint32_t)0x00000090)   /*!< SYSCLK divided by 4 */
#define RCC_CFGR_HPRE_DIV8 ((uint32_t)0x000000A0)   /*!< SYSCLK divided by 8 */
#define RCC_CFGR_HPRE_DIV16 ((uint32_t)0x000000B0)  /*!< SYSCLK divided by 16 */
#define RCC_CFGR_HPRE_DIV64 ((uint32_t)0x000000C0)  /*!< SYSCLK divided by 64 */
#define RCC_CFGR_HPRE_DIV128 ((uint32_t)0x000000D0) /*!< SYSCLK divided by 128 */
#define RCC_CFGR_HPRE_DIV256 ((uint32_t)0x000000E0) /*!< SYSCLK divided by 256 */
#define RCC_CFGR_HPRE_DIV512 ((uint32_t)0x000000F0) /*!< SYSCLK divided by 512 */

#define RCC_CFGR_PPRE1 ((uint32_t)0x00000700)   /*!< PRE1[2:0] bits (APB1 prescaler) */
#define RCC_CFGR_PPRE1_0 ((uint32_t)0x00000100) /*!< Bit 0 */
#define RCC_CFGR_PPRE1_1 ((uint32_t)0x00000200) /*!< Bit 1 */
#define RCC_CFGR_PPRE1_2 ((uint32_t)0x00000400) /*!< Bit 2 */

/*!< PPRE1 configuration */
#define RCC_CFGR_PPRE1_DIV1 ((uint32_t)0x00000000)  /*!< HCLK not divided */
#define RCC_CFGR_PPRE1_DIV2 ((uint32_t)0x00000400)  /*!< HCLK divided by 2 */
#define RCC_CFGR_PPRE1_DIV4 ((uint32_t)0x00000500)  /*!< HCLK divided by 4 */
#define RCC_CFGR_PPRE1_DIV8 ((uint32_t)0x00000600)  /*!< HCLK divided by 8 */
#define RCC_CFGR_PPRE1_DIV16 ((uint32_t)0x00000700) /*!< HCLK divided by 16 */

#define RCC_CFGR_PPRE2 ((uint32_t)0x00003800)   /*!< PRE2[2:0] bits (APB2 prescaler) */
#define RCC_CFGR_PPRE2_0 ((uint32_t)0x00000800) /*!< Bit 0 */
#define RCC_CFGR_PPRE2_1 ((uint32_t)0x00001000) /*!< Bit 1 */
#define RCC_CFGR_PPRE2_2 ((uint32_t)0x00002000) /*!< Bit 2 */

/*!< PPRE2 configuration */
#define RCC_CFGR_PPRE2_DIV1 ((uint32_t)0x00000000)  /*!< HCLK not divided */
#define RCC_CFGR_PPRE2_DIV2 ((uint32_t)0x00002000)  /*!< HCLK divided by 2 */
#define RCC_CFGR_PPRE2_DIV4 ((uint32_t)0x00002800)  /*!< HCLK divided by 4 */
#define RCC_CFGR_PPRE2_DIV8 ((uint32_t)0x00003000)  /*!< HCLK divided by 8 */
#define RCC_CFGR_PPRE2_DIV16 ((uint32_t)0x00003800) /*!< HCLK divided by 16 */

#define RCC_CFGR_ADCPRE ((uint32_t)0x0000C000)   /*!< ADCPRE[1:0] bits (ADC prescaler) */
#define RCC_CFGR_ADCPRE_0 ((uint32_t)0x00004000) /*!< Bit 0 */
#define RCC_CFGR_ADCPRE_1 ((uint32_t)0x00008000) /*!< Bit 1 */

/*!< ADCPPRE configuration */
#define RCC_CFGR_ADCPRE_DIV2 ((uint32_t)0x00000000) /*!< PCLK2 divided by 2 */
#define RCC_CFGR_ADCPRE_DIV4 ((uint32_t)0x00004000) /*!< PCLK2 divided by 4 */
#define RCC_CFGR_ADCPRE_DIV6 ((uint32_t)0x00008000) /*!< PCLK2 divided by 6 */
#define RCC_CFGR_ADCPRE_DIV8 ((uint32_t)0x0000C000) /*!< PCLK2 divided by 8 */

#define RCC_CFGR_PLLSRC ((uint32_t)0x00010000)   /*!< PLL entry clock source */
#define RCC_CFGR_PLLXTPRE ((uint32_t)0x00020000) /*!< HSE divider for PLL entry */

#define RCC_CFGR_PLLMULL ((uint32_t)0x003C0000)   /*!< PLLMUL[3:0] bits (PLL multiplication factor) */
#define RCC_CFGR_PLLMULL_0 ((uint32_t)0x00040000) /*!< Bit 0 */
#define RCC_CFGR_PLLMULL_1 ((uint32_t)0x00080000) /*!< Bit 1 */
#define RCC_CFGR_PLLMULL_2 ((uint32_t)0x00100000) /*!< Bit 2 */
#define RCC_CFGR_PLLMULL_3 ((uint32_t)0x00200000) /*!< Bit 3 */

/*!< PLLMUL configuration */
#define RCC_CFGR_PLLMULL2 ((uint32_t)0x00000000)  /*!< PLL input clock*2 */
#define RCC_CFGR_PLLMULL3 ((uint32_t)0x00040000)  /*!< PLL input clock*3 */
#define RCC_CFGR_PLLMULL4 ((uint32_t)0x00080000)  /*!< PLL input clock*4 */
#define RCC_CFGR_PLLMULL5 ((uint32_t)0x000C0000)  /*!< PLL input clock*5 */
#define RCC_CFGR_PLLMULL6 ((uint32_t)0x00100000)  /*!< PLL input clock*6 */
#define RCC_CFGR_PLLMULL7 ((uint32_t)0x00140000)  /*!< PLL input clock*7 */
#define RCC_CFGR_PLLMULL8 ((uint32_t)0x00180000)  /*!< PLL input clock*8 */
#define RCC_CFGR_PLLMULL9 ((uint32_t)0x001C0000)  /*!< PLL input clock*9 */
#define RCC_CFGR_PLLMULL10 ((uint32_t)0x00200000) /*!< PLL input clock10 */
#define RCC_CFGR_PLLMULL11 ((uint32_t)0x00240000) /*!< PLL input clock*11 */
#define RCC_CFGR_PLLMULL12 ((uint32_t)0x00280000) /*!< PLL input clock*12 */
#define RCC_CFGR_PLLMULL13 ((uint32_t)0x002C0000) /*!< PLL input clock*13 */
#define RCC_CFGR_PLLMULL14 ((uint32_t)0x00300000) /*!< PLL input clock*14 */
#define RCC_CFGR_PLLMULL15 ((uint32_t)0x00340000) /*!< PLL input clock*15 */
#define RCC_CFGR_PLLMULL16 ((uint32_t)0x00380000) /*!< PLL input clock*16 */

#define RCC_CFGR_USBPRE ((uint32_t)0x00400000) /*!< USB prescaler */

#define RCC_CFGR_MCO ((uint32_t)0x07000000)   /*!< MCO[2:0] bits (Microcontroller Clock Output) */
#define RCC_CFGR_MCO_0 ((uint32_t)0x01000000) /*!< Bit 0 */
#define RCC_CFGR_MCO_1 ((uint32_t)0x02000000) /*!< Bit 1 */
#define RCC_CFGR_MCO_2 ((uint32_t)0x04000000) /*!< Bit 2 */

/*!< MCO configuration */
#define RCC_CFGR_MCO_NOCLOCK ((uint32_t)0x00000000) /*!< No clock */
#define RCC_CFGR_MCO_LSI ((uint32_t)0x02000000)     //
#define RCC_CFGR_MCO_LSE ((uint32_t)0x03000000)
#define RCC_CFGR_MCO_SYSCLK ((uint32_t)0x04000000) /*!< System clock selected */
#define RCC_CFGR_MCO_HSI ((uint32_t)0x05000000)    /*!< Internal 48 MHz RC oscillator clock selected */
#define RCC_CFGR_MCO_HSE ((uint32_t)0x06000000)    /*!< External 1-25 MHz oscillator clock selected */
#define RCC_CFGR_MCO_PLL ((uint32_t)0x07000000)    /*!< PLL clock divided by 2 selected*/

/*!<******************  Bit definition for RCC_CIR register  ********************/
#define RCC_CIR_LSIRDYF ((uint32_t)0x00000001)  /*!< LSI Ready Interrupt flag */
#define RCC_CIR_LSERDYF ((uint32_t)0x00000002)  /*!< LSE Ready Interrupt flag */
#define RCC_CIR_HSIRDYF ((uint32_t)0x00000004)  /*!< HSI Ready Interrupt flag */
#define RCC_CIR_HSERDYF ((uint32_t)0x00000008)  /*!< HSE Ready Interrupt flag */
#define RCC_CIR_PLLRDYF ((uint32_t)0x00000010)  /*!< PLL Ready Interrupt flag */
#define RCC_CIR_CSSF ((uint32_t)0x00000080)     /*!< Clock Security System Interrupt flag */
#define RCC_CIR_LSIRDYIE ((uint32_t)0x00000100) /*!< LSI Ready Interrupt Enable */
#define RCC_CIR_LSERDYIE ((uint32_t)0x00000200) /*!< LSE Ready Interrupt Enable */
#define RCC_CIR_HSIRDYIE ((uint32_t)0x00000400) /*!< HSI Ready Interrupt Enable */
#define RCC_CIR_HSERDYIE ((uint32_t)0x00000800) /*!< HSE Ready Interrupt Enable */
#define RCC_CIR_PLLRDYIE ((uint32_t)0x00001000) /*!< PLL Ready Interrupt Enable */
#define RCC_CIR_LSIRDYC ((uint32_t)0x00010000)  /*!< LSI Ready Interrupt Clear */
#define RCC_CIR_LSERDYC ((uint32_t)0x00020000)  /*!< LSE Ready Interrupt Clear */
#define RCC_CIR_HSIRDYC ((uint32_t)0x00040000)  /*!< HSI Ready Interrupt Clear */
#define RCC_CIR_HSERDYC ((uint32_t)0x00080000)  /*!< HSE Ready Interrupt Clear */
#define RCC_CIR_PLLRDYC ((uint32_t)0x00100000)  /*!< PLL Ready Interrupt Clear */
#define RCC_CIR_CSSC ((uint32_t)0x00800000)     /*!< Clock Security System Interrupt Clear */

/*****************  Bit definition for RCC_APB2RSTR register  *****************/
#define RCC_APB2RSTR_AFIORST ((uint32_t)0x00000001)  /*!< Alternate Function I/O reset */
#define RCC_APB2RSTR_IOPARST ((uint32_t)0x00000004)  /*!< I/O port A reset */
#define RCC_APB2RSTR_IOPBRST ((uint32_t)0x00000008)  /*!< IO port B reset */
#define RCC_APB2RSTR_IOPCRST ((uint32_t)0x00000010)  /*!< IO port C reset */
#define RCC_APB2RSTR_IOPDRST ((uint32_t)0x00000020)  /*!< IO port D reset */
#define RCC_APB2RSTR_IOPERST ((uint32_t)0x00000040)  /*!< IO port E reset */
#define RCC_APB2RSTR_IOPFRST ((uint32_t)0x00000080)  /*!< IO port F reset */
#define RCC_APB2RSTR_IOPGRST ((uint32_t)0x00000100)  /*!< IO port G reset */
#define RCC_APB2RSTR_ADC1RST ((uint32_t)0x00000200)  /*!< ADC 1 interface reset */
#define RCC_APB2RSTR_ADC2RST ((uint32_t)0x00000400)  /*!< ADC 2 interface reset */
#define RCC_APB2RSTR_TIM1RST ((uint32_t)0x00000800)  /*!< TIM1 Timer reset */
#define RCC_APB2RSTR_SPI1RST ((uint32_t)0x00001000)  /*!< SPI 1 reset */
#define RCC_APB2RSTR_TIM8RST ((uint32_t)0x00002000)  /*!< TIM8 Timer reset */
#define RCC_APB2RSTR_UART1RST ((uint32_t)0x00004000) /*!< UART1 reset */

/*****************  Bit definition for RCC_APB1RSTR register  *****************/
#define RCC_APB1RSTR_TIM2RST ((uint32_t)0x00000001) /*!< Timer 2 reset */
#define RCC_APB1RSTR_TIM3RST ((uint32_t)0x00000002) /*!< Timer 3 reset */
#define RCC_APB1RSTR_TIM4RST ((uint32_t)0x00000004) /*!< Timer 4 reset */
#define RCC_APB1RSTR_TIM5RST ((uint32_t)0x00000008) /*!< Timer 5 reset */
#define RCC_APB1RSTR_TIM6RST ((uint32_t)0x00000010) /*!< Timer 6 reset */
#define RCC_APB1RSTR_TIM7RST ((uint32_t)0x00000020) /*!< Timer 7 reset */
#define RCC_APB1RSTR_WWDGRST ((uint32_t)0x00000800) /*!< Window Watchdog reset */
#define RCC_APB1RSTR_SPI2RST ((uint32_t)0x00004000) /*!< SPI 2 reset */

#define RCC_APB1RSTR_UART2RST ((uint32_t)0x00020000) /*!< UART 2 reset */
#define RCC_APB1RSTR_UART3RST ((uint32_t)0x00040000) /*!< RUART 3 reset */

#define RCC_APB1RSTR_I2C1RST ((uint32_t)0x00200000) /*!< I2C 1 reset */
#define RCC_APB1RSTR_I2C2RST ((uint32_t)0x00400000) /*!< I2C 2 reset */
#define RCC_APB1RSTR_USBRST ((uint32_t)0x00800000)  /*!< USB reset */
#define RCC_APB1RSTR_CANRST ((uint32_t)0x02000000)  /*!< CAN reset */
#define RCC_APB1RSTR_BKPRST ((uint32_t)0x08000000)  /*!< Backup interface reset */
#define RCC_APB1RSTR_PWRRST ((uint32_t)0x10000000)  /*!< Power interface reset */
#define RCC_APB1RSTR_DACRST ((uint32_t)0x20000000)  /*!< DAC interface reset */

/******************  Bit definition for RCC_AHBENR register  ******************/
#define RCC_AHBENR_DMA1EN ((uint16_t)0x0001)  /*!< DMA1 clock enable */
#define RCC_AHBENR_DMA2EN ((uint16_t)0x0002)  /*!< DMA2 clock enable */
#define RCC_AHBENR_SRAMEN ((uint16_t)0x0004)  /*!< SRAM interface clock enable */
#define RCC_AHBENR_FLITFEN ((uint16_t)0x0010) /*!< FLITF clock enable */
#define RCC_AHBENR_CRCEN ((uint16_t)0x0040)   /*!< CRC clock enable */

/******************  Bit definition for RCC_APB2ENR register  *****************/
#define RCC_APB2ENR_AFIOEN ((uint32_t)0x00000001)  /*!< Alternate Function I/O clock enable */
#define RCC_APB2ENR_IOPAEN ((uint32_t)0x00000004)  /*!< I/O port A clock enable */
#define RCC_APB2ENR_IOPBEN ((uint32_t)0x00000008)  /*!< I/O port B clock enable */
#define RCC_APB2ENR_IOPCEN ((uint32_t)0x00000010)  /*!< I/O port C clock enable */
#define RCC_APB2ENR_IOPDEN ((uint32_t)0x00000020)  /*!< I/O port D clock enable */
#define RCC_APB2ENR_IOPEEN ((uint32_t)0x00000040)  /*!< I/O port E clock enable */
#define RCC_APB2ENR_IOPFEN ((uint32_t)0x00000080)  /*!< I/O port F clock enable */
#define RCC_APB2ENR_IOPGEN ((uint32_t)0x00000100)  /*!< I/O port G clock enable */
#define RCC_APB2ENR_ADC1EN ((uint32_t)0x00000200)  /*!< ADC 1 interface clock enable */
#define RCC_APB2ENR_ADC2EN ((uint32_t)0x00000400)  /*!< ADC 2 interface clock enable */
#define RCC_APB2ENR_TIM1EN ((uint32_t)0x00000800)  /*!< TIM1 Timer clock enable */
#define RCC_APB2ENR_SPI1EN ((uint32_t)0x00001000)  /*!< SPI 1 clock enable */
#define RCC_APB2ENR_TIM8EN ((uint32_t)0x00002000)  /*!< TIM8 Timer clock enable */
#define RCC_APB2ENR_UART1EN ((uint32_t)0x00004000) /*!< UART1 clock enable */

/*****************  Bit definition for RCC_APB1ENR register  ******************/
#define RCC_APB1ENR_TIM2EN ((uint32_t)0x00000001)  /*!< Timer 2 clock enabled*/
#define RCC_APB1ENR_TIM3EN ((uint32_t)0x00000002)  /*!< Timer 3 clock enable */
#define RCC_APB1ENR_TIM4EN ((uint32_t)0x00000004)  /*!< Timer 4 clock enable */
#define RCC_APB1ENR_TIM5EN ((uint32_t)0x00000008)  /*!< Timer 5 clock enable */
#define RCC_APB1ENR_TIM6EN ((uint32_t)0x00000010)  /*!< Timer 6 clock enable */
#define RCC_APB1ENR_TIM7EN ((uint32_t)0x00000020)  /*!< Timer 7 clock enable */
#define RCC_APB1ENR_WWDGEN ((uint32_t)0x00000800)  /*!< Window Watchdog clock enable */
#define RCC_APB1ENR_SPI2EN ((uint32_t)0x00004000)  /*!< SPI 2 clock enable */
#define RCC_APB1ENR_UART2EN ((uint32_t)0x00020000) /*!< UART 2 clock enable */
#define RCC_APB1ENR_UART3EN ((uint32_t)0x00040000) /*!< UART 3 clock enable */
#define RCC_APB1ENR_I2C1EN ((uint32_t)0x00200000)  /*!< I2C 1 clock enable */
#define RCC_APB1ENR_I2C2EN ((uint32_t)0x00400000)  /*!< I2C 2 clock enable */
#define RCC_APB1ENR_USBEN ((uint32_t)0x00800000)   /*!< USB clock enable */
#define RCC_APB1ENR_CANEN ((uint32_t)0x02000000)   /*!< CAN clock enable */
#define RCC_APB1ENR_BKPEN ((uint32_t)0x08000000)   /*!< Backup interface clock enable */
#define RCC_APB1ENR_PWREN ((uint32_t)0x10000000)   /*!< Power interface clock enable */
#define RCC_APB1ENR_DACEN ((uint32_t)0x20000000)   /*!< DAC interface clock enable */

/*******************  Bit definition for RCC_BDCR register  *******************/
#define RCC_BDCR_LSEON ((uint32_t)0x00000001)  /*!< External Low Speed oscillator enable */
#define RCC_BDCR_LSERDY ((uint32_t)0x00000002) /*!< External Low Speed oscillator Ready */
#define RCC_BDCR_LSEBYP ((uint32_t)0x00000004) /*!< External Low Speed oscillator Bypass */

#define RCC_BDCR_RTCSEL ((uint32_t)0x00000300)   /*!< RTCSEL[1:0] bits (RTC clock source selection) */
#define RCC_BDCR_RTCSEL_0 ((uint32_t)0x00000100) /*!< Bit 0 */
#define RCC_BDCR_RTCSEL_1 ((uint32_t)0x00000200) /*!< Bit 1 */

/*!< RTC congiguration */
#define RCC_BDCR_RTCSEL_NOCLOCK ((uint32_t)0x00000000) /*!< No clock */
#define RCC_BDCR_RTCSEL_LSE ((uint32_t)0x00000100)     /*!< LSE oscillator clock used as RTC clock */
#define RCC_BDCR_RTCSEL_LSI ((uint32_t)0x00000200)     /*!< LSI oscillator clock used as RTC clock */
#define RCC_BDCR_RTCSEL_HSE ((uint32_t)0x00000300)     /*!< HSE oscillator clock divided by 128 used as RTC clock */

#define RCC_BDCR_RTCEN ((uint32_t)0x00008000) /*!< RTC clock enable */
#define RCC_BDCR_BDRST ((uint32_t)0x00010000) /*!< Backup domain software reset  */

/*******************  Bit definition for RCC_CSR register  ********************/
#define RCC_CSR_LSION ((uint32_t)0x00000001)    /*!< Internal Low Speed oscillator enable */
#define RCC_CSR_LSIRDY ((uint32_t)0x00000002)   /*!< Internal Low Speed oscillator Ready */
#define RCC_CSR_RMVF ((uint32_t)0x01000000)     /*!< Remove reset flag */
#define RCC_CSR_PINRSTF ((uint32_t)0x04000000)  /*!< PIN reset flag */
#define RCC_CSR_PORRSTF ((uint32_t)0x08000000)  /*!< POR/PDR reset flag */
#define RCC_CSR_SFTRSTF ((uint32_t)0x10000000)  /*!< Software Reset flag */
#define RCC_CSR_IWDGRSTF ((uint32_t)0x20000000) /*!< Independent Watchdog reset flag */
#define RCC_CSR_WWDGRSTF ((uint32_t)0x40000000) /*!< Window watchdog reset flag */
#define RCC_CSR_LPWRRSTF ((uint32_t)0x80000000) /*!< Low-Power reset flag */

/******************************************************************************/
/*                                                                            */
/*                General Purpose and Alternate Function IO                   */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for GPIO_CRL register  *******************/
#define GPIO_CRL_MODE ((uint32_t)0x33333333) /*!< Port x mode bits */

#define GPIO_CRL_MODE0 ((uint32_t)0x00000003)   /*!< MODE0[1:0] bits (Port x mode bits, pin 0) */
#define GPIO_CRL_MODE0_0 ((uint32_t)0x00000001) /*!< Bit 0 */
#define GPIO_CRL_MODE0_1 ((uint32_t)0x00000002) /*!< Bit 1 */

#define GPIO_CRL_MODE1 ((uint32_t)0x00000030)   /*!< MODE1[1:0] bits (Port x mode bits, pin 1) */
#define GPIO_CRL_MODE1_0 ((uint32_t)0x00000010) /*!< Bit 0 */
#define GPIO_CRL_MODE1_1 ((uint32_t)0x00000020) /*!< Bit 1 */

#define GPIO_CRL_MODE2 ((uint32_t)0x00000300)   /*!< MODE2[1:0] bits (Port x mode bits, pin 2) */
#define GPIO_CRL_MODE2_0 ((uint32_t)0x00000100) /*!< Bit 0 */
#define GPIO_CRL_MODE2_1 ((uint32_t)0x00000200) /*!< Bit 1 */

#define GPIO_CRL_MODE3 ((uint32_t)0x00003000)   /*!< MODE3[1:0] bits (Port x mode bits, pin 3) */
#define GPIO_CRL_MODE3_0 ((uint32_t)0x00001000) /*!< Bit 0 */
#define GPIO_CRL_MODE3_1 ((uint32_t)0x00002000) /*!< Bit 1 */

#define GPIO_CRL_MODE4 ((uint32_t)0x00030000)   /*!< MODE4[1:0] bits (Port x mode bits, pin 4) */
#define GPIO_CRL_MODE4_0 ((uint32_t)0x00010000) /*!< Bit 0 */
#define GPIO_CRL_MODE4_1 ((uint32_t)0x00020000) /*!< Bit 1 */

#define GPIO_CRL_MODE5 ((uint32_t)0x00300000)   /*!< MODE5[1:0] bits (Port x mode bits, pin 5) */
#define GPIO_CRL_MODE5_0 ((uint32_t)0x00100000) /*!< Bit 0 */
#define GPIO_CRL_MODE5_1 ((uint32_t)0x00200000) /*!< Bit 1 */

#define GPIO_CRL_MODE6 ((uint32_t)0x03000000)   /*!< MODE6[1:0] bits (Port x mode bits, pin 6) */
#define GPIO_CRL_MODE6_0 ((uint32_t)0x01000000) /*!< Bit 0 */
#define GPIO_CRL_MODE6_1 ((uint32_t)0x02000000) /*!< Bit 1 */

#define GPIO_CRL_MODE7 ((uint32_t)0x30000000)   /*!< MODE7[1:0] bits (Port x mode bits, pin 7) */
#define GPIO_CRL_MODE7_0 ((uint32_t)0x10000000) /*!< Bit 0 */
#define GPIO_CRL_MODE7_1 ((uint32_t)0x20000000) /*!< Bit 1 */

#define GPIO_CRL_CNF ((uint32_t)0xCCCCCCCC) /*!< Port x configuration bits */

#define GPIO_CRL_CNF0 ((uint32_t)0x0000000C)   /*!< CNF0[1:0] bits (Port x configuration bits, pin 0) */
#define GPIO_CRL_CNF0_0 ((uint32_t)0x00000004) /*!< Bit 0 */
#define GPIO_CRL_CNF0_1 ((uint32_t)0x00000008) /*!< Bit 1 */

#define GPIO_CRL_CNF1 ((uint32_t)0x000000C0)   /*!< CNF1[1:0] bits (Port x configuration bits, pin 1) */
#define GPIO_CRL_CNF1_0 ((uint32_t)0x00000040) /*!< Bit 0 */
#define GPIO_CRL_CNF1_1 ((uint32_t)0x00000080) /*!< Bit 1 */

#define GPIO_CRL_CNF2 ((uint32_t)0x00000C00)   /*!< CNF2[1:0] bits (Port x configuration bits, pin 2) */
#define GPIO_CRL_CNF2_0 ((uint32_t)0x00000400) /*!< Bit 0 */
#define GPIO_CRL_CNF2_1 ((uint32_t)0x00000800) /*!< Bit 1 */

#define GPIO_CRL_CNF3 ((uint32_t)0x0000C000)   /*!< CNF3[1:0] bits (Port x configuration bits, pin 3) */
#define GPIO_CRL_CNF3_0 ((uint32_t)0x00004000) /*!< Bit 0 */
#define GPIO_CRL_CNF3_1 ((uint32_t)0x00008000) /*!< Bit 1 */

#define GPIO_CRL_CNF4 ((uint32_t)0x000C0000)   /*!< CNF4[1:0] bits (Port x configuration bits, pin 4) */
#define GPIO_CRL_CNF4_0 ((uint32_t)0x00040000) /*!< Bit 0 */
#define GPIO_CRL_CNF4_1 ((uint32_t)0x00080000) /*!< Bit 1 */

#define GPIO_CRL_CNF5 ((uint32_t)0x00C00000)   /*!< CNF5[1:0] bits (Port x configuration bits, pin 5) */
#define GPIO_CRL_CNF5_0 ((uint32_t)0x00400000) /*!< Bit 0 */
#define GPIO_CRL_CNF5_1 ((uint32_t)0x00800000) /*!< Bit 1 */

#define GPIO_CRL_CNF6 ((uint32_t)0x0C000000)   /*!< CNF6[1:0] bits (Port x configuration bits, pin 6) */
#define GPIO_CRL_CNF6_0 ((uint32_t)0x04000000) /*!< Bit 0 */
#define GPIO_CRL_CNF6_1 ((uint32_t)0x08000000) /*!< Bit 1 */

#define GPIO_CRL_CNF7 ((uint32_t)0xC0000000)   /*!< CNF7[1:0] bits (Port x configuration bits, pin 7) */
#define GPIO_CRL_CNF7_0 ((uint32_t)0x40000000) /*!< Bit 0 */
#define GPIO_CRL_CNF7_1 ((uint32_t)0x80000000) /*!< Bit 1 */

/*******************  Bit definition for GPIO_CRH register  *******************/
#define GPIO_CRH_MODE ((uint32_t)0x33333333) /*!< Port x mode bits */

#define GPIO_CRH_MODE8 ((uint32_t)0x00000003)   /*!< MODE8[1:0] bits (Port x mode bits, pin 8) */
#define GPIO_CRH_MODE8_0 ((uint32_t)0x00000001) /*!< Bit 0 */
#define GPIO_CRH_MODE8_1 ((uint32_t)0x00000002) /*!< Bit 1 */

#define GPIO_CRH_MODE9 ((uint32_t)0x00000030)   /*!< MODE9[1:0] bits (Port x mode bits, pin 9) */
#define GPIO_CRH_MODE9_0 ((uint32_t)0x00000010) /*!< Bit 0 */
#define GPIO_CRH_MODE9_1 ((uint32_t)0x00000020) /*!< Bit 1 */

#define GPIO_CRH_MODE10 ((uint32_t)0x00000300)   /*!< MODE10[1:0] bits (Port x mode bits, pin 10) */
#define GPIO_CRH_MODE10_0 ((uint32_t)0x00000100) /*!< Bit 0 */
#define GPIO_CRH_MODE10_1 ((uint32_t)0x00000200) /*!< Bit 1 */

#define GPIO_CRH_MODE11 ((uint32_t)0x00003000)   /*!< MODE11[1:0] bits (Port x mode bits, pin 11) */
#define GPIO_CRH_MODE11_0 ((uint32_t)0x00001000) /*!< Bit 0 */
#define GPIO_CRH_MODE11_1 ((uint32_t)0x00002000) /*!< Bit 1 */

#define GPIO_CRH_MODE12 ((uint32_t)0x00030000)   /*!< MODE12[1:0] bits (Port x mode bits, pin 12) */
#define GPIO_CRH_MODE12_0 ((uint32_t)0x00010000) /*!< Bit 0 */
#define GPIO_CRH_MODE12_1 ((uint32_t)0x00020000) /*!< Bit 1 */

#define GPIO_CRH_MODE13 ((uint32_t)0x00300000)   /*!< MODE13[1:0] bits (Port x mode bits, pin 13) */
#define GPIO_CRH_MODE13_0 ((uint32_t)0x00100000) /*!< Bit 0 */
#define GPIO_CRH_MODE13_1 ((uint32_t)0x00200000) /*!< Bit 1 */

#define GPIO_CRH_MODE14 ((uint32_t)0x03000000)   /*!< MODE14[1:0] bits (Port x mode bits, pin 14) */
#define GPIO_CRH_MODE14_0 ((uint32_t)0x01000000) /*!< Bit 0 */
#define GPIO_CRH_MODE14_1 ((uint32_t)0x02000000) /*!< Bit 1 */

#define GPIO_CRH_MODE15 ((uint32_t)0x30000000)   /*!< MODE15[1:0] bits (Port x mode bits, pin 15) */
#define GPIO_CRH_MODE15_0 ((uint32_t)0x10000000) /*!< Bit 0 */
#define GPIO_CRH_MODE15_1 ((uint32_t)0x20000000) /*!< Bit 1 */

#define GPIO_CRH_CNF ((uint32_t)0xCCCCCCCC) /*!< Port x configuration bits */

#define GPIO_CRH_CNF8 ((uint32_t)0x0000000C)   /*!< CNF8[1:0] bits (Port x configuration bits, pin 8) */
#define GPIO_CRH_CNF8_0 ((uint32_t)0x00000004) /*!< Bit 0 */
#define GPIO_CRH_CNF8_1 ((uint32_t)0x00000008) /*!< Bit 1 */

#define GPIO_CRH_CNF9 ((uint32_t)0x000000C0)   /*!< CNF9[1:0] bits (Port x configuration bits, pin 9) */
#define GPIO_CRH_CNF9_0 ((uint32_t)0x00000040) /*!< Bit 0 */
#define GPIO_CRH_CNF9_1 ((uint32_t)0x00000080) /*!< Bit 1 */

#define GPIO_CRH_CNF10 ((uint32_t)0x00000C00)   /*!< CNF10[1:0] bits (Port x configuration bits, pin 10) */
#define GPIO_CRH_CNF10_0 ((uint32_t)0x00000400) /*!< Bit 0 */
#define GPIO_CRH_CNF10_1 ((uint32_t)0x00000800) /*!< Bit 1 */

#define GPIO_CRH_CNF11 ((uint32_t)0x0000C000)   /*!< CNF11[1:0] bits (Port x configuration bits, pin 11) */
#define GPIO_CRH_CNF11_0 ((uint32_t)0x00004000) /*!< Bit 0 */
#define GPIO_CRH_CNF11_1 ((uint32_t)0x00008000) /*!< Bit 1 */

#define GPIO_CRH_CNF12 ((uint32_t)0x000C0000)   /*!< CNF12[1:0] bits (Port x configuration bits, pin 12) */
#define GPIO_CRH_CNF12_0 ((uint32_t)0x00040000) /*!< Bit 0 */
#define GPIO_CRH_CNF12_1 ((uint32_t)0x00080000) /*!< Bit 1 */

#define GPIO_CRH_CNF13 ((uint32_t)0x00C00000)   /*!< CNF13[1:0] bits (Port x configuration bits, pin 13) */
#define GPIO_CRH_CNF13_0 ((uint32_t)0x00400000) /*!< Bit 0 */
#define GPIO_CRH_CNF13_1 ((uint32_t)0x00800000) /*!< Bit 1 */

#define GPIO_CRH_CNF14 ((uint32_t)0x0C000000)   /*!< CNF14[1:0] bits (Port x configuration bits, pin 14) */
#define GPIO_CRH_CNF14_0 ((uint32_t)0x04000000) /*!< Bit 0 */
#define GPIO_CRH_CNF14_1 ((uint32_t)0x08000000) /*!< Bit 1 */

#define GPIO_CRH_CNF15 ((uint32_t)0xC0000000)   /*!< CNF15[1:0] bits (Port x configuration bits, pin 15) */
#define GPIO_CRH_CNF15_0 ((uint32_t)0x40000000) /*!< Bit 0 */
#define GPIO_CRH_CNF15_1 ((uint32_t)0x80000000) /*!< Bit 1 */

/*!<******************  Bit definition for GPIO_IDR register  *******************/
#define GPIO_IDR_IDR0 ((uint16_t)0x0001)  /*!< Port input data, bit 0 */
#define GPIO_IDR_IDR1 ((uint16_t)0x0002)  /*!< Port input data, bit 1 */
#define GPIO_IDR_IDR2 ((uint16_t)0x0004)  /*!< Port input data, bit 2 */
#define GPIO_IDR_IDR3 ((uint16_t)0x0008)  /*!< Port input data, bit 3 */
#define GPIO_IDR_IDR4 ((uint16_t)0x0010)  /*!< Port input data, bit 4 */
#define GPIO_IDR_IDR5 ((uint16_t)0x0020)  /*!< Port input data, bit 5 */
#define GPIO_IDR_IDR6 ((uint16_t)0x0040)  /*!< Port input data, bit 6 */
#define GPIO_IDR_IDR7 ((uint16_t)0x0080)  /*!< Port input data, bit 7 */
#define GPIO_IDR_IDR8 ((uint16_t)0x0100)  /*!< Port input data, bit 8 */
#define GPIO_IDR_IDR9 ((uint16_t)0x0200)  /*!< Port input data, bit 9 */
#define GPIO_IDR_IDR10 ((uint16_t)0x0400) /*!< Port input data, bit 10 */
#define GPIO_IDR_IDR11 ((uint16_t)0x0800) /*!< Port input data, bit 11 */
#define GPIO_IDR_IDR12 ((uint16_t)0x1000) /*!< Port input data, bit 12 */
#define GPIO_IDR_IDR13 ((uint16_t)0x2000) /*!< Port input data, bit 13 */
#define GPIO_IDR_IDR14 ((uint16_t)0x4000) /*!< Port input data, bit 14 */
#define GPIO_IDR_IDR15 ((uint16_t)0x8000) /*!< Port input data, bit 15 */

/*******************  Bit definition for GPIO_ODR register  *******************/
#define GPIO_ODR_ODR0 ((uint16_t)0x0001)  /*!< Port output data, bit 0 */
#define GPIO_ODR_ODR1 ((uint16_t)0x0002)  /*!< Port output data, bit 1 */
#define GPIO_ODR_ODR2 ((uint16_t)0x0004)  /*!< Port output data, bit 2 */
#define GPIO_ODR_ODR3 ((uint16_t)0x0008)  /*!< Port output data, bit 3 */
#define GPIO_ODR_ODR4 ((uint16_t)0x0010)  /*!< Port output data, bit 4 */
#define GPIO_ODR_ODR5 ((uint16_t)0x0020)  /*!< Port output data, bit 5 */
#define GPIO_ODR_ODR6 ((uint16_t)0x0040)  /*!< Port output data, bit 6 */
#define GPIO_ODR_ODR7 ((uint16_t)0x0080)  /*!< Port output data, bit 7 */
#define GPIO_ODR_ODR8 ((uint16_t)0x0100)  /*!< Port output data, bit 8 */
#define GPIO_ODR_ODR9 ((uint16_t)0x0200)  /*!< Port output data, bit 9 */
#define GPIO_ODR_ODR10 ((uint16_t)0x0400) /*!< Port output data, bit 10 */
#define GPIO_ODR_ODR11 ((uint16_t)0x0800) /*!< Port output data, bit 11 */
#define GPIO_ODR_ODR12 ((uint16_t)0x1000) /*!< Port output data, bit 12 */
#define GPIO_ODR_ODR13 ((uint16_t)0x2000) /*!< Port output data, bit 13 */
#define GPIO_ODR_ODR14 ((uint16_t)0x4000) /*!< Port output data, bit 14 */
#define GPIO_ODR_ODR15 ((uint16_t)0x8000) /*!< Port output data, bit 15 */

/******************  Bit definition for GPIO_BSRR register  *******************/
#define GPIO_BSRR_BS0 ((uint32_t)0x00000001)  /*!< Port x Set bit 0 */
#define GPIO_BSRR_BS1 ((uint32_t)0x00000002)  /*!< Port x Set bit 1 */
#define GPIO_BSRR_BS2 ((uint32_t)0x00000004)  /*!< Port x Set bit 2 */
#define GPIO_BSRR_BS3 ((uint32_t)0x00000008)  /*!< Port x Set bit 3 */
#define GPIO_BSRR_BS4 ((uint32_t)0x00000010)  /*!< Port x Set bit 4 */
#define GPIO_BSRR_BS5 ((uint32_t)0x00000020)  /*!< Port x Set bit 5 */
#define GPIO_BSRR_BS6 ((uint32_t)0x00000040)  /*!< Port x Set bit 6 */
#define GPIO_BSRR_BS7 ((uint32_t)0x00000080)  /*!< Port x Set bit 7 */
#define GPIO_BSRR_BS8 ((uint32_t)0x00000100)  /*!< Port x Set bit 8 */
#define GPIO_BSRR_BS9 ((uint32_t)0x00000200)  /*!< Port x Set bit 9 */
#define GPIO_BSRR_BS10 ((uint32_t)0x00000400) /*!< Port x Set bit 10 */
#define GPIO_BSRR_BS11 ((uint32_t)0x00000800) /*!< Port x Set bit 11 */
#define GPIO_BSRR_BS12 ((uint32_t)0x00001000) /*!< Port x Set bit 12 */
#define GPIO_BSRR_BS13 ((uint32_t)0x00002000) /*!< Port x Set bit 13 */
#define GPIO_BSRR_BS14 ((uint32_t)0x00004000) /*!< Port x Set bit 14 */
#define GPIO_BSRR_BS15 ((uint32_t)0x00008000) /*!< Port x Set bit 15 */

#define GPIO_BSRR_BR0 ((uint32_t)0x00010000)  /*!< Port x Reset bit 0 */
#define GPIO_BSRR_BR1 ((uint32_t)0x00020000)  /*!< Port x Reset bit 1 */
#define GPIO_BSRR_BR2 ((uint32_t)0x00040000)  /*!< Port x Reset bit 2 */
#define GPIO_BSRR_BR3 ((uint32_t)0x00080000)  /*!< Port x Reset bit 3 */
#define GPIO_BSRR_BR4 ((uint32_t)0x00100000)  /*!< Port x Reset bit 4 */
#define GPIO_BSRR_BR5 ((uint32_t)0x00200000)  /*!< Port x Reset bit 5 */
#define GPIO_BSRR_BR6 ((uint32_t)0x00400000)  /*!< Port x Reset bit 6 */
#define GPIO_BSRR_BR7 ((uint32_t)0x00800000)  /*!< Port x Reset bit 7 */
#define GPIO_BSRR_BR8 ((uint32_t)0x01000000)  /*!< Port x Reset bit 8 */
#define GPIO_BSRR_BR9 ((uint32_t)0x02000000)  /*!< Port x Reset bit 9 */
#define GPIO_BSRR_BR10 ((uint32_t)0x04000000) /*!< Port x Reset bit 10 */
#define GPIO_BSRR_BR11 ((uint32_t)0x08000000) /*!< Port x Reset bit 11 */
#define GPIO_BSRR_BR12 ((uint32_t)0x10000000) /*!< Port x Reset bit 12 */
#define GPIO_BSRR_BR13 ((uint32_t)0x20000000) /*!< Port x Reset bit 13 */
#define GPIO_BSRR_BR14 ((uint32_t)0x40000000) /*!< Port x Reset bit 14 */
#define GPIO_BSRR_BR15 ((uint32_t)0x80000000) /*!< Port x Reset bit 15 */

/*******************  Bit definition for GPIO_BRR register  *******************/
#define GPIO_BRR_BR0 ((uint16_t)0x0001)  /*!< Port x Reset bit 0 */
#define GPIO_BRR_BR1 ((uint16_t)0x0002)  /*!< Port x Reset bit 1 */
#define GPIO_BRR_BR2 ((uint16_t)0x0004)  /*!< Port x Reset bit 2 */
#define GPIO_BRR_BR3 ((uint16_t)0x0008)  /*!< Port x Reset bit 3 */
#define GPIO_BRR_BR4 ((uint16_t)0x0010)  /*!< Port x Reset bit 4 */
#define GPIO_BRR_BR5 ((uint16_t)0x0020)  /*!< Port x Reset bit 5 */
#define GPIO_BRR_BR6 ((uint16_t)0x0040)  /*!< Port x Reset bit 6 */
#define GPIO_BRR_BR7 ((uint16_t)0x0080)  /*!< Port x Reset bit 7 */
#define GPIO_BRR_BR8 ((uint16_t)0x0100)  /*!< Port x Reset bit 8 */
#define GPIO_BRR_BR9 ((uint16_t)0x0200)  /*!< Port x Reset bit 9 */
#define GPIO_BRR_BR10 ((uint16_t)0x0400) /*!< Port x Reset bit 10 */
#define GPIO_BRR_BR11 ((uint16_t)0x0800) /*!< Port x Reset bit 11 */
#define GPIO_BRR_BR12 ((uint16_t)0x1000) /*!< Port x Reset bit 12 */
#define GPIO_BRR_BR13 ((uint16_t)0x2000) /*!< Port x Reset bit 13 */
#define GPIO_BRR_BR14 ((uint16_t)0x4000) /*!< Port x Reset bit 14 */
#define GPIO_BRR_BR15 ((uint16_t)0x8000) /*!< Port x Reset bit 15 */

/******************  Bit definition for GPIO_LCKR register  *******************/
#define GPIO_LCKR_LCK0 ((uint32_t)0x00000001)  /*!< Port x Lock bit 0 */
#define GPIO_LCKR_LCK1 ((uint32_t)0x00000002)  /*!< Port x Lock bit 1 */
#define GPIO_LCKR_LCK2 ((uint32_t)0x00000004)  /*!< Port x Lock bit 2 */
#define GPIO_LCKR_LCK3 ((uint32_t)0x00000008)  /*!< Port x Lock bit 3 */
#define GPIO_LCKR_LCK4 ((uint32_t)0x00000010)  /*!< Port x Lock bit 4 */
#define GPIO_LCKR_LCK5 ((uint32_t)0x00000020)  /*!< Port x Lock bit 5 */
#define GPIO_LCKR_LCK6 ((uint32_t)0x00000040)  /*!< Port x Lock bit 6 */
#define GPIO_LCKR_LCK7 ((uint32_t)0x00000080)  /*!< Port x Lock bit 7 */
#define GPIO_LCKR_LCK8 ((uint32_t)0x00000100)  /*!< Port x Lock bit 8 */
#define GPIO_LCKR_LCK9 ((uint32_t)0x00000200)  /*!< Port x Lock bit 9 */
#define GPIO_LCKR_LCK10 ((uint32_t)0x00000400) /*!< Port x Lock bit 10 */
#define GPIO_LCKR_LCK11 ((uint32_t)0x00000800) /*!< Port x Lock bit 11 */
#define GPIO_LCKR_LCK12 ((uint32_t)0x00001000) /*!< Port x Lock bit 12 */
#define GPIO_LCKR_LCK13 ((uint32_t)0x00002000) /*!< Port x Lock bit 13 */
#define GPIO_LCKR_LCK14 ((uint32_t)0x00004000) /*!< Port x Lock bit 14 */
#define GPIO_LCKR_LCK15 ((uint32_t)0x00008000) /*!< Port x Lock bit 15 */
#define GPIO_LCKR_LCKK ((uint32_t)0x00010000)  /*!< Lock key */

/******************************************************************************/
/*                                                                            */
/*                       System Configuration (SYSCFG)                        */
/*                                                                            */
/******************************************************************************/
/*****************  Bit definition for SYSCFG_CFGR1 register  ****************/
#define SYSCFG_CFGR_MEM_MODE ((uint32_t)0x00000003)        /*!< SYSCFG_Memory Remap Config */
#define SYSCFG_CFGR_MEM_MODE_0 ((uint32_t)0x00000001)      /*!< SYSCFG_Memory Remap Config Bit 0 */
#define SYSCFG_CFGR_MEM_MODE_1 ((uint32_t)0x00000002)      /*!< SYSCFG_Memory Remap Config Bit 1 */
#define SYSCFG_CFGR_IRDA_ENV_SEL ((uint32_t)0x000000C0)    /*!< IRDA_SEL_ENV config */
#define SYSCFG_CFGR_IRDA_ENV_SEL_0 ((uint32_t)0x00000040)  /*!< IRDA_SEL_ENV Bit 0 */
#define SYSCFG_CFGR_IRDA_ENV_SEL_1 ((uint32_t)0x00000080)  /*!< IRDA_SEL_ENV Bit 1 */
#define SYSCFG_CFGR_PA11_PA12_RMP ((uint32_t)0x00000010)   /*!< PA11 and PA12 remap on QFN28 and TSSOP20 packages */
#define SYSCFG_CFGR_ADC_DMA_RMP ((uint32_t)0x00000100)     /*!< ADC DMA remap */
#define SYSCFG_CFGR_UART1TX_DMA_RMP ((uint32_t)0x00000200) /*!< UART1 TX DMA remap */
#define SYSCFG_CFGR_UART1RX_DMA_RMP ((uint32_t)0x00000400) /*!< UART1 RX DMA remap */
#define SYSCFG_CFGR_TIM16_DMA_RMP ((uint32_t)0x00000800)   /*!< Timer 16 DMA remap */
#define SYSCFG_CFGR_TIM17_DMA_RMP ((uint32_t)0x00001000)   /*!< Timer 17 DMA remap */
#define SYSCFG_CFGR_TIM16_DMA_RMP2 ((uint32_t)0x00002000)  /*!< Timer 16 DMA remap 2   */
#define SYSCFG_CFGR_TIM17_DMA_RMP2 ((uint32_t)0x00004000)  /*!< Timer 17 DMA remap 2   */

/*****************  Bit definition for SYSCFG_EXTICR1 register  ***************/
#define SYSCFG_EXTICR1_EXTI0 ((uint16_t)0x000F) /*!< EXTI 0 configuration */
#define SYSCFG_EXTICR1_EXTI1 ((uint16_t)0x00F0) /*!< EXTI 1 configuration */
#define SYSCFG_EXTICR1_EXTI2 ((uint16_t)0x0F00) /*!< EXTI 2 configuration */
#define SYSCFG_EXTICR1_EXTI3 ((uint16_t)0xF000) /*!< EXTI 3 configuration */

/**
 * @brief  EXTI0 configuration
 */
#define SYSCFG_EXTICR1_EXTI0_PA ((uint16_t)0x0000) /*!< PA[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PB ((uint16_t)0x0001) /*!< PB[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PC ((uint16_t)0x0002) /*!< PC[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PD ((uint16_t)0x0003) /*!< PD[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PE ((uint16_t)0x0004) /*!< PE[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PF ((uint16_t)0x0005) /*!< PF[0] pin */

/**
 * @brief  EXTI1 configuration
 */
#define SYSCFG_EXTICR1_EXTI1_PA ((uint16_t)0x0000) /*!< PA[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PB ((uint16_t)0x0010) /*!< PB[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PC ((uint16_t)0x0020) /*!< PC[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PD ((uint16_t)0x0030) /*!< PD[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PE ((uint16_t)0x0040) /*!< PE[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PF ((uint16_t)0x0050) /*!< PF[1] pin */

/**
 * @brief  EXTI2 configuration
 */
#define SYSCFG_EXTICR1_EXTI2_PA ((uint16_t)0x0000) /*!< PA[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PB ((uint16_t)0x0100) /*!< PB[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PC ((uint16_t)0x0200) /*!< PC[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PD ((uint16_t)0x0300) /*!< PD[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PE ((uint16_t)0x0400) /*!< PE[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PF ((uint16_t)0x0500) /*!< PF[2] pin */

/**
 * @brief  EXTI3 configuration
 */
#define SYSCFG_EXTICR1_EXTI3_PA ((uint16_t)0x0000) /*!< PA[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PB ((uint16_t)0x1000) /*!< PB[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PC ((uint16_t)0x2000) /*!< PC[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PD ((uint16_t)0x3000) /*!< PD[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PE ((uint16_t)0x4000) /*!< PE[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PF ((uint16_t)0x5000) /*!< PF[3] pin */

/*****************  Bit definition for SYSCFG_EXTICR2 register  *****************/
#define SYSCFG_EXTICR2_EXTI4 ((uint16_t)0x000F) /*!< EXTI 4 configuration */
#define SYSCFG_EXTICR2_EXTI5 ((uint16_t)0x00F0) /*!< EXTI 5 configuration */
#define SYSCFG_EXTICR2_EXTI6 ((uint16_t)0x0F00) /*!< EXTI 6 configuration */
#define SYSCFG_EXTICR2_EXTI7 ((uint16_t)0xF000) /*!< EXTI 7 configuration */

/**
 * @brief  EXTI4 configuration
 */
#define SYSCFG_EXTICR2_EXTI4_PA ((uint16_t)0x0000) /*!< PA[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PB ((uint16_t)0x0001) /*!< PB[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PC ((uint16_t)0x0002) /*!< PC[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PD ((uint16_t)0x0003) /*!< PD[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PE ((uint16_t)0x0004) /*!< PE[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PF ((uint16_t)0x0005) /*!< PF[4] pin */

/**
 * @brief  EXTI5 configuration
 */
#define SYSCFG_EXTICR2_EXTI5_PA ((uint16_t)0x0000) /*!< PA[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PB ((uint16_t)0x0010) /*!< PB[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PC ((uint16_t)0x0020) /*!< PC[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PD ((uint16_t)0x0030) /*!< PD[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PE ((uint16_t)0x0040) /*!< PE[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PF ((uint16_t)0x0050) /*!< PF[5] pin */

/**
 * @brief  EXTI6 configuration
 */
#define SYSCFG_EXTICR2_EXTI6_PA ((uint16_t)0x0000) /*!< PA[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PB ((uint16_t)0x0100) /*!< PB[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PC ((uint16_t)0x0200) /*!< PC[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PD ((uint16_t)0x0300) /*!< PD[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PE ((uint16_t)0x0400) /*!< PE[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PF ((uint16_t)0x0500) /*!< PF[6] pin */

/**
 * @brief  EXTI7 configuration
 */
#define SYSCFG_EXTICR2_EXTI7_PA ((uint16_t)0x0000) /*!< PA[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PB ((uint16_t)0x1000) /*!< PB[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PC ((uint16_t)0x2000) /*!< PC[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PD ((uint16_t)0x3000) /*!< PD[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PE ((uint16_t)0x4000) /*!< PE[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PF ((uint16_t)0x5000) /*!< PF[7] pin */

/*****************  Bit definition for SYSCFG_EXTICR3 register  *****************/
#define SYSCFG_EXTICR3_EXTI8 ((uint16_t)0x000F)  /*!< EXTI 8 configuration */
#define SYSCFG_EXTICR3_EXTI9 ((uint16_t)0x00F0)  /*!< EXTI 9 configuration */
#define SYSCFG_EXTICR3_EXTI10 ((uint16_t)0x0F00) /*!< EXTI 10 configuration */
#define SYSCFG_EXTICR3_EXTI11 ((uint16_t)0xF000) /*!< EXTI 11 configuration */

/**
 * @brief  EXTI8 configuration
 */
#define SYSCFG_EXTICR3_EXTI8_PA ((uint16_t)0x0000) /*!< PA[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PB ((uint16_t)0x0001) /*!< PB[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PC ((uint16_t)0x0002) /*!< PC[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PD ((uint16_t)0x0003) /*!< PD[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PE ((uint16_t)0x0004) /*!< PE[8] pin */

/**
 * @brief  EXTI9 configuration
 */
#define SYSCFG_EXTICR3_EXTI9_PA ((uint16_t)0x0000) /*!< PA[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PB ((uint16_t)0x0010) /*!< PB[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PC ((uint16_t)0x0020) /*!< PC[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PD ((uint16_t)0x0030) /*!< PD[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PE ((uint16_t)0x0040) /*!< PE[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PF ((uint16_t)0x0050) /*!< PF[9] pin */

/**
 * @brief  EXTI10 configuration
 */
#define SYSCFG_EXTICR3_EXTI10_PA ((uint16_t)0x0000) /*!< PA[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PB ((uint16_t)0x0100) /*!< PB[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PC ((uint16_t)0x0200) /*!< PC[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PD ((uint16_t)0x0300) /*!< PE[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PE ((uint16_t)0x0400) /*!< PD[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PF ((uint16_t)0x0500) /*!< PF[10] pin */

/**
 * @brief  EXTI11 configuration
 */
#define SYSCFG_EXTICR3_EXTI11_PA ((uint16_t)0x0000) /*!< PA[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PB ((uint16_t)0x1000) /*!< PB[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PC ((uint16_t)0x2000) /*!< PC[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PD ((uint16_t)0x3000) /*!< PD[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PE ((uint16_t)0x4000) /*!< PE[11] pin */

/*****************  Bit definition for SYSCFG_EXTICR4 register  *****************/
#define SYSCFG_EXTICR4_EXTI12 ((uint16_t)0x000F) /*!< EXTI 12 configuration */
#define SYSCFG_EXTICR4_EXTI13 ((uint16_t)0x00F0) /*!< EXTI 13 configuration */
#define SYSCFG_EXTICR4_EXTI14 ((uint16_t)0x0F00) /*!< EXTI 14 configuration */
#define SYSCFG_EXTICR4_EXTI15 ((uint16_t)0xF000) /*!< EXTI 15 configuration */

/**
 * @brief  EXTI12 configuration
 */
#define SYSCFG_EXTICR4_EXTI12_PA ((uint16_t)0x0000) /*!< PA[12] pin */
#define SYSCFG_EXTICR4_EXTI12_PB ((uint16_t)0x0001) /*!< PB[12] pin */
#define SYSCFG_EXTICR4_EXTI12_PC ((uint16_t)0x0002) /*!< PC[12] pin */
#define SYSCFG_EXTICR4_EXTI12_PD ((uint16_t)0x0003) /*!< PD[12] pin */
#define SYSCFG_EXTICR4_EXTI12_PE ((uint16_t)0x0004) /*!< PE[12] pin */

/**
 * @brief  EXTI13 configuration
 */
#define SYSCFG_EXTICR4_EXTI13_PA ((uint16_t)0x0000) /*!< PA[13] pin */
#define SYSCFG_EXTICR4_EXTI13_PB ((uint16_t)0x0010) /*!< PB[13] pin */
#define SYSCFG_EXTICR4_EXTI13_PC ((uint16_t)0x0020) /*!< PC[13] pin */
#define SYSCFG_EXTICR4_EXTI13_PD ((uint16_t)0x0030) /*!< PD[13] pin */
#define SYSCFG_EXTICR4_EXTI13_PE ((uint16_t)0x0040) /*!< PE[13] pin */

/**
 * @brief  EXTI14 configuration
 */
#define SYSCFG_EXTICR4_EXTI14_PA ((uint16_t)0x0000) /*!< PA[14] pin */
#define SYSCFG_EXTICR4_EXTI14_PB ((uint16_t)0x0100) /*!< PB[14] pin */
#define SYSCFG_EXTICR4_EXTI14_PC ((uint16_t)0x0200) /*!< PC[14] pin */
#define SYSCFG_EXTICR4_EXTI14_PD ((uint16_t)0x0300) /*!< PD[14] pin */
#define SYSCFG_EXTICR4_EXTI14_PE ((uint16_t)0x0400) /*!< PE[14] pin */

/**
 * @brief  EXTI15 configuration
 */
#define SYSCFG_EXTICR4_EXTI15_PA ((uint16_t)0x0000) /*!< PA[15] pin */
#define SYSCFG_EXTICR4_EXTI15_PB ((uint16_t)0x1000) /*!< PB[15] pin */
#define SYSCFG_EXTICR4_EXTI15_PC ((uint16_t)0x2000) /*!< PC[15] pin */
#define SYSCFG_EXTICR4_EXTI15_PD ((uint16_t)0x3000) /*!< PD[15] pin */
#define SYSCFG_EXTICR4_EXTI15_PE ((uint16_t)0x4000) /*!< PE[15] pin */

/******************************************************************************/
/*                                                                            */
/*                               SystemTick                                   */
/*                                                                            */
/******************************************************************************/

/*****************  Bit definition for SysTick_CTRL register  *****************/
#define SysTick_CTRL_ENABLE ((uint32_t)0x00000001)    /*!< Counter enable */
#define SysTick_CTRL_TICKINT ((uint32_t)0x00000002)   /*!< Counting down to 0 pends the SysTick handler */
#define SysTick_CTRL_CLKSOURCE ((uint32_t)0x00000004) /*!< Clock source */
#define SysTick_CTRL_COUNTFLAG ((uint32_t)0x00010000) /*!< Count Flag */

/*****************  Bit definition for SysTick_LOAD register  *****************/
#define SysTick_LOAD_RELOAD                                                                                                      \
    ((uint32_t)0x00FFFFFF) /*!< Value to load into the SysTick Current Value Register when the counter reaches 0 */

/*****************  Bit definition for SysTick_VAL register  ******************/
#define SysTick_VAL_CURRENT ((uint32_t)0x00FFFFFF) /*!< Current value at the time the register is accessed */

/*****************  Bit definition for SysTick_CALIB register  ****************/
#define SysTick_CALIB_TENMS ((uint32_t)0x00FFFFFF) /*!< Reload value to use for 10ms timing */
#define SysTick_CALIB_SKEW ((uint32_t)0x40000000)  /*!< Calibration value is not exactly 10 ms */
#define SysTick_CALIB_NOREF ((uint32_t)0x80000000) /*!< The reference clock is not provided */

/******************************************************************************/
/*                                                                            */
/*                  Nested Vectored Interrupt Controller                      */
/*                                                                            */
/******************************************************************************/

/******************  Bit definition for NVIC_ISER register  *******************/
#define NVIC_ISER_SETENA ((uint32_t)0xFFFFFFFF)    /*!< Interrupt set enable bits */
#define NVIC_ISER_SETENA_0 ((uint32_t)0x00000001)  /*!< bit 0 */
#define NVIC_ISER_SETENA_1 ((uint32_t)0x00000002)  /*!< bit 1 */
#define NVIC_ISER_SETENA_2 ((uint32_t)0x00000004)  /*!< bit 2 */
#define NVIC_ISER_SETENA_3 ((uint32_t)0x00000008)  /*!< bit 3 */
#define NVIC_ISER_SETENA_4 ((uint32_t)0x00000010)  /*!< bit 4 */
#define NVIC_ISER_SETENA_5 ((uint32_t)0x00000020)  /*!< bit 5 */
#define NVIC_ISER_SETENA_6 ((uint32_t)0x00000040)  /*!< bit 6 */
#define NVIC_ISER_SETENA_7 ((uint32_t)0x00000080)  /*!< bit 7 */
#define NVIC_ISER_SETENA_8 ((uint32_t)0x00000100)  /*!< bit 8 */
#define NVIC_ISER_SETENA_9 ((uint32_t)0x00000200)  /*!< bit 9 */
#define NVIC_ISER_SETENA_10 ((uint32_t)0x00000400) /*!< bit 10 */
#define NVIC_ISER_SETENA_11 ((uint32_t)0x00000800) /*!< bit 11 */
#define NVIC_ISER_SETENA_12 ((uint32_t)0x00001000) /*!< bit 12 */
#define NVIC_ISER_SETENA_13 ((uint32_t)0x00002000) /*!< bit 13 */
#define NVIC_ISER_SETENA_14 ((uint32_t)0x00004000) /*!< bit 14 */
#define NVIC_ISER_SETENA_15 ((uint32_t)0x00008000) /*!< bit 15 */
#define NVIC_ISER_SETENA_16 ((uint32_t)0x00010000) /*!< bit 16 */
#define NVIC_ISER_SETENA_17 ((uint32_t)0x00020000) /*!< bit 17 */
#define NVIC_ISER_SETENA_18 ((uint32_t)0x00040000) /*!< bit 18 */
#define NVIC_ISER_SETENA_19 ((uint32_t)0x00080000) /*!< bit 19 */
#define NVIC_ISER_SETENA_20 ((uint32_t)0x00100000) /*!< bit 20 */
#define NVIC_ISER_SETENA_21 ((uint32_t)0x00200000) /*!< bit 21 */
#define NVIC_ISER_SETENA_22 ((uint32_t)0x00400000) /*!< bit 22 */
#define NVIC_ISER_SETENA_23 ((uint32_t)0x00800000) /*!< bit 23 */
#define NVIC_ISER_SETENA_24 ((uint32_t)0x01000000) /*!< bit 24 */
#define NVIC_ISER_SETENA_25 ((uint32_t)0x02000000) /*!< bit 25 */
#define NVIC_ISER_SETENA_26 ((uint32_t)0x04000000) /*!< bit 26 */
#define NVIC_ISER_SETENA_27 ((uint32_t)0x08000000) /*!< bit 27 */
#define NVIC_ISER_SETENA_28 ((uint32_t)0x10000000) /*!< bit 28 */
#define NVIC_ISER_SETENA_29 ((uint32_t)0x20000000) /*!< bit 29 */
#define NVIC_ISER_SETENA_30 ((uint32_t)0x40000000) /*!< bit 30 */
#define NVIC_ISER_SETENA_31 ((uint32_t)0x80000000) /*!< bit 31 */

/******************  Bit definition for NVIC_ICER register  *******************/
#define NVIC_ICER_CLRENA ((uint32_t)0xFFFFFFFF)    /*!< Interrupt clear-enable bits */
#define NVIC_ICER_CLRENA_0 ((uint32_t)0x00000001)  /*!< bit 0 */
#define NVIC_ICER_CLRENA_1 ((uint32_t)0x00000002)  /*!< bit 1 */
#define NVIC_ICER_CLRENA_2 ((uint32_t)0x00000004)  /*!< bit 2 */
#define NVIC_ICER_CLRENA_3 ((uint32_t)0x00000008)  /*!< bit 3 */
#define NVIC_ICER_CLRENA_4 ((uint32_t)0x00000010)  /*!< bit 4 */
#define NVIC_ICER_CLRENA_5 ((uint32_t)0x00000020)  /*!< bit 5 */
#define NVIC_ICER_CLRENA_6 ((uint32_t)0x00000040)  /*!< bit 6 */
#define NVIC_ICER_CLRENA_7 ((uint32_t)0x00000080)  /*!< bit 7 */
#define NVIC_ICER_CLRENA_8 ((uint32_t)0x00000100)  /*!< bit 8 */
#define NVIC_ICER_CLRENA_9 ((uint32_t)0x00000200)  /*!< bit 9 */
#define NVIC_ICER_CLRENA_10 ((uint32_t)0x00000400) /*!< bit 10 */
#define NVIC_ICER_CLRENA_11 ((uint32_t)0x00000800) /*!< bit 11 */
#define NVIC_ICER_CLRENA_12 ((uint32_t)0x00001000) /*!< bit 12 */
#define NVIC_ICER_CLRENA_13 ((uint32_t)0x00002000) /*!< bit 13 */
#define NVIC_ICER_CLRENA_14 ((uint32_t)0x00004000) /*!< bit 14 */
#define NVIC_ICER_CLRENA_15 ((uint32_t)0x00008000) /*!< bit 15 */
#define NVIC_ICER_CLRENA_16 ((uint32_t)0x00010000) /*!< bit 16 */
#define NVIC_ICER_CLRENA_17 ((uint32_t)0x00020000) /*!< bit 17 */
#define NVIC_ICER_CLRENA_18 ((uint32_t)0x00040000) /*!< bit 18 */
#define NVIC_ICER_CLRENA_19 ((uint32_t)0x00080000) /*!< bit 19 */
#define NVIC_ICER_CLRENA_20 ((uint32_t)0x00100000) /*!< bit 20 */
#define NVIC_ICER_CLRENA_21 ((uint32_t)0x00200000) /*!< bit 21 */
#define NVIC_ICER_CLRENA_22 ((uint32_t)0x00400000) /*!< bit 22 */
#define NVIC_ICER_CLRENA_23 ((uint32_t)0x00800000) /*!< bit 23 */
#define NVIC_ICER_CLRENA_24 ((uint32_t)0x01000000) /*!< bit 24 */
#define NVIC_ICER_CLRENA_25 ((uint32_t)0x02000000) /*!< bit 25 */
#define NVIC_ICER_CLRENA_26 ((uint32_t)0x04000000) /*!< bit 26 */
#define NVIC_ICER_CLRENA_27 ((uint32_t)0x08000000) /*!< bit 27 */
#define NVIC_ICER_CLRENA_28 ((uint32_t)0x10000000) /*!< bit 28 */
#define NVIC_ICER_CLRENA_29 ((uint32_t)0x20000000) /*!< bit 29 */
#define NVIC_ICER_CLRENA_30 ((uint32_t)0x40000000) /*!< bit 30 */
#define NVIC_ICER_CLRENA_31 ((uint32_t)0x80000000) /*!< bit 31 */

/******************  Bit definition for NVIC_ISPR register  *******************/
#define NVIC_ISPR_SETPEND ((uint32_t)0xFFFFFFFF)    /*!< Interrupt set-pending bits */
#define NVIC_ISPR_SETPEND_0 ((uint32_t)0x00000001)  /*!< bit 0 */
#define NVIC_ISPR_SETPEND_1 ((uint32_t)0x00000002)  /*!< bit 1 */
#define NVIC_ISPR_SETPEND_2 ((uint32_t)0x00000004)  /*!< bit 2 */
#define NVIC_ISPR_SETPEND_3 ((uint32_t)0x00000008)  /*!< bit 3 */
#define NVIC_ISPR_SETPEND_4 ((uint32_t)0x00000010)  /*!< bit 4 */
#define NVIC_ISPR_SETPEND_5 ((uint32_t)0x00000020)  /*!< bit 5 */
#define NVIC_ISPR_SETPEND_6 ((uint32_t)0x00000040)  /*!< bit 6 */
#define NVIC_ISPR_SETPEND_7 ((uint32_t)0x00000080)  /*!< bit 7 */
#define NVIC_ISPR_SETPEND_8 ((uint32_t)0x00000100)  /*!< bit 8 */
#define NVIC_ISPR_SETPEND_9 ((uint32_t)0x00000200)  /*!< bit 9 */
#define NVIC_ISPR_SETPEND_10 ((uint32_t)0x00000400) /*!< bit 10 */
#define NVIC_ISPR_SETPEND_11 ((uint32_t)0x00000800) /*!< bit 11 */
#define NVIC_ISPR_SETPEND_12 ((uint32_t)0x00001000) /*!< bit 12 */
#define NVIC_ISPR_SETPEND_13 ((uint32_t)0x00002000) /*!< bit 13 */
#define NVIC_ISPR_SETPEND_14 ((uint32_t)0x00004000) /*!< bit 14 */
#define NVIC_ISPR_SETPEND_15 ((uint32_t)0x00008000) /*!< bit 15 */
#define NVIC_ISPR_SETPEND_16 ((uint32_t)0x00010000) /*!< bit 16 */
#define NVIC_ISPR_SETPEND_17 ((uint32_t)0x00020000) /*!< bit 17 */
#define NVIC_ISPR_SETPEND_18 ((uint32_t)0x00040000) /*!< bit 18 */
#define NVIC_ISPR_SETPEND_19 ((uint32_t)0x00080000) /*!< bit 19 */
#define NVIC_ISPR_SETPEND_20 ((uint32_t)0x00100000) /*!< bit 20 */
#define NVIC_ISPR_SETPEND_21 ((uint32_t)0x00200000) /*!< bit 21 */
#define NVIC_ISPR_SETPEND_22 ((uint32_t)0x00400000) /*!< bit 22 */
#define NVIC_ISPR_SETPEND_23 ((uint32_t)0x00800000) /*!< bit 23 */
#define NVIC_ISPR_SETPEND_24 ((uint32_t)0x01000000) /*!< bit 24 */
#define NVIC_ISPR_SETPEND_25 ((uint32_t)0x02000000) /*!< bit 25 */
#define NVIC_ISPR_SETPEND_26 ((uint32_t)0x04000000) /*!< bit 26 */
#define NVIC_ISPR_SETPEND_27 ((uint32_t)0x08000000) /*!< bit 27 */
#define NVIC_ISPR_SETPEND_28 ((uint32_t)0x10000000) /*!< bit 28 */
#define NVIC_ISPR_SETPEND_29 ((uint32_t)0x20000000) /*!< bit 29 */
#define NVIC_ISPR_SETPEND_30 ((uint32_t)0x40000000) /*!< bit 30 */
#define NVIC_ISPR_SETPEND_31 ((uint32_t)0x80000000) /*!< bit 31 */

/******************  Bit definition for NVIC_ICPR register  *******************/
#define NVIC_ICPR_CLRPEND ((uint32_t)0xFFFFFFFF)    /*!< Interrupt clear-pending bits */
#define NVIC_ICPR_CLRPEND_0 ((uint32_t)0x00000001)  /*!< bit 0 */
#define NVIC_ICPR_CLRPEND_1 ((uint32_t)0x00000002)  /*!< bit 1 */
#define NVIC_ICPR_CLRPEND_2 ((uint32_t)0x00000004)  /*!< bit 2 */
#define NVIC_ICPR_CLRPEND_3 ((uint32_t)0x00000008)  /*!< bit 3 */
#define NVIC_ICPR_CLRPEND_4 ((uint32_t)0x00000010)  /*!< bit 4 */
#define NVIC_ICPR_CLRPEND_5 ((uint32_t)0x00000020)  /*!< bit 5 */
#define NVIC_ICPR_CLRPEND_6 ((uint32_t)0x00000040)  /*!< bit 6 */
#define NVIC_ICPR_CLRPEND_7 ((uint32_t)0x00000080)  /*!< bit 7 */
#define NVIC_ICPR_CLRPEND_8 ((uint32_t)0x00000100)  /*!< bit 8 */
#define NVIC_ICPR_CLRPEND_9 ((uint32_t)0x00000200)  /*!< bit 9 */
#define NVIC_ICPR_CLRPEND_10 ((uint32_t)0x00000400) /*!< bit 10 */
#define NVIC_ICPR_CLRPEND_11 ((uint32_t)0x00000800) /*!< bit 11 */
#define NVIC_ICPR_CLRPEND_12 ((uint32_t)0x00001000) /*!< bit 12 */
#define NVIC_ICPR_CLRPEND_13 ((uint32_t)0x00002000) /*!< bit 13 */
#define NVIC_ICPR_CLRPEND_14 ((uint32_t)0x00004000) /*!< bit 14 */
#define NVIC_ICPR_CLRPEND_15 ((uint32_t)0x00008000) /*!< bit 15 */
#define NVIC_ICPR_CLRPEND_16 ((uint32_t)0x00010000) /*!< bit 16 */
#define NVIC_ICPR_CLRPEND_17 ((uint32_t)0x00020000) /*!< bit 17 */
#define NVIC_ICPR_CLRPEND_18 ((uint32_t)0x00040000) /*!< bit 18 */
#define NVIC_ICPR_CLRPEND_19 ((uint32_t)0x00080000) /*!< bit 19 */
#define NVIC_ICPR_CLRPEND_20 ((uint32_t)0x00100000) /*!< bit 20 */
#define NVIC_ICPR_CLRPEND_21 ((uint32_t)0x00200000) /*!< bit 21 */
#define NVIC_ICPR_CLRPEND_22 ((uint32_t)0x00400000) /*!< bit 22 */
#define NVIC_ICPR_CLRPEND_23 ((uint32_t)0x00800000) /*!< bit 23 */
#define NVIC_ICPR_CLRPEND_24 ((uint32_t)0x01000000) /*!< bit 24 */
#define NVIC_ICPR_CLRPEND_25 ((uint32_t)0x02000000) /*!< bit 25 */
#define NVIC_ICPR_CLRPEND_26 ((uint32_t)0x04000000) /*!< bit 26 */
#define NVIC_ICPR_CLRPEND_27 ((uint32_t)0x08000000) /*!< bit 27 */
#define NVIC_ICPR_CLRPEND_28 ((uint32_t)0x10000000) /*!< bit 28 */
#define NVIC_ICPR_CLRPEND_29 ((uint32_t)0x20000000) /*!< bit 29 */
#define NVIC_ICPR_CLRPEND_30 ((uint32_t)0x40000000) /*!< bit 30 */
#define NVIC_ICPR_CLRPEND_31 ((uint32_t)0x80000000) /*!< bit 31 */

/******************  Bit definition for NVIC_IABR register  *******************/
#define NVIC_IABR_ACTIVE ((uint32_t)0xFFFFFFFF)    /*!< Interrupt active flags */
#define NVIC_IABR_ACTIVE_0 ((uint32_t)0x00000001)  /*!< bit 0 */
#define NVIC_IABR_ACTIVE_1 ((uint32_t)0x00000002)  /*!< bit 1 */
#define NVIC_IABR_ACTIVE_2 ((uint32_t)0x00000004)  /*!< bit 2 */
#define NVIC_IABR_ACTIVE_3 ((uint32_t)0x00000008)  /*!< bit 3 */
#define NVIC_IABR_ACTIVE_4 ((uint32_t)0x00000010)  /*!< bit 4 */
#define NVIC_IABR_ACTIVE_5 ((uint32_t)0x00000020)  /*!< bit 5 */
#define NVIC_IABR_ACTIVE_6 ((uint32_t)0x00000040)  /*!< bit 6 */
#define NVIC_IABR_ACTIVE_7 ((uint32_t)0x00000080)  /*!< bit 7 */
#define NVIC_IABR_ACTIVE_8 ((uint32_t)0x00000100)  /*!< bit 8 */
#define NVIC_IABR_ACTIVE_9 ((uint32_t)0x00000200)  /*!< bit 9 */
#define NVIC_IABR_ACTIVE_10 ((uint32_t)0x00000400) /*!< bit 10 */
#define NVIC_IABR_ACTIVE_11 ((uint32_t)0x00000800) /*!< bit 11 */
#define NVIC_IABR_ACTIVE_12 ((uint32_t)0x00001000) /*!< bit 12 */
#define NVIC_IABR_ACTIVE_13 ((uint32_t)0x00002000) /*!< bit 13 */
#define NVIC_IABR_ACTIVE_14 ((uint32_t)0x00004000) /*!< bit 14 */
#define NVIC_IABR_ACTIVE_15 ((uint32_t)0x00008000) /*!< bit 15 */
#define NVIC_IABR_ACTIVE_16 ((uint32_t)0x00010000) /*!< bit 16 */
#define NVIC_IABR_ACTIVE_17 ((uint32_t)0x00020000) /*!< bit 17 */
#define NVIC_IABR_ACTIVE_18 ((uint32_t)0x00040000) /*!< bit 18 */
#define NVIC_IABR_ACTIVE_19 ((uint32_t)0x00080000) /*!< bit 19 */
#define NVIC_IABR_ACTIVE_20 ((uint32_t)0x00100000) /*!< bit 20 */
#define NVIC_IABR_ACTIVE_21 ((uint32_t)0x00200000) /*!< bit 21 */
#define NVIC_IABR_ACTIVE_22 ((uint32_t)0x00400000) /*!< bit 22 */
#define NVIC_IABR_ACTIVE_23 ((uint32_t)0x00800000) /*!< bit 23 */
#define NVIC_IABR_ACTIVE_24 ((uint32_t)0x01000000) /*!< bit 24 */
#define NVIC_IABR_ACTIVE_25 ((uint32_t)0x02000000) /*!< bit 25 */
#define NVIC_IABR_ACTIVE_26 ((uint32_t)0x04000000) /*!< bit 26 */
#define NVIC_IABR_ACTIVE_27 ((uint32_t)0x08000000) /*!< bit 27 */
#define NVIC_IABR_ACTIVE_28 ((uint32_t)0x10000000) /*!< bit 28 */
#define NVIC_IABR_ACTIVE_29 ((uint32_t)0x20000000) /*!< bit 29 */
#define NVIC_IABR_ACTIVE_30 ((uint32_t)0x40000000) /*!< bit 30 */
#define NVIC_IABR_ACTIVE_31 ((uint32_t)0x80000000) /*!< bit 31 */

/******************  Bit definition for NVIC_PRI0 register  *******************/
#define NVIC_IPR0_PRI_0 ((uint32_t)0x000000FF) /*!< Priority of interrupt 0 */
#define NVIC_IPR0_PRI_1 ((uint32_t)0x0000FF00) /*!< Priority of interrupt 1 */
#define NVIC_IPR0_PRI_2 ((uint32_t)0x00FF0000) /*!< Priority of interrupt 2 */
#define NVIC_IPR0_PRI_3 ((uint32_t)0xFF000000) /*!< Priority of interrupt 3 */

/******************  Bit definition for NVIC_PRI1 register  *******************/
#define NVIC_IPR1_PRI_4 ((uint32_t)0x000000FF) /*!< Priority of interrupt 4 */
#define NVIC_IPR1_PRI_5 ((uint32_t)0x0000FF00) /*!< Priority of interrupt 5 */
#define NVIC_IPR1_PRI_6 ((uint32_t)0x00FF0000) /*!< Priority of interrupt 6 */
#define NVIC_IPR1_PRI_7 ((uint32_t)0xFF000000) /*!< Priority of interrupt 7 */

/******************  Bit definition for NVIC_PRI2 register  *******************/
#define NVIC_IPR2_PRI_8 ((uint32_t)0x000000FF)  /*!< Priority of interrupt 8 */
#define NVIC_IPR2_PRI_9 ((uint32_t)0x0000FF00)  /*!< Priority of interrupt 9 */
#define NVIC_IPR2_PRI_10 ((uint32_t)0x00FF0000) /*!< Priority of interrupt 10 */
#define NVIC_IPR2_PRI_11 ((uint32_t)0xFF000000) /*!< Priority of interrupt 11 */

/******************  Bit definition for NVIC_PRI3 register  *******************/
#define NVIC_IPR3_PRI_12 ((uint32_t)0x000000FF) /*!< Priority of interrupt 12 */
#define NVIC_IPR3_PRI_13 ((uint32_t)0x0000FF00) /*!< Priority of interrupt 13 */
#define NVIC_IPR3_PRI_14 ((uint32_t)0x00FF0000) /*!< Priority of interrupt 14 */
#define NVIC_IPR3_PRI_15 ((uint32_t)0xFF000000) /*!< Priority of interrupt 15 */

/******************  Bit definition for NVIC_PRI4 register  *******************/
#define NVIC_IPR4_PRI_16 ((uint32_t)0x000000FF) /*!< Priority of interrupt 16 */
#define NVIC_IPR4_PRI_17 ((uint32_t)0x0000FF00) /*!< Priority of interrupt 17 */
#define NVIC_IPR4_PRI_18 ((uint32_t)0x00FF0000) /*!< Priority of interrupt 18 */
#define NVIC_IPR4_PRI_19 ((uint32_t)0xFF000000) /*!< Priority of interrupt 19 */

/******************  Bit definition for NVIC_PRI5 register  *******************/
#define NVIC_IPR5_PRI_20 ((uint32_t)0x000000FF) /*!< Priority of interrupt 20 */
#define NVIC_IPR5_PRI_21 ((uint32_t)0x0000FF00) /*!< Priority of interrupt 21 */
#define NVIC_IPR5_PRI_22 ((uint32_t)0x00FF0000) /*!< Priority of interrupt 22 */
#define NVIC_IPR5_PRI_23 ((uint32_t)0xFF000000) /*!< Priority of interrupt 23 */

/******************  Bit definition for NVIC_PRI6 register  *******************/
#define NVIC_IPR6_PRI_24 ((uint32_t)0x000000FF) /*!< Priority of interrupt 24 */
#define NVIC_IPR6_PRI_25 ((uint32_t)0x0000FF00) /*!< Priority of interrupt 25 */
#define NVIC_IPR6_PRI_26 ((uint32_t)0x00FF0000) /*!< Priority of interrupt 26 */
#define NVIC_IPR6_PRI_27 ((uint32_t)0xFF000000) /*!< Priority of interrupt 27 */

/******************  Bit definition for NVIC_PRI7 register  *******************/
#define NVIC_IPR7_PRI_28 ((uint32_t)0x000000FF) /*!< Priority of interrupt 28 */
#define NVIC_IPR7_PRI_29 ((uint32_t)0x0000FF00) /*!< Priority of interrupt 29 */
#define NVIC_IPR7_PRI_30 ((uint32_t)0x00FF0000) /*!< Priority of interrupt 30 */
#define NVIC_IPR7_PRI_31 ((uint32_t)0xFF000000) /*!< Priority of interrupt 31 */

/******************  Bit definition for SCB_CPUID register  *******************/
#define SCB_CPUID_REVISION ((uint32_t)0x0000000F)    /*!< Implementation defined revision number */
#define SCB_CPUID_PARTNO ((uint32_t)0x0000FFF0)      /*!< Number of processor within family */
#define SCB_CPUID_Constant ((uint32_t)0x000F0000)    /*!< Reads as 0x0F */
#define SCB_CPUID_VARIANT ((uint32_t)0x00F00000)     /*!< Implementation defined variant number */
#define SCB_CPUID_IMPLEMENTER ((uint32_t)0xFF000000) /*!< Implementer code. ARM is 0x41 */

/*******************  Bit definition for SCB_ICSR register  *******************/
#define SCB_ICSR_VECTACTIVE ((uint32_t)0x000001FF) /*!< Active ISR number field */
#define SCB_ICSR_RETTOBASE                                                                                                       \
    ((uint32_t)0x00000800) /*!< All active exceptions minus the IPSR_current_exception yields the empty set */
#define SCB_ICSR_VECTPENDING ((uint32_t)0x003FF000) /*!< Pending ISR number field */
#define SCB_ICSR_ISRPENDING ((uint32_t)0x00400000)  /*!< Interrupt pending flag */
#define SCB_ICSR_ISRPREEMPT                                                                                                      \
    ((uint32_t)0x00800000) /*!< It indicates that a pending interrupt becomes active in the next running cycle */
#define SCB_ICSR_PENDSTCLR ((uint32_t)0x02000000)  /*!< Clear pending SysTick bit */
#define SCB_ICSR_PENDSTSET ((uint32_t)0x04000000)  /*!< Set pending SysTick bit */
#define SCB_ICSR_PENDSVCLR ((uint32_t)0x08000000)  /*!< Clear pending pendSV bit */
#define SCB_ICSR_PENDSVSET ((uint32_t)0x10000000)  /*!< Set pending pendSV bit */
#define SCB_ICSR_NMIPENDSET ((uint32_t)0x80000000) /*!< Set pending NMI bit */

/*******************  Bit definition for SCB_VTOR register  *******************/
#define SCB_VTOR_TBLOFF ((uint32_t)0x1FFFFF80)  /*!< Vector table base offset field */
#define SCB_VTOR_TBLBASE ((uint32_t)0x20000000) /*!< Table base in code(0) or RAM(1) */

/*!<*****************  Bit definition for SCB_AIRCR register  *******************/
#define SCB_AIRCR_VECTRESET ((uint32_t)0x00000001)     /*!< System Reset bit */
#define SCB_AIRCR_VECTCLRACTIVE ((uint32_t)0x00000002) /*!< Clear active vector bit */
#define SCB_AIRCR_SYSRESETREQ ((uint32_t)0x00000004)   /*!< Requests chip control logic to generate a reset */

#define SCB_AIRCR_PRIGROUP ((uint32_t)0x00000700)   /*!< PRIGROUP[2:0] bits (Priority group) */
#define SCB_AIRCR_PRIGROUP_0 ((uint32_t)0x00000100) /*!< Bit 0 */
#define SCB_AIRCR_PRIGROUP_1 ((uint32_t)0x00000200) /*!< Bit 1 */
#define SCB_AIRCR_PRIGROUP_2 ((uint32_t)0x00000400) /*!< Bit 2  */

/* prority group configuration */
#define SCB_AIRCR_PRIGROUP0 ((uint32_t)0x00000000) /*!< Priority group=0 (7 bits of pre-emption priority, 1 bit of subpriority)  \
                                                    */
#define SCB_AIRCR_PRIGROUP1                                                                                                      \
    ((uint32_t)0x00000100) /*!< Priority group=1 (6 bits of pre-emption priority, 2 bits of subpriority) */
#define SCB_AIRCR_PRIGROUP2                                                                                                      \
    ((uint32_t)0x00000200) /*!< Priority group=2 (5 bits of pre-emption priority, 3 bits of subpriority) */
#define SCB_AIRCR_PRIGROUP3                                                                                                      \
    ((uint32_t)0x00000300) /*!< Priority group=3 (4 bits of pre-emption priority, 4 bits of subpriority) */
#define SCB_AIRCR_PRIGROUP4                                                                                                      \
    ((uint32_t)0x00000400) /*!< Priority group=4 (3 bits of pre-emption priority, 5 bits of subpriority) */
#define SCB_AIRCR_PRIGROUP5                                                                                                      \
    ((uint32_t)0x00000500) /*!< Priority group=5 (2 bits of pre-emption priority, 6 bits of subpriority) */
#define SCB_AIRCR_PRIGROUP6 ((uint32_t)0x00000600) /*!< Priority group=6 (1 bit of pre-emption priority, 7 bits of subpriority)  \
                                                    */
#define SCB_AIRCR_PRIGROUP7 ((uint32_t)0x00000700) /*!< Priority group=7 (no pre-emption priority, 8 bits of subpriority) */

#define SCB_AIRCR_ENDIANESS ((uint32_t)0x00008000) /*!< Data endianness bit */
#define SCB_AIRCR_VECTKEY ((uint32_t)0xFFFF0000)   /*!< Register key (VECTKEY) - Reads as 0xFA05 (VECTKEYSTAT) */

/*******************  Bit definition for SCB_SCR register  ********************/
#define SCB_SCR_SLEEPONEXIT ((uint8_t)0x02) /*!< Sleep on exit bit */
#define SCB_SCR_SLEEPDEEP ((uint8_t)0x04)   /*!< Sleep deep bit */
#define SCB_SCR_SEVONPEND ((uint8_t)0x10)   /*!< Wake up from WFE */

/********************  Bit definition for SCB_CCR register  *******************/
#define SCB_CCR_NONBASETHRDENA                                                                                                   \
    ((uint16_t)0x0001) /*!< Thread mode can be entered from any level in Handler mode by controlled return value */
#define SCB_CCR_USERSETMPEND                                                                                                     \
    ((uint16_t)0x0002) /*!< Enables user code to write the Software Trigger Interrupt register to trigger (pend) a Main          \
                          exception */
#define SCB_CCR_UNALIGN_TRP ((uint16_t)0x0008) /*!< Trap for unaligned access */
#define SCB_CCR_DIV_0_TRP ((uint16_t)0x0010)   /*!< Trap on Divide by 0 */
#define SCB_CCR_BFHFNMIGN ((uint16_t)0x0100)   /*!< Handlers running at priority -1 and -2 */
#define SCB_CCR_STKALIGN                                                                                                         \
    ((uint16_t)0x0200) /*!< On exception entry, the SP used prior to the exception is adjusted to be 8-byte aligned */

/*******************  Bit definition for SCB_SHPR register ********************/
#define SCB_SHPR_PRI_N                                                                                                           \
    ((uint32_t)0x000000FF) /*!< Priority of system handler 4,8, and 12. Mem Manage, reserved and Debug Monitor */
#define SCB_SHPR_PRI_N1 ((uint32_t)0x0000FF00) /*!< Priority of system handler 5,9, and 13. Bus Fault, reserved and reserved */
#define SCB_SHPR_PRI_N2 ((uint32_t)0x00FF0000) /*!< Priority of system handler 6,10, and 14. Usage Fault, reserved and PendSV */
#define SCB_SHPR_PRI_N3 ((uint32_t)0xFF000000) /*!< Priority of system handler 7,11, and 15. Reserved, SVCall and SysTick */

/******************  Bit definition for SCB_SHCSR register  *******************/
#define SCB_SHCSR_MEMFAULTACT ((uint32_t)0x00000001)    /*!< MemManage is active */
#define SCB_SHCSR_BUSFAULTACT ((uint32_t)0x00000002)    /*!< BusFault is active */
#define SCB_SHCSR_USGFAULTACT ((uint32_t)0x00000008)    /*!< UsageFault is active */
#define SCB_SHCSR_SVCALLACT ((uint32_t)0x00000080)      /*!< SVCall is active */
#define SCB_SHCSR_MONITORACT ((uint32_t)0x00000100)     /*!< Monitor is active */
#define SCB_SHCSR_PENDSVACT ((uint32_t)0x00000400)      /*!< PendSV is active */
#define SCB_SHCSR_SYSTICKACT ((uint32_t)0x00000800)     /*!< SysTick is active */
#define SCB_SHCSR_USGFAULTPENDED ((uint32_t)0x00001000) /*!< Usage Fault is pended */
#define SCB_SHCSR_MEMFAULTPENDED ((uint32_t)0x00002000) /*!< MemManage is pended */
#define SCB_SHCSR_BUSFAULTPENDED ((uint32_t)0x00004000) /*!< Bus Fault is pended */
#define SCB_SHCSR_SVCALLPENDED ((uint32_t)0x00008000)   /*!< SVCall is pended */
#define SCB_SHCSR_MEMFAULTENA ((uint32_t)0x00010000)    /*!< MemManage enable */
#define SCB_SHCSR_BUSFAULTENA ((uint32_t)0x00020000)    /*!< Bus Fault enable */
#define SCB_SHCSR_USGFAULTENA ((uint32_t)0x00040000)    /*!< UsageFault enable */

/*******************  Bit definition for SCB_CFSR register  *******************/
/*!< MFSR */
#define SCB_CFSR_IACCVIOL ((uint32_t)0x00000001)  /*!< Instruction access violation */
#define SCB_CFSR_DACCVIOL ((uint32_t)0x00000002)  /*!< Data access violation */
#define SCB_CFSR_MUNSTKERR ((uint32_t)0x00000008) /*!< Unstacking error */
#define SCB_CFSR_MSTKERR ((uint32_t)0x00000010)   /*!< Stacking error */
#define SCB_CFSR_MMARVALID ((uint32_t)0x00000080) /*!< Memory Manage Address Register address valid flag */
/*!< BFSR */
#define SCB_CFSR_IBUSERR ((uint32_t)0x00000100)     /*!< Instruction bus error flag */
#define SCB_CFSR_PRECISERR ((uint32_t)0x00000200)   /*!< Precise data bus error */
#define SCB_CFSR_IMPRECISERR ((uint32_t)0x00000400) /*!< Imprecise data bus error */
#define SCB_CFSR_UNSTKERR ((uint32_t)0x00000800)    /*!< Unstacking error */
#define SCB_CFSR_STKERR ((uint32_t)0x00001000)      /*!< Stacking error */
#define SCB_CFSR_BFARVALID ((uint32_t)0x00008000)   /*!< Bus Fault Address Register address valid flag */
/*!< UFSR */
#define SCB_CFSR_UNDEFINSTR ((uint32_t)0x00010000) /*!< The processor attempt to excecute an undefined instruction */
#define SCB_CFSR_INVSTATE ((uint32_t)0x00020000)   /*!< Invalid combination of EPSR and instruction */
#define SCB_CFSR_INVPC ((uint32_t)0x00040000)      /*!< Attempt to load EXC_RETURN into pc illegally */
#define SCB_CFSR_NOCP ((uint32_t)0x00080000)       /*!< Attempt to use a coprocessor instruction */
#define SCB_CFSR_UNALIGNED ((uint32_t)0x01000000)  /*!< Fault occurs when there is an attempt to make an unaligned memory access \
                                                    */
#define SCB_CFSR_DIVBYZERO ((uint32_t)0x02000000)  /*!< Fault occurs when SDIV or DIV instruction is used with a divisor of 0 */

/*******************  Bit definition for SCB_HFSR register  *******************/
#define SCB_HFSR_VECTTBL ((uint32_t)0x00000002) /*!< Fault occures because of vector table read on exception processing */
#define SCB_HFSR_FORCED                                                                                                          \
    ((uint32_t)0x40000000) /*!< Hard Fault activated when a configurable Fault was received and cannot activate */
#define SCB_HFSR_DEBUGEVT ((uint32_t)0x80000000) /*!< Fault related to debug */

/*******************  Bit definition for SCB_DFSR register  *******************/
#define SCB_DFSR_HALTED ((uint8_t)0x01)   /*!< Halt request flag */
#define SCB_DFSR_BKPT ((uint8_t)0x02)     /*!< BKPT flag */
#define SCB_DFSR_DWTTRAP ((uint8_t)0x04)  /*!< Data Watchpoint and Trace (DWT) flag */
#define SCB_DFSR_VCATCH ((uint8_t)0x08)   /*!< Vector catch flag */
#define SCB_DFSR_EXTERNAL ((uint8_t)0x10) /*!< External debug request flag */

/*******************  Bit definition for SCB_MMFAR register  ******************/
#define SCB_MMFAR_ADDRESS ((uint32_t)0xFFFFFFFF) /*!< Mem Manage fault address field */

/*******************  Bit definition for SCB_BFAR register  *******************/
#define SCB_BFAR_ADDRESS ((uint32_t)0xFFFFFFFF) /*!< Bus fault address field */

/*******************  Bit definition for SCB_afsr register  *******************/
#define SCB_AFSR_IMPDEF ((uint32_t)0xFFFFFFFF) /*!< Implementation defined */

/******************************************************************************/
/*                                                                            */
/*                    External Interrupt/Event Controller                     */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for EXTI_IMR register  *******************/
#define EXTI_IMR_MR0 ((uint32_t)0x00000001)  /*!< Interrupt Mask on line 0 */
#define EXTI_IMR_MR1 ((uint32_t)0x00000002)  /*!< Interrupt Mask on line 1 */
#define EXTI_IMR_MR2 ((uint32_t)0x00000004)  /*!< Interrupt Mask on line 2 */
#define EXTI_IMR_MR3 ((uint32_t)0x00000008)  /*!< Interrupt Mask on line 3 */
#define EXTI_IMR_MR4 ((uint32_t)0x00000010)  /*!< Interrupt Mask on line 4 */
#define EXTI_IMR_MR5 ((uint32_t)0x00000020)  /*!< Interrupt Mask on line 5 */
#define EXTI_IMR_MR6 ((uint32_t)0x00000040)  /*!< Interrupt Mask on line 6 */
#define EXTI_IMR_MR7 ((uint32_t)0x00000080)  /*!< Interrupt Mask on line 7 */
#define EXTI_IMR_MR8 ((uint32_t)0x00000100)  /*!< Interrupt Mask on line 8 */
#define EXTI_IMR_MR9 ((uint32_t)0x00000200)  /*!< Interrupt Mask on line 9 */
#define EXTI_IMR_MR10 ((uint32_t)0x00000400) /*!< Interrupt Mask on line 10 */
#define EXTI_IMR_MR11 ((uint32_t)0x00000800) /*!< Interrupt Mask on line 11 */
#define EXTI_IMR_MR12 ((uint32_t)0x00001000) /*!< Interrupt Mask on line 12 */
#define EXTI_IMR_MR13 ((uint32_t)0x00002000) /*!< Interrupt Mask on line 13 */
#define EXTI_IMR_MR14 ((uint32_t)0x00004000) /*!< Interrupt Mask on line 14 */
#define EXTI_IMR_MR15 ((uint32_t)0x00008000) /*!< Interrupt Mask on line 15 */
#define EXTI_IMR_MR16 ((uint32_t)0x00010000) /*!< Interrupt Mask on line 16 */
#define EXTI_IMR_MR17 ((uint32_t)0x00020000) /*!< Interrupt Mask on line 17 */
#define EXTI_IMR_MR18 ((uint32_t)0x00040000) /*!< Interrupt Mask on line 18 */

/*******************  Bit definition for EXTI_EMR register  *******************/
#define EXTI_EMR_MR0 ((uint32_t)0x00000001)  /*!< Event Mask on line 0 */
#define EXTI_EMR_MR1 ((uint32_t)0x00000002)  /*!< Event Mask on line 1 */
#define EXTI_EMR_MR2 ((uint32_t)0x00000004)  /*!< Event Mask on line 2 */
#define EXTI_EMR_MR3 ((uint32_t)0x00000008)  /*!< Event Mask on line 3 */
#define EXTI_EMR_MR4 ((uint32_t)0x00000010)  /*!< Event Mask on line 4 */
#define EXTI_EMR_MR5 ((uint32_t)0x00000020)  /*!< Event Mask on line 5 */
#define EXTI_EMR_MR6 ((uint32_t)0x00000040)  /*!< Event Mask on line 6 */
#define EXTI_EMR_MR7 ((uint32_t)0x00000080)  /*!< Event Mask on line 7 */
#define EXTI_EMR_MR8 ((uint32_t)0x00000100)  /*!< Event Mask on line 8 */
#define EXTI_EMR_MR9 ((uint32_t)0x00000200)  /*!< Event Mask on line 9 */
#define EXTI_EMR_MR10 ((uint32_t)0x00000400) /*!< Event Mask on line 10 */
#define EXTI_EMR_MR11 ((uint32_t)0x00000800) /*!< Event Mask on line 11 */
#define EXTI_EMR_MR12 ((uint32_t)0x00001000) /*!< Event Mask on line 12 */
#define EXTI_EMR_MR13 ((uint32_t)0x00002000) /*!< Event Mask on line 13 */
#define EXTI_EMR_MR14 ((uint32_t)0x00004000) /*!< Event Mask on line 14 */
#define EXTI_EMR_MR15 ((uint32_t)0x00008000) /*!< Event Mask on line 15 */
#define EXTI_EMR_MR16 ((uint32_t)0x00010000) /*!< Event Mask on line 16 */
#define EXTI_EMR_MR17 ((uint32_t)0x00020000) /*!< Event Mask on line 17 */
#define EXTI_EMR_MR18 ((uint32_t)0x00040000) /*!< Event Mask on line 18 */

/******************  Bit definition for EXTI_RTSR register  *******************/
#define EXTI_RTSR_TR0 ((uint32_t)0x00000001)  /*!< Rising trigger event configuration bit of line 0 */
#define EXTI_RTSR_TR1 ((uint32_t)0x00000002)  /*!< Rising trigger event configuration bit of line 1 */
#define EXTI_RTSR_TR2 ((uint32_t)0x00000004)  /*!< Rising trigger event configuration bit of line 2 */
#define EXTI_RTSR_TR3 ((uint32_t)0x00000008)  /*!< Rising trigger event configuration bit of line 3 */
#define EXTI_RTSR_TR4 ((uint32_t)0x00000010)  /*!< Rising trigger event configuration bit of line 4 */
#define EXTI_RTSR_TR5 ((uint32_t)0x00000020)  /*!< Rising trigger event configuration bit of line 5 */
#define EXTI_RTSR_TR6 ((uint32_t)0x00000040)  /*!< Rising trigger event configuration bit of line 6 */
#define EXTI_RTSR_TR7 ((uint32_t)0x00000080)  /*!< Rising trigger event configuration bit of line 7 */
#define EXTI_RTSR_TR8 ((uint32_t)0x00000100)  /*!< Rising trigger event configuration bit of line 8 */
#define EXTI_RTSR_TR9 ((uint32_t)0x00000200)  /*!< Rising trigger event configuration bit of line 9 */
#define EXTI_RTSR_TR10 ((uint32_t)0x00000400) /*!< Rising trigger event configuration bit of line 10 */
#define EXTI_RTSR_TR11 ((uint32_t)0x00000800) /*!< Rising trigger event configuration bit of line 11 */
#define EXTI_RTSR_TR12 ((uint32_t)0x00001000) /*!< Rising trigger event configuration bit of line 12 */
#define EXTI_RTSR_TR13 ((uint32_t)0x00002000) /*!< Rising trigger event configuration bit of line 13 */
#define EXTI_RTSR_TR14 ((uint32_t)0x00004000) /*!< Rising trigger event configuration bit of line 14 */
#define EXTI_RTSR_TR15 ((uint32_t)0x00008000) /*!< Rising trigger event configuration bit of line 15 */
#define EXTI_RTSR_TR16 ((uint32_t)0x00010000) /*!< Rising trigger event configuration bit of line 16 */
#define EXTI_RTSR_TR17 ((uint32_t)0x00020000) /*!< Rising trigger event configuration bit of line 17 */
#define EXTI_RTSR_TR18 ((uint32_t)0x00040000) /*!< Rising trigger event configuration bit of line 18 */

/******************  Bit definition for EXTI_FTSR register  *******************/
#define EXTI_FTSR_TR0 ((uint32_t)0x00000001)  /*!< Falling trigger event configuration bit of line 0 */
#define EXTI_FTSR_TR1 ((uint32_t)0x00000002)  /*!< Falling trigger event configuration bit of line 1 */
#define EXTI_FTSR_TR2 ((uint32_t)0x00000004)  /*!< Falling trigger event configuration bit of line 2 */
#define EXTI_FTSR_TR3 ((uint32_t)0x00000008)  /*!< Falling trigger event configuration bit of line 3 */
#define EXTI_FTSR_TR4 ((uint32_t)0x00000010)  /*!< Falling trigger event configuration bit of line 4 */
#define EXTI_FTSR_TR5 ((uint32_t)0x00000020)  /*!< Falling trigger event configuration bit of line 5 */
#define EXTI_FTSR_TR6 ((uint32_t)0x00000040)  /*!< Falling trigger event configuration bit of line 6 */
#define EXTI_FTSR_TR7 ((uint32_t)0x00000080)  /*!< Falling trigger event configuration bit of line 7 */
#define EXTI_FTSR_TR8 ((uint32_t)0x00000100)  /*!< Falling trigger event configuration bit of line 8 */
#define EXTI_FTSR_TR9 ((uint32_t)0x00000200)  /*!< Falling trigger event configuration bit of line 9 */
#define EXTI_FTSR_TR10 ((uint32_t)0x00000400) /*!< Falling trigger event configuration bit of line 10 */
#define EXTI_FTSR_TR11 ((uint32_t)0x00000800) /*!< Falling trigger event configuration bit of line 11 */
#define EXTI_FTSR_TR12 ((uint32_t)0x00001000) /*!< Falling trigger event configuration bit of line 12 */
#define EXTI_FTSR_TR13 ((uint32_t)0x00002000) /*!< Falling trigger event configuration bit of line 13 */
#define EXTI_FTSR_TR14 ((uint32_t)0x00004000) /*!< Falling trigger event configuration bit of line 14 */
#define EXTI_FTSR_TR15 ((uint32_t)0x00008000) /*!< Falling trigger event configuration bit of line 15 */
#define EXTI_FTSR_TR16 ((uint32_t)0x00010000) /*!< Falling trigger event configuration bit of line 16 */
#define EXTI_FTSR_TR17 ((uint32_t)0x00020000) /*!< Falling trigger event configuration bit of line 17 */
#define EXTI_FTSR_TR18 ((uint32_t)0x00040000) /*!< Falling trigger event configuration bit of line 18 */

/******************  Bit definition for EXTI_SWIER register  ******************/
#define EXTI_SWIER_SWIER0 ((uint32_t)0x00000001)  /*!< Software Interrupt on line 0 */
#define EXTI_SWIER_SWIER1 ((uint32_t)0x00000002)  /*!< Software Interrupt on line 1 */
#define EXTI_SWIER_SWIER2 ((uint32_t)0x00000004)  /*!< Software Interrupt on line 2 */
#define EXTI_SWIER_SWIER3 ((uint32_t)0x00000008)  /*!< Software Interrupt on line 3 */
#define EXTI_SWIER_SWIER4 ((uint32_t)0x00000010)  /*!< Software Interrupt on line 4 */
#define EXTI_SWIER_SWIER5 ((uint32_t)0x00000020)  /*!< Software Interrupt on line 5 */
#define EXTI_SWIER_SWIER6 ((uint32_t)0x00000040)  /*!< Software Interrupt on line 6 */
#define EXTI_SWIER_SWIER7 ((uint32_t)0x00000080)  /*!< Software Interrupt on line 7 */
#define EXTI_SWIER_SWIER8 ((uint32_t)0x00000100)  /*!< Software Interrupt on line 8 */
#define EXTI_SWIER_SWIER9 ((uint32_t)0x00000200)  /*!< Software Interrupt on line 9 */
#define EXTI_SWIER_SWIER10 ((uint32_t)0x00000400) /*!< Software Interrupt on line 10 */
#define EXTI_SWIER_SWIER11 ((uint32_t)0x00000800) /*!< Software Interrupt on line 11 */
#define EXTI_SWIER_SWIER12 ((uint32_t)0x00001000) /*!< Software Interrupt on line 12 */
#define EXTI_SWIER_SWIER13 ((uint32_t)0x00002000) /*!< Software Interrupt on line 13 */
#define EXTI_SWIER_SWIER14 ((uint32_t)0x00004000) /*!< Software Interrupt on line 14 */
#define EXTI_SWIER_SWIER15 ((uint32_t)0x00008000) /*!< Software Interrupt on line 15 */
#define EXTI_SWIER_SWIER16 ((uint32_t)0x00010000) /*!< Software Interrupt on line 16 */
#define EXTI_SWIER_SWIER17 ((uint32_t)0x00020000) /*!< Software Interrupt on line 17 */
#define EXTI_SWIER_SWIER18 ((uint32_t)0x00040000) /*!< Software Interrupt on line 18 */

/*******************  Bit definition for EXTI_PR register  ********************/
#define EXTI_PR_PR0 ((uint32_t)0x00000001)  /*!< Pending bit 0 */
#define EXTI_PR_PR1 ((uint32_t)0x00000002)  /*!< Pending bit 1 */
#define EXTI_PR_PR2 ((uint32_t)0x00000004)  /*!< Pending bit 2 */
#define EXTI_PR_PR3 ((uint32_t)0x00000008)  /*!< Pending bit 3 */
#define EXTI_PR_PR4 ((uint32_t)0x00000010)  /*!< Pending bit 4 */
#define EXTI_PR_PR5 ((uint32_t)0x00000020)  /*!< Pending bit 5 */
#define EXTI_PR_PR6 ((uint32_t)0x00000040)  /*!< Pending bit 6 */
#define EXTI_PR_PR7 ((uint32_t)0x00000080)  /*!< Pending bit 7 */
#define EXTI_PR_PR8 ((uint32_t)0x00000100)  /*!< Pending bit 8 */
#define EXTI_PR_PR9 ((uint32_t)0x00000200)  /*!< Pending bit 9 */
#define EXTI_PR_PR10 ((uint32_t)0x00000400) /*!< Pending bit 10 */
#define EXTI_PR_PR11 ((uint32_t)0x00000800) /*!< Pending bit 11 */
#define EXTI_PR_PR12 ((uint32_t)0x00001000) /*!< Pending bit 12 */
#define EXTI_PR_PR13 ((uint32_t)0x00002000) /*!< Pending bit 13 */
#define EXTI_PR_PR14 ((uint32_t)0x00004000) /*!< Pending bit 14 */
#define EXTI_PR_PR15 ((uint32_t)0x00008000) /*!< Pending bit 15 */
#define EXTI_PR_PR16 ((uint32_t)0x00010000) /*!< Pending bit 16 */
#define EXTI_PR_PR17 ((uint32_t)0x00020000) /*!< Pending bit 17 */
#define EXTI_PR_PR18 ((uint32_t)0x00040000) /*!< Trigger request occurred on the external interrupt line 18 */

/******************************************************************************/
/*                                                                            */
/*                             DMA Controller                                 */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for DMA_ISR register  ********************/
#define DMA_ISR_GIF1 ((uint32_t)0x00000001)  /*!< Channel 1 Global interrupt flag */
#define DMA_ISR_TCIF1 ((uint32_t)0x00000002) /*!< Channel 1 Transfer Complete flag */
#define DMA_ISR_HTIF1 ((uint32_t)0x00000004) /*!< Channel 1 Half Transfer flag */
#define DMA_ISR_TEIF1 ((uint32_t)0x00000008) /*!< Channel 1 Transfer Error flag */
#define DMA_ISR_GIF2 ((uint32_t)0x00000010)  /*!< Channel 2 Global interrupt flag */
#define DMA_ISR_TCIF2 ((uint32_t)0x00000020) /*!< Channel 2 Transfer Complete flag */
#define DMA_ISR_HTIF2 ((uint32_t)0x00000040) /*!< Channel 2 Half Transfer flag */
#define DMA_ISR_TEIF2 ((uint32_t)0x00000080) /*!< Channel 2 Transfer Error flag */
#define DMA_ISR_GIF3 ((uint32_t)0x00000100)  /*!< Channel 3 Global interrupt flag */
#define DMA_ISR_TCIF3 ((uint32_t)0x00000200) /*!< Channel 3 Transfer Complete flag */
#define DMA_ISR_HTIF3 ((uint32_t)0x00000400) /*!< Channel 3 Half Transfer flag */
#define DMA_ISR_TEIF3 ((uint32_t)0x00000800) /*!< Channel 3 Transfer Error flag */
#define DMA_ISR_GIF4 ((uint32_t)0x00001000)  /*!< Channel 4 Global interrupt flag */
#define DMA_ISR_TCIF4 ((uint32_t)0x00002000) /*!< Channel 4 Transfer Complete flag */
#define DMA_ISR_HTIF4 ((uint32_t)0x00004000) /*!< Channel 4 Half Transfer flag */
#define DMA_ISR_TEIF4 ((uint32_t)0x00008000) /*!< Channel 4 Transfer Error flag */
#define DMA_ISR_GIF5 ((uint32_t)0x00010000)  /*!< Channel 5 Global interrupt flag */
#define DMA_ISR_TCIF5 ((uint32_t)0x00020000) /*!< Channel 5 Transfer Complete flag */
#define DMA_ISR_HTIF5 ((uint32_t)0x00040000) /*!< Channel 5 Half Transfer flag */
#define DMA_ISR_TEIF5 ((uint32_t)0x00080000) /*!< Channel 5 Transfer Error flag */
#define DMA_ISR_GIF6 ((uint32_t)0x00100000)  /*!< Channel 6 Global interrupt flag */
#define DMA_ISR_TCIF6 ((uint32_t)0x00200000) /*!< Channel 6 Transfer Complete flag */
#define DMA_ISR_HTIF6 ((uint32_t)0x00400000) /*!< Channel 6 Half Transfer flag */
#define DMA_ISR_TEIF6 ((uint32_t)0x00800000) /*!< Channel 6 Transfer Error flag */
#define DMA_ISR_GIF7 ((uint32_t)0x01000000)  /*!< Channel 7 Global interrupt flag */
#define DMA_ISR_TCIF7 ((uint32_t)0x02000000) /*!< Channel 7 Transfer Complete flag */
#define DMA_ISR_HTIF7 ((uint32_t)0x04000000) /*!< Channel 7 Half Transfer flag */
#define DMA_ISR_TEIF7 ((uint32_t)0x08000000) /*!< Channel 7 Transfer Error flag */

/*******************  Bit definition for DMA_IFCR register  *******************/
#define DMA_IFCR_CGIF1 ((uint32_t)0x00000001)  /*!< Channel 1 Global interrupt clearr */
#define DMA_IFCR_CTCIF1 ((uint32_t)0x00000002) /*!< Channel 1 Transfer Complete clear */
#define DMA_IFCR_CHTIF1 ((uint32_t)0x00000004) /*!< Channel 1 Half Transfer clear */
#define DMA_IFCR_CTEIF1 ((uint32_t)0x00000008) /*!< Channel 1 Transfer Error clear */
#define DMA_IFCR_CGIF2 ((uint32_t)0x00000010)  /*!< Channel 2 Global interrupt clear */
#define DMA_IFCR_CTCIF2 ((uint32_t)0x00000020) /*!< Channel 2 Transfer Complete clear */
#define DMA_IFCR_CHTIF2 ((uint32_t)0x00000040) /*!< Channel 2 Half Transfer clear */
#define DMA_IFCR_CTEIF2 ((uint32_t)0x00000080) /*!< Channel 2 Transfer Error clear */
#define DMA_IFCR_CGIF3 ((uint32_t)0x00000100)  /*!< Channel 3 Global interrupt clear */
#define DMA_IFCR_CTCIF3 ((uint32_t)0x00000200) /*!< Channel 3 Transfer Complete clear */
#define DMA_IFCR_CHTIF3 ((uint32_t)0x00000400) /*!< Channel 3 Half Transfer clear */
#define DMA_IFCR_CTEIF3 ((uint32_t)0x00000800) /*!< Channel 3 Transfer Error clear */
#define DMA_IFCR_CGIF4 ((uint32_t)0x00001000)  /*!< Channel 4 Global interrupt clear */
#define DMA_IFCR_CTCIF4 ((uint32_t)0x00002000) /*!< Channel 4 Transfer Complete clear */
#define DMA_IFCR_CHTIF4 ((uint32_t)0x00004000) /*!< Channel 4 Half Transfer clear */
#define DMA_IFCR_CTEIF4 ((uint32_t)0x00008000) /*!< Channel 4 Transfer Error clear */
#define DMA_IFCR_CGIF5 ((uint32_t)0x00010000)  /*!< Channel 5 Global interrupt clear */
#define DMA_IFCR_CTCIF5 ((uint32_t)0x00020000) /*!< Channel 5 Transfer Complete clear */
#define DMA_IFCR_CHTIF5 ((uint32_t)0x00040000) /*!< Channel 5 Half Transfer clear */
#define DMA_IFCR_CTEIF5 ((uint32_t)0x00080000) /*!< Channel 5 Transfer Error clear */
#define DMA_IFCR_CGIF6 ((uint32_t)0x00100000)  /*!< Channel 6 Global interrupt clear */
#define DMA_IFCR_CTCIF6 ((uint32_t)0x00200000) /*!< Channel 6 Transfer Complete clear */
#define DMA_IFCR_CHTIF6 ((uint32_t)0x00400000) /*!< Channel 6 Half Transfer clear */
#define DMA_IFCR_CTEIF6 ((uint32_t)0x00800000) /*!< Channel 6 Transfer Error clear */
#define DMA_IFCR_CGIF7 ((uint32_t)0x01000000)  /*!< Channel 7 Global interrupt clear */
#define DMA_IFCR_CTCIF7 ((uint32_t)0x02000000) /*!< Channel 7 Transfer Complete clear */
#define DMA_IFCR_CHTIF7 ((uint32_t)0x04000000) /*!< Channel 7 Half Transfer clear */
#define DMA_IFCR_CTEIF7 ((uint32_t)0x08000000) /*!< Channel 7 Transfer Error clear */

/*******************  Bit definition for DMA_CCR1 register  *******************/
#define DMA_CCR1_EN ((uint16_t)0x0001)   /*!< Channel enable*/
#define DMA_CCR1_TCIE ((uint16_t)0x0002) /*!< Transfer complete interrupt enable */
#define DMA_CCR1_HTIE ((uint16_t)0x0004) /*!< Half Transfer interrupt enable */
#define DMA_CCR1_TEIE ((uint16_t)0x0008) /*!< Transfer error interrupt enable */
#define DMA_CCR1_DIR ((uint16_t)0x0010)  /*!< Data transfer direction */
#define DMA_CCR1_CIRC ((uint16_t)0x0020) /*!< Circular mode */
#define DMA_CCR1_PINC ((uint16_t)0x0040) /*!< Peripheral increment mode */
#define DMA_CCR1_MINC ((uint16_t)0x0080) /*!< Memory increment mode */

#define DMA_CCR1_PSIZE ((uint16_t)0x0300)   /*!< PSIZE[1:0] bits (Peripheral size) */
#define DMA_CCR1_PSIZE_0 ((uint16_t)0x0100) /*!< Bit 0 */
#define DMA_CCR1_PSIZE_1 ((uint16_t)0x0200) /*!< Bit 1 */

#define DMA_CCR1_MSIZE ((uint16_t)0x0C00)   /*!< MSIZE[1:0] bits (Memory size) */
#define DMA_CCR1_MSIZE_0 ((uint16_t)0x0400) /*!< Bit 0 */
#define DMA_CCR1_MSIZE_1 ((uint16_t)0x0800) /*!< Bit 1 */

#define DMA_CCR1_PL ((uint16_t)0x3000)   /*!< PL[1:0] bits(Channel Priority level) */
#define DMA_CCR1_PL_0 ((uint16_t)0x1000) /*!< Bit 0 */
#define DMA_CCR1_PL_1 ((uint16_t)0x2000) /*!< Bit 1 */

#define DMA_CCR1_MEM2MEM ((uint16_t)0x4000) /*!< Memory to memory mode */

/*******************  Bit definition for DMA_CCR2 register  *******************/
#define DMA_CCR2_EN ((uint16_t)0x0001)   /*!< Channel enable */
#define DMA_CCR2_TCIE ((uint16_t)0x0002) /*!< ransfer complete interrupt enable */
#define DMA_CCR2_HTIE ((uint16_t)0x0004) /*!< Half Transfer interrupt enable */
#define DMA_CCR2_TEIE ((uint16_t)0x0008) /*!< Transfer error interrupt enable */
#define DMA_CCR2_DIR ((uint16_t)0x0010)  /*!< Data transfer direction */
#define DMA_CCR2_CIRC ((uint16_t)0x0020) /*!< Circular mode */
#define DMA_CCR2_PINC ((uint16_t)0x0040) /*!< Peripheral increment mode */
#define DMA_CCR2_MINC ((uint16_t)0x0080) /*!< Memory increment mode */

#define DMA_CCR2_PSIZE ((uint16_t)0x0300)   /*!< PSIZE[1:0] bits (Peripheral size) */
#define DMA_CCR2_PSIZE_0 ((uint16_t)0x0100) /*!< Bit 0 */
#define DMA_CCR2_PSIZE_1 ((uint16_t)0x0200) /*!< Bit 1 */

#define DMA_CCR2_MSIZE ((uint16_t)0x0C00)   /*!< MSIZE[1:0] bits (Memory size) */
#define DMA_CCR2_MSIZE_0 ((uint16_t)0x0400) /*!< Bit 0 */
#define DMA_CCR2_MSIZE_1 ((uint16_t)0x0800) /*!< Bit 1 */

#define DMA_CCR2_PL ((uint16_t)0x3000)   /*!< PL[1:0] bits (Channel Priority level) */
#define DMA_CCR2_PL_0 ((uint16_t)0x1000) /*!< Bit 0 */
#define DMA_CCR2_PL_1 ((uint16_t)0x2000) /*!< Bit 1 */

#define DMA_CCR2_MEM2MEM ((uint16_t)0x4000) /*!< Memory to memory mode */

/*******************  Bit definition for DMA_CCR3 register  *******************/
#define DMA_CCR3_EN ((uint16_t)0x0001)   /*!< Channel enable */
#define DMA_CCR3_TCIE ((uint16_t)0x0002) /*!< Transfer complete interrupt enable */
#define DMA_CCR3_HTIE ((uint16_t)0x0004) /*!< Half Transfer interrupt enable */
#define DMA_CCR3_TEIE ((uint16_t)0x0008) /*!< Transfer error interrupt enable */
#define DMA_CCR3_DIR ((uint16_t)0x0010)  /*!< Data transfer direction */
#define DMA_CCR3_CIRC ((uint16_t)0x0020) /*!< Circular mode */
#define DMA_CCR3_PINC ((uint16_t)0x0040) /*!< Peripheral increment mode */
#define DMA_CCR3_MINC ((uint16_t)0x0080) /*!< Memory increment mode */

#define DMA_CCR3_PSIZE ((uint16_t)0x0300)   /*!< PSIZE[1:0] bits (Peripheral size) */
#define DMA_CCR3_PSIZE_0 ((uint16_t)0x0100) /*!< Bit 0 */
#define DMA_CCR3_PSIZE_1 ((uint16_t)0x0200) /*!< Bit 1 */

#define DMA_CCR3_MSIZE ((uint16_t)0x0C00)   /*!< MSIZE[1:0] bits (Memory size) */
#define DMA_CCR3_MSIZE_0 ((uint16_t)0x0400) /*!< Bit 0 */
#define DMA_CCR3_MSIZE_1 ((uint16_t)0x0800) /*!< Bit 1 */

#define DMA_CCR3_PL ((uint16_t)0x3000)   /*!< PL[1:0] bits (Channel Priority level) */
#define DMA_CCR3_PL_0 ((uint16_t)0x1000) /*!< Bit 0 */
#define DMA_CCR3_PL_1 ((uint16_t)0x2000) /*!< Bit 1 */

#define DMA_CCR3_MEM2MEM ((uint16_t)0x4000) /*!< Memory to memory mode */

/*!<******************  Bit definition for DMA_CCR4 register  *******************/
#define DMA_CCR4_EN ((uint16_t)0x0001)   /*!<Channel enable */
#define DMA_CCR4_TCIE ((uint16_t)0x0002) /*!<Transfer complete interrupt enable */
#define DMA_CCR4_HTIE ((uint16_t)0x0004) /*!<Half Transfer interrupt enable */
#define DMA_CCR4_TEIE ((uint16_t)0x0008) /*!<Transfer error interrupt enable */
#define DMA_CCR4_DIR ((uint16_t)0x0010)  /*!<Data transfer direction */
#define DMA_CCR4_CIRC ((uint16_t)0x0020) /*!<Circular mode */
#define DMA_CCR4_PINC ((uint16_t)0x0040) /*!<Peripheral increment mode */
#define DMA_CCR4_MINC ((uint16_t)0x0080) /*!<Memory increment mode */

#define DMA_CCR4_PSIZE ((uint16_t)0x0300)   /*!<PSIZE[1:0] bits (Peripheral size) */
#define DMA_CCR4_PSIZE_0 ((uint16_t)0x0100) /*!<Bit 0 */
#define DMA_CCR4_PSIZE_1 ((uint16_t)0x0200) /*!<Bit 1 */

#define DMA_CCR4_MSIZE ((uint16_t)0x0C00)   /*!<MSIZE[1:0] bits (Memory size) */
#define DMA_CCR4_MSIZE_0 ((uint16_t)0x0400) /*!<Bit 0 */
#define DMA_CCR4_MSIZE_1 ((uint16_t)0x0800) /*!<Bit 1 */

#define DMA_CCR4_PL ((uint16_t)0x3000)   /*!<PL[1:0] bits (Channel Priority level) */
#define DMA_CCR4_PL_0 ((uint16_t)0x1000) /*!<Bit 0 */
#define DMA_CCR4_PL_1 ((uint16_t)0x2000) /*!<Bit 1 */

#define DMA_CCR4_MEM2MEM ((uint16_t)0x4000) /*!<Memory to memory mode */

/******************  Bit definition for DMA_CCR5 register  *******************/
#define DMA_CCR5_EN ((uint16_t)0x0001)   /*!<Channel enable */
#define DMA_CCR5_TCIE ((uint16_t)0x0002) /*!<Transfer complete interrupt enable */
#define DMA_CCR5_HTIE ((uint16_t)0x0004) /*!<Half Transfer interrupt enable */
#define DMA_CCR5_TEIE ((uint16_t)0x0008) /*!<Transfer error interrupt enable */
#define DMA_CCR5_DIR ((uint16_t)0x0010)  /*!<Data transfer direction */
#define DMA_CCR5_CIRC ((uint16_t)0x0020) /*!<Circular mode */
#define DMA_CCR5_PINC ((uint16_t)0x0040) /*!<Peripheral increment mode */
#define DMA_CCR5_MINC ((uint16_t)0x0080) /*!<Memory increment mode */

#define DMA_CCR5_PSIZE ((uint16_t)0x0300)   /*!<PSIZE[1:0] bits (Peripheral size) */
#define DMA_CCR5_PSIZE_0 ((uint16_t)0x0100) /*!<Bit 0 */
#define DMA_CCR5_PSIZE_1 ((uint16_t)0x0200) /*!<Bit 1 */

#define DMA_CCR5_MSIZE ((uint16_t)0x0C00)   /*!<MSIZE[1:0] bits (Memory size) */
#define DMA_CCR5_MSIZE_0 ((uint16_t)0x0400) /*!<Bit 0 */
#define DMA_CCR5_MSIZE_1 ((uint16_t)0x0800) /*!<Bit 1 */

#define DMA_CCR5_PL ((uint16_t)0x3000)   /*!<PL[1:0] bits (Channel Priority level) */
#define DMA_CCR5_PL_0 ((uint16_t)0x1000) /*!<Bit 0 */
#define DMA_CCR5_PL_1 ((uint16_t)0x2000) /*!<Bit 1 */

#define DMA_CCR5_MEM2MEM ((uint16_t)0x4000) /*!<Memory to memory mode enable */

/*******************  Bit definition for DMA_CCR6 register  *******************/
#define DMA_CCR6_EN ((uint16_t)0x0001)   /*!<Channel enable */
#define DMA_CCR6_TCIE ((uint16_t)0x0002) /*!<Transfer complete interrupt enable */
#define DMA_CCR6_HTIE ((uint16_t)0x0004) /*!<Half Transfer interrupt enable */
#define DMA_CCR6_TEIE ((uint16_t)0x0008) /*!<Transfer error interrupt enable */
#define DMA_CCR6_DIR ((uint16_t)0x0010)  /*!<Data transfer direction */
#define DMA_CCR6_CIRC ((uint16_t)0x0020) /*!<Circular mode */
#define DMA_CCR6_PINC ((uint16_t)0x0040) /*!<Peripheral increment mode */
#define DMA_CCR6_MINC ((uint16_t)0x0080) /*!<Memory increment mode */

#define DMA_CCR6_PSIZE ((uint16_t)0x0300)   /*!<PSIZE[1:0] bits (Peripheral size) */
#define DMA_CCR6_PSIZE_0 ((uint16_t)0x0100) /*!<Bit 0 */
#define DMA_CCR6_PSIZE_1 ((uint16_t)0x0200) /*!<Bit 1 */

#define DMA_CCR6_MSIZE ((uint16_t)0x0C00)   /*!<MSIZE[1:0] bits (Memory size) */
#define DMA_CCR6_MSIZE_0 ((uint16_t)0x0400) /*!<Bit 0 */
#define DMA_CCR6_MSIZE_1 ((uint16_t)0x0800) /*!<Bit 1 */

#define DMA_CCR6_PL ((uint16_t)0x3000)   /*!<PL[1:0] bits (Channel Priority level) */
#define DMA_CCR6_PL_0 ((uint16_t)0x1000) /*!<Bit 0 */
#define DMA_CCR6_PL_1 ((uint16_t)0x2000) /*!<Bit 1 */

#define DMA_CCR6_MEM2MEM ((uint16_t)0x4000) /*!<Memory to memory mode */

/*******************  Bit definition for DMA_CCR7 register  *******************/
#define DMA_CCR7_EN ((uint16_t)0x0001)   /*!<Channel enable */
#define DMA_CCR7_TCIE ((uint16_t)0x0002) /*!<Transfer complete interrupt enable */
#define DMA_CCR7_HTIE ((uint16_t)0x0004) /*!<Half Transfer interrupt enable */
#define DMA_CCR7_TEIE ((uint16_t)0x0008) /*!<Transfer error interrupt enable */
#define DMA_CCR7_DIR ((uint16_t)0x0010)  /*!<Data transfer direction */
#define DMA_CCR7_CIRC ((uint16_t)0x0020) /*!<Circular mode */
#define DMA_CCR7_PINC ((uint16_t)0x0040) /*!<Peripheral increment mode */
#define DMA_CCR7_MINC ((uint16_t)0x0080) /*!<Memory increment mode */

#define DMA_CCR7_PSIZE , ((uint16_t)0x0300) /*!<PSIZE[1:0] bits (Peripheral size) */
#define DMA_CCR7_PSIZE_0 ((uint16_t)0x0100) /*!<Bit 0 */
#define DMA_CCR7_PSIZE_1 ((uint16_t)0x0200) /*!<Bit 1 */

#define DMA_CCR7_MSIZE ((uint16_t)0x0C00)   /*!<MSIZE[1:0] bits (Memory size) */
#define DMA_CCR7_MSIZE_0 ((uint16_t)0x0400) /*!<Bit 0 */
#define DMA_CCR7_MSIZE_1 ((uint16_t)0x0800) /*!<Bit 1 */

#define DMA_CCR7_PL ((uint16_t)0x3000)   /*!<PL[1:0] bits (Channel Priority level) */
#define DMA_CCR7_PL_0 ((uint16_t)0x1000) /*!<Bit 0 */
#define DMA_CCR7_PL_1 ((uint16_t)0x2000) /*!<Bit 1 */

#define DMA_CCR7_MEM2MEM ((uint16_t)0x4000) /*!<Memory to memory mode enable */

/******************  Bit definition for DMA_CNDTR1 register  ******************/
#define DMA_CNDTR1_NDT ((uint16_t)0xFFFF) /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR2 register  ******************/
#define DMA_CNDTR2_NDT ((uint16_t)0xFFFF) /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR3 register  ******************/
#define DMA_CNDTR3_NDT ((uint16_t)0xFFFF) /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR4 register  ******************/
#define DMA_CNDTR4_NDT ((uint16_t)0xFFFF) /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR5 register  ******************/
#define DMA_CNDTR5_NDT ((uint16_t)0xFFFF) /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR6 register  ******************/
#define DMA_CNDTR6_NDT ((uint16_t)0xFFFF) /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR7 register  ******************/
#define DMA_CNDTR7_NDT ((uint16_t)0xFFFF) /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CPAR1 register  *******************/
#define DMA_CPAR1_PA ((uint32_t)0xFFFFFFFF) /*!<Peripheral Address */

/******************  Bit definition for DMA_CPAR2 register  *******************/
#define DMA_CPAR2_PA ((uint32_t)0xFFFFFFFF) /*!<Peripheral Address */

/******************  Bit definition for DMA_CPAR3 register  *******************/
#define DMA_CPAR3_PA ((uint32_t)0xFFFFFFFF) /*!<Peripheral Address */

/******************  Bit definition for DMA_CPAR4 register  *******************/
#define DMA_CPAR4_PA ((uint32_t)0xFFFFFFFF) /*!<Peripheral Address */

/******************  Bit definition for DMA_CPAR5 register  *******************/
#define DMA_CPAR5_PA ((uint32_t)0xFFFFFFFF) /*!<Peripheral Address */

/******************  Bit definition for DMA_CPAR6 register  *******************/
#define DMA_CPAR6_PA ((uint32_t)0xFFFFFFFF) /*!<Peripheral Address */

/******************  Bit definition for DMA_CPAR7 register  *******************/
#define DMA_CPAR7_PA ((uint32_t)0xFFFFFFFF) /*!<Peripheral Address */

/******************  Bit definition for DMA_CMAR1 register  *******************/
#define DMA_CMAR1_MA ((uint32_t)0xFFFFFFFF) /*!<Memory Address */

/******************  Bit definition for DMA_CMAR2 register  *******************/
#define DMA_CMAR2_MA ((uint32_t)0xFFFFFFFF) /*!<Memory Address */

/******************  Bit definition for DMA_CMAR3 register  *******************/
#define DMA_CMAR3_MA ((uint32_t)0xFFFFFFFF) /*!<Memory Address */

/******************  Bit definition for DMA_CMAR4 register  *******************/
#define DMA_CMAR4_MA ((uint32_t)0xFFFFFFFF) /*!<Memory Address */

/******************  Bit definition for DMA_CMAR5 register  *******************/
#define DMA_CMAR5_MA ((uint32_t)0xFFFFFFFF) /*!<Memory Address */

/******************  Bit definition for DMA_CMAR6 register  *******************/
#define DMA_CMAR6_MA ((uint32_t)0xFFFFFFFF) /*!<Memory Address */

/******************  Bit definition for DMA_CMAR7 register  *******************/
#define DMA_CMAR7_MA ((uint32_t)0xFFFFFFFF) /*!<Memory Address */

/******************************************************************************/
/*                                                                            */
/*                        Analog to Digital Converter                         */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for ADDATA register  ********************/
#define ADDATA_DATA ((uint32_t)0x00000FFF)         /*!<ADC 12bit convert data */
#define ADDATA_CHANNELSEL ((uint32_t)0x00070000)   /*!<CHANNELSEL[19:16] (ADC current channel convert data) */
#define ADDATA_CHANNELSEL_0 ((uint32_t)0x00010000) /*!<Bit 0 */
#define ADDATA_CHANNELSEL_1 ((uint32_t)0x00020000) /*!<Bit 1*/
#define ADDATA_CHANNELSEL_2 ((uint32_t)0x00040000) /*!<Bit 2 */
#define ADDATA_CHANNELSEL_3 ((uint32_t)0x00080000) /*!<Bit 3 */
#define ADDATA_OVERRUN ((uint32_t)0x00100000)      /*!<ADC data will be cover */
#define ADDATA_VALID ((uint32_t)0x00200000)        /*!<ADC data[11:0] is valid*/

/********************  Bit definition for ADCFG register  ********************/
#define ADCFG_ADEN ((uint32_t)0x00000001)      /*!<ADC convert enable */
#define ADCFG_ADWEN ((uint32_t)0x00000002)     /*!<ADC window compare enable */
#define ADCFG_TVSEN ((uint32_t)0x00000004)     /*!<ADC sensor enable */
#define ADCFG_ADCPRE_2 ((uint32_t)0x00000000)  /*!<ADC preclk 2 */
#define ADCFG_ADCPRE_4 ((uint32_t)0x00000010)  /*!<ADC preclk 4 */
#define ADCFG_ADCPRE_6 ((uint32_t)0x00000020)  /*!<ADC preclk 6 */
#define ADCFG_ADCPRE_8 ((uint32_t)0x00000030)  /*!<ADC preclk 8 */
#define ADCFG_ADCPRE_10 ((uint32_t)0x00000040) /*!<ADC preclk 10 */
#define ADCFG_ADCPRE_12 ((uint32_t)0x00000050) /*!<ADC preclk 12 */
#define ADCFG_ADCPRE_14 ((uint32_t)0x00000060) /*!<ADC preclk 14 */
#define ADCFG_ADCPRE_16 ((uint32_t)0x00000070) /*!<ADC preclk 16 */

/********************  Bit definition for ADCR register  ********************/
#define ADCR_ADIE ((uint32_t)0x00000001)     /*!<ADC interrupt enable */
#define ADCR_ADWIE ((uint32_t)0x00000002)    /*!<ADC window compare interrupt enable */
#define ADCR_TRGEN ((uint32_t)0x00000004)    /*!<extranal trigger single start AD convert */
#define ADCR_DMAEN ((uint32_t)0x00000008)    /*!<ADC DMA enable */
#define ADCR_TRGSEL ((uint32_t)0x00000070)   /*!<TRGSEL[6:4] ADC1 external trigger source select */
#define ADCR_TRGSEL_0 ((uint32_t)0x00000010) /*!<Bit 0 */
#define ADCR_TRGSEL_1 ((uint32_t)0x00000020) /*!<Bit 1 */
#define ADCR_TRGSEL_2 ((uint32_t)0x00000040) /*!<Bit 2 */

#define ADCR_ADST ((uint32_t)0x00000100)          /*!<ADC start convert data */
#define ADCR_ADMD_SINGLE ((uint32_t)0x00000000)   /*!<ADC single convert mode */
#define ADCR_ADMD_PERIOD ((uint32_t)0x00000200)   /*!<ADC single period convert mode */
#define ADCR_ADMD_CONTINUE ((uint32_t)0x00000400) /*!<ADC continue scan convert mode */
#define ADCR_ALIGN_LEFT ((uint32_t)0x00000800)    /*!<ADC data left align */
#define ADCR_ALIGN_RIGHT ((uint32_t)0x00000000)   /*!<ADC data right align */
#define ADCR_CMPCH ((uint32_t)0x0000F000)         /*!<CMPCH[15:12] ADC window compare channel0 convert data */
#define ADCR_CMPCH_0 ((uint32_t)0x00001000)       /*!<Bit 0 */
#define ADCR_CMPCH_1 ((uint32_t)0x00002000)       /*!<Bit 1 */
#define ADCR_CMPCH_2 ((uint32_t)0x00004000)       /*!<Bit 2 */
#define ADCR_CMPCH_3 ((uint32_t)0x00008000)       /*!<Bit 3 */

/********************  Bit definition for ADCHS register  ********************/
#define ADCHS_CHEN0 ((uint32_t)0x00000001)    /*!<ADC channel0 enable */
#define ADCHS_CHEN1 ((uint32_t)0x00000002)    /*!<ADC channel1 enable */
#define ADCHS_CHEN2 ((uint32_t)0x00000004)    /*!<ADC channel2 enable */
#define ADCHS_CHEN3 ((uint32_t)0x00000008)    /*!<ADC channel3 enable */
#define ADCHS_CHEN4 ((uint32_t)0x00000010)    /*!<ADC channel4 enable */
#define ADCHS_CHEN5 ((uint32_t)0x00000020)    /*!<ADC channel5 enable */
#define ADCHS_CHEN6 ((uint32_t)0x00000040)    /*!<ADC channel6 enable */
#define ADCHS_CHEN7 ((uint32_t)0x00000080)    /*!<ADC channel7 enable */
#define ADCHS_SENSOREN ((uint32_t)0x00000100) /*!<ADC sensor enable */

/********************  Bit definition for ADCMPR register  ********************/
#define ADCMPR_CMPLDATA ((uint32_t)0x00000FFF) /*!<ADC 12bit window compare DOWN LEVEL DATA*/
#define ADCMPR_CMPHDATA ((uint32_t)0x0FFF0000) /*!<ADC 12bit window compare UP LEVEL DATA*/

/********************  Bit definition for ADSTA register  ********************/
#define ADSTA_ADIF ((uint32_t)0x00000001)      /*!<ADC convert complete flag*/
#define ADSTA_ADWIF ((uint32_t)0x00000002)     /*!<ADC compare flag*/
#define ADSTA_BUSY ((uint32_t)0x00000004)      /*!<ADC busy flag*/
#define ADSTA_CHANNEL ((uint32_t)0x000001F0)   /*!<CHANNEL[8:4] ADC current channel*/
#define ADSTA_CHANNEL_0 ((uint32_t)0x00000010) /*!<Bit 0 */
#define ADSTA_CHANNEL_1 ((uint32_t)0x00000020) /*!<Bit 1*/
#define ADSTA_CHANNEL_2 ((uint32_t)0x00000040) /*!<Bit 2*/
#define ADSTA_CHANNEL_3 ((uint32_t)0x00000080) /*!<Bit 3*/
#define ADSTA_CHANNEL_4 ((uint32_t)0x00000100) /*!<Bit 4*/

#define ADSTA_VALID ((uint32_t)0x0001FE00)     /*!<VALID[16:9] ADC channel0 valid flag*/
#define ADSTA_VALID_0 ((uint32_t)0x00000200)   /*!<Bit 0*/
#define ADSTA_VALID_1 ((uint32_t)0x00000400)   /*!<Bit 1*/
#define ADSTA_VALID_2 ((uint32_t)0x00000800)   /*!<Bit 2*/
#define ADSTA_VALID_3 ((uint32_t)0x00001000)   /*!<Bit 3*/
#define ADSTA_VALID_4 ((uint32_t)0x00002000)   /*!<Bit 4*/
#define ADSTA_VALID_5 ((uint32_t)0x00004000)   /*!<Bit 5*/
#define ADSTA_VALID_6 ((uint32_t)0x00008000)   /*!<Bit 6*/
#define ADSTA_VALID_7 ((uint32_t)0x00010000)   /*!<Bit 7*/
#define ADSTA_OVERRUN ((uint32_t)0x1FF00000)   /*!<OVERRUN[28:20] ADC channel0 data covered flag*/
#define ADSTA_OVERRUN_0 ((uint32_t)0x00100000) /*!<Bit 0*/
#define ADSTA_OVERRUN_1 ((uint32_t)0x00200000) /*!<Bit 1*/
#define ADSTA_OVERRUN_2 ((uint32_t)0x00400000) /*!<Bit 2*/
#define ADSTA_OVERRUN_3 ((uint32_t)0x00800000) /*!<Bit 3*/
#define ADSTA_OVERRUN_4 ((uint32_t)0x01000000) /*!<Bit 4*/
#define ADSTA_OVERRUN_5 ((uint32_t)0x02000000) /*!<Bit 5*/
#define ADSTA_OVERRUN_6 ((uint32_t)0x04000000) /*!<Bit 6*/
#define ADSTA_OVERRUN_7 ((uint32_t)0x08000000) /*!<Bit 7*/
#define ADSTA_OVERRUN_8 ((uint32_t)0x10000000) /*!<Bit 8*/

/********************  Bit definition for ADDR0~ADDR8 register  ********************/
#define ADDR_DATA ((uint32_t)0x00000FFF)    /*!<ADC channel convert data */
#define ADDR_OVERRUN ((uint32_t)0x00100000) /*!<ADC data covered flag */
#define ADDR_VALID ((uint32_t)0x00200000)   /*!<ADC data valid flag*/

/******************************************************************************/
/*                                                                            */
/*                                   COMP                                     */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for COMP_CSR register  *******************/
#define COMP_CSR_EN ((uint32_t)0x00000001)
#define COMP_CSR_POL ((uint32_t)0x00008000)
#define COMP_CSR_OUT ((uint32_t)0x40000000)
#define COMP_CSR_LOCK ((uint32_t)0x80000000)

#define COMP_CSR_MODE ((uint32_t)0x0000000C)
#define COMP_CSR_MODE_0 ((uint32_t)0x00000004)
#define COMP_CSR_MODE_1 ((uint32_t)0x00000008)

#define COMP_CSR_INM_SEL ((uint32_t)0x00000070)
#define COMP_CSR_INM_SEL_0 ((uint32_t)0x00000010)
#define COMP_CSR_INM_SEL_1 ((uint32_t)0x00000020)
#define COMP_CSR_INM_SEL_2 ((uint32_t)0x00000040)

#define COMP_CSR_INP_SEL ((uint32_t)0x00000380)
#define COMP_CSR_INP_SEL_0 ((uint32_t)0x00000080)
#define COMP_CSR_INP_SEL_1 ((uint32_t)0x00000100)
#define COMP_CSR_INP_SEL_2 ((uint32_t)0x00000200)

#define COMP_CSR_OUT_SEL ((uint32_t)0x00003C00)
#define COMP_CSR_OUT_SEL_0 ((uint32_t)0x00000400)
#define COMP_CSR_OUT_SEL_1 ((uint32_t)0x00000800)
#define COMP_CSR_OUT_SEL_2 ((uint32_t)0x00001000)
#define COMP_CSR_OUT_SEL_3 ((uint32_t)0x00002000)

#define COMP_CSR_HYST ((uint32_t)0x00030000)
#define COMP_CSR_HYST_0 ((uint32_t)0x00010000)
#define COMP_CSR_HYST_1 ((uint32_t)0x00020000)

#define COMP_CSR_BLANKING ((uint32_t)0x001C0000)
#define COMP_CSR_BLANKING_0 ((uint32_t)0x00040000)
#define COMP_CSR_BLANKING_1 ((uint32_t)0x00080000)
#define COMP_CSR_BLANKING_2 ((uint32_t)0x00100000)

/******************************************************************************/
/*                                                                            */
/*                               Timers (TIM)                                 */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for TIM_CR1 register  ********************/
#define TIM_CR1_CEN ((uint16_t)0x0001)  /*!<Counter enable */
#define TIM_CR1_UDIS ((uint16_t)0x0002) /*!<Update disable */
#define TIM_CR1_URS ((uint16_t)0x0004)  /*!<Update request source */
#define TIM_CR1_OPM ((uint16_t)0x0008)  /*!<One pulse mode */
#define TIM_CR1_DIR ((uint16_t)0x0010)  /*!<Direction */

#define TIM_CR1_CMS ((uint16_t)0x0060)   /*!<CMS[1:0] bits (Center-aligned mode selection) */
#define TIM_CR1_CMS_0 ((uint16_t)0x0020) /*!<Bit 0 */
#define TIM_CR1_CMS_1 ((uint16_t)0x0040) /*!<Bit 1 */

#define TIM_CR1_ARPE ((uint16_t)0x0080) /*!<Auto-reload preload enable */

#define TIM_CR1_CKD ((uint16_t)0x0300)   /*!<CKD[1:0] bits (clock division) */
#define TIM_CR1_CKD_0 ((uint16_t)0x0100) /*!<Bit 0 */
#define TIM_CR1_CKD_1 ((uint16_t)0x0200) /*!<Bit 1 */

/*******************  Bit definition for TIM_CR2 register  ********************/
#define TIM_CR2_CCPC ((uint16_t)0x0001) /*!<Capture/Compare Preloaded Control */
#define TIM_CR2_CCUS ((uint16_t)0x0004) /*!<Capture/Compare Control Update Selection */
#define TIM_CR2_CCDS ((uint16_t)0x0008) /*!<Capture/Compare DMA Selection */

#define TIM_CR2_MMS ((uint16_t)0x0070)   /*!<MMS[2:0] bits (Master Mode Selection) */
#define TIM_CR2_MMS_0 ((uint16_t)0x0010) /*!<Bit 0 */
#define TIM_CR2_MMS_1 ((uint16_t)0x0020) /*!<Bit 1 */
#define TIM_CR2_MMS_2 ((uint16_t)0x0040) /*!<Bit 2 */

#define TIM_CR2_TI1S ((uint16_t)0x0080)  /*!<TI1 Selection */
#define TIM_CR2_OIS1 ((uint16_t)0x0100)  /*!<Output Idle state 1 (OC1 output) */
#define TIM_CR2_OIS1N ((uint16_t)0x0200) /*!<Output Idle state 1 (OC1N output) */
#define TIM_CR2_OIS2 ((uint16_t)0x0400)  /*!<Output Idle state 2 (OC2 output) */
#define TIM_CR2_OIS2N ((uint16_t)0x0800) /*!<Output Idle state 2 (OC2N output) */
#define TIM_CR2_OIS3 ((uint16_t)0x1000)  /*!<Output Idle state 3 (OC3 output) */
#define TIM_CR2_OIS3N ((uint16_t)0x2000) /*!<Output Idle state 3 (OC3N output) */
#define TIM_CR2_OIS4 ((uint16_t)0x4000)  /*!<Output Idle state 4 (OC4 output) */

/*******************  Bit definition for TIM_SMCR register  *******************/
#define TIM_SMCR_SMS ((uint16_t)0x0007)   /*!<SMS[2:0] bits (Slave mode selection) */
#define TIM_SMCR_SMS_0 ((uint16_t)0x0001) /*!<Bit 0 */
#define TIM_SMCR_SMS_1 ((uint16_t)0x0002) /*!<Bit 1 */
#define TIM_SMCR_SMS_2 ((uint16_t)0x0004) /*!<Bit 2 */

#define TIM_SMCR_OCCS ((uint16_t)0x0008) /*!< OCREF clear selection */

#define TIM_SMCR_TS ((uint16_t)0x0070)   /*!<TS[2:0] bits (Trigger selection) */
#define TIM_SMCR_TS_0 ((uint16_t)0x0010) /*!<Bit 0 */
#define TIM_SMCR_TS_1 ((uint16_t)0x0020) /*!<Bit 1 */
#define TIM_SMCR_TS_2 ((uint16_t)0x0040) /*!<Bit 2 */

#define TIM_SMCR_MSM ((uint16_t)0x0080) /*!<Master/slave mode */

#define TIM_SMCR_ETF ((uint16_t)0x0F00)   /*!<ETF[3:0] bits (External trigger filter) */
#define TIM_SMCR_ETF_0 ((uint16_t)0x0100) /*!<Bit 0 */
#define TIM_SMCR_ETF_1 ((uint16_t)0x0200) /*!<Bit 1 */
#define TIM_SMCR_ETF_2 ((uint16_t)0x0400) /*!<Bit 2 */
#define TIM_SMCR_ETF_3 ((uint16_t)0x0800) /*!<Bit 3 */

#define TIM_SMCR_ETPS ((uint16_t)0x3000)   /*!<ETPS[1:0] bits (External trigger prescaler) */
#define TIM_SMCR_ETPS_0 ((uint16_t)0x1000) /*!<Bit 0 */
#define TIM_SMCR_ETPS_1 ((uint16_t)0x2000) /*!<Bit 1 */

#define TIM_SMCR_ECE ((uint16_t)0x4000) /*!<External clock enable */
#define TIM_SMCR_ETP ((uint16_t)0x8000) /*!<External trigger polarity */

/*******************  Bit definition for TIM_DIER register  *******************/
#define TIM_DIER_UIE ((uint16_t)0x0001)   /*!<Update interrupt enable */
#define TIM_DIER_CC1IE ((uint16_t)0x0002) /*!<Capture/Compare 1 interrupt enable */
#define TIM_DIER_CC2IE ((uint16_t)0x0004) /*!<Capture/Compare 2 interrupt enable */
#define TIM_DIER_CC3IE ((uint16_t)0x0008) /*!<Capture/Compare 3 interrupt enable */
#define TIM_DIER_CC4IE ((uint16_t)0x0010) /*!<Capture/Compare 4 interrupt enable */
#define TIM_DIER_COMIE ((uint16_t)0x0020) /*!<COM interrupt enable */
#define TIM_DIER_TIE ((uint16_t)0x0040)   /*!<Trigger interrupt enable */
#define TIM_DIER_BIE ((uint16_t)0x0080)   /*!<Break interrupt enable */
#define TIM_DIER_UDE ((uint16_t)0x0100)   /*!<Update DMA request enable */
#define TIM_DIER_CC1DE ((uint16_t)0x0200) /*!<Capture/Compare 1 DMA request enable */
#define TIM_DIER_CC2DE ((uint16_t)0x0400) /*!<Capture/Compare 2 DMA request enable */
#define TIM_DIER_CC3DE ((uint16_t)0x0800) /*!<Capture/Compare 3 DMA request enable */
#define TIM_DIER_CC4DE ((uint16_t)0x1000) /*!<Capture/Compare 4 DMA request enable */
#define TIM_DIER_COMDE ((uint16_t)0x2000) /*!<COM DMA request enable */
#define TIM_DIER_TDE ((uint16_t)0x4000)   /*!<Trigger DMA request enable */

/********************  Bit definition for TIM_SR register  ********************/
#define TIM_SR_UIF ((uint16_t)0x0001)   /*!<Update interrupt Flag */
#define TIM_SR_CC1IF ((uint16_t)0x0002) /*!<Capture/Compare 1 interrupt Flag */
#define TIM_SR_CC2IF ((uint16_t)0x0004) /*!<Capture/Compare 2 interrupt Flag */
#define TIM_SR_CC3IF ((uint16_t)0x0008) /*!<Capture/Compare 3 interrupt Flag */
#define TIM_SR_CC4IF ((uint16_t)0x0010) /*!<Capture/Compare 4 interrupt Flag */
#define TIM_SR_COMIF ((uint16_t)0x0020) /*!<COM interrupt Flag */
#define TIM_SR_TIF ((uint16_t)0x0040)   /*!<Trigger interrupt Flag */
#define TIM_SR_BIF ((uint16_t)0x0080)   /*!<Break interrupt Flag */
#define TIM_SR_CC1OF ((uint16_t)0x0200) /*!<Capture/Compare 1 Overcapture Flag */
#define TIM_SR_CC2OF ((uint16_t)0x0400) /*!<Capture/Compare 2 Overcapture Flag */
#define TIM_SR_CC3OF ((uint16_t)0x0800) /*!<Capture/Compare 3 Overcapture Flag */
#define TIM_SR_CC4OF ((uint16_t)0x1000) /*!<Capture/Compare 4 Overcapture Flag */

/*******************  Bit definition for TIM_EGR register  ********************/
#define TIM_EGR_UG ((uint8_t)0x01)   /*!<Update Generation */
#define TIM_EGR_CC1G ((uint8_t)0x02) /*!<Capture/Compare 1 Generation */
#define TIM_EGR_CC2G ((uint8_t)0x04) /*!<Capture/Compare 2 Generation */
#define TIM_EGR_CC3G ((uint8_t)0x08) /*!<Capture/Compare 3 Generation */
#define TIM_EGR_CC4G ((uint8_t)0x10) /*!<Capture/Compare 4 Generation */
#define TIM_EGR_COMG ((uint8_t)0x20) /*!<Capture/Compare Control Update Generation */
#define TIM_EGR_TG ((uint8_t)0x40)   /*!<Trigger Generation */
#define TIM_EGR_BG ((uint8_t)0x80)   /*!<Break Generation */

/******************  Bit definition for TIM_CCMR1 register  *******************/
#define TIM_CCMR1_CC1S ((uint16_t)0x0003)   /*!<CC1S[1:0] bits (Capture/Compare 1 Selection) */
#define TIM_CCMR1_CC1S_0 ((uint16_t)0x0001) /*!<Bit 0 */
#define TIM_CCMR1_CC1S_1 ((uint16_t)0x0002) /*!<Bit 1 */

#define TIM_CCMR1_OC1FE ((uint16_t)0x0004) /*!<Output Compare 1 Fast enable */
#define TIM_CCMR1_OC1PE ((uint16_t)0x0008) /*!<Output Compare 1 Preload enable */

#define TIM_CCMR1_OC1M ((uint16_t)0x0070)   /*!<OC1M[2:0] bits (Output Compare 1 Mode) */
#define TIM_CCMR1_OC1M_0 ((uint16_t)0x0010) /*!<Bit 0 */
#define TIM_CCMR1_OC1M_1 ((uint16_t)0x0020) /*!<Bit 1 */
#define TIM_CCMR1_OC1M_2 ((uint16_t)0x0040) /*!<Bit 2 */

#define TIM_CCMR1_OC1CE ((uint16_t)0x0080) /*!<Output Compare 1Clear Enable */

#define TIM_CCMR1_CC2S ((uint16_t)0x0300)   /*!<CC2S[1:0] bits (Capture/Compare 2 Selection) */
#define TIM_CCMR1_CC2S_0 ((uint16_t)0x0100) /*!<Bit 0 */
#define TIM_CCMR1_CC2S_1 ((uint16_t)0x0200) /*!<Bit 1 */

#define TIM_CCMR1_OC2FE ((uint16_t)0x0400) /*!<Output Compare 2 Fast enable */
#define TIM_CCMR1_OC2PE ((uint16_t)0x0800) /*!<Output Compare 2 Preload enable */

#define TIM_CCMR1_OC2M ((uint16_t)0x7000)   /*!<OC2M[2:0] bits (Output Compare 2 Mode) */
#define TIM_CCMR1_OC2M_0 ((uint16_t)0x1000) /*!<Bit 0 */
#define TIM_CCMR1_OC2M_1 ((uint16_t)0x2000) /*!<Bit 1 */
#define TIM_CCMR1_OC2M_2 ((uint16_t)0x4000) /*!<Bit 2 */

#define TIM_CCMR1_OC2CE ((uint16_t)0x8000) /*!<Output Compare 2 Clear Enable */

/*----------------------------------------------------------------------------*/

#define TIM_CCMR1_IC1PSC ((uint16_t)0x000C)   /*!<IC1PSC[1:0] bits (Input Capture 1 Prescaler) */
#define TIM_CCMR1_IC1PSC_0 ((uint16_t)0x0004) /*!<Bit 0 */
#define TIM_CCMR1_IC1PSC_1 ((uint16_t)0x0008) /*!<Bit 1 */

#define TIM_CCMR1_IC1F ((uint16_t)0x00F0)   /*!<IC1F[3:0] bits (Input Capture 1 Filter) */
#define TIM_CCMR1_IC1F_0 ((uint16_t)0x0010) /*!<Bit 0 */
#define TIM_CCMR1_IC1F_1 ((uint16_t)0x0020) /*!<Bit 1 */
#define TIM_CCMR1_IC1F_2 ((uint16_t)0x0040) /*!<Bit 2 */
#define TIM_CCMR1_IC1F_3 ((uint16_t)0x0080) /*!<Bit 3 */

#define TIM_CCMR1_IC2PSC ((uint16_t)0x0C00)   /*!<IC2PSC[1:0] bits (Input Capture 2 Prescaler) */
#define TIM_CCMR1_IC2PSC_0 ((uint16_t)0x0400) /*!<Bit 0 */
#define TIM_CCMR1_IC2PSC_1 ((uint16_t)0x0800) /*!<Bit 1 */

#define TIM_CCMR1_IC2F ((uint16_t)0xF000)   /*!<IC2F[3:0] bits (Input Capture 2 Filter) */
#define TIM_CCMR1_IC2F_0 ((uint16_t)0x1000) /*!<Bit 0 */
#define TIM_CCMR1_IC2F_1 ((uint16_t)0x2000) /*!<Bit 1 */
#define TIM_CCMR1_IC2F_2 ((uint16_t)0x4000) /*!<Bit 2 */
#define TIM_CCMR1_IC2F_3 ((uint16_t)0x8000) /*!<Bit 3 */

/******************  Bit definition for TIM_CCMR2 register  *******************/
#define TIM_CCMR2_CC3S ((uint16_t)0x0003)   /*!<CC3S[1:0] bits (Capture/Compare 3 Selection) */
#define TIM_CCMR2_CC3S_0 ((uint16_t)0x0001) /*!<Bit 0 */
#define TIM_CCMR2_CC3S_1 ((uint16_t)0x0002) /*!<Bit 1 */

#define TIM_CCMR2_OC3FE ((uint16_t)0x0004) /*!<Output Compare 3 Fast enable */
#define TIM_CCMR2_OC3PE ((uint16_t)0x0008) /*!<Output Compare 3 Preload enable */

#define TIM_CCMR2_OC3M ((uint16_t)0x0070)   /*!<OC3M[2:0] bits (Output Compare 3 Mode) */
#define TIM_CCMR2_OC3M_0 ((uint16_t)0x0010) /*!<Bit 0 */
#define TIM_CCMR2_OC3M_1 ((uint16_t)0x0020) /*!<Bit 1 */
#define TIM_CCMR2_OC3M_2 ((uint16_t)0x0040) /*!<Bit 2 */

#define TIM_CCMR2_OC3CE ((uint16_t)0x0080) /*!<Output Compare 3 Clear Enable */

#define TIM_CCMR2_CC4S ((uint16_t)0x0300)   /*!<CC4S[1:0] bits (Capture/Compare 4 Selection) */
#define TIM_CCMR2_CC4S_0 ((uint16_t)0x0100) /*!<Bit 0 */
#define TIM_CCMR2_CC4S_1 ((uint16_t)0x0200) /*!<Bit 1 */

#define TIM_CCMR2_OC4FE ((uint16_t)0x0400) /*!<Output Compare 4 Fast enable */
#define TIM_CCMR2_OC4PE ((uint16_t)0x0800) /*!<Output Compare 4 Preload enable */

#define TIM_CCMR2_OC4M ((uint16_t)0x7000)   /*!<OC4M[2:0] bits (Output Compare 4 Mode) */
#define TIM_CCMR2_OC4M_0 ((uint16_t)0x1000) /*!<Bit 0 */
#define TIM_CCMR2_OC4M_1 ((uint16_t)0x2000) /*!<Bit 1 */
#define TIM_CCMR2_OC4M_2 ((uint16_t)0x4000) /*!<Bit 2 */

#define TIM_CCMR2_OC4CE ((uint16_t)0x8000) /*!<Output Compare 4 Clear Enable */

/*----------------------------------------------------------------------------*/

#define TIM_CCMR2_IC3PSC ((uint16_t)0x000C)   /*!<IC3PSC[1:0] bits (Input Capture 3 Prescaler) */
#define TIM_CCMR2_IC3PSC_0 ((uint16_t)0x0004) /*!<Bit 0 */
#define TIM_CCMR2_IC3PSC_1 ((uint16_t)0x0008) /*!<Bit 1 */

#define TIM_CCMR2_IC3F ((uint16_t)0x00F0)   /*!<IC3F[3:0] bits (Input Capture 3 Filter) */
#define TIM_CCMR2_IC3F_0 ((uint16_t)0x0010) /*!<Bit 0 */
#define TIM_CCMR2_IC3F_1 ((uint16_t)0x0020) /*!<Bit 1 */
#define TIM_CCMR2_IC3F_2 ((uint16_t)0x0040) /*!<Bit 2 */
#define TIM_CCMR2_IC3F_3 ((uint16_t)0x0080) /*!<Bit 3 */

#define TIM_CCMR2_IC4PSC ((uint16_t)0x0C00)   /*!<IC4PSC[1:0] bits (Input Capture 4 Prescaler) */
#define TIM_CCMR2_IC4PSC_0 ((uint16_t)0x0400) /*!<Bit 0 */
#define TIM_CCMR2_IC4PSC_1 ((uint16_t)0x0800) /*!<Bit 1 */

#define TIM_CCMR2_IC4F ((uint16_t)0xF000)   /*!<IC4F[3:0] bits (Input Capture 4 Filter) */
#define TIM_CCMR2_IC4F_0 ((uint16_t)0x1000) /*!<Bit 0 */
#define TIM_CCMR2_IC4F_1 ((uint16_t)0x2000) /*!<Bit 1 */
#define TIM_CCMR2_IC4F_2 ((uint16_t)0x4000) /*!<Bit 2 */
#define TIM_CCMR2_IC4F_3 ((uint16_t)0x8000) /*!<Bit 3 */

/*******************  Bit definition for TIM_CCER register  *******************/
#define TIM_CCER_CC1E ((uint16_t)0x0001)  /*!<Capture/Compare 1 output enable */
#define TIM_CCER_CC1P ((uint16_t)0x0002)  /*!<Capture/Compare 1 output Polarity */
#define TIM_CCER_CC1NE ((uint16_t)0x0004) /*!<Capture/Compare 1 Complementary output enable */
#define TIM_CCER_CC1NP ((uint16_t)0x0008) /*!<Capture/Compare 1 Complementary output Polarity */
#define TIM_CCER_CC2E ((uint16_t)0x0010)  /*!<Capture/Compare 2 output enable */
#define TIM_CCER_CC2P ((uint16_t)0x0020)  /*!<Capture/Compare 2 output Polarity */
#define TIM_CCER_CC2NE ((uint16_t)0x0040) /*!<Capture/Compare 2 Complementary output enable */
#define TIM_CCER_CC2NP ((uint16_t)0x0080) /*!<Capture/Compare 2 Complementary output Polarity */
#define TIM_CCER_CC3E ((uint16_t)0x0100)  /*!<Capture/Compare 3 output enable */
#define TIM_CCER_CC3P ((uint16_t)0x0200)  /*!<Capture/Compare 3 output Polarity */
#define TIM_CCER_CC3NE ((uint16_t)0x0400) /*!<Capture/Compare 3 Complementary output enable */
#define TIM_CCER_CC3NP ((uint16_t)0x0800) /*!<Capture/Compare 3 Complementary output Polarity */
#define TIM_CCER_CC4E ((uint16_t)0x1000)  /*!<Capture/Compare 4 output enable */
#define TIM_CCER_CC4P ((uint16_t)0x2000)  /*!<Capture/Compare 4 output Polarity */
#define TIM_CCER_CC4NP ((uint16_t)0x8000) /*!<Capture/Compare 4 Complementary output Polarity */

/*******************  Bit definition for TIM_CNT register  ********************/
#define TIM_CNT_CNT ((uint16_t)0xFFFF) /*!<Counter Value */

/*******************  Bit definition for TIM_PSC register  ********************/
#define TIM_PSC_PSC ((uint16_t)0xFFFF) /*!<Prescaler Value */

/*******************  Bit definition for TIM_ARR register  ********************/
#define TIM_ARR_ARR ((uint16_t)0xFFFF) /*!<actual auto-reload Value */

/*******************  Bit definition for TIM_RCR register  ********************/
#define TIM_RCR_REP ((uint8_t)0xFF) /*!<Repetition Counter Value */

/*******************  Bit definition for TIM_CCR1 register  *******************/
#define TIM_CCR1_CCR1 ((uint16_t)0xFFFF) /*!<Capture/Compare 1 Value */

/*******************  Bit definition for TIM_CCR2 register  *******************/
#define TIM_CCR2_CCR2 ((uint16_t)0xFFFF) /*!<Capture/Compare 2 Value */

/*******************  Bit definition for TIM_CCR3 register  *******************/
#define TIM_CCR3_CCR3 ((uint16_t)0xFFFF) /*!<Capture/Compare 3 Value */

/*******************  Bit definition for TIM_CCR4 register  *******************/
#define TIM_CCR4_CCR4 ((uint16_t)0xFFFF) /*!<Capture/Compare 4 Value */

/*******************  Bit definition for TIM_BDTR register  *******************/
#define TIM_BDTR_DTG ((uint16_t)0x00FF)   /*!<DTG[0:7] bits (Dead-Time Generator set-up) */
#define TIM_BDTR_DTG_0 ((uint16_t)0x0001) /*!<Bit 0 */
#define TIM_BDTR_DTG_1 ((uint16_t)0x0002) /*!<Bit 1 */
#define TIM_BDTR_DTG_2 ((uint16_t)0x0004) /*!<Bit 2 */
#define TIM_BDTR_DTG_3 ((uint16_t)0x0008) /*!<Bit 3 */
#define TIM_BDTR_DTG_4 ((uint16_t)0x0010) /*!<Bit 4 */
#define TIM_BDTR_DTG_5 ((uint16_t)0x0020) /*!<Bit 5 */
#define TIM_BDTR_DTG_6 ((uint16_t)0x0040) /*!<Bit 6 */
#define TIM_BDTR_DTG_7 ((uint16_t)0x0080) /*!<Bit 7 */

#define TIM_BDTR_LOCK ((uint16_t)0x0300)   /*!<LOCK[1:0] bits (Lock Configuration) */
#define TIM_BDTR_LOCK_0 ((uint16_t)0x0100) /*!<Bit 0 */
#define TIM_BDTR_LOCK_1 ((uint16_t)0x0200) /*!<Bit 1 */

#define TIM_BDTR_OSSI ((uint16_t)0x0400) /*!<Off-State Selection for Idle mode */
#define TIM_BDTR_OSSR ((uint16_t)0x0800) /*!<Off-State Selection for Run mode */
#define TIM_BDTR_BKE ((uint16_t)0x1000)  /*!<Break enable */
#define TIM_BDTR_BKP ((uint16_t)0x2000)  /*!<Break Polarity */
#define TIM_BDTR_AOE ((uint16_t)0x4000)  /*!<Automatic Output enable */
#define TIM_BDTR_MOE ((uint16_t)0x8000)  /*!<Main Output enable */

/*******************  Bit definition for TIM_DCR register  ********************/
#define TIM_DCR_DBA ((uint16_t)0x001F)   /*!<DBA[4:0] bits (DMA Base Address) */
#define TIM_DCR_DBA_0 ((uint16_t)0x0001) /*!<Bit 0 */
#define TIM_DCR_DBA_1 ((uint16_t)0x0002) /*!<Bit 1 */
#define TIM_DCR_DBA_2 ((uint16_t)0x0004) /*!<Bit 2 */
#define TIM_DCR_DBA_3 ((uint16_t)0x0008) /*!<Bit 3 */
#define TIM_DCR_DBA_4 ((uint16_t)0x0010) /*!<Bit 4 */

#define TIM_DCR_DBL ((uint16_t)0x1F00)   /*!<DBL[4:0] bits (DMA Burst Length) */
#define TIM_DCR_DBL_0 ((uint16_t)0x0100) /*!<Bit 0 */
#define TIM_DCR_DBL_1 ((uint16_t)0x0200) /*!<Bit 1 */
#define TIM_DCR_DBL_2 ((uint16_t)0x0400) /*!<Bit 2 */
#define TIM_DCR_DBL_3 ((uint16_t)0x0800) /*!<Bit 3 */
#define TIM_DCR_DBL_4 ((uint16_t)0x1000) /*!<Bit 4 */

/*******************  Bit definition for TIM_DMAR register  *******************/
#define TIM_DMAR_DMAB ((uint16_t)0xFFFF) /*!<DMA register for burst accesses */

/*******************  Bit definition for TIM_OR register  *********************/
#define TIM14_OR_TI1_RMP ((uint16_t)0x0003)   /*!<TI1_RMP[1:0] bits (TIM14 Input 4 remap) */
#define TIM14_OR_TI1_RMP_0 ((uint16_t)0x0001) /*!<Bit 0 */
#define TIM14_OR_TI1_RMP_1 ((uint16_t)0x0002) /*!<Bit 1 */

/******************************************************************************/
/*                                                                            */
/*                           Independent WATCHDOG                             */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for IWDG_KR register  ********************/
#define IWDG_KR_KEY ((uint16_t)0xFFFF) /*!<Key value (write only, read 0000h) */

/*******************  Bit definition for IWDG_PR register  ********************/
#define IWDG_PR_PR ((uint8_t)0x07)   /*!<PR[2:0] (Prescaler divider) */
#define IWDG_PR_PR_0 ((uint8_t)0x01) /*!<Bit 0 */
#define IWDG_PR_PR_1 ((uint8_t)0x02) /*!<Bit 1 */
#define IWDG_PR_PR_2 ((uint8_t)0x04) /*!<Bit 2 */

/*******************  Bit definition for IWDG_RLR register  *******************/
#define IWDG_RLR_RL ((uint16_t)0x0FFF) /*!<Watchdog counter reload value */

/*******************  Bit definition for IWDG_SR register  ********************/
#define IWDG_SR_PVU ((uint8_t)0x01) /*!<Watchdog prescaler value update */
#define IWDG_SR_RVU ((uint8_t)0x02) /*!<Watchdog counter reload value update */

/******************************************************************************/
/*                                                                            */
/*                            Window WATCHDOG                                 */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for WWDG_CR register  ********************/
#define WWDG_CR_T ((uint8_t)0x7F)  /*!<T[6:0] bits (7-Bit counter (MSB to LSB)) */
#define WWDG_CR_T0 ((uint8_t)0x01) /*!<Bit 0 */
#define WWDG_CR_T1 ((uint8_t)0x02) /*!<Bit 1 */
#define WWDG_CR_T2 ((uint8_t)0x04) /*!<Bit 2 */
#define WWDG_CR_T3 ((uint8_t)0x08) /*!<Bit 3 */
#define WWDG_CR_T4 ((uint8_t)0x10) /*!<Bit 4 */
#define WWDG_CR_T5 ((uint8_t)0x20) /*!<Bit 5 */
#define WWDG_CR_T6 ((uint8_t)0x40) /*!<Bit 6 */

#define WWDG_CR_WDGA ((uint8_t)0x80) /*!<Activation bit */

/*******************  Bit definition for WWDG_CFR register  *******************/
#define WWDG_CFR_W ((uint16_t)0x007F)  /*!<W[6:0] bits (7-bit window value) */
#define WWDG_CFR_W0 ((uint16_t)0x0001) /*!<Bit 0 */
#define WWDG_CFR_W1 ((uint16_t)0x0002) /*!<Bit 1 */
#define WWDG_CFR_W2 ((uint16_t)0x0004) /*!<Bit 2 */
#define WWDG_CFR_W3 ((uint16_t)0x0008) /*!<Bit 3 */
#define WWDG_CFR_W4 ((uint16_t)0x0010) /*!<Bit 4 */
#define WWDG_CFR_W5 ((uint16_t)0x0020) /*!<Bit 5 */
#define WWDG_CFR_W6 ((uint16_t)0x0040) /*!<Bit 6 */

#define WWDG_CFR_WDGTB ((uint16_t)0x0180)  /*!<WDGTB[1:0] bits (Timer Base) */
#define WWDG_CFR_WDGTB0 ((uint16_t)0x0080) /*!<Bit 0 */
#define WWDG_CFR_WDGTB1 ((uint16_t)0x0100) /*!<Bit 1 */

#define WWDG_CFR_EWI ((uint16_t)0x0200) /*!<Early Wakeup Interrupt */

/*******************  Bit definition for WWDG_SR register  ********************/
#define WWDG_SR_EWIF ((uint8_t)0x01) /*!<Early Wakeup Interrupt Flag */

/******************************************************************************/
/*                                                                            */
/*                        Serial Peripheral Interface                         */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for SPI_TXREG register  ********************/
#define SPI_TXREG_TXREG ((uint32_t)0xFFFFFFFF)

/*******************  Bit definition for SPI_RXREG register  ********************/
#define SPI_RXREG_RXREG ((uint32_t)0xFFFFFFFF)

/*******************  Bit definition for SPI_CSTAT register  ********************/
#define SPI_CSTAT_TXEPT ((uint8_t)0x01)
#define SPI_CSTAT_RXAVL ((uint8_t)0x02)
#define SPI_CSTAT_TXFULL ((uint8_t)0x04)
#define SPI_CSTAT_RXAVL_4BYTE ((uint8_t)0x08)

/*******************  Bit definition for SPI_INTSTAT register  ********************/
#define SPI_INTSTAT_TX_INTF ((uint16_t)0x0001)
#define SPI_INTSTAT_RX_INTF ((uint16_t)0x0002)
#define SPI_INTSTAT_UNDERRUN_INTF ((uint16_t)0x0004)
#define SPI_INTSTAT_RXOERR_INTF ((uint16_t)0x0008)
#define SPI_INTSTAT_RXMATCH_INTF ((uint16_t)0x0010)
#define SPI_INTSTAT_RXFULL_INTF ((uint16_t)0x0020)
#define SPI_INTSTAT_TXEPT_INTF ((uint16_t)0x0040)

/*******************  Bit definition for SPI_INTEN register  ********************/
#define SPI_INTEN_TX_IEN ((uint16_t)0x0001)
#define SPI_INTEN_RX_IEN ((uint16_t)0x0002)
#define SPI_INTEN_UNDERRUN_IEN ((uint16_t)0x0004)
#define SPI_INTEN_RXOERR_IEN ((uint16_t)0x0008)
#define SPI_INTEN_RXMATCH_IEN ((uint16_t)0x0010)
#define SPI_INTEN_RXFULL_IEN ((uint16_t)0x0020)
#define SPI_INTEN_TXEPT_IEN ((uint16_t)0x0040)

/*******************  Bit definition for SPI_INTCLR register  ********************/
#define SPI_INTCLR_TX_ICLR ((uint16_t)0x0001)
#define SPI_INTCLR_RX_ICLR ((uint16_t)0x0002)
#define SPI_INTCLR_UNDERRUN_ICLR ((uint16_t)0x0004)
#define SPI_INTCLR_RXOERR_ICLR ((uint16_t)0x0008)
#define SPI_INTCLR_RXMATCH_ICLR ((uint16_t)0x0010)
#define SPI_INTCLR_RXFULL_ICLR ((uint16_t)0x0020)
#define SPI_INTCLR_TXEPT_ICLR ((uint16_t)0x0040)

/*******************  Bit definition for SPI_GCTL register  ********************/
#define SPI_GCTL_SPIEN ((uint16_t)0x0001)
#define SPI_GCTL_INT_EN ((uint16_t)0x0002)
#define SPI_GCTL_MM ((uint16_t)0x0004)
#define SPI_GCTL_TXEN ((uint16_t)0x0008)
#define SPI_GCTL_RXEN ((uint16_t)0x0010)
#define SPI_GCTL_RXTLF ((uint16_t)0x0060)
#define SPI_GCTL_TXTLF ((uint16_t)0x0180)
#define SPI_GCTL_DMAEN ((uint16_t)0x0200)
#define SPI_GCTL_NSS_SEL ((uint16_t)0x0400)
#define SPI_GCTL_DATA_SEL ((uint16_t)0x0800)

/*******************  Bit definition for SPI_CCTL register  ********************/
#define SPI_CCTL_CPHA ((uint16_t)0x0001)
#define SPI_CCTL_CPOL ((uint16_t)0x0002)
#define SPI_CCTL_LSBFE ((uint16_t)0x0004)
#define SPI_CCTL_SPILEN ((uint16_t)0x0008)
#define SPI_CCTL_RXEDGE ((uint16_t)0x0010)
#define SPI_CCTL_TXEDGE ((uint16_t)0x0020)

/*******************  Bit definition for SPI_SPBRG register  ********************/
#define SPI_SPBRG_SPBRG ((uint32_t)0xFFFFFFFF)

/*******************  Bit definition for SPI_RXDNR register  ********************/
#define SPI_RXDNR_RXDNR ((uint32_t)0xFFFFFFFF)

/*******************  Bit definition for SPI_NSSR register  ********************/
#define SPI_NSSR_NSS ((uint8_t)0x01)

/******************************************************************************/
/*                                                                            */
/*                      Inter-integrated Circuit Interface                    */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for I2C_CON register  ********************/
#define I2C_CON_MASTER_MODE ((uint16_t)0x0001)
#define I2C_CON_10BITADDR_SLAVE ((uint16_t)0x0008)
#define I2C_CON_10BITADDR_MASTER ((uint16_t)0x0010)
#define I2C_CON_RESTART_EN ((uint16_t)0x0020)
#define I2C_CON_SLAVE_DISABLE ((uint16_t)0x0040)
#define I2C_CON_STOP_DET_IFADDRESSED ((uint16_t)0x0080)
#define I2C_CON_EMPTY_CTRL ((uint16_t)0x0100)

#define I2C_CON_SPEED ((uint16_t)0x0006)          
#define I2C_CON_SPEED_0 ((uint16_t)0x0002)
#define I2C_CON_SPEED_1 ((uint16_t)0x0004)

/*******************  Bit definition for I2C_TAR register  ********************/
#define I2C_TAR_GC_OR_START ((uint16_t)0x0400)
#define I2C_TAR_SPECIAL ((uint16_t)0x0800)

#define I2C_TAR_TAR ((uint16_t)0x03FF)
#define I2C_TAR_TAR_0 ((uint16_t)0x0001)
#define I2C_TAR_TAR_1 ((uint16_t)0x0002)
#define I2C_TAR_TAR_2 ((uint16_t)0x0004)
#define I2C_TAR_TAR_3 ((uint16_t)0x0008)
#define I2C_TAR_TAR_4 ((uint16_t)0x0010)
#define I2C_TAR_TAR_5 ((uint16_t)0x0020)
#define I2C_TAR_TAR_6 ((uint16_t)0x0040)
#define I2C_TAR_TAR_7 ((uint16_t)0x0080)
#define I2C_TAR_TAR_8 ((uint16_t)0x0100)
#define I2C_TAR_TAR_9 ((uint16_t)0x0200)

/*******************  Bit definition for I2C_SAR register  ********************/
#define I2C_SAR_SAR ((uint16_t)0x03FF)

/*******************  Bit definition for I2C_HS_MADDR register  ********************/
#define I2C_HS_MADDR ((uint16_t)0x0007)

/*******************  Bit definition for I2C_DATA_CMD register  ********************/
#define I2C_DATA_CMD_CMD ((uint16_t)0x0100)

#define I2C_DATA_CMD_DAT ((uint16_t)0x00FF)
#define I2C_DATA_CMD_DAT_0 ((uint16_t)0x0001)
#define I2C_DATA_CMD_DAT_1 ((uint16_t)0x0002)
#define I2C_DATA_CMD_DAT_2 ((uint16_t)0x0004)
#define I2C_DATA_CMD_DAT_3 ((uint16_t)0x0008)
#define I2C_DATA_CMD_DAT_4 ((uint16_t)0x0010)
#define I2C_DATA_CMD_DAT_5 ((uint16_t)0x0020)
#define I2C_DATA_CMD_DAT_6 ((uint16_t)0x0040)
#define I2C_DATA_CMD_DAT_7 ((uint16_t)0x0080)

/*******************  Bit definition for I2C_SS_SCL_HCNT register  ********************/
#define I2C_SS_SCL_HCNT ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_SS_SCL_LCNT register  ********************/
#define I2C_SS_SCL_LCNT ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_FS_SCL_HCNT register  ********************/
#define I2C_FS_SCL_HCNT ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_FS_SCL_LCNT register  ********************/
#define I2C_FS_SCL_LCNT ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_FS_SCL_HCNT register  ********************/
#define I2C_HS_SCL_HCNT ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_FS_SCL_LCNT register  ********************/
#define I2C_HS_SCL_LCNT ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_INTR_STAT register  ********************/
#define I2C_INTR_STAT_RX_UNDER ((uint16_t)0x0001)
#define I2C_INTR_STAT_RX_OVER ((uint16_t)0x0002)
#define I2C_INTR_STAT_RX_FULL ((uint16_t)0x0004)
#define I2C_INTR_STAT_TX_OVER ((uint16_t)0x0008)
#define I2C_INTR_STAT_TX_EMPTY ((uint16_t)0x0010)
#define I2C_INTR_STAT_RX_REQ ((uint16_t)0x0020)
#define I2C_INTR_STAT_TX_ABRT ((uint16_t)0x0040)
#define I2C_INTR_STAT_RX_DONE ((uint16_t)0x0080)
#define I2C_INTR_STAT_ACTIVITY ((uint16_t)0x0100)
#define I2C_INTR_STAT_STOP_DET ((uint16_t)0x0200)
#define I2C_INTR_STAT_START_DET ((uint16_t)0x0400)
#define I2C_INTR_STAT_GEN_CALL ((uint16_t)0x0800)
#define I2C_INTR_STAT_RESTART_DET ((uint16_t)0x1000)
#define I2C_INTR_STAT_MST_ON_HOLD ((uint16_t)0x2000)

/*******************  Bit definition for I2C_INTR_MASK register  ********************/
#define I2C_INTR_MASK_RX_UNDER ((uint16_t)0x0001)
#define I2C_INTR_MASK_RX_OVER ((uint16_t)0x0002)
#define I2C_INTR_MASK_RX_FULL ((uint16_t)0x0004)
#define I2C_INTR_MASK_TX_OVER ((uint16_t)0x0008)
#define I2C_INTR_MASK_TX_EMPTY ((uint16_t)0x0010)
#define I2C_INTR_MASK_RX_REQ ((uint16_t)0x0020)
#define I2C_INTR_MASK_TX_ABRT ((uint16_t)0x0040)
#define I2C_INTR_MASK_RX_DONE ((uint16_t)0x0080)
#define I2C_INTR_MASK_ACTIVITY ((uint16_t)0x0100)
#define I2C_INTR_MASK_STOP_DET ((uint16_t)0x0200)
#define I2C_INTR_MASK_START_DET ((uint16_t)0x0400)
#define I2C_INTR_MASK_GEN_CALL ((uint16_t)0x0800)
#define I2C_INTR_MASK_RESTART_DET ((uint16_t)0x1000)
#define I2C_INTR_MASK_MST_ON_HOLD ((uint16_t)0x2000)

/*******************  Bit definition for I2C_RAW_INTR_STAT register  ********************/
#define I2C_RAW_INTR_MASK_RX_UNDER ((uint16_t)0x0001)
#define I2C_RAW_INTR_MASK_RX_OVER ((uint16_t)0x0002)
#define I2C_RAW_INTR_MASK_RX_FULL ((uint16_t)0x0004)
#define I2C_RAW_INTR_MASK_TX_OVER ((uint16_t)0x0008)
#define I2C_RAW_INTR_MASK_TX_EMPTY ((uint16_t)0x0010)
#define I2C_RAW_INTR_MASK_RX_REQ ((uint16_t)0x0020)
#define I2C_RAW_INTR_MASK_TX_ABRT ((uint16_t)0x0040)
#define I2C_RAW_INTR_MASK_RX_DONE ((uint16_t)0x0080)
#define I2C_RAW_INTR_MASK_ACTIVITY ((uint16_t)0x0100)
#define I2C_RAW_INTR_MASK_STOP_DET ((uint16_t)0x0200)
#define I2C_RAW_INTR_MASK_START_DET ((uint16_t)0x0400)
#define I2C_RAW_INTR_MASK_GEN_CALL ((uint16_t)0x0800)
#define I2C_RAW_INTR_MASK_RESTART_DET ((uint16_t)0x1000)
#define I2C_RAW_INTR_MASK_MST_ON_HOLD ((uint16_t)0x2000)

/*******************  Bit definition for I2C_CLR_INTR register  ********************/
#define I2C_CLR_INTR ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_RX_UNDER register  ********************/
#define I2C_CLR_RX_UNDER ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_RX_OVER register  ********************/
#define I2C_CLR_RX_OVER ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_TX_OVER register  ********************/
#define I2C_CLR_TX_OVER ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_RD_REQ register  ********************/
#define I2C_CLR_RD_REQ ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_TX_ABRT register  ********************/
#define I2C_CLR_TX_ABRT ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_RX_DONE register  ********************/
#define I2C_CLR_RX_DONE ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_ACTIVITY register  ********************/
#define I2C_CLR_ACTIVITY ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_STOP_DET register  ********************/
#define I2C_CLR_STOP_DET ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_START_DET register  ********************/
#define I2C_CLR_START_DET ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_GEN_CALL register  ********************/
#define I2C_CLR_GEN_CALL ((uint16_t)0x0001)

/*******************  Bit definition for I2C_ENABLE register  ********************/
#define I2C_ENABLE_ENABLE ((uint16_t)0x0001)
#define I2C_ENABLE_ABORT ((uint16_t)0x0002)

/*******************  Bit definition for I2C_STATUS register  ********************/
#define I2C_STATUS_ACTIVITY ((uint16_t)0x0001)
#define I2C_STATUS_TFNF ((uint16_t)0x0002)
#define I2C_STATUS_TFE ((uint16_t)0x0004)
#define I2C_STATUS_RFNE ((uint16_t)0x0008)
#define I2C_STATUS_RFF ((uint16_t)0x0010)
#define I2C_STATUS_MST_ACTIVITY ((uint16_t)0x0020)
#define I2C_STATUS_SLV_ACTIVITY ((uint16_t)0x0040)

/*******************  Bit definition for I2C_TXFLR register  ********************/
#define I2C_TXFLR ((uint16_t)0x0003)
#define I2C_TXFLR_0 ((uint16_t)0x0001)
#define I2C_TXFLR_1 ((uint16_t)0x0002)

/*******************  Bit definition for I2C_RXFLR register  ********************/
#define I2C_RXFLR ((uint16_t)0x0003)
#define I2C_RXFLR_0 ((uint16_t)0x0001)
#define I2C_RXFLR_1 ((uint16_t)0x0002)

/*******************  Bit definition for I2C_SDA_HOLD register  ********************/
#define I2C_SDA_TX_HOLD ((uint32_t)0x0000FFFF)
#define I2C_SDA_RX_HOLD ((uint32_t)0xFFFF0000)

/*******************  Bit definition for I2C_DMA_CR register  ********************/
#define I2C_DMA_CR_RDMAE ((uint16_t)0x0001)
#define I2C_DMA_CR_TDMAE ((uint16_t)0x0002)

/*******************  Bit definition for I2C_SDA_SET_UP register  ********************/
#define I2C_SDA_SET_UP ((uint16_t)0x00FF)

/*******************  Bit definition for I2C_ACK_GENERAL_CALL register  ********************/
#define I2C_ACK_GENERAL_CALL ((uint16_t)0x0001)

/******************************************************************************/
/*                                                                            */
/*         Universal Synchronous Asynchronous Receiver Transmitter            */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for UART_TDR register  *******************/
#define UART_TDR_TXREG ((uint16_t)0x00FF)

/*******************  Bit definition for UART_RDR register  *******************/
#define UART_TDR_RXREG ((uint16_t)0x00FF)

/*******************  Bit definition for UART_CSR register  *******************/
#define UART_CSR_TXC ((uint16_t)0x0001)
#define UART_CSR_RXAVL ((uint16_t)0x0002)
#define UART_CSR_TXFULL ((uint16_t)0x0004)
#define UART_CSR_TXBUF_EMPTY ((uint16_t)0x0008)

/*******************  Bit definition for UART_ISR register  *******************/
#define UART_ISR_TX_INTF ((uint16_t)0x0001)
#define UART_ISR_RX_INTF ((uint16_t)0x0002)
#define UART_ISR_RXOERR_INTF ((uint16_t)0x0008)
#define UART_ISR_RXFERR_INTF ((uint16_t)0x0010)
#define UART_ISR_RXPERR_INTF ((uint16_t)0x0020)
#define UART_ISR_RXBRK_INFT ((uint16_t)0x0040)

/*******************  Bit definition for UART_IER register  *******************/
#define UART_IER_TXIEN ((uint16_t)0x0001)
#define UART_IER_RXIEN ((uint16_t)0x0002)
#define UART_IER_TIMEOUTEN ((uint16_t)0x0004)
#define UART_IER_RXOERREN ((uint16_t)0x0008)
#define UART_IER_RXPERREN ((uint16_t)0x0010)
#define UART_IER_RXFERREN ((uint16_t)0x0020)
#define UART_IER_RXBRKEN ((uint16_t)0x0040)

/*******************  Bit definition for UART_ICR register  *******************/
#define UART_ICR_TXICLR ((uint16_t)0x0001)
#define UART_ICR_RXICLR ((uint16_t)0x0002)
#define UART_ICR_TIMEOUTCLR ((uint16_t)0x0004)
#define UART_ICR_RXOERRCLR ((uint16_t)0x0008)
#define UART_ICR_RXPERRCLR ((uint16_t)0x0010)
#define UART_ICR_RXFERRCLR ((uint16_t)0x0020)
#define UART_ICR_RXBRKCLR ((uint16_t)0x0040)

/*******************  Bit definition for UART_GCR register  *******************/
#define UART_GCR_UARTEN ((uint16_t)0x0001)
#define UART_GCR_DMAMODE ((uint16_t)0x0002)
#define UART_GCR_AUTOFLOWEN ((uint16_t)0x0004)
#define UART_GCR_RXEN ((uint16_t)0x0008)
#define UART_GCR_TXEN ((uint16_t)0x0010)

/*******************  Bit definition for UART_CCR register  *******************/
#define UART_CCR_PEN ((uint16_t)0x0001)
#define UART_CCR_PSEL ((uint16_t)0x0002)
#define UART_CCR_SPB ((uint16_t)0x0004)
#define UART_CCR_BRK ((uint16_t)0x0008)

#define UART_CCR_CHAR ((uint16_t)0x0030)
#define UART_CCR_CHAR_0 ((uint16_t)0x0010)
#define UART_CCR_CHAR_1 ((uint16_t)0x0020)

/*******************  Bit definition for UART_BRR register  *******************/
#define UART_BRR_SPBRG ((uint16_t)0xFFFF)

/******************************************************************************/
/*                                                                            */
/*                                 Debug MCU                                  */
/*                                                                            */
/******************************************************************************/

/****************  Bit definition for DBGMCU_IDCODE register  *****************/
#define DBGMCU_IDCODE_DEV_ID ((uint32_t)0x00000FFF) /*!<Device Identifier */

#define DBGMCU_IDCODE_REV_ID ((uint32_t)0xFFFF0000)    /*!<REV_ID[15:0] bits (Revision Identifier) */
#define DBGMCU_IDCODE_REV_ID_0 ((uint32_t)0x00010000)  /*!<Bit 0 */
#define DBGMCU_IDCODE_REV_ID_1 ((uint32_t)0x00020000)  /*!<Bit 1 */
#define DBGMCU_IDCODE_REV_ID_2 ((uint32_t)0x00040000)  /*!<Bit 2 */
#define DBGMCU_IDCODE_REV_ID_3 ((uint32_t)0x00080000)  /*!<Bit 3 */
#define DBGMCU_IDCODE_REV_ID_4 ((uint32_t)0x00100000)  /*!<Bit 4 */
#define DBGMCU_IDCODE_REV_ID_5 ((uint32_t)0x00200000)  /*!<Bit 5 */
#define DBGMCU_IDCODE_REV_ID_6 ((uint32_t)0x00400000)  /*!<Bit 6 */
#define DBGMCU_IDCODE_REV_ID_7 ((uint32_t)0x00800000)  /*!<Bit 7 */
#define DBGMCU_IDCODE_REV_ID_8 ((uint32_t)0x01000000)  /*!<Bit 8 */
#define DBGMCU_IDCODE_REV_ID_9 ((uint32_t)0x02000000)  /*!<Bit 9 */
#define DBGMCU_IDCODE_REV_ID_10 ((uint32_t)0x04000000) /*!<Bit 10 */
#define DBGMCU_IDCODE_REV_ID_11 ((uint32_t)0x08000000) /*!<Bit 11 */
#define DBGMCU_IDCODE_REV_ID_12 ((uint32_t)0x10000000) /*!<Bit 12 */
#define DBGMCU_IDCODE_REV_ID_13 ((uint32_t)0x20000000) /*!<Bit 13 */
#define DBGMCU_IDCODE_REV_ID_14 ((uint32_t)0x40000000) /*!<Bit 14 */
#define DBGMCU_IDCODE_REV_ID_15 ((uint32_t)0x80000000) /*!<Bit 15 */

/******************  Bit definition for DBGMCU_CR register  *******************/
#define DBGMCU_CR_DBG_SLEEP ((uint32_t)0x00000001)   /*!<Debug Sleep Mode */
#define DBGMCU_CR_DBG_STOP ((uint32_t)0x00000002)    /*!<Debug Stop Mode */
#define DBGMCU_CR_DBG_STANDBY ((uint32_t)0x00000004) /*!<Debug Standby mode */
#define DBGMCU_CR_TRACE_IOEN ((uint32_t)0x00000020)  /*!<Trace Pin Assignment Control */

#define DBGMCU_CR_TRACE_MODE ((uint32_t)0x000000C0)   /*!<TRACE_MODE[1:0] bits (Trace Pin Assignment Control) */
#define DBGMCU_CR_TRACE_MODE_0 ((uint32_t)0x00000040) /*!<Bit 0 */
#define DBGMCU_CR_TRACE_MODE_1 ((uint32_t)0x00000080) /*!<Bit 1 */

#define DBGMCU_CR_DBG_IWDG_STOP ((uint32_t)0x00000100)          /*!<Debug Independent Watchdog stopped when Core is halted */
#define DBGMCU_CR_DBG_WWDG_STOP ((uint32_t)0x00000200)          /*!<Debug Window Watchdog stopped when Core is halted */
#define DBGMCU_CR_DBG_TIM1_STOP ((uint32_t)0x00000400)          /*!<TIM1 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM2_STOP ((uint32_t)0x00000800)          /*!<TIM2 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM3_STOP ((uint32_t)0x00001000)          /*!<TIM3 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM4_STOP ((uint32_t)0x00002000)          /*!<TIM4 counter stopped when core is halted */
#define DBGMCU_CR_DBG_CAN_STOP ((uint32_t)0x00004000)           /*!<Debug CAN stopped when Core is halted */
#define DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT ((uint32_t)0x00008000) /*!<SMBUS timeout mode stopped when Core is halted */
#define DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT ((uint32_t)0x00010000) /*!<SMBUS timeout mode stopped when Core is halted */
#define DBGMCU_CR_DBG_TIM5_STOP ((uint32_t)0x00020000)          /*!<TIM5 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM6_STOP ((uint32_t)0x00040000)          /*!<TIM6 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM7_STOP ((uint32_t)0x00080000)          /*!<TIM7 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM8_STOP ((uint32_t)0x00100000)          /*!<TIM8 counter stopped when core is halted */

/******************************************************************************/
/*                                                                            */
/*                      FLASH and Option Bytes Registers                      */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for FLASH_ACR register  ******************/
#define FLASH_ACR_LATENCY ((uint8_t)0x03)   /*!<LATENCY[2:0] bits (Latency) */
#define FLASH_ACR_LATENCY_0 ((uint8_t)0x00) /*!<Bit 0 */
#define FLASH_ACR_LATENCY_1 ((uint8_t)0x01) /*!<Bit 0 */
#define FLASH_ACR_LATENCY_2 ((uint8_t)0x02) /*!<Bit 1 */

#define FLASH_ACR_HLFCYA ((uint8_t)0x08) /*!<Flash Half Cycle Access Enable */
#define FLASH_ACR_PRFTBE ((uint8_t)0x10) /*!<Prefetch Buffer Enable */
#define FLASH_ACR_PRFTBS ((uint8_t)0x20) /*!<Prefetch Buffer Status */

/******************  Bit definition for FLASH_KEYR register  ******************/
#define FLASH_KEYR_FKEYR ((uint32_t)0xFFFFFFFF) /*!<FPEC Key */

/*****************  Bit definition for FLASH_OPTKEYR register  ****************/
#define FLASH_OPTKEYR_OPTKEYR ((uint32_t)0xFFFFFFFF) /*!<Option Byte Key */

/******************  Bit definition for FLASH_SR register  *******************/
#define FLASH_SR_BSY ((uint8_t)0x01)      /*!<Busy */
#define FLASH_SR_PGERR ((uint8_t)0x04)    /*!<Programming Error */
#define FLASH_SR_WRPRTERR ((uint8_t)0x10) /*!<Write Protection Error */
#define FLASH_SR_EOP ((uint8_t)0x20)      /*!<End of operation */

/*******************  Bit definition for FLASH_CR register  *******************/
#define FLASH_CR_PG ((uint16_t)0x0001)     /*!<Programming */
#define FLASH_CR_PER ((uint16_t)0x0002)    /*!<Page Erase */
#define FLASH_CR_MER ((uint16_t)0x0004)    /*!<Mass Erase */
#define FLASH_CR_OPTPG ((uint16_t)0x0010)  /*!<Option Byte Programming */
#define FLASH_CR_OPTER ((uint16_t)0x0020)  /*!<Option Byte Erase */
#define FLASH_CR_STRT ((uint16_t)0x0040)   /*!<Start */
#define FLASH_CR_LOCK ((uint16_t)0x0080)   /*!<Lock */
#define FLASH_CR_OPTWRE ((uint16_t)0x0200) /*!<Option Bytes Write Enable */
#define FLASH_CR_ERRIE ((uint16_t)0x0400)  /*!<Error Interrupt Enable */
#define FLASH_CR_EOPIE ((uint16_t)0x1000)  /*!<End of operation interrupt enable */

/*******************  Bit definition for FLASH_AR register  *******************/
#define FLASH_AR_FAR ((uint32_t)0xFFFFFFFF) /*!<Flash Address */

/******************  Bit definition for FLASH_OBR register  *******************/
#define FLASH_OBR_OPTERR ((uint16_t)0x0001) /*!<Option Byte Error */
#define FLASH_OBR_RDPRT ((uint16_t)0x0002)  /*!<Read protection */

#define FLASH_OBR_USER ((uint16_t)0x03FC)       /*!<User Option Bytes */
#define FLASH_OBR_WDG_SW ((uint16_t)0x0004)     /*!<WDG_SW */
#define FLASH_OBR_nRST_STOP ((uint16_t)0x0008)  /*!<nRST_STOP */
#define FLASH_OBR_nRST_STDBY ((uint16_t)0x0010) /*!<nRST_STDBY */
#define FLASH_OBR_Notused ((uint16_t)0x03E0)    /*!<Not used */

/******************  Bit definition for FLASH_WRPR register  ******************/
#define FLASH_WRPR_WRP ((uint32_t)0xFFFFFFFF) /*!<Write Protect */

/*----------------------------------------------------------------------------*/

/******************  Bit definition for FLASH_RDP register  *******************/
#define FLASH_RDP_RDP ((uint32_t)0x000000FF)  /*!<Read protection option byte */
#define FLASH_RDP_nRDP ((uint32_t)0x0000FF00) /*!<Read protection complemented option byte */

/******************  Bit definition for FLASH_USER register  ******************/
#define FLASH_USER_USER ((uint32_t)0x00FF0000)  /*!<User option byte */
#define FLASH_USER_nUSER ((uint32_t)0xFF000000) /*!<User complemented option byte */

/******************  Bit definition for FLASH_Data0 register  *****************/
#define FLASH_Data0_Data0 ((uint32_t)0x000000FF)  /*!<User data storage option byte */
#define FLASH_Data0_nData0 ((uint32_t)0x0000FF00) /*!<User data storage complemented option byte */

/******************  Bit definition for FLASH_Data1 register  *****************/
#define FLASH_Data1_Data1 ((uint32_t)0x00FF0000)  /*!<User data storage option byte */
#define FLASH_Data1_nData1 ((uint32_t)0xFF000000) /*!<User data storage complemented option byte */

/******************  Bit definition for FLASH_WRP0 register  ******************/
#define FLASH_WRP0_WRP0 ((uint32_t)0x000000FF)  /*!<Flash memory write protection option bytes */
#define FLASH_WRP0_nWRP0 ((uint32_t)0x0000FF00) /*!<Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP1 register  ******************/
#define FLASH_WRP1_WRP1 ((uint32_t)0x00FF0000)  /*!<Flash memory write protection option bytes */
#define FLASH_WRP1_nWRP1 ((uint32_t)0xFF000000) /*!<Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP2 register  ******************/
#define FLASH_WRP2_WRP2 ((uint32_t)0x000000FF)  /*!<Flash memory write protection option bytes */
#define FLASH_WRP2_nWRP2 ((uint32_t)0x0000FF00) /*!<Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP3 register  ******************/
#define FLASH_WRP3_WRP3 ((uint32_t)0x00FF0000)  /*!<Flash memory write protection option bytes */
#define FLASH_WRP3_nWRP3 ((uint32_t)0xFF000000) /*!<Flash memory write protection complemented option bytes */

/******************************************************************************/
/*                                                                            */
/*                                   USB                                      */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for USB_TOP register  *******************/
#define USB_TOP_SPEED ((uint16_t)0x0001)
#define USB_TOP_CONNECT ((uint16_t)0x0002)
#define USB_TOP_RESET ((uint16_t)0x0008)
#define USB_TOP_SUSPEND ((uint16_t)0x0010)
#define USB_TOP_ACTIVE ((uint16_t)0x0080)

#define USB_TOP_STATE ((uint16_t)0x0060)
#define USB_TOP_STATE_0 ((uint16_t)0x0020)
#define USB_TOP_STATE_1 ((uint16_t)0x0040)

/*******************  Bit definition for USB_INT_STATE register  *******************/
#define USB_INT_STATE_RSTF ((uint16_t)0x0001)
#define USB_INT_STATE_SUSPENDF ((uint16_t)0x0002)
#define USB_INT_STATE_RESUMF ((uint16_t)0x0004)
#define USB_INT_STATE_SOFF ((uint16_t)0x0008)
#define USB_INT_STATE_EPINTF ((uint16_t)0x0010)

/*******************  Bit definition for EP_INT_STATE register  *******************/
#define EP_INT_STATE_EP0F ((uint16_t)0x0001)
#define EP_INT_STATE_EP1F ((uint16_t)0x0002)
#define EP_INT_STATE_EP2F ((uint16_t)0x0004)
#define EP_INT_STATE_EP3F ((uint16_t)0x0008)
#define EP_INT_STATE_EP4F ((uint16_t)0x0010)

/*******************  Bit definition for EP0_INT_STATE register  *******************/
#define EPn_INT_STATE_SETUP ((uint16_t)0x0001)
#define EPn_INT_STATE_END ((uint16_t)0x0002)
#define EPn_INT_STATE_INNACK ((uint16_t)0x0004)
#define EPn_INT_STATE_INACK ((uint16_t)0x0008)
#define EPn_INT_STATE_INSTALL ((uint16_t)0x0010)
#define EPn_INT_STATE_OUTNACK ((uint16_t)0x0020)
#define EPn_INT_STATE_OUTACK ((uint16_t)0x0040)
#define EPn_INT_STATE_OUTSTALL ((uint16_t)0x0080)

/*******************  Bit definition for USB_INT_EN register  *******************/
#define USB_INT_EN_RSTIE ((uint16_t)0x0001)
#define USB_INT_EN_SUSPENDIE ((uint16_t)0x0002)
#define USB_INT_EN_RESUMIE ((uint16_t)0x0004)
#define USB_INT_EN_SOFIE ((uint16_t)0x0008)
#define USB_INT_EN_EPINTIE ((uint16_t)0x0010)

/*******************  Bit definition for EP_INT_EN register  *******************/
#define EP_INT_EN_EP0IE ((uint16_t)0x0001)
#define EP_INT_EN_EP1IE ((uint16_t)0x0002)
#define EP_INT_EN_EP2IE ((uint16_t)0x0004)
#define EP_INT_EN_EP3IE ((uint16_t)0x0008)
#define EP_INT_EN_EP4IE ((uint16_t)0x0010)

/*******************  Bit definition for EP0_INT_EN register  *******************/
#define EPn_INT_EN_SETUPIE ((uint16_t)0x0001)
#define EPn_INT_EN_ENDIE ((uint16_t)0x0002)
#define EPn_INT_EN_INNACKIE ((uint16_t)0x0004)
#define EPn_INT_EN_INACKIE ((uint16_t)0x0008)
#define EPn_INT_EN_INSTALLIE ((uint16_t)0x0010)
#define EPn_INT_EN_OUTNACKIE ((uint16_t)0x0020)
#define EPn_INT_EN_OUTACKIE ((uint16_t)0x0040)
#define EPn_INT_EN_OUTSTALLIE ((uint16_t)0x0080)

///*******************  Bit definition for EP1_INT_STATE register  *******************/
//#define  EP1_INT_STATE_END                    ((uint16_t)0x0002)
//#define  EP1_INT_STATE_INNACK                 ((uint16_t)0x0004)
//#define  EP1_INT_STATE_INACK                  ((uint16_t)0x0008)
//#define  EP1_INT_STATE_INSTALL                ((uint16_t)0x0010)
//#define  EP1_INT_STATE_OUTNACK                ((uint16_t)0x0020)
//#define  EP1_INT_STATE_OUTACK                 ((uint16_t)0x0040)
//#define  EP1_INT_STATE_OUTSTALL               ((uint16_t)0x0080)

///*******************  Bit definition for EP2_INT_STATE register  *******************/
//#define  EP2_INT_STATE_END                    ((uint16_t)0x0002)
//#define  EP2_INT_STATE_INNACK                 ((uint16_t)0x0004)
//#define  EP2_INT_STATE_INACK                  ((uint16_t)0x0008)
//#define  EP2_INT_STATE_INSTALL                ((uint16_t)0x0010)
//#define  EP2_INT_STATE_OUTNACK                ((uint16_t)0x0020)
//#define  EP2_INT_STATE_OUTACK                 ((uint16_t)0x0040)
//#define  EP2_INT_STATE_OUTSTALL               ((uint16_t)0x0080)

///*******************  Bit definition for EP3_INT_STATE register  *******************/
//#define  EP3_INT_STATE_END                    ((uint16_t)0x0002)
//#define  EP3_INT_STATE_INNACK                 ((uint16_t)0x0004)
//#define  EP3_INT_STATE_INACK                  ((uint16_t)0x0008)
//#define  EP3_INT_STATE_INSTALL                ((uint16_t)0x0010)
//#define  EP3_INT_STATE_OUTNACK                ((uint16_t)0x0020)
//#define  EP3_INT_STATE_OUTACK                 ((uint16_t)0x0040)
//#define  EP3_INT_STATE_OUTSTALL               ((uint16_t)0x0080)

///*******************  Bit definition for EP4_INT_STATE register  *******************/
//#define  EP4_INT_STATE_END                    ((uint16_t)0x0002)
//#define  EP4_INT_STATE_INNACK                 ((uint16_t)0x0004)
//#define  EP4_INT_STATE_INACK                  ((uint16_t)0x0008)
//#define  EP4_INT_STATE_INSTALL                ((uint16_t)0x0010)
//#define  EP4_INT_STATE_OUTNACK                ((uint16_t)0x0020)
//#define  EP4_INT_STATE_OUTACK                 ((uint16_t)0x0040)
//#define  EP4_INT_STATE_OUTSTALL               ((uint16_t)0x0080)

///*******************  Bit definition for EP1_INT_EN register  *******************/
//#define  EPn_INT_EN_ENDIE                     ((uint16_t)0x0002)
//#define  EPn_INT_EN_INNACKIE                  ((uint16_t)0x0004)
//#define  EPn_INT_EN_INACKIE                   ((uint16_t)0x0008)
//#define  EPn_INT_EN_INSTALLIE                 ((uint16_t)0x0010)
//#define  EPn_INT_EN_OUTNACKIE                 ((uint16_t)0x0020)
//#define  EPn_INT_EN_OUTACKIE                  ((uint16_t)0x0040)
//#define  EPn_INT_EN_OUTSTALLIE                ((uint16_t)0x0080)

/*******************  Bit definition for USB_ADDR register  *******************/
#define USB_ADDR_ADDR ((uint16_t)0x007F)

/*******************  Bit definition for EP_EN register  *******************/
#define EP_EN_EP0EN ((uint16_t)0x0001)
#define EP_EN_EP1EN ((uint16_t)0x0002)
#define EP_EN_EP2EN ((uint16_t)0x0004)
#define EP_EN_EP3EN ((uint16_t)0x0008)
#define EP_EN_EP4EN ((uint16_t)0x0010)

/*******************  Bit definition for TOG_CTRL1_4 register  *******************/
#define TOG_CTRL1_4_DTOG1 ((uint16_t)0x0001)
#define TOG_CTRL1_4_DTOG1EN ((uint16_t)0x0002)
#define TOG_CTRL1_4_DTOG2 ((uint16_t)0x0004)
#define TOG_CTRL1_4_DTOG2EN ((uint16_t)0x0008)
#define TOG_CTRL1_4_DTOG3 ((uint16_t)0x0010)
#define TOG_CTRL1_4_DTOG3EN ((uint16_t)0x0020)
#define TOG_CTRL1_4_DTOG4 ((uint16_t)0x0040)
#define TOG_CTRL1_4_DTOG4EN ((uint16_t)0x0080)

/*******************  Bit definition for SETUP0 register  *******************/
#define SETUP0 ((uint16_t)0x00FF)

/*******************  Bit definition for SETUP1 register  *******************/
#define SETUP1 ((uint16_t)0x00FF)

/*******************  Bit definition for SETUP2 register  *******************/
#define SETUP2 ((uint16_t)0x00FF)

/*******************  Bit definition for SETUP3 register  *******************/
#define SETUP3 ((uint16_t)0x00FF)

/*******************  Bit definition for SETUP4 register  *******************/
#define SETUP4 ((uint16_t)0x00FF)

/*******************  Bit definition for SETUP5 register  *******************/
#define SETUP5 ((uint16_t)0x00FF)

/*******************  Bit definition for SETUP6 register  *******************/
#define SETUP6 ((uint16_t)0x00FF)

/*******************  Bit definition for SETUP7 register  *******************/
#define SETUP7 ((uint16_t)0x00FF)

/*******************  Bit definition for PACKET_SIZE1 register  *******************/
#define PACKET_SIZE1 ((uint16_t)0x00FF)

/*******************  Bit definition for PACKET_SIZE2 register  *******************/
#define PACKET_SIZE2 ((uint16_t)0x00FF)

/*******************  Bit definition for EP0_AVIL register  *******************/
#define EP0_AVIL_EPXAVIL ((uint16_t)0x00FF)

/*******************  Bit definition for EP1_AVIL register  *******************/
#define EP1_AVIL_EPXAVIL ((uint16_t)0x00FF)

/*******************  Bit definition for EP2_AVIL register  *******************/
#define EP2_AVIL_EPXAVIL ((uint16_t)0x00FF)

/*******************  Bit definition for EP3_AVIL register  *******************/
#define EP3_AVIL_EPXAVIL ((uint16_t)0x00FF)

/*******************  Bit definition for EP4_AVIL register  *******************/
#define EP4_AVIL_EPXAVIL ((uint16_t)0x00FF)

/*******************  Bit definition for EP0_CTRL register  *******************/
#define EP0_CTRL_TRANEN ((uint16_t)0x0080)

#define EP0_CTRL_TRANCOUNT ((uint16_t)0x007F)
#define EP0_CTRL_TRANCOUNT_0 ((uint16_t)0x0001)
#define EP0_CTRL_TRANCOUNT_1 ((uint16_t)0x0002)
#define EP0_CTRL_TRANCOUNT_2 ((uint16_t)0x0004)
#define EP0_CTRL_TRANCOUNT_3 ((uint16_t)0x0008)
#define EP0_CTRL_TRANCOUNT_4 ((uint16_t)0x0010)
#define EP0_CTRL_TRANCOUNT_5 ((uint16_t)0x0020)
#define EP0_CTRL_TRANCOUNT_6 ((uint16_t)0x0040)

/*******************  Bit definition for EP1_CTRL register  *******************/
#define EP1_CTRL_TRANEN ((uint16_t)0x0080)

#define EP1_CTRL_TRANCOUNT ((uint16_t)0x007F)
#define EP1_CTRL_TRANCOUNT_0 ((uint16_t)0x0001)
#define EP1_CTRL_TRANCOUNT_1 ((uint16_t)0x0002)
#define EP1_CTRL_TRANCOUNT_2 ((uint16_t)0x0004)
#define EP1_CTRL_TRANCOUNT_3 ((uint16_t)0x0008)
#define EP1_CTRL_TRANCOUNT_4 ((uint16_t)0x0010)
#define EP1_CTRL_TRANCOUNT_5 ((uint16_t)0x0020)
#define EP1_CTRL_TRANCOUNT_6 ((uint16_t)0x0040)

/*******************  Bit definition for EP2_CTRL register  *******************/
#define EP2_CTRL_TRANEN ((uint16_t)0x0080)

#define EP2_CTRL_TRANCOUNT ((uint16_t)0x007F)
#define EP2_CTRL_TRANCOUNT_0 ((uint16_t)0x0001)
#define EP2_CTRL_TRANCOUNT_1 ((uint16_t)0x0002)
#define EP2_CTRL_TRANCOUNT_2 ((uint16_t)0x0004)
#define EP2_CTRL_TRANCOUNT_3 ((uint16_t)0x0008)
#define EP2_CTRL_TRANCOUNT_4 ((uint16_t)0x0010)
#define EP2_CTRL_TRANCOUNT_5 ((uint16_t)0x0020)
#define EP2_CTRL_TRANCOUNT_6 ((uint16_t)0x0040)

/*******************  Bit definition for EP3_CTRL register  *******************/
#define EP3_CTRL_TRANEN ((uint16_t)0x0080)

#define EP3_CTRL_TRANCOUNT ((uint16_t)0x007F)
#define EP3_CTRL_TRANCOUNT_0 ((uint16_t)0x0001)
#define EP3_CTRL_TRANCOUNT_1 ((uint16_t)0x0002)
#define EP3_CTRL_TRANCOUNT_2 ((uint16_t)0x0004)
#define EP3_CTRL_TRANCOUNT_3 ((uint16_t)0x0008)
#define EP3_CTRL_TRANCOUNT_4 ((uint16_t)0x0010)
#define EP3_CTRL_TRANCOUNT_5 ((uint16_t)0x0020)
#define EP3_CTRL_TRANCOUNT_6 ((uint16_t)0x0040)

/*******************  Bit definition for EP4_CTRL register  *******************/
#define EP4_CTRL_TRANEN ((uint16_t)0x0080)

#define EP4_CTRL_TRANCOUNT ((uint16_t)0x007F)
#define EP4_CTRL_TRANCOUNT_0 ((uint16_t)0x0001)
#define EP4_CTRL_TRANCOUNT_1 ((uint16_t)0x0002)
#define EP4_CTRL_TRANCOUNT_2 ((uint16_t)0x0004)
#define EP4_CTRL_TRANCOUNT_3 ((uint16_t)0x0008)
#define EP4_CTRL_TRANCOUNT_4 ((uint16_t)0x0010)
#define EP4_CTRL_TRANCOUNT_5 ((uint16_t)0x0020)
#define EP4_CTRL_TRANCOUNT_6 ((uint16_t)0x0040)

/*******************  Bit definition for EP_DMA register  *******************/
#define EP_DMA_DMA1EN ((uint16_t)0x0001)
#define EP_DMA_DMA2EN ((uint16_t)0x0002)

/*******************  Bit definition for EP_HALT register  *******************/
#define EP_HALT_HALT0 ((uint16_t)0x0001)
#define EP_HALT_HALT1 ((uint16_t)0x0002)
#define EP_HALT_HALT2 ((uint16_t)0x0004)
#define EP_HALT_HALT3 ((uint16_t)0x0008)
#define EP_HALT_HALT4 ((uint16_t)0x0010)

/*******************  Bit definition for USB_POWER register  *******************/
#define USB_POWER_SUSPEN ((uint16_t)0x0001)
#define USB_POWER_SUSP ((uint16_t)0x0002)
#define USB_POWER_WKUP ((uint16_t)0x0008)
/*----------------------------------------------------------------------------*/

/******************************************************************************/
/*                                                                            */
/*                                   CAN Registers and bits                   */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for CAN_CMR register  *******************/
#define CAN_CMR_TR ((uint16_t)0x0001)
#define CAN_CMR_AT ((uint16_t)0x0002)
#define CAN_CMR_RRB ((uint16_t)0x0004)
#define CAN_CMR_CDO ((uint16_t)0x0008)
#define CAN_CMR_GTS ((uint16_t)0x0010)

/*******************  Bit definition for CAN_SR register  *******************/
#define CAN_SR_RBS ((uint16_t)0x0001)
#define CAN_SR_DOS ((uint16_t)0x0002)
#define CAN_SR_TBS ((uint16_t)0x0004)
#define CAN_SR_TCS ((uint16_t)0x0008)
#define CAN_SR_RS ((uint16_t)0x0010)
#define CAN_SR_TS ((uint16_t)0x0020)
#define CAN_SR_ES ((uint16_t)0x0040)
#define CAN_SR_BS ((uint16_t)0x0080)

/*******************  Bit definition for CAN_IR register  *******************/
#define CAN_IR_RI ((uint16_t)0x0001)
#define CAN_IR_TI ((uint16_t)0x0002)
#define CAN_IR_EI ((uint16_t)0x0004)
#define CAN_IR_DOI ((uint16_t)0x0008)
#define CAN_IR_WUI ((uint16_t)0x0010)
#define CAN_IR_EPI ((uint16_t)0x0020) /*PeliCAN*/
#define CAN_IR_ALI ((uint16_t)0x0040) /*PeliCAN*/
#define CAN_IR_BEI ((uint16_t)0x0080) /*PeliCAN*/

/*******************  Bit definition for CAN_BTR0 register  *******************/
#define CAN_BTR0_BRP ((uint16_t)0x003F)
#define CAN_BTR0_BRP_0 ((uint16_t)0x0001)
#define CAN_BTR0_BRP_1 ((uint16_t)0x0002)
#define CAN_BTR0_BRP_2 ((uint16_t)0x0004)
#define CAN_BTR0_BRP_3 ((uint16_t)0x0008)
#define CAN_BTR0_BRP_4 ((uint16_t)0x0010)
#define CAN_BTR0_BRP_5 ((uint16_t)0x0020)

#define CAN_BTR0_SJW ((uint16_t)0x00C0)
#define CAN_BTR0_SJW_0 ((uint16_t)0x0040)
#define CAN_BTR0_SJW_1 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_BTR1 register  *******************/
#define CAN_BTR1_SAM ((uint16_t)0x0080)

#define CAN_BTR1_TSEG1 ((uint16_t)0x000F)
#define CAN_BTR1_TSEG1_0 ((uint16_t)0x0001)
#define CAN_BTR1_TSEG1_1 ((uint16_t)0x0002)
#define CAN_BTR1_TSEG1_2 ((uint16_t)0x0004)
#define CAN_BTR1_TSEG1_3 ((uint16_t)0x0008)

#define CAN_BTR1_TSEG2 ((uint16_t)0x0070)
#define CAN_BTR1_TSEG2_0 ((uint16_t)0x0010)
#define CAN_BTR1_TSEG2_1 ((uint16_t)0x0020)
#define CAN_BTR1_TSEG2_2 ((uint16_t)0x0040)

/*******************  Bit definition for CAN_CDR register  *******************/
#define CAN_CDR_MODE ((uint16_t)0x0080)

/*!<BasicCAN registers */
/*******************  Bit definition for CAN_CR register  *******************/
#define CAN_CR_RR ((uint16_t)0x0001)
#define CAN_CR_RIE ((uint16_t)0x0002)
#define CAN_CR_TIE ((uint16_t)0x0004)
#define CAN_CR_EIE ((uint16_t)0x0008)
#define CAN_CR_OIE ((uint16_t)0x0010)

/*******************  Bit definition for CAN_ACR register  *******************/
#define CAN_ACR_AC ((uint16_t)0x00FF)
#define CAN_ACR_AC_0 ((uint16_t)0x0001)
#define CAN_ACR_AC_1 ((uint16_t)0x0002)
#define CAN_ACR_AC_2 ((uint16_t)0x0004)
#define CAN_ACR_AC_3 ((uint16_t)0x0008)
#define CAN_ACR_AC_4 ((uint16_t)0x0010)
#define CAN_ACR_AC_5 ((uint16_t)0x0020)
#define CAN_ACR_AC_6 ((uint16_t)0x0040)
#define CAN_ACR_AC_7 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_AMR register  *******************/
#define CAN_AMR_AM ((uint16_t)0x00FF)
#define CAN_AMR_AM_0 ((uint16_t)0x0001)
#define CAN_AMR_AM_1 ((uint16_t)0x0002)
#define CAN_AMR_AM_2 ((uint16_t)0x0004)
#define CAN_AMR_AM_3 ((uint16_t)0x0008)
#define CAN_AMR_AM_4 ((uint16_t)0x0010)
#define CAN_AMR_AM_5 ((uint16_t)0x0020)
#define CAN_AMR_AM_6 ((uint16_t)0x0040)
#define CAN_AMR_AM_7 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_TXID1 register  *******************/
#define CAN_TXID1_ID ((uint16_t)0x00FF)
#define CAN_TXID1_ID_3 ((uint16_t)0x0001)
#define CAN_TXID1_ID_4 ((uint16_t)0x0002)
#define CAN_TXID1_ID_5 ((uint16_t)0x0004)
#define CAN_TXID1_ID_6 ((uint16_t)0x0008)
#define CAN_TXID1_ID_7 ((uint16_t)0x0010)
#define CAN_TXID1_ID_8 ((uint16_t)0x0020)
#define CAN_TXID1_ID_9 ((uint16_t)0x0040)
#define CAN_TXID1_ID_10 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_TXID2 register  *******************/
#define CAN_TXID2_RTR ((uint16_t)0x0010)

#define CAN_TXID2_DLC ((uint16_t)0x000F)
#define CAN_TXID2_DLC_0 ((uint16_t)0x0001)
#define CAN_TXID2_DLC_1 ((uint16_t)0x0002)
#define CAN_TXID2_DLC_2 ((uint16_t)0x0004)
#define CAN_TXID2_DLC_3 ((uint16_t)0x0008)

#define CAN_TXID2_ID ((uint16_t)0x00E0)
#define CAN_TXID2_ID_0 ((uint16_t)0x0020)
#define CAN_TXID2_ID_1 ((uint16_t)0x0040)
#define CAN_TXID2_ID_2 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_TXDR0 register  *******************/
#define CAN_TXDR0 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR1 register  *******************/
#define CAN_TXDR1 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR2 register  *******************/
#define CAN_TXDR2 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR3 register  *******************/
#define CAN_TXDR3 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR4 register  *******************/
#define CAN_TXDR4 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR5 register  *******************/
#define CAN_TXDR5 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR6 register  *******************/
#define CAN_TXDR6 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR7 register  *******************/
#define CAN_TXDR7 ((uint16_t)0x00FF)

/*******************  Bit definition for CAN_RXID1 register  *******************/
#define CAN_RXID1_ID ((uint16_t)0x00FF)
#define CAN_RXID1_ID_3 ((uint16_t)0x0001)
#define CAN_RXID1_ID_4 ((uint16_t)0x0002)
#define CAN_RXID1_ID_5 ((uint16_t)0x0004)
#define CAN_RXID1_ID_6 ((uint16_t)0x0008)
#define CAN_RXID1_ID_7 ((uint16_t)0x0010)
#define CAN_RXID1_ID_8 ((uint16_t)0x0020)
#define CAN_RXID1_ID_9 ((uint16_t)0x0040)
#define CAN_RXID1_ID_10 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_RXID2 register  *******************/
#define CAN_RXID2_RTR ((uint16_t)0x0010)

#define CAN_RXID2_DLC ((uint16_t)0x000F)
#define CAN_RXID2_DLC_0 ((uint16_t)0x0001)
#define CAN_RXID2_DLC_1 ((uint16_t)0x0002)
#define CAN_RXID2_DLC_2 ((uint16_t)0x0004)
#define CAN_RXID2_DLC_3 ((uint16_t)0x0008)

#define CAN_RXID2_ID ((uint16_t)0x00E0)
#define CAN_RXID2_ID_0 ((uint16_t)0x0020)
#define CAN_RXID2_ID_1 ((uint16_t)0x0040)
#define CAN_RXID2_ID_2 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_RXDR0 register  *******************/
#define CAN_RXDR0 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR1 register  *******************/
#define CAN_RXDR1 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR2 register  *******************/
#define CAN_RXDR2 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR3 register  *******************/
#define CAN_RXDR3 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR4 register  *******************/
#define CAN_RXDR4 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR5 register  *******************/
#define CAN_RXDR5 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR6 register  *******************/
#define CAN_RXDR6 ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR7 register  *******************/
#define CAN_RXDR7 ((uint16_t)0x00FF)

/*!<PeliCAN registers */
/*******************  Bit definition for CAN_MOD register  *******************/
#define CAN_MOD_RM ((uint16_t)0x0001)
#define CAN_MOD_LOM ((uint16_t)0x0002)
#define CAN_MOD_STM ((uint16_t)0x0004)
#define CAN_MOD_AFM ((uint16_t)0x0008)
#define CAN_MOD_SM ((uint16_t)0x0010)

/*******************  Bit definition for CAN_IER register  *******************/
#define CAN_IER_RIE ((uint16_t)0x0001)
#define CAN_IER_TIE ((uint16_t)0x0002)
#define CAN_IER_EIE ((uint16_t)0x0004)
#define CAN_IER_DOIE ((uint16_t)0x0008)
#define CAN_IER_WUIE ((uint16_t)0x0010)
#define CAN_IER_EPIE ((uint16_t)0x0020)
#define CAN_IER_ALIE ((uint16_t)0x0040)
#define CAN_IER_BEIE ((uint16_t)0x0080)

/*******************  Bit definition for CAN_ALC register  *******************/
#define CAN_ALC_BITNO ((uint16_t)0x001F)
#define CAN_ALC_BITNO_0 ((uint16_t)0x0001)
#define CAN_ALC_BITNO_1 ((uint16_t)0x0002)
#define CAN_ALC_BITNO_2 ((uint16_t)0x0004)
#define CAN_ALC_BITNO_3 ((uint16_t)0x0008)
#define CAN_ALC_BITNO_4 ((uint16_t)0x0010)

/*******************  Bit definition for CAN_ECC register  *******************/
#define CAN_ECC_DIR ((uint16_t)0x0020)

#define CAN_ECC_SEG ((uint16_t)0x001F)
#define CAN_ECC_SEG_0 ((uint16_t)0x0001)
#define CAN_ECC_SEG_1 ((uint16_t)0x0002)
#define CAN_ECC_SEG_2 ((uint16_t)0x0004)
#define CAN_ECC_SEG_3 ((uint16_t)0x0008)
#define CAN_ECC_SEG_4 ((uint16_t)0x0010)

#define CAN_ECC_ERRC ((uint16_t)0x00C0)
#define CAN_ECC_ERRC_0 ((uint16_t)0x0040)
#define CAN_ECC_ERRC_1 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_EWLR register  *******************/
#define CAN_EWLR_EWL ((uint16_t)0x00FF)

/*******************  Bit definition for CAN_RXERR register  *******************/
#define CAN_RXERR_RXERR ((uint16_t)0x00FF)

/*******************  Bit definition for CAN_TXERR register  *******************/
#define CAN_TXERR_TXERR ((uint16_t)0x00FF)

/*******************  Bit definition for CAN_FF register  *******************/
#define CAN_FF_RTR ((uint16_t)0x0040)
#define CAN_FF_FF ((uint16_t)0x0080)

#define CAN_FF_DLC ((uint16_t)0x000F)
#define CAN_FF_DLC_0 ((uint16_t)0x0001)
#define CAN_FF_DLC_1 ((uint16_t)0x0002)
#define CAN_FF_DLC_2 ((uint16_t)0x0004)
#define CAN_FF_DLC_3 ((uint16_t)0x0008)

/*******************  Bit definition for CAN_ACR0 register  *******************/
#define CAN_ACR0_AC ((uint16_t)0x00FF)
#define CAN_ACR0_AC_0 ((uint16_t)0x0001)
#define CAN_ACR0_AC_1 ((uint16_t)0x0002)
#define CAN_ACR0_AC_2 ((uint16_t)0x0004)
#define CAN_ACR0_AC_3 ((uint16_t)0x0008)
#define CAN_ACR0_AC_4 ((uint16_t)0x0010)
#define CAN_ACR0_AC_5 ((uint16_t)0x0020)
#define CAN_ACR0_AC_6 ((uint16_t)0x0040)
#define CAN_ACR0_AC_7 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_ACR1 register  *******************/
#define CAN_ACR1_AC ((uint16_t)0x00FF)
#define CAN_ACR1_AC_0 ((uint16_t)0x0001)
#define CAN_ACR1_AC_1 ((uint16_t)0x0002)
#define CAN_ACR1_AC_2 ((uint16_t)0x0004)
#define CAN_ACR1_AC_3 ((uint16_t)0x0008)
#define CAN_ACR1_AC_4 ((uint16_t)0x0010)
#define CAN_ACR1_AC_5 ((uint16_t)0x0020)
#define CAN_ACR1_AC_6 ((uint16_t)0x0040)
#define CAN_ACR1_AC_7 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_ACR2 register  *******************/
#define CAN_ACR2_AC ((uint16_t)0x00FF)
#define CAN_ACR2_AC_0 ((uint16_t)0x0001)
#define CAN_ACR2_AC_1 ((uint16_t)0x0002)
#define CAN_ACR2_AC_2 ((uint16_t)0x0004)
#define CAN_ACR2_AC_3 ((uint16_t)0x0008)
#define CAN_ACR2_AC_4 ((uint16_t)0x0010)
#define CAN_ACR2_AC_5 ((uint16_t)0x0020)
#define CAN_ACR2_AC_6 ((uint16_t)0x0040)
#define CAN_ACR2_AC_7 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_ACR3 register  *******************/
#define CAN_ACR3_AC ((uint16_t)0x00FF)
#define CAN_ACR3_AC_0 ((uint16_t)0x0001)
#define CAN_ACR3_AC_1 ((uint16_t)0x0002)
#define CAN_ACR3_AC_2 ((uint16_t)0x0004)
#define CAN_ACR3_AC_3 ((uint16_t)0x0008)
#define CAN_ACR3_AC_4 ((uint16_t)0x0010)
#define CAN_ACR3_AC_5 ((uint16_t)0x0020)
#define CAN_ACR3_AC_6 ((uint16_t)0x0040)
#define CAN_ACR3_AC_7 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_AMR0 register  *******************/
#define CAN_AMR0_AM ((uint16_t)0x00FF)
#define CAN_AMR0_AM_0 ((uint16_t)0x0001)
#define CAN_AMR0_AM_1 ((uint16_t)0x0002)
#define CAN_AMR0_AM_2 ((uint16_t)0x0004)
#define CAN_AMR0_AM_3 ((uint16_t)0x0008)
#define CAN_AMR0_AM_4 ((uint16_t)0x0010)
#define CAN_AMR0_AM_5 ((uint16_t)0x0020)
#define CAN_AMR0_AM_6 ((uint16_t)0x0040)
#define CAN_AMR0_AM_7 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_AMR1 register  *******************/
#define CAN_AMR1_AM ((uint16_t)0x00FF)
#define CAN_AMR1_AM_0 ((uint16_t)0x0001)
#define CAN_AMR1_AM_1 ((uint16_t)0x0002)
#define CAN_AMR1_AM_2 ((uint16_t)0x0004)
#define CAN_AMR1_AM_3 ((uint16_t)0x0008)
#define CAN_AMR1_AM_4 ((uint16_t)0x0010)
#define CAN_AMR1_AM_5 ((uint16_t)0x0020)
#define CAN_AMR1_AM_6 ((uint16_t)0x0040)
#define CAN_AMR1_AM_7 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_AMR2 register  *******************/
#define CAN_AMR2_AM ((uint16_t)0x00FF)
#define CAN_AMR2_AM_0 ((uint16_t)0x0001)
#define CAN_AMR2_AM_1 ((uint16_t)0x0002)
#define CAN_AMR2_AM_2 ((uint16_t)0x0004)
#define CAN_AMR2_AM_3 ((uint16_t)0x0008)
#define CAN_AMR2_AM_4 ((uint16_t)0x0010)
#define CAN_AMR2_AM_5 ((uint16_t)0x0020)
#define CAN_AMR2_AM_6 ((uint16_t)0x0040)
#define CAN_AMR2_AM_7 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_AMR3 register  *******************/
#define CAN_AMR3_AM ((uint16_t)0x00FF)
#define CAN_AMR3_AM_0 ((uint16_t)0x0001)
#define CAN_AMR3_AM_1 ((uint16_t)0x0002)
#define CAN_AMR3_AM_2 ((uint16_t)0x0004)
#define CAN_AMR3_AM_3 ((uint16_t)0x0008)
#define CAN_AMR3_AM_4 ((uint16_t)0x0010)
#define CAN_AMR3_AM_5 ((uint16_t)0x0020)
#define CAN_AMR3_AM_6 ((uint16_t)0x0040)
#define CAN_AMR3_AM_7 ((uint16_t)0x0080)

/*******************  Bit definition for CAN_RMC register  *******************/
#define CAN_RMC_RMC ((uint16_t)0x001F)

/*******************  Bit definition for CAN_RBSA register  *******************/
#define CAN_RBSA_RBSA ((uint16_t)0x003F)

/**
 * @}
 */

/**
 * @}
 */

#ifdef USE_STDPERIPH_DRIVER
//#include "MM32F032xx_conf.h"
#include "HAL_conf.h"
#endif

/** @addtogroup Exported_macro
 * @{
 */

#define SET_BIT(REG, BIT) ((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT) ((REG) &= ~(BIT))

#define READ_BIT(REG, BIT) ((REG) & (BIT))

#define CLEAR_REG(REG) ((REG) = (0x0))

#define WRITE_REG(REG, VAL) ((REG) = (VAL))

#define READ_REG(REG) ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK) WRITE_REG((REG), (((READ_REG(REG)) & (~CLEARMASK)) | (SETMASK)))

/* Exported macro ------------------------------------------------------------*/
#ifdef USE_FULL_ASSERT

/**
 * @brief  The assert_param macro is used for function's parameters check.
 * @param expr: If expr is false, it calls assert_failed function
 *   which reports the name of the source file and the source
 *   line number of the call that failed.
 *   If expr is true, it returns no value.
 * @retval : None
 */
#define assert_param(expr) ((expr) ? (void)0 : assert_failed((uint8_t*)__FILE__, __LINE__))
/* Exported functions ------------------------------------------------------- */
void assert_failed(uint8_t* file, uint32_t line);
#else
#define assert_param(expr) ((void)0)
#endif /* USE_FULL_ASSERT */

/**
 * @}
 */

//#endif /* MM32F032xx_H */

/**
 * @}
 */

/**
 * @}
 */

/*-------------------------(C) COPYRIGHT 2019 MindMotion ----------------------*/

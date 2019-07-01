/**************************************************************************/ /**
                                                                              * @file    HAL_device.h
                                                                              * @brief   CMSIS Cortex-M Peripheral Access Layer
                                                                              *for MindMotion microcontroller devices
                                                                              *
                                                                              * This is a convenience header file for defining the
                                                                              *part number on the build command line, instead of
                                                                              *specifying the part specific header file.
                                                                              *
                                                                              * Example: Add "-DVV_MZ310" to your build options,
                                                                              *to define part Add "#include "HAL_device.h" to your
                                                                              *source files
                                                                              *
                                                                              *
                                                                              * @version 1.0.0
                                                                              *
                                                                              *
                                                                              *****************************************************************************/

#ifndef __HAL_device_H
#define __HAL_device_H

#define MM32F032xx

#if defined(MM32L072PF)

#include "MM32L073PF.h"
//#include "system_MM32L072PF.h"

#elif defined(MM32F032xx)
//#error  dontwantincludethisfile
#include "MM32F032xx.h"
//#include "system_MM32L073PF.h"

#else
#error "HAL_device.h: PART NUMBER undefined"
#endif
#endif /* __HAL_device_H */
/*-------------------------(C) COPYRIGHT 2019 MindMotion ----------------------*/

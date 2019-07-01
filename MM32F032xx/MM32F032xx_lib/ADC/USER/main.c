#include "delay.h"
#include "sys.h"
#include "uart.h"
#include "ADC_Polling.h"

#define ADC_Polling  //软件启动单通道转换，通过 ADC 查询的方式得到数据
//#define ADC_Interrupt  			 //软件启动单通道转换，通过 ADC 中断的方式得到数据
//#define ADC_DMA_Interrupt    //软件启动多通道转换，通过 DMA 中断的方式得到数据
//#define ADC_DMA_Signle       //软件启动多通道转换，通过 DMA、同步的方式得到数据
//#define ADC_DMA_Interrupt_4  //定时器触发 ADC
//#define ADC_ExtLinesTrigger  //外部中断触发
//#define ADC_TIMTrigger       //TIMx_CCx触发ADC采样
//#define ADC_Awdg             //ADC 的窗口比较器的运用
//#define ADC_Tempsensor       //温度传感器
//#define ADC_Vref1.2V         //内部基准电压
//#define ADC_TIM3_TRGO        //TIM3_TRGO触发ADC采样

#ifdef ADC_Polling  //软件启动多通道 ADC 连续转换，通过 DMA、异步的方式得到数据
/********************************************************************************************************
**函数信息 ：main(void)
**功能描述 ：
**输入参数 ：
**输出参数 ：
**    备注 ：
********************************************************************************************************/
int main(void)
{
    u16   ADCVAL;
    float fValue;

    delay_init();
    uart_initwBaudRate(115200);  //串口初始化为115200

    /*配置ADC1为单次转换模式,通道1使能*/
    ADC1_SingleChannel();
    while (1) {
        /*读取当前转换数据*/
        ADCVAL = ADC1_SingleChannel_Get();
        fValue = ((float)ADCVAL / 4095) * 3.3;
        printf("ADC1_CH_1=%fV\r\n", fValue);
        delay_ms(500);
    }
}

#elif defined(ADC_Interrupt)
int main(void)
{
    while (1) {}
}

#endif

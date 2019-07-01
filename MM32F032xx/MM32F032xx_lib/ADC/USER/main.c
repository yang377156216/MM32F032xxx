#include "delay.h"
#include "sys.h"
#include "uart.h"
#include "ADC_Polling.h"

#define ADC_Polling  //���������ͨ��ת����ͨ�� ADC ��ѯ�ķ�ʽ�õ�����
//#define ADC_Interrupt  			 //���������ͨ��ת����ͨ�� ADC �жϵķ�ʽ�õ�����
//#define ADC_DMA_Interrupt    //���������ͨ��ת����ͨ�� DMA �жϵķ�ʽ�õ�����
//#define ADC_DMA_Signle       //���������ͨ��ת����ͨ�� DMA��ͬ���ķ�ʽ�õ�����
//#define ADC_DMA_Interrupt_4  //��ʱ������ ADC
//#define ADC_ExtLinesTrigger  //�ⲿ�жϴ���
//#define ADC_TIMTrigger       //TIMx_CCx����ADC����
//#define ADC_Awdg             //ADC �Ĵ��ڱȽ���������
//#define ADC_Tempsensor       //�¶ȴ�����
//#define ADC_Vref1.2V         //�ڲ���׼��ѹ
//#define ADC_TIM3_TRGO        //TIM3_TRGO����ADC����

#ifdef ADC_Polling  //���������ͨ�� ADC ����ת����ͨ�� DMA���첽�ķ�ʽ�õ�����
/********************************************************************************************************
**������Ϣ ��main(void)
**�������� ��
**������� ��
**������� ��
**    ��ע ��
********************************************************************************************************/
int main(void)
{
    u16   ADCVAL;
    float fValue;

    delay_init();
    uart_initwBaudRate(115200);  //���ڳ�ʼ��Ϊ115200

    /*����ADC1Ϊ����ת��ģʽ,ͨ��1ʹ��*/
    ADC1_SingleChannel();
    while (1) {
        /*��ȡ��ǰת������*/
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

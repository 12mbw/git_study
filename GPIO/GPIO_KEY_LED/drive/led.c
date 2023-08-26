#include "led.h"
#include "nrf_gpio.h"



void LED_Init(void)
{
		nrf_gpio_cfg_output(LED_0);
		nrf_gpio_cfg_output(LED_1);
		nrf_gpio_cfg_output(LED_2);

}


//打开LED0
void LED0_Open(void)
{
		nrf_gpio_pin_clear(LED_0);
}
//关闭LED0
void LED0_Close(void)
{
		nrf_gpio_pin_set(LED_0);
}

//打开LED1
void LED1_Open(void)
{
		nrf_gpio_pin_clear(LED_1);
}

//关闭LED1
void LED1_Close(void)
{
		nrf_gpio_pin_set(LED_1);
}

//打开LED2
void LED2_Open(void)
{
		nrf_gpio_pin_clear(LED_2);
}

//关闭LED2
void LED2_Close(void)
{
		nrf_gpio_pin_set(LED_2);
}


void LED0_Toggle(void)
{
  nrf_gpio_pin_toggle(LED_0);
}

void LED1_Toggle(void)
{
  nrf_gpio_pin_toggle(LED_1);
}

void LED2_Toggle(void)
{
  nrf_gpio_pin_toggle(LED_2);
}




















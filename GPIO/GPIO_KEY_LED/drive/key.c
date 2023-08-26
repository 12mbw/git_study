#include "key.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"


void KEY_Init(void)
{
	nrf_gpio_cfg_input(11, NRF_GPIO_PIN_PULLUP);
	nrf_gpio_cfg_input(12, NRF_GPIO_PIN_PULLUP);
	nrf_gpio_cfg_input(24, NRF_GPIO_PIN_PULLUP);
	nrf_gpio_cfg_input(25, NRF_GPIO_PIN_PULLUP);
	
}

uint8_t KEY0_Down(void)
{
	if(nrf_gpio_pin_read(KEY_0) ==0)
	{
		nrf_delay_ms(20);
		if(nrf_gpio_pin_read(KEY_0) == 0)
		{
			while(nrf_gpio_pin_read(KEY_0) == 0);
			return 0;
		}
		else
			return 1;
	}
	else
		return 1;
}

uint8_t KEY1_Down(void)
{
	if(nrf_gpio_pin_read(KEY_1) ==0)
	{
		nrf_delay_ms(20);
		if(nrf_gpio_pin_read(KEY_1) == 0)
		{
			while(nrf_gpio_pin_read(KEY_1) == 0);
			return 0;
		}
		else
			return 1;
	}
	else
		return 1;
}

uint8_t KEY2_Down(void)
{
	if(nrf_gpio_pin_read(KEY_2) ==0)
	{
		nrf_delay_ms(20);
		if(nrf_gpio_pin_read(KEY_2) == 0)
		{
			while(nrf_gpio_pin_read(KEY_2) == 0);
			return 0;
		}
		else
			return 1;
	}
	else
		return 1;
}


uint8_t KEY3_Down(void)
{
	if(nrf_gpio_pin_read(KEY_3) ==0)
	{
		nrf_delay_ms(20);
		if(nrf_gpio_pin_read(KEY_3) == 0)
		{
			while(nrf_gpio_pin_read(KEY_3) == 0);
			return 0;
		}
		else
			return 1;
	}
	else
		return 1;
}

















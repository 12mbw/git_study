#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "..\..\drive\led.h"

int main(void)
{
	LED_Init();
	
	while(true)
	{
			LED0_Open();
			LED1_Close();
			nrf_delay_ms(500);
			LED0_Close();
			LED1_Open();
			nrf_delay_ms(500);
	}
}
















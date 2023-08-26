#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "..\..\drive\led.h"
#include "..\..\drive\key.h"
int main(void)
{
	KEY_Init();
	LED_Init();
	LED0_Close();
	LED1_Close();
	LED2_Close();
	while(true)
	{
		if(KEY0_Down() == 0)
		{
				LED0_Toggle();
		}

		if(KEY1_Down() == 0)
		{
				LED1_Toggle();
		}
		
	}
}
















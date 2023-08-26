#ifndef __KEY_H__
#define __KEY_H__

#include "nrf52840.h"

#define KEY_0   NRF_GPIO_PIN_MAP(0, 11)
#define KEY_1   NRF_GPIO_PIN_MAP(0, 12)
#define KEY_2   NRF_GPIO_PIN_MAP(0, 24)
#define KEY_3   NRF_GPIO_PIN_MAP(0, 25)

void KEY_Init(void);
uint8_t KEY0_Down(void);
uint8_t KEY1_Down(void);
uint8_t KEY2_Down(void);
uint8_t KEY2_Down(void);




#endif  //!__LED_H__



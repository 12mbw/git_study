#ifndef __LED_H__
#define __LED_H__

#include "nrf52840.h"

#define LED_0   NRF_GPIO_PIN_MAP(0, 13)
#define LED_1   NRF_GPIO_PIN_MAP(0, 14)
#define LED_2   NRF_GPIO_PIN_MAP(0, 15)


void LED_Init(void);

void LED0_Open(void);
void LED0_Close(void);

void LED1_Open(void);
void LED1_Close(void);

void LED2_Open(void);
void LED2_Close(void);

void LED0_Toggle(void);
void LED1_Toggle(void);
void LED2_Toggle(void);



#endif  //!__LED_H__



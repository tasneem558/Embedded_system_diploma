/*
 * keypad.h
 *
 *  Created on: Jun 18, 2024
 *      Author: tasneem
 */

#ifndef KEYPAD_DRIVER_KEYPAD_H_
#define KEYPAD_DRIVER_KEYPAD_H_

#include "stm32_f103x6.h"
#include "stm32_f103c6_GPIO_driver.h"

#define KEYPAD_PORT GPIOB

#define R0 GPIO_PIN_0
#define R1 GPIO_PIN_1
#define R2 GPIO_PIN_3
#define R3 GPIO_PIN_4
#define C0 GPIO_PIN_5
#define C1 GPIO_PIN_6
#define C2 GPIO_PIN_7
#define C3 GPIO_PIN_8

GPIO_PinConfig_t PinCfg;

void KEYBAD_INIT();
char KEYPAD_GETCHAR();


#endif /* KEYPAD_DRIVER_KEYPAD_H_ */

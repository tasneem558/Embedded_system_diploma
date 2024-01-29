/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
typedef volatile unsigned int vuint32_t;

#include <stdint.h>

#define RCC_Base 0x40021000
#define GPIO_Base 0x40010800
#define RCC_APB2ENR *(vuint32_t *)( RCC_Base + 0x18)
#define GPIO_CRH *(vuint32_t *)(GPIO_Base + 0x04)
#define GPIO_ODR *(vuint32_t *)(GPIO_Base + 0x0C)
extern void H_Fault_Handler()
{

}
typedef union{
	vuint32_t allfields;
	struct{
		vuint32_t reserved:13;
		vuint32_t pin_13:1;
	}pin;
}ODR_REG_t;

volatile ODR_REG_t* ODR_R = (volatile ODR_REG_t*)(GPIO_Base + 0x0C);
unsigned char bss_var[3];
int main(void)
{
	RCC_APB2ENR |=1<<2;
	GPIO_CRH &=0xff0fffff;
	GPIO_CRH |=0x00200000;
	while(1)
	{
		ODR_R->pin.pin_13=1;
		for(int i=0;i<50000;i++);
		ODR_R->pin.pin_13=0;
		for(int i=0;i<50000;i++);
	}
	return 0;
}

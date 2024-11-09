/*
 * blink.c
 *
 *  Created on: Oct 31, 2024
 *      Author: kanza
 */

#include "blink.h"

void blink_1s()
{
	if(timer_pure_flag == 1)
	{
		setTimerpure(500);
		timer_pure_flag = 0;
		HAL_GPIO_TogglePin(GPIOB,Led_Red_Blink_Pin);
	}
}


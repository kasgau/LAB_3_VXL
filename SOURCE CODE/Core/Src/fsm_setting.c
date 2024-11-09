/*
 * fsm_setting.c
 *
 *  Created on: Nov 1, 2024
 *      Author: kanza
 */

#include "fsm_setting.h"

void change_set_counter(uint8_t light) {
	if (is_button_pressed_and_released(1))
	{

		if (light_period_modify_buffer[light] == 99)
			light_period_modify_buffer[light] = 1;
		else
			light_period_modify_buffer[light]++;
		update_LED7_buffer_counter(light_period_modify_buffer[light]);
	}



	if (is_button_pressed_and_released(2))
	{
		lightPeriod[light] = light_period_modify_buffer[light];
	}
}

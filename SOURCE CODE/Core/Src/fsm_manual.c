/*
 * fsm_manual.c
 *
 *  Created on: Nov 1, 2024
 *      Author: kanza
 */
#include "fsm_manual.h"
#include "global.h"

enum Mode mode = DISPLAY;


void clear_all_light(void)
{
	HAL_GPIO_WritePin(GPIOA, Red_H_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Yellow_H_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Green_H_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Red_V_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Green_V_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Yellow_V_Pin, SET);
}

void blinkingLight(uint8_t light)
{
	if (timerBlink_flag == 1)
	{
		switch (light)
		{
		case Red:
			HAL_GPIO_TogglePin(GPIOA, Red_H_Pin);
			HAL_GPIO_TogglePin(GPIOA, Red_V_Pin);
			setTimerBlink(500);
			break;

		case Green:
			HAL_GPIO_TogglePin(GPIOA, Green_H_Pin);
			HAL_GPIO_TogglePin(GPIOA, Green_V_Pin);
			setTimerBlink(500);
			break;

		case Yellow:
			HAL_GPIO_TogglePin(GPIOA, Yellow_H_Pin);
			HAL_GPIO_TogglePin(GPIOA, Yellow_V_Pin);
			setTimerBlink(500);
			break;

		default:
			break;
		}
	}
}

void prepare_for_change_mode(int index)
{
	clear_all_light();
	for (int i = 0; i < No_OF_BUTTON; i++)
	{
		buttonIsPressedAndReleased[i] = 0;
	}
	light_period_modify_buffer[index] = lightPeriod[index];
	update_LED7_buffer_mode(index + 2); // display the mode
	update_LED7_buffer_counter(light_period_modify_buffer[index]);
}


void fsm_change_mode(void)
{
	update_7seg_led();
	  blink_1s();


	switch (mode)
	{
	case DISPLAY:
		if (is_button_pressed_and_released(0))
		{

			mode = Change_Red_counter;
			prepare_for_change_mode(Red);
		}
		else
		{
			displayTrafficLight();

		}
		break;

	case Change_Red_counter:
		if (is_button_pressed_and_released(0))
		{
			mode = Change_Yellow_counter;
			prepare_for_change_mode(Yellow);
		}
		else
		{
			blinkingLight(Red);
			change_set_counter(Red);
		}

		break;

	case Change_Yellow_counter:
		if (is_button_pressed_and_released(0))
		{
			mode = Change_Green_counter;
			prepare_for_change_mode(Green);
		}
		else
		{
			blinkingLight(Yellow);
			change_set_counter(Yellow);
		}

		break;

	case Change_Green_counter:
		if (is_button_pressed_and_released(0))
		{
			mode = DISPLAY;
			Reset_Display_new_stats();
		}
		else
		{
			blinkingLight(Green);
			change_set_counter(Green);
		}

		break;
	}
}

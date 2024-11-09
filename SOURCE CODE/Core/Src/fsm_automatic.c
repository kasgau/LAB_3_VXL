/*
 * fsm_automatic.c
 *
 *  Created on: Nov 1, 2024
 *      Author: kanza
 */

#include "fsm_automatic.h"

enum lightState lightStateHorizontal = Red;
enum lightState lightStateVertical = Green;


void Reset_Display_new_stats()
{

	lightStateHorizontal = Red;
	Red_counter_horizontal = lightPeriod[Red];
	Yellow_counter_horizontal = lightPeriod[Yellow];
	Green_counter_horizontal = lightPeriod[Green];

	lightStateVertical = Green;
	Red_counter_vertical = lightPeriod[Red];
	Yellow_counter_vertical = lightPeriod[Yellow];
	Green_counter_vertical = lightPeriod[Green];

	clear_all_light();


	timerTrafficHorizontal_flag = 1;
	timerTrafficVertical_flag = 1;

}

void displayTrafficLight()
{
	switch (lightStateHorizontal)
	{
	case Red:
		if (timerTrafficHorizontal_flag)
		{
			setRedH();

			update_LED7_buffer_counter(Red_counter_horizontal);
			Red_counter_horizontal--;

			if (Red_counter_horizontal < 0)
			{
				lightStateHorizontal = Green;
				Red_counter_horizontal = lightPeriod[Red];
			}
			else
			{
				setTimerTrafficHorizontal(LIGHT_DURATION);
			}
		}

		break;

	case Green:
		if (timerTrafficHorizontal_flag)
		{
			setGreenH();

			update_LED7_buffer_counter(Green_counter_horizontal);
			Green_counter_horizontal--;

			if (Green_counter_horizontal < 0)
			{
				lightStateHorizontal = Yellow;
				Green_counter_horizontal = lightPeriod[Green];
			}
			else
			{
				setTimerTrafficHorizontal(LIGHT_DURATION);
			}
		}

		break;

	case Yellow:
		if (timerTrafficHorizontal_flag)
		{
			setYellowH();

			update_LED7_buffer_counter(Yellow_counter_horizontal);
			Yellow_counter_horizontal--;

			if (Yellow_counter_horizontal < 0)
			{
				lightStateHorizontal = Red;
				Yellow_counter_horizontal = lightPeriod[Yellow];
			}
			else
			{
				setTimerTrafficHorizontal(LIGHT_DURATION);
			}
		}
		break;
	}

	switch (lightStateVertical)
	{
	case Red:
		if (timerTrafficVertical_flag)
		{
			setRedV();

			update_LED7_buffer_mode(Red_counter_vertical);
			Red_counter_vertical--;

			if (Red_counter_vertical < 0)
			{
				lightStateVertical = Green;
				Red_counter_vertical = lightPeriod[Red];
			}
			else
			{
				setTimerTrafficVertical(LIGHT_DURATION);
			}
		}

		break;

	case Green:
		if (timerTrafficVertical_flag)
		{
			setGreenV();

			update_LED7_buffer_mode(Green_counter_vertical);
			Green_counter_vertical--;

			if (Green_counter_vertical < 0)
			{
				lightStateVertical = Yellow;
				Green_counter_vertical = lightPeriod[Green];
			}
			else
			{
				setTimerTrafficVertical(LIGHT_DURATION);
			}
		}
		break;

	case Yellow:
		if (timerTrafficVertical_flag)
		{
			setYellowV();

			update_LED7_buffer_mode(Yellow_counter_vertical);
			Yellow_counter_vertical--;

			if (Yellow_counter_vertical < 0)
			{
				lightStateVertical = Red;
				Yellow_counter_vertical = lightPeriod[Yellow];
			}
			else
			{
				setTimerTrafficVertical(LIGHT_DURATION);
			}
		}
		break;
	}
}

/*
 * global.c
 *
 *  Created on: Nov 1, 2024
 *      Author: kanza
 */
#include "global.h"

int buttonIsPressedAndReleased[No_OF_BUTTON];

int light_period_modify_buffer[No_OF_LIGHTS] = { Red_5s, Yellow_2s, Green_3s };

int lightPeriod[No_OF_LIGHTS] = { Red_5s, Yellow_2s, Green_3s };

int Red_counter_horizontal = Red_5s;
int Yellow_counter_horizontal = Yellow_2s;
int Green_counter_horizontal = Green_3s;

int Red_counter_vertical = Red_5s;
int Yellow_counter_vertical = Yellow_2s;
int Green_counter_vertical = Green_3s;

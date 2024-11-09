/*
 * global.h
 *
 *  Created on: Oct 31, 2024
 *      Author: kanza
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include"main.h"
#include "input_reading.h"
#include "timer.h"
#include "Led7Segment.h"
#include "setTrafficLight.h"
#include "blink.h"
#include "input_processing.h"
#include "fsm_automatic.h"
#include "fsm_setting.h"
#include "fsm_manual.h"

#define No_OF_LIGHTS 3
#define No_OF_BUTTON 3
# define BUTTON_IS_PRESSED GPIO_PIN_RESET
# define BUTTON_IS_RELEASED GPIO_PIN_SET

#define LIGHT_DURATION 1000

#define Red_5s 5
#define Yellow_2s 2
#define Green_3s 3

enum Mode {DISPLAY, Change_Red_counter, Change_Yellow_counter, Change_Green_counter};


enum ButtonState {PRESSED, RELEASED};
enum lightState {Red, Yellow, Green};


extern int buttonIsPressedAndReleased[No_OF_BUTTON];

extern int light_period_modify_buffer[No_OF_LIGHTS];
extern int lightPeriod[No_OF_LIGHTS];

extern int Red_counter_horizontal;
extern int Yellow_counter_horizontal;
extern int Green_counter_horizontal;


extern int Red_counter_vertical;
extern int Yellow_counter_vertical;
extern int Green_counter_vertical;


#endif /* INC_GLOBAL_H_ */

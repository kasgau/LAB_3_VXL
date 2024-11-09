#include "main.h"
#include "input_reading.h"


int Tick = 10;

int timer_pure_counter = 0;
int timer_pure_flag = 1;



int timerTrafficHorizontal_counter = 0;
int timerTrafficHorizontal_flag = 1;

int timerTrafficVertical_counter = 0;
int timerTrafficVertical_flag = 1;

int timerBlink_counter = 0;
int timerBlink_flag = 1;

int timerLED7_counter = 0;
int timerLED7_flag = 1;

void setTimerpure(int duration)
{
	timer_pure_counter = duration / Tick;
	timer_pure_flag = 0;
}



void setTimerTrafficHorizontal(int duration)
{
	timerTrafficHorizontal_counter = duration / Tick;
	timerTrafficHorizontal_flag = 0;
}

void setTimerTrafficVertical(int duration)
{
	timerTrafficVertical_counter = duration / Tick;
	timerTrafficVertical_flag = 0;
}

void setTimerBlink(int duration) {
	timerBlink_counter = duration / Tick;
	timerBlink_flag = 0;
}

void setTimerLED7(int duration)
{
	timerLED7_counter = duration / Tick;
	timerLED7_flag = 0;
}

void timer_run()
{

	if(timer_pure_counter > 0)
	{
		timer_pure_counter--;
		if(timer_pure_counter == 0)
		{
			timer_pure_flag = 1;
		}
	}

	if (timerTrafficHorizontal_counter > 0)
	{
		timerTrafficHorizontal_counter--;
		if (timerTrafficHorizontal_counter == 0)
			timerTrafficHorizontal_flag = 1;
	}

	if (timerTrafficVertical_counter > 0)
	{
		timerTrafficVertical_counter--;
		if (timerTrafficVertical_counter == 0)
			timerTrafficVertical_flag = 1;
	}

	if (timerBlink_counter > 0)
	{
		timerBlink_counter--;
		if (timerBlink_counter == 0)
			timerBlink_flag = 1;
	}

	if (timerLED7_counter > 0)
	{
		timerLED7_counter--;
		if (timerLED7_counter == 0)
			timerLED7_flag = 1;
	}


}

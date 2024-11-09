#include "input_processing.h"
#include "global.h"





enum ButtonState buttonState[No_OF_BUTTON] = { RELEASED, RELEASED, RELEASED};





void fsm_for_button_processing(void)
{

	for (int index = 0; index < No_OF_BUTTON; index++)
	{
		switch (buttonState[index])
		{
		case RELEASED:

			if (is_button_pressed(index))
			{
				HAL_GPIO_WritePin(GPIOB, Button_Pressed_Pin, RESET);

				buttonState[index] = PRESSED;
			}
			break;

		case PRESSED:

			if (!is_button_pressed(index))
			{
				HAL_GPIO_WritePin(GPIOB, Button_Pressed_Pin, SET);

				buttonState[index] = RELEASED;
				buttonIsPressedAndReleased[index] = 1;
			}
			break;
		}

	}

}

int is_button_pressed_and_released(int index)
{

	if (buttonIsPressedAndReleased[index])
	{
		buttonIsPressedAndReleased[index] = 0;
		return 1;
	}
	else
		return 0;
}














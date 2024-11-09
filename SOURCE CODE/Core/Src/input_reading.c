#include "input_reading.h"




// the buffer that the final result is stored after debouncing
static GPIO_PinState buttonBuffer[No_OF_BUTTON]= {1,1,1}; ;

// we define two buffers for debouncing
static GPIO_PinState debounceButtonBuffer1[No_OF_BUTTON]= {1,1,1};
static GPIO_PinState debounceButtonBuffer2[No_OF_BUTTON]= {1,1,1};;

void getKeyInput(void) {
	for (int i = 0; i < No_OF_BUTTON; i++) {
		debounceButtonBuffer2[i] = debounceButtonBuffer1[i];
		debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_8 << i);
		if (debounceButtonBuffer1[i] == debounceButtonBuffer2[i]) {
			buttonBuffer[i] = debounceButtonBuffer1[i];
		}
	}
}

//Checking a button is pressed or not
unsigned char is_button_pressed(uint8_t index) {
	if (index >= No_OF_BUTTON)
		return 0;
	return ( buttonBuffer [ index ] == BUTTON_IS_PRESSED );
}

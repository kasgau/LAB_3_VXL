
#ifndef INC_LED7SEGMENT_H_
#define INC_LED7SEGMENT_H_

#include "global.h"

void update_7seg_led();
void update_LED7_buffer_mode(int num);
void update_LED7_buffer_counter(int num);
void display7SEG(int num);

extern int LED7_buffer[];
extern int LED7_index;

#endif /* INC_LED7SEGMENT_H_ */

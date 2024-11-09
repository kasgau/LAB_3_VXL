#include "Led7Segment.h"


// Number of led 7 segment

// Total frequency for display {No_OF_LED_7_SEGMENT} led 7 segment
#define FREQUENCY_OF_4_LED7 100




int led_buffer[] = { 0, 0, 0, 0 };
int index_led = 0;


void display7SEG(int index)
{
	switch(index)
   	{

   	    case 0:
   	      if(index_led >= 0 && index_led <= 3)
   	      {
   	    	switch(led_buffer[index_led])
   	    	{
   	    	    case 0:
   	    	    	 HAL_GPIO_WritePin(GPIOB, EN0_Pin, RESET);
   	    	    	 HAL_GPIO_WritePin(GPIOB, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	 HAL_GPIO_WritePin(GPIOB, SEG_6_Pin, SET);
   	    	    	 HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin , RESET);
   	    	         break;
   	    	    case 1:
   	    	    	 HAL_GPIO_WritePin(GPIOB, EN0_Pin, RESET);
   	    	    	 HAL_GPIO_WritePin(GPIOB, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	 HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   	    	    	 HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_2_Pin, RESET);
   	    	    	 break;
   	    	    case 2:
   	    	    	HAL_GPIO_WritePin(GPIOB, EN0_Pin, RESET);
   	    	        HAL_GPIO_WritePin(GPIOB, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_2_Pin | SEG_5_Pin , SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_3_Pin | SEG_4_Pin | SEG_6_Pin, RESET);
   	    	        break;
   	    	    case 3:
   	    	    	HAL_GPIO_WritePin(GPIOB, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOB, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_4_Pin | SEG_5_Pin , SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_2_Pin | SEG_3_Pin | SEG_6_Pin, RESET);
   	    	    	break;
   	    	    case 4:
   	    	    	HAL_GPIO_WritePin(GPIOB, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOB, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin |SEG_2_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    	    	break;
   	    	    case 5:
   	    	    	HAL_GPIO_WritePin(GPIOB, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOB, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_4_Pin , SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    	        break;
   	    	    case 6:
   	    	    	HAL_GPIO_WritePin(GPIOB, EN0_Pin, RESET);
   	    	        HAL_GPIO_WritePin(GPIOB, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_1_Pin , SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    	        break;
   	    	    case 7:
   	    	    	HAL_GPIO_WritePin(GPIOB, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOB, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin, RESET);
   	    	        break;
   	    	    case 8:
   	    	    	HAL_GPIO_WritePin(GPIOB, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOB, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   	    	        break;
   	    	    case 9:
   	    	    	HAL_GPIO_WritePin(GPIOB, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOB, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_4_Pin, SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   	    	    	break;
                   default:
                   	break;
   	    	}
   	    	index_led = 1;
   	      }
   	      break;
   	    case 1:
   	       if(index_led >= 0 && index_led <= 3)
   	       {
   	    	  switch(led_buffer[index_led])
   	    	  {
   	    	    case 0:
   	    		    HAL_GPIO_WritePin(GPIOB, EN1_Pin, RESET);
   	    		    HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_6_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin , RESET);
   	    		    break;
   	    		case 1:
   	    			HAL_GPIO_WritePin(GPIOB, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_2_Pin, RESET);
   	    		    break;
   	    		case 2:
   					HAL_GPIO_WritePin(GPIOB, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_2_Pin | SEG_5_Pin , SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_3_Pin | SEG_4_Pin | SEG_6_Pin, RESET);
   	    		    break;
   	    		case 3:
   	    			HAL_GPIO_WritePin(GPIOB, EN1_Pin, RESET);
   				    HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_4_Pin | SEG_5_Pin , SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_2_Pin | SEG_3_Pin | SEG_6_Pin, RESET);
   	    		    break;
   	    		case 4:
   	    			HAL_GPIO_WritePin(GPIOB, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin |SEG_2_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    		    break;
   	    		case 5:
   	    			HAL_GPIO_WritePin(GPIOB, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_4_Pin , SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    		    break;
   				case 6:
   					HAL_GPIO_WritePin(GPIOB, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    		    break;
   				case 7:
   					HAL_GPIO_WritePin(GPIOB, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin, RESET);
   					break;
   				case 8:
   					HAL_GPIO_WritePin(GPIOB, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				case 9:
   					HAL_GPIO_WritePin(GPIOB, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_4_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				default:
   					break;
   			}
   	    	  index_led = 2;
   		  }
   	       break;
   	    case 2:
   		   if(index_led >= 0 && index_led <= 3)
   		   {
   			  switch(led_buffer[index_led])
   			  {
   				case 0:
   					HAL_GPIO_WritePin(GPIOB, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin , RESET);
   					break;
   				case 1:
   					HAL_GPIO_WritePin(GPIOB, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_2_Pin, RESET);
   					break;
   				case 2:
   					HAL_GPIO_WritePin(GPIOB, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_2_Pin | SEG_5_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_3_Pin | SEG_4_Pin | SEG_6_Pin, RESET);
   					break;
   				case 3:
   					HAL_GPIO_WritePin(GPIOB, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_4_Pin | SEG_5_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_2_Pin | SEG_3_Pin | SEG_6_Pin, RESET);
   					break;
   				case 4:
   					HAL_GPIO_WritePin(GPIOB, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin |SEG_2_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 5:
   					HAL_GPIO_WritePin(GPIOB, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 6:
   					HAL_GPIO_WritePin(GPIOB, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 7:
   					HAL_GPIO_WritePin(GPIOB, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin, RESET);
   					break;
   				case 8:
   					HAL_GPIO_WritePin(GPIOB, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				case 9:
   					HAL_GPIO_WritePin(GPIOB, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_4_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				default:
   					break;
   			}
   			  index_led = 3;
   		  }
   		   break;
   	    case 3:
   	    	if(index_led >= 0 && index_led <= 3)
   		   {
   			  switch(led_buffer[index_led])
   			  {
   				case 0:
   					HAL_GPIO_WritePin(GPIOB, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin , RESET);
   					break;
   				case 1:
   					HAL_GPIO_WritePin(GPIOB, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_2_Pin, RESET);
   					break;
   				case 2:
   					HAL_GPIO_WritePin(GPIOB, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_2_Pin | SEG_5_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_3_Pin | SEG_4_Pin | SEG_6_Pin, RESET);
   					break;
   				case 3:
   					HAL_GPIO_WritePin(GPIOB, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_4_Pin | SEG_5_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_2_Pin | SEG_3_Pin | SEG_6_Pin, RESET);
   					break;
   				case 4:
   					HAL_GPIO_WritePin(GPIOB, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin |SEG_2_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 5:
   					HAL_GPIO_WritePin(GPIOB, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 6:
   					HAL_GPIO_WritePin(GPIOB, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 7:
   					HAL_GPIO_WritePin(GPIOB, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin, RESET);
   					break;
   				case 8:
   					HAL_GPIO_WritePin(GPIOB, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				case 9:
   					HAL_GPIO_WritePin(GPIOB, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOB, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_4_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				default:
   					break;
   			}
   			  index_led = 0;
   		  }
   	    default:
   			break;
          }

}


void update_LED7_buffer_mode(int num)
{
	led_buffer[0] = num / 10;
	led_buffer[1] = num % 10;
}
void update_LED7_buffer_counter(int num)
{
	led_buffer[2] = num / 10;
	led_buffer[3] = num % 10;
}

void update_7seg_led()
{
	if (timerLED7_flag)
	{

		HAL_GPIO_WritePin(GPIOB, EN0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, EN1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, EN2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, EN3_Pin, SET);

		display7SEG(index_led);
		setTimerLED7(FREQUENCY_OF_4_LED7 );
	}

}

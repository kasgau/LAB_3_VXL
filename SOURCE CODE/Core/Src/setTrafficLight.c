/*
 * setTrafficLight.c
 *
 *  Created on: Oct 31, 2024
 *      Author: kanza
 */
#include "setTrafficLight.h"

void setRedH()
{
	HAL_GPIO_WritePin(GPIOA, Red_H_Pin, RESET);
	HAL_GPIO_WritePin(GPIOA, Yellow_H_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Green_H_Pin, SET);
}

void setYellowH()
{
	HAL_GPIO_WritePin(GPIOA, Red_H_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Green_H_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Yellow_H_Pin, RESET);
}


void setGreenH()
{
	HAL_GPIO_WritePin(GPIOA, Red_H_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Green_H_Pin, RESET);
	HAL_GPIO_WritePin(GPIOA, Yellow_H_Pin, SET);
}

void setRedV()
{
	HAL_GPIO_WritePin(GPIOA, Red_V_Pin, RESET);
	HAL_GPIO_WritePin(GPIOA, Yellow_V_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Green_V_Pin, SET);
}

void setYellowV()
{
	HAL_GPIO_WritePin(GPIOA, Red_V_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Green_V_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Yellow_V_Pin, RESET);
}


void setGreenV()
{
	HAL_GPIO_WritePin(GPIOA, Red_V_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Green_V_Pin, RESET);
	HAL_GPIO_WritePin(GPIOA, Yellow_V_Pin, SET);
}

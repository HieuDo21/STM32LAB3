/*
 * display.c
 *
 *  Created on: Nov 13, 2023
 *      Author: HIEU
 */
#include "display.h"
#include "main.h"
unsigned char NUM[] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
void display7SEG (int number){
	GPIOB -> ODR = NUM[number];
}

/*
 * button.h
 *
 *  Created on: Oct 5, 2023
 *      Author: KAI
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"
#define NORMAL_STATE SET
#define PRESSED_STATE RESET
#define N0_OF_BUTTONS 				       3
extern int button1_flag[N0_OF_BUTTONS];
int isButtonPressed(int index);
void getKeyInput();
unsigned char is_button_pressed1(uint8_t index);
#endif /* INC_BUTTON_H_ */


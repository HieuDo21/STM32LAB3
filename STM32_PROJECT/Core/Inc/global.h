/*
 * global.h
 *
 *  Created on: 13 Nov 2023
 *      Author: HIEU
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#define No_timers 3
extern int timer_flag[No_timers];
extern int timer_counter[No_timers];
extern int status;
#include "main.h"
#include "software_timer.h"
#include "input_processing.h"
#include "input_reading.h"
#include "display.h"
#include "FsmTrafficLight.h"
#include "button.h"
#endif /* INC_GLOBAL_H_ */

/*
 * software_timer.h
 *
 *  Created on: 13 Nov 2023
 *      Author: HIEU
 */
#include "global.h"

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
extern int timer_flag[No_timers];
extern int timer_counter[No_timers];
void setTimer (int duration, int index);
void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */

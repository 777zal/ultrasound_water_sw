/*
 * state.h
 *
 *  Created on: Nov 6, 2024
 *      Author: jal
 */

#ifndef INC_STATE_H_
#define INC_STATE_H_

#include "stdbool.h"


#define TRIGGER_DURATION 10

typedef enum STATE {
	IDLE,
	TRIGGER,
	WAIT,
	ECHO,
	COMPUTE,
	ACTION
} state_t;

typedef enum TRIGGER_STATE {
	TRIGGER_ON 	= 0x00,
	TRIGGER_OFF = 0x01,
} trigger_state_t;

typedef struct FLAG {
	bool flag_start;
} state_flag_t;

void sr04_set_io(void);
void sr04_set_timer(void);
void sr04_timer_start(void);
void sr04_timer_stop(void);
int  sr04_get_count_in_ms(void);
void sr04_clear_count(void);
void sr04_set_trigger(int level);
int	 sr04_get_echo_state(void);
int	 sr04_get_range_in_meters(int count);

#endif /* INC_STATE_H_ */

#ifndef __motor_h
#define __motor_h

#include "main.h"

void setPWM(TIM_HandleTypeDef *timer, uint32_t channel, uint16_t period, uint16_t pulse);

#endif __motor_h
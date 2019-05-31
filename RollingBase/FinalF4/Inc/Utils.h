#ifndef UTILS_H
#define UTILS_H

#include "stm32f4xx_hal.h"

int CheckField(GPIO_TypeDef* fieldGpio, uint16_t fieldPin);

void WaitCordPull(GPIO_TypeDef* cordGpio, uint16_t cordPin);

#endif
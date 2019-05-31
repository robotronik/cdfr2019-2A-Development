#include "Utils.h"

int CheckField(GPIO_TypeDef* fieldGpio, uint16_t fieldPin)
{
    return HAL_GPIO_ReadPin(fieldGpio, fieldPin);
}

void WaitCordPull(GPIO_TypeDef* cordGpio, uint16_t cordPin)
{
    while (HAL_GPIO_ReadPin(cordGpio,cordPin))
    {
        asm("NOP");
    }
}
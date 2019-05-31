#include "Deplacement.h"

static void TofDetection();

static void TofDetection()
{
    uint8_t tofDetection = 0;
    while(HAL_UART_Receive(&huart1, &tofDetection, 1, 200) && tofDetection)
    {
        asm("NOP");
    }
    return 1;
}

int Avancer(float distance, Odometry odometry)
{
    float gap = distance;
    while (gap > EPSILON)
    {
        TofDetection();
    }
    return 1;
}

int Tourner(float angle, Odometry odometry)
{
    float gap = angle;
    while (gap > EPSILON)
    {
        
    }
    return 1;
}
#ifndef DEPLACEMENT_H
#define DEPLACEMENT_H

#include "usart.h"
#include "odometry.h"

#define EPSILON 0.1f

int Avancer(float distance, Odometry odometry);

int Tourner(float angle, Odometry odometry);

#endif
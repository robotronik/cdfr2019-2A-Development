/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TIM2_CH1_Pin GPIO_PIN_0
#define TIM2_CH1_GPIO_Port GPIOA
#define TIM2_CH2_Pin GPIO_PIN_1
#define TIM2_CH2_GPIO_Port GPIOA
#define EN_R_Pin GPIO_PIN_6
#define EN_R_GPIO_Port GPIOA
#define NBRAKE_R_Pin GPIO_PIN_7
#define NBRAKE_R_GPIO_Port GPIOA
#define DIR_R_Pin GPIO_PIN_0
#define DIR_R_GPIO_Port GPIOB
#define DIAG_R_Pin GPIO_PIN_1
#define DIAG_R_GPIO_Port GPIOB
#define TIM1_CH1_Pin GPIO_PIN_8
#define TIM1_CH1_GPIO_Port GPIOA
#define TIM1_CH2_Pin GPIO_PIN_9
#define TIM1_CH2_GPIO_Port GPIOA
#define TACHO_R_Pin GPIO_PIN_10
#define TACHO_R_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_11
#define LED_GPIO_Port GPIOA
#define TACHO_L_Pin GPIO_PIN_12
#define TACHO_L_GPIO_Port GPIOA
#define DIAG_L_Pin GPIO_PIN_15
#define DIAG_L_GPIO_Port GPIOA
#define DIR_L_Pin GPIO_PIN_3
#define DIR_L_GPIO_Port GPIOB
#define NBRAKE_L_Pin GPIO_PIN_4
#define NBRAKE_L_GPIO_Port GPIOB
#define EN_L_Pin GPIO_PIN_5
#define EN_L_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

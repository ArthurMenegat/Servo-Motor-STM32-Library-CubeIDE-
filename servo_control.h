/*
 * servo_control.h
 *******************************************************************************
 * @file           : servo_control.h
 * @brief          : Library functions declarations
 *******************************************************************************
 * Created on: 12 de jan. de 2026
 * Author: Arto
 *******************************************************************************
 */

#ifndef INC_SERVO_CONTROL_H_
#define INC_SERVO_CONTROL_H_

/* user includes */
#include "main.h"
/* end of user includes */

typedef struct
{
	TIM_HandleTypeDef *htim; /*pointer to timer X (this way, the user can use any timer)*/
	uint32_t channel; /*timer channel*/
} Servo_handler_t;

/* Servo initializer function. Params: Servo object name, timer, timer channel */
void Servo_Config(Servo_handler_t *hservo, TIM_HandleTypeDef *htim, uint32_t channel);

/* Servo angle function. Params: servo object name, 8 bits int value (angle) */
void Servo_SetAngle(Servo_handler_t *hservo, uint8_t angle);

#endif /* INC_SERVO_CONTROL_H_ */

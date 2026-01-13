/*
 * servo_control.c
 *******************************************************************************
 * @file           : servo_control.c
 * @brief          : Library source code
 *******************************************************************************
 * Created on: 12 de jan. de 2026
 * Author: Arto
 *******************************************************************************
 */

/* user includes */
#include "servo_control.h"
/* end of user includes */

static uint32_t map_angle_to_pulse(uint8_t angle)
{
	if(angle > 180)
	{
		angle = 180;
	}
	return 1000 + ((angle * 1000) / 180);
}

void Servo_Config(Servo_handler_t *hservo, TIM_HandleTypeDef *htim, uint32_t channel)
{
	hservo -> htim = htim;
	hservo -> channel = channel;

	HAL_TIM_PWM_Start(hservo -> htim, hservo -> channel);
}

void Servo_SetAngle(Servo_handler_t *hservo, uint8_t angle)
{
	uint32_t pulse_length = map_angle_to_pulse(angle);

	__HAL_TIM_SET_COMPARE(hservo -> htim, hservo -> channel, pulse_length);
}

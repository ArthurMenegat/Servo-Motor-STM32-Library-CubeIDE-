# Servo-Motor-STM32-Library-CubeIDE-
My first library for the STM32 microcontroller using the CubeIDE in C language. The library is for controlling any simple 180° micro servo motor. It may function in various models of STM32 microcontrollers. 

Library functions:

* Library name: "servo_control.h".
* Servo configuration function (called in main.c): Servo_Config(&param1, &param2, param3).
  * param1: Servo object name of your choice.
  * param2: Timer of your choice.
  * param3: timer channel of your choice.
* Servo angle set: Servo_SetAngle(&param1, param2).
  * param1: Servo object name.
  * param2 Desired angle.

/*! @file bsp.cpp
 *  @version 3.1.7
 *  @date Jul 01 2016
 *
 *  @brief
 *  Helper functions for board STM32F4Discovery
 *
 *  Copyright 2016 DJI. All right reserved.
 *
 * */

#include "bsp.h"
#include "main.h"

void BSPinit()
{
  UsartConfig();
  SystickConfig();
  Timer1Config();
  Timer2Config();
}

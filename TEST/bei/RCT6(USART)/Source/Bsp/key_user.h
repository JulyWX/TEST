#ifndef __KEY_USER_H
#define __KEY_USER_H

#include "gpio.h"
#include "main.h"


#define KEY0   HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_12)//读取按键0
#define KEY1   HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_13)//读取按键1
#define KEY2   HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_14)//读取按键2 
#define WK_UP   HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)//读取按键3(WK_UP) 

 

#define KEY0_PRES 	1	//KEY0按下
#define KEY1_PRES	2	//KEY1按下
#define KEY2_PRES	3	//KEY2按下
#define WKUP_PRES   4	//KEY_UP按下(即WK_UP/KEY_UP)



uint8_t KEY_Scan(uint8_t);  	//按键扫描函数	

#endif 


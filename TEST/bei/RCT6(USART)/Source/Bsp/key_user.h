#ifndef __KEY_USER_H
#define __KEY_USER_H

#include "gpio.h"
#include "main.h"


#define KEY0   HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_12)//��ȡ����0
#define KEY1   HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_13)//��ȡ����1
#define KEY2   HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_14)//��ȡ����2 
#define WK_UP   HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)//��ȡ����3(WK_UP) 

 

#define KEY0_PRES 	1	//KEY0����
#define KEY1_PRES	2	//KEY1����
#define KEY2_PRES	3	//KEY2����
#define WKUP_PRES   4	//KEY_UP����(��WK_UP/KEY_UP)



uint8_t KEY_Scan(uint8_t);  	//����ɨ�躯��	

#endif 


#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "string.h"
#include "OLED.h"
#include "Engine.h"
#include "Encoder.h"
#include "Control.h"
#include "BiueTooth.h"

int main(void)
{
	OLED_Init();
	Engine_Init();
	Encode_Init();
	BlueTooth_Init();
	
//	OLED_BMP(4);
//	Control_ForWard();
//	Control_SetAngle(90,90,90,90);

	OLED_ShowString(1,7,"DOG");
	
	while(1)
	{
		uint16_t RxData;
		RxData=Get_RXData();
		if(Serial_RxFlag==1)
		{	
			if (RxData == 1)
			{
				Control_ForWard();
			}
			if (RxData == 2)
			{
				Control_BackWard();
			}
			if (RxData == 3)
			{
				Control_Left();
			}
			if (RxData == 4)
			{
				Control_Right();
			}
			if (RxData == 5)
			{
				Control_Hand();
			}
			if (RxData == 6)
			{
				Control_Dance();
			}
			if (RxData == 7)
			{
				Control_StandUP();
			}
			if (RxData == 8)
			{
				Control_StandDOWN();
			}
			Serial_RxFlag = 0;
		}	
	}
}

#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Engine.h"
#include "Encoder.h"

uint8_t StandFlag=0;//默认蹲下

void Control_SetAngle(uint8_t LF,uint8_t LB,uint8_t RF,uint8_t RB)
{
		Engine_SetAngle1(LF);
		Engine_SetAngle2(LB);
		Engine_SetAngle3(RF);
		Engine_SetAngle4(RB);
}

void Control_StandUP(void)
{
//	if(StandFlag==0)
//	{
//		Control_SetAngle(90,90,90,90);
//		StandFlag=1;
//	}
	Control_SetAngle(90,90,90,90);

}

void Control_StandDOWN(void)
{
//	if(StandFlag==1)
//	{
//		Control_SetAngle(0,0,0,0);
//		StandFlag=0;
//	}
	Control_SetAngle(0,0,0,0);

}

void Control_ForWard(void)
{
	Control_SetAngle(90,50,130,90);
	Delay_ms(100);
	Control_SetAngle(130,50,130,50);
	Delay_ms(100);
	Control_SetAngle(130,50,90,50);
	Delay_ms(100);
	Control_SetAngle(90,90,90,90);
	Delay_ms(100);
	Control_SetAngle(50,90,90,130);
	Delay_ms(100);
	Control_SetAngle(50,130,50,130);
	Delay_ms(100);
	Control_SetAngle(90,130,50,90);
	Delay_ms(100);
	Control_SetAngle(90,90,90,90);
	Delay_ms(100);
}

void Control_BackWard(void)
{
	Control_SetAngle(90,130,50,90);
	Delay_ms(100);
	Control_SetAngle(50,130,50,130);
	Delay_ms(100);
	Control_SetAngle(50,90,90,130);
	Delay_ms(100);
	Control_SetAngle(90,90,90,90);
	Delay_ms(100);
	Control_SetAngle(130,50,90,50);
	Delay_ms(100);
	Control_SetAngle(130,50,130,50);
	Delay_ms(100);
	Control_SetAngle(90,50,130,90);
	Delay_ms(100);
	Control_SetAngle(90,90,90,90);
	Delay_ms(100);
}

void Control_Left(void)
{
	Control_SetAngle(130,90,90,130);
	Delay_ms(100);
	Control_SetAngle(130,50,130,50);
	Delay_ms(100);
	Control_SetAngle(90,50,50,90);
	Delay_ms(100);
	Control_SetAngle(90,90,90,90);
	Delay_ms(100);
}

void Control_Right(void)
{
	Control_SetAngle(90,50,50,90);
	Delay_ms(100);
	Control_SetAngle(130,50,130,50);
	Delay_ms(100);
	Control_SetAngle(130,90,90,130);
	Delay_ms(100);
	Control_SetAngle(90,90,90,90);
	Delay_ms(100);
}

void Control_Hand(void)
{
	Control_SetAngle(90,90,110,90);
	Delay_ms(100);
	Control_SetAngle(90,90,145,90);
	Delay_ms(100);
	Control_SetAngle(90,90,180,90);
	Delay_ms(100);
	Control_SetAngle(90,90,145,90);
	Delay_ms(100);
	Control_SetAngle(90,90,90,90);
	Delay_ms(100);
}

void Control_Dance(void)
{
	Control_SetAngle(30,30,150,150);
	Delay_ms(100);
	Control_SetAngle(90,90,90,90);
	Delay_ms(100);
	Control_SetAngle(150,150,30,30);
	Delay_ms(100);
	Control_SetAngle(90,90,90,90);
	Delay_ms(100);
}

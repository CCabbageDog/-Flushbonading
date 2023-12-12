#include "stm32f10x.h"                  // Device header
#include "PWM.h"
#include "Delay.h"

void Engine_Init(void)
{
	PWM_Init();
}

void Engine_SetAngle1(uint8_t Angle)
{
	SetCompare1((100/9)*Angle+500);
}

void Engine_SetAngle2(uint8_t Angle)
{
	SetCompare2((100/9)*Angle+500);
}

void Engine_SetAngle3(uint8_t Angle)
{
	SetCompare3((100/9)*Angle+500);
}

void Engine_SetAngle4(uint8_t Angle)
{
	SetCompare4((100/9)*Angle+500);
}

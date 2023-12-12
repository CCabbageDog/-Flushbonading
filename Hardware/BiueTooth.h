#ifndef __BLUETOOTH_H
#define __BLUETOOTH_H

extern char Serial_RxPacket[];
extern uint8_t Serial_RxFlag;

void BlueTooth_Init(void);
void Serial_SendByte(uint8_t Byte);
void Serial_SendArray(uint8_t *Array,uint8_t Length);
void SendMessage(char *String);
uint16_t Get_RXData(void);

#endif

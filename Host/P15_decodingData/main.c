/*
 * main.c
 *
 *  Created on: Aug 27, 2025
 *      Author: NIKHIL
 */

// program to decode a given 32 bit packet information and print the value of different field.
/*

 	 *) CRC: 2
 	 *) Status : 1
 	 *) Payload: 12
 	 *) Bat: 3
 	 *) Sensor: 3
 	 *) long Address: 8
 	 *) short Address: 2
 	 *) Address mode: 1

 */

#include<stdio.h>
#include<stdint.h>


typedef struct{
	uint32_t crc : 2;
	/*
	 	 this is consuming 8 bit but data is of only 2 bit so rest of 6 bit goes wasted so we use
		 bit field to use rest of memory and occupy only required space to initalize we need to use
		 uint32_t varName: bit ;

	*/
	uint32_t status: 1;
	uint32_t payload : 12;
	uint32_t bat : 3;
	uint32_t sensor : 3;
	uint32_t longAdd : 8;
	uint32_t shortAdd : 2;
	uint32_t addMode : 1;
}Packet;

// previously this structure was 10 bytes but after using this it only consumes 4 bytes of memory

int main(){

	uint32_t packetValue;
	printf("Enter the 32bit packet value: ");
	scanf("%X", &packetValue);

	Packet packet;
	packet.crc = (uint8_t)(packetValue & 0x3);
	packet.status = (uint8_t)(packetValue >> 2) & 0x1 ;
	packet.payload = (uint8_t)(packetValue >> 3) & 0xFFF;
	packet.bat = (uint8_t)(packetValue >> 15) & 0x7;
	packet.sensor = (uint8_t)(packetValue >> 18) & 0x7;
	packet.longAdd = (uint8_t)(packetValue >> 21) & 0xFF;
	packet.shortAdd = (uint8_t)(packetValue >> 29) & 0x3;
	packet.addMode = (uint8_t)(packetValue >>31) & 0x1;

	printf("CRC : %#X \n",packet.crc);
	printf("Status : %#X \n",packet.status);
	printf("Payload : %#X \n",packet.payload);
	printf("Bat : %#X \n",packet.bat);
	printf("Sensor : %#X \n",packet.sensor);
	printf("Long Address : %#X \n",packet.longAdd);
	printf("Short Address : %#X \n",packet.shortAdd);
	printf("Address Mode : %#X \n",packet.addMode);

	printf("Total size of structure: %u", sizeof(Packet));

	getchar();
	getchar();

	return 0;
}

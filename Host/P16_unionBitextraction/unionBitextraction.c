/*
 * unionBitextraction.c
 *
 *  Created on: Aug 27, 2025
 *      Author: NIKHIL
 */

#include<stdio.h>
#include<stdint.h>

union Packet{
	uint32_t packetValue;
	struct{
		uint32_t crc : 2;
		uint32_t status: 1;
		uint32_t payload : 12;
		uint32_t bat : 3;
		uint32_t sensor : 3;
		uint32_t longAdd : 8;
		uint32_t shortAdd : 2;
		uint32_t addMode : 1;
	}packetFields;
};


int main(){

	union Packet packet;
	printf("Enter the 32bit packet value: ");
	scanf("%X", &packet.packetValue);


	printf("CRC : %#X \n",packet.packetFields.crc);
	printf("Status : %#X \n",packet.packetFields.status);
	printf("Payload : %#X \n",packet.packetFields.payload);
	printf("Bat : %#X \n",packet.packetFields.bat);
	printf("Sensor : %#X \n",packet.packetFields.sensor);
	printf("Long Address : %#X \n",packet.packetFields.longAdd);
	printf("Short Address : %#X \n",packet.packetFields.shortAdd);
	printf("Address Mode : %#X \n",packet.packetFields.addMode);

	printf("Total size of union: %u", sizeof(union Packet));

	getchar();
	getchar();

	return 0;
}

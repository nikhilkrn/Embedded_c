/*
 * main.c
 *
 *  Created on: Aug 26, 2025
 *      Author: NIKHIL
 */


#include<stdio.h>
#include<stdint.h>

typedef struct {
	char charData;
	int intData;
	char charData2;
	short shortData;
}DataSet; // __attribute__((packed)) => used for packed or non padded data storage

int main(){

	DataSet data;
	data.charData = 0xF1;
	data.intData = 0xFFFFEEEE;
	data.charData2 = 0x22;
	data.shortData = 0xABCD;

	uint8_t *ptr = (uint8_t*)&data;

	uint32_t totalSize = sizeof(DataSet);
	printf("Memory Address \t\t Data\n");

	for(uint16_t i = 0; i < totalSize;i++){
		printf("%p \t\t %X\n",ptr,*ptr);
		ptr++;
	}
	printf("Total Memory consumed: %u",totalSize);

	return 0;
}

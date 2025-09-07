/*
 * main.c
 *
 *  Created on: Aug 26, 2025
 *      Author: NIKHIL
 */

// given a base address of a and asked to change the data of member element

#include<stdio.h>
#include<stdint.h>


typedef struct {
	char charData;
	int intData;
	char charData2;
	short shortData;
}DataSet;

void displayMemberElement(DataSet *pData);

int main(){

	DataSet data;
	data.charData = 0xF1;
	data.intData = 0xFFFFEEEE;
	data.charData2 = 0x22;
	data.shortData = 0xABCD;

	uint8_t *ptr = (uint8_t*)&data;
	*ptr = 0xF3;

	displayMemberElement(&data);
//	DataSet *pData;
//	pData = &data;
//	pData->charData2 = 0xF3;

	return 0;
}


void displayMemberElement(DataSet *pData){
		printf("Char Data: %X\n",pData->charData);
		printf("Char2 Data: %X\n",pData->charData2);
		printf("Int Data: %X\n",pData->intData);
		printf("Short Data: %X\n",pData->shortData);

}

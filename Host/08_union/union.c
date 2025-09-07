/*
 * union.c
 *
 *  Created on: Aug 27, 2025
 *      Author: NIKHIL
 */

#include<stdio.h>
#include<stdint.h>

union Address{
	uint16_t shortAdd;
	uint32_t longAdd;	// this will be the size of union since it is the largest among all data type
};

int main(){

	union Address addr;

	addr.shortAdd = 0x1A1A;
	addr.longAdd = 0xFFFFEEEE;   	// this will overwrite the shortAdd data , if we move this upward and shortAdd downward then the lower 16 bit of longAdd will be
									// overwritten by the value of shortAdd

	printf("Long Address: %X \n",addr.longAdd);
	printf("Short Address: %X \n",addr.shortAdd);


	return 0;
}

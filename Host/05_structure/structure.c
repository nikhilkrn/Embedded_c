/*
 * structure.c
 *
 *  Created on: Aug 26, 2025
 *      Author: NIKHIL
 */

#include<stdio.h>
#include<stdint.h>

struct carModel{
	uint32_t carNumber;  // 32 bit
	uint32_t carPrice;	 // 32 bit
	uint16_t carMaxSpeed;	//16 bit
	float carWeight;	 // 32 bit
};  // total is 112 bit ==>> 14 bytes (112/8) bytes

int main(){

	// c89 method of declaring structure => there is one to one mapping for data and variable of structure , order of variable is important
	struct carModel carBmw = {2021,15000,220,1330};
	struct carModel carSplendor = {8686, 269696,486, 500};

	// c99 method of declaring structure ==> order is not that important , just use .and variable name and data to initialize
	struct carModel carHonda= {.carWeight = 1250.69, .carMaxSpeed = 130, .carPrice = 50000, .carNumber = 1415};

	// printing the data of structure

	printf("carnumber of BMW : %u \n", carBmw.carNumber);
	printf("carnumber of Splendor : %u\n", carSplendor.carNumber);
	printf("carnumber of Honda : %u\n", carHonda.carNumber);

	// assigning a different number to a car value
	carHonda.carNumber = 1316;
	printf("carnumber of Honda : %u\n", carHonda.carNumber);

	// size of Structure
	printf("Size of structure : %zu",sizeof(struct carModel)); // will give 16 byte supposed to be 14 bytes
	return 0;
}

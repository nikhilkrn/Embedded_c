/*
 * understanding_pointer.c
 *
 *  Created on: Aug 18, 2025
 *      Author: NIKHIL
 */


#include<stdio.h>

long long int data = 0xFFFFEEEE11223345;

int main(){

	char *pData = (char*)&data;
	printf("Value at address %p : %x\n",pData,*pData); // gives 1 byte of data only

	short *pData2 = (short*)&data;
	printf("Value at address %p : %x\n",pData2,*pData2); // gives 2 bytes of data

	int *pData3 = (int*)&data;
	printf("Value at address %p : %x\n",pData3,*pData3); // gives 4 bytes of data

	long long *pData4 = (long long*)&data;
	printf("Value at address %p : %I64x\n",pData4,*pData4); // gives 8 bytes of data

	return 0;
}

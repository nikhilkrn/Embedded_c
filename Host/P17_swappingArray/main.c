/*
 * main.c
 *
 *  Created on: Sep 1, 2025
 *      Author: NIKHIL
 */


#include<stdio.h>
#include<stdint.h>

void arr_Swap(int32_t *pArrA, int32_t *pArrB,uint32_t sizeUpper, uint32_t sizeLower);
void arr_display(int32_t const *const pArr,uint32_t size);


int main(){
	uint32_t sizeArrA, sizeArrB;
	printf("Enter the size of array A and array B: ");
	scanf("%d %d", &sizeArrA, &sizeArrB);

	int32_t arrA[sizeArrA];
	int32_t arrB[sizeArrB];

	uint32_t sizeGreater = (sizeArrA >= sizeArrB) ? sizeArrA : sizeArrB;
	uint32_t sizeLower = (sizeArrA < sizeArrB) ? sizeArrA : sizeArrB;

	for (uint32_t i = 0; i < sizeArrA ; i++){
		printf("Enter the value of arrA[%d]: ",i);
		scanf("%d",&arrA[i]);
	}

	for (uint32_t i = 0; i < sizeArrB ; i++){
		printf("Enter the value of arrB[%d]: ",i);
		scanf("%d",&arrB[i]);
	}

	printf("Orignal array Before swapping: \n");
	arr_display(arrA, sizeArrA);
	arr_display(arrB, sizeArrB);

	printf("After Swapping \n");
	arr_Swap(arrA, arrB, sizeGreater, sizeLower);

	getchar();
	getchar();
	return 0;

}

void arr_Swap(int32_t *pArrA, int32_t *pArrB,uint32_t sizeUpper, uint32_t sizeLower){
	for(uint32_t i = 0; i < sizeLower; i++){

		int32_t temp = pArrA[i];
		pArrA[i] = pArrB[i];
		pArrB[i] = temp;
	}
	for(uint32_t i = 0; i < sizeUpper; i++){
		printf("Array A[%d]: %d \t Array B[%d]: %d\n",i,pArrA[i],i,pArrB[i]);

	}
}


void arr_display(int32_t const *const pArr,uint32_t size){

	for(uint32_t i = 0; i < size; i++){
		printf("%d \t",pArr[i]);
	}
	printf("\n");
}

/*
 * main.c
 *
 *  Created on: Aug 23, 2025
 *      Author: NIKHIL
 */


#include<stdint.h>
#include<stdio.h>

void wait_for_user_input(void);

int main(){

	int32_t firstNum, lastNum;
	int16_t count = 0,count2 = 0;
	printf("Enter First and last number: ");
	scanf("%d %d", &firstNum, &lastNum);

	int32_t firstNumCpy = firstNum;

	while (firstNum <= lastNum){
		if(firstNum % 2  == 0){
			printf("%4d \t",firstNum);
			count++;
		}
		firstNum++;
	}
	printf("\nCount : %d \n",count);

	for(int j = firstNumCpy; j <= lastNum; j ++){
		if(j % 2  == 0){
			printf("%4d \t",j);
			count2++;
		}
	}
	printf("\nCount : %d \n",count2);

	wait_for_user_input();

	return 0;
}

void wait_for_user_input(void){
	printf("Press any key to exit!! \n");
	while (getchar() != '\n'){}
		getchar();
}

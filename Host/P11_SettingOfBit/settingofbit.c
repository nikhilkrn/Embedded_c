/*
 * settingofbit.c
 *
 *  Created on: Aug 19, 2025
 *      Author: NIKHIL
 */


/*
 	 * Write a program to set (make bit state to 1) 4rt and 7th bit position of a given number and print the result.
 	 * 2^7+2^6+2^5+2^4+2^3+2^2+2^1+2^0 ==>10010000
 */
#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(){
	int32_t num, result;
	printf("Enter a number: ");
	scanf("%d",&num);

	result = num | 144; // 10010000 => 72 since we need to set 7th and 4th position so we are using this.

	printf("Result: %d \n",result);

	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void){
	printf("Press any key to exit!! \n");
	while (getchar() != '\n'){}
		getchar();
}

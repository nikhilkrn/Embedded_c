/*
 * bitwise.c
 *
 *  Created on: Aug 19, 2025
 *      Author: NIKHIL
 */

/*
 *
 *
 */

#include<stdio.h>

void wait_for_user_input(void);

int main(){

	short num1,num2;
	printf("Enter two number: ");
	scanf("%hd %hd", &num1,&num2);


	printf("Bitwise And: %d \n",num1 & num2);
	printf("Bitwise Or: %d \n",num1 | num2);
	printf("Bitwise Not: %d and %d \n",~num1, ~num2);
	printf("Bitwise Xor: %d \n",num1 ^ num2);

	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void){
	printf("Press any key to exit!! \n");
	while (getchar() != '\n'){}
		getchar();
}

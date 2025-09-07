/*
 * compare.c
 *
 *  Created on: Aug 18, 2025
 *      Author: NIKHIL
 */

#include<stdio.h>
#include<stdint.h>

void wait_for_user_input();

int main(){

	float num1,num2;
	printf("Enter two number: ");
	if( (scanf("%f ", &num1 ) && scanf("%f", &num2)) == 0 ){
		printf("You have entered character. \n");
		wait_for_user_input();
		return 0;
	}

	int32_t cNum1, cNum2;
	cNum1 = num1;
	cNum2 = num2;

	if((num1 != cNum1) || (num2 != cNum2))
		printf("Warning !! only integer part is being compared.\n");

	if (cNum1 == cNum2)
		printf("Both numbers are equal. \n");

	else{

		if(cNum1 > cNum2)
			printf("%d is bigger. \n", cNum1);
		else
			printf("%d is bigger. \n", cNum2);
	}

	wait_for_user_input();

	return 0;
}


void wait_for_user_input(){
	printf("Press any key to exit!! \n");
	while (getchar() != '\n'){}
		getchar();
}

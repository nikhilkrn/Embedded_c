/*
 * clearingbit.c
 *
 *  Created on: Aug 19, 2025
 *      Author: NIKHIL
 */

/*
 	 *) Program to clear(make bit state to 0) 4th, 5th, 6th bit positon of a given number and print the result.
*/
#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(){
	int32_t num,result;
	printf("Enter a number: ");
	scanf("%d",&num);

	result = num & 0x8F;
	printf("Result: %X \n",result);


	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void){
	printf("Press any key to exit!! \n");
	while (getchar() != '\n'){}
		getchar();
}

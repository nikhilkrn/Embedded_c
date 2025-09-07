/*
 * testingofbit.c
 *
 *  Created on: Aug 19, 2025
 *      Author: NIKHIL
 */

/*
 	 *) Program to take a integer input from user and check if the given number is even or odd using testing of bit
 	 	 *) how this happens is if we convert a odd number to binary then last bit will be 1 and even number will have 0 in the last
 	 	 *) lets say we want to check last digit is even or odd then we need to use suitable binary number which is called mask value
 	 	 *) consider a number 15 we want to check 15 is odd or even so the biary form will be 0000 1111
 	 	 *) to check the last bit we need to choose mask value as 0000 0001 so if we perform and operation then last bit will change if it is odd else it will be 0
 	 	 *) suppose we want to check 3rd last value then mask value we need to consider is 0000 0100 ....
 *
 *	NOTE:
 *		& => used for clearing and testing a bit
 *		| => used for setting a bit
 */
#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(){
	int32_t num;
	printf("Enter a number: ");
	scanf("%d",&num);

	if(num & 1){
		printf("%d is odd \n",num);
	}else{
		printf("%d is even \n",num);
	}
	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void){
	printf("Press any key to exit!! \n");
	while (getchar() != '\n'){}
		getchar();
}

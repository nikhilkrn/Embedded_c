/*
 * voter.c
 *
 *  Created on: Aug 18, 2025
 *      Author: NIKHIL
 */

/*
	 * Write a program that takes the user’s age and decides whether a user can cast a vote or not.
		•The minimum age for casting a vote is 18 years
		•Print appropriate messages
	 *
 */

#include<stdint.h>
#include<stdio.h>

int main(){

	uint8_t age;
	printf("Enter your age: ");
	scanf("%u",&age);

	if(age >= 18)
		printf("You can cast vote. ");
	if(age < 18)
		printf("You are not eligible, grow up!");

	while(getchar()!='\n'){}
	getchar();
	return 0;
}

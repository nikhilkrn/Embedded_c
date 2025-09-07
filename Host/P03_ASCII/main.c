/*
 * main.c
 *
 *  Created on: Aug 16, 2025
 *      Author: NIKHIL
 */

// program to take any character from user and print respective ASCII code using scanf()



#include<stdio.h>

int main(){

	char char1,char2,char3,char4,char5,char6;

	printf("Enter 6 character or number: ");
	scanf("%c %c %c %c %c %c",&char1,&char2,&char3,&char4,&char5,&char6);

	printf("ASCII Code of Characters are: %d %d %d %d %d %d",char1,char2,char3,char4,char5,char6);

	printf("Press any key to exit. ");
	while(getchar() != '\n'){}
	getchar();

	return 0;
}

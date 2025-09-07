/*
 * ascii_using_getchar.c
 *
 *  Created on: Aug 16, 2025
 *      Author: NIKHIL
 */

// program to take any character from user and print respective ASCII code using getchar()

#include<stdio.h>

int main(){


	printf("Enter 6 character or number: ");
	char char1 = getchar();
	getchar();
	char char2 = getchar();
	getchar();
	char char3 = getchar();
	getchar();
	char char4 = getchar();
	getchar();
	char char5 = getchar();
	getchar();
	char char6 = getchar();

	printf("ASCII Code of Characters are: %d %d %d %d %d %d",char1,char2,char3,char4,char5,char6);

	printf("\nPress any key to exit. ");
	while(getchar() != '\n'){}
	getchar();

	return 0;
}

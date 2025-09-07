/*
 * P02_average_updated.c
 *
 *  Created on: Aug 16, 2025
 *      Author: NIKHIL
 */



#include <stdio.h>


int main(void) {

	int num1,num2,num3, sum = 0;

	printf("Enter 3 number: ");
	fflush(stdout);
	scanf("%d%d%d",&num1,&num2,&num3);

	sum = (num1+num2+num3)/3;
	printf("\nThe average of the number is: %d",sum);

	while(getchar()!= '\n'){}
	getchar();

	return 0;
}

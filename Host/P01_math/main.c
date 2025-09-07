/*
 * main.c
 *
 *  Created on: Jul 18, 2025
 *      Author: NIKHIL
 */

/*

	 *  Program to implement addition subtraction multiplication and division using function in a math.c
	 *  include all the function in math.h file
	 * 	include math.h in main.c file and call the function to perform the action
 */

#include<stdio.h>
#include "math.h"

int main(){

	int a = 50;
	int b = 10;
	int add = sum(a,b);
	printf("%d\n",add);

	printf("%I64X\n",multiply(0xfff11,0xffff111));

	return 0;
}

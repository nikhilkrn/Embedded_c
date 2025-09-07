/*
 * macros.c
 *
 *  Created on: Sep 6, 2025
 *      Author: NIKHIL
 */

#include<stdio.h>
#include<stdint.h>

#define PI_VALUE (3.1415f)

//#define AREA_OF_CIRCLE(x)		PI_VALUE * x * x  		// poor defination of macros
#define AREA_OF_CIRCLE(x)		((PI_VALUE)* (x) * (x))


int main(void){

	float area;

	area = AREA_OF_CIRCLE(1+1);

	printf("Area = %f",area);

	return 0;
}

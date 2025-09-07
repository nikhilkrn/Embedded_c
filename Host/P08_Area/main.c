/*
 * main.c
 *
 *  Created on: Aug 19, 2025
 *      Author: NIKHIL
 */


/*
 * area.c
 *
 *  Created on: Aug 18, 2025
 *      Author: NIKHIL
 */

#include<stdio.h>
#include "math.h"

void wait_for_user_input(void);

int main(){

	char code;
	printf(" 't' for triangle \n");
	printf(" 'z' trapezoid \n");
	printf(" 'c' circle \n");
	printf(" 's' square\n");
	printf(" 'r' rectangle \n ");

	printf("Enter the code: ");
	scanf("%c",&code);

	switch(code){
	case 't':
		triangle();
		break;
	case 'z':
		Trapezoid();
		break;

	case 'c':
		circle();
		break;

	case 'r':
		rectangle();
		break;

	case 's':
		square();
		break;

	default:
		printf("Wrong Input! only allowed: 't' 'z' 'c' 's' 'r' ");
	}
	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void){
	printf("Press any key to exit!! \n");
	while (getchar() != '\n'){}
		getchar();
}

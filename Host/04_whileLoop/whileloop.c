/*
 * whileloop.c
 *
 *  Created on: Aug 23, 2025
 *      Author: NIKHIL
 */

#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);


int main(){

	uint8_t num = 0;

	while(num <= 10){
		printf("%d \n",num++);
	}
	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void){
	printf("Press any key to exit!! \n");
	while (getchar() != '\n'){}
		getchar();
}

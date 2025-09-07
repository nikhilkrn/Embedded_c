/*
 * main.c
 *
 *  Created on: Aug 23, 2025
 *      Author: NIKHIL
 */


#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);


int main(){

	uint32_t num, inpNum ;
	printf("Enter the height of pyramid: ");
	scanf("%d",&inpNum);

	for (num = 1; num <= inpNum; num++){
		for(uint8_t j = num; j > 0; j--){
			printf("%4d",j);
		}
		printf("\n");
	}

	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void){
	printf("Press any key to exit!! \n");
	while (getchar() != '\n'){}
		getchar();
}

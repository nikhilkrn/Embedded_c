/*
 * taxCalc.c
 *
 *  Created on: Aug 18, 2025
 *      Author: NIKHIL
 */


#include<stdio.h>
#include<stdint.h>

//float tax_payable(int income,int rate);
void wait_for_user_input(void);

int main(){

	int income;
	float tax_payable_amt;

	printf("Enter your income: ");
	scanf("%d", &income);

	if(income < 9525){
		tax_payable_amt = 0;
	}
	else if((income > 9525) && (income <= 38700)){
		tax_payable_amt = income*0.12;
	}
	else if(income > 38700 && income <= 82500){
		tax_payable_amt = income*0.22;

	}else{
		tax_payable_amt = income*0.32 +1000;
	}

	printf("You have to pay $ %lf tax. \n", tax_payable_amt);
	wait_for_user_input();

	return 0;
}

//float tax_payable(int income,int rate){
//
//	return income*(rate/100);
//}

void wait_for_user_input(void){
	printf("Press any key to exit!! \n");
	while (getchar() != '\n'){}
		getchar();
}


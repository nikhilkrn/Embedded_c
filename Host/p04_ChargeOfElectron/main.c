/*
 * main.c
 *
 *  Created on: Aug 16, 2025
 *      Author: NIKHIL
 */
/*

	* program to take the input of charge and electron charge from user in float and scientific notation respectively
	* and print the number of electron
	*
*/
#include<stdio.h>

int main(){

	double charge, charge_Electron;
	double electron;

	printf("Enter the charge : ");
	scanf("%lf",&charge);

	printf("Enter the charge of an electron: ");
	scanf("%le",&charge_Electron);

	electron = (charge/charge_Electron) * -1;

	printf("Total no of electron(non scientific) = %lf \n",electron);
	printf("Total no of electron(scientific) = %le \n",electron);


	printf("\nPress any key to exit. ");
	while(getchar() != '\n'){}
	getchar();

	return 0;
}

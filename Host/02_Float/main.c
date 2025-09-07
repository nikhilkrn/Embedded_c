#include<stdio.h>

int main(){

	float num = 48.16547812154;
	printf("Number: %f \n",num); // this can print up-to 6 digit after decimal
	printf("Number: %0.8f \n",num); // using 0.8 will print 8 digit after deciaml but it will loose its precision so we use double data type for this
	printf("Number: %e \n",num); // this will print scientific representation of a decimal number
	printf("Number: %0.2f\n",num);
	printf("Number: %0.2e\n",num);

	double num2 = 42.98652318321354;
	printf("Number is : %0.14lf\n",num2); // this is more precise than float

	float charge = -1.60217662e-19;
	printf("Charge with float: %f\n",charge);
	printf("Number: %e\n", charge);

	double chargeE = -1.60217662e-19;
	printf("Charge with double: %0.25lf\n",chargeE);
	printf("Number: %0.8le\n", chargeE);
	return 0;
}

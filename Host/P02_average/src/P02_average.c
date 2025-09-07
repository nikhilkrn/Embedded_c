
// program to take input of 3 numbers and print their average


#include <stdio.h>


int main(void) {

	int num1,num2,num3, sum = 0;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&num1);

	printf("\nEnter another number: ");
	fflush(stdout);
	scanf("%d",&num2);

	printf("\nEnter another number: ");
	fflush(stdout);
	scanf("%d",&num3);

	sum = (num1+num2+num3)/3;
	printf("\nThe average of the number is: %d",sum);

	while(getchar()!= '\n'){}
	getchar();

	return 0;
}

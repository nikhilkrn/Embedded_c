


#include<stdio.h>

void sum(int a, int b);
int main(){

	sum(9,11);
	printf("\n");
	printf("Press 'ENTER' to exit the program.\n");
	getchar();
	return 0;
}

void sum(int a, int b){

	int sum = a + b;
	printf("Sum : %d",sum);
}

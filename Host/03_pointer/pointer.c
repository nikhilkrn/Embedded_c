/*
 * pointer.c
 *
 *  Created on: Aug 18, 2025
 *      Author: NIKHIL
 */

/*
 	 *) Create a char type variable and initialize it to value 100.
 	 *) Print the address of the above variable
 	 *) Create a pointer variable and  store the address of the above variable
 	 *) Perform read operation on the  pointer variable to fetch 1 byte of data from the pointer
 	 *) Print the data obtained from the read operation on the pointer
 	 *) Perform write operation on the pointer to store the value 65
 	 *) Print the value of the variable defined in step 1

 */

// & => used for performing read operation on the address
// * => used for performing write operation on the address


#include<stdio.h>

int main(){

	char num = 100;
	printf("Address of num variable: %p\n",&num);

	char* paddress = &num;
	char data = *paddress;
	printf("Read value of num variable: %d\n",data);

	*paddress = 65;
	printf("New data of num variable : %d",num);

	return 0;
}

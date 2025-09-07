/*
 * main.c
 *
 *  Created on: Sep 5, 2025
 *      Author: NIKHIL
 */


#include<stdio.h>
#include<stdint.h>
#include<string.h>


typedef struct{
	char name[30];
	uint32_t rollno;
	char DOB[10];
	uint8_t sem;

}student_data_t;

student_data_t student[10];



void AddData(student_data_t *pStudent);
void DeleteData(student_data_t *pStudent);
void DisplayData(student_data_t *pStudent);
int check_roll_no(uint32_t rollno,student_data_t *pStudent);

int main(){

	uint8_t choice;
	while(1){

		printf("\n");
		printf("1 => Add data\n");
		printf("2 => Delete data\n");
		printf("3 => Display data\n");
		printf("0 => EXIT PROGRAM\n");
		printf("select Choice: \n");
		scanf("%d",&choice);
		printf("\n\n");

		if(choice == 1){
			AddData(student);
		}
		else if (choice == 2) {
			DeleteData(student);
		}else if (choice == 3) {
			 DisplayData(student);
		}
		else if (choice == 0) {
			break;
		}else {
			printf("Enter Correct Choice !!! \n");
		}
	}
	return 0;
}

int check_roll_no(uint32_t rollno,student_data_t *pStudent){
	uint8_t flag = 0;

	for(uint8_t i = 0 ; i < 10;i++){
		if(pStudent[i].rollno == rollno){
			flag = 1;
			break;
		}
	}
	return flag;
}

void AddData(student_data_t *pStudent){

	uint32_t rollNo;


	printf("Enter rollno: ");
	scanf("%d",&rollNo);

	uint8_t roll_exist = check_roll_no(rollNo, student);

	if(roll_exist == 0 ){
		for(uint32_t i = 0 ; i < 10;i++){
			if(pStudent[i].rollno == 0){
				pStudent[i].rollno = rollNo;
				printf("Enter Name: ");
				scanf(" %[^\n]", pStudent[i].name);

				printf("Enter DOB(MM/DD/YYYY): ");
				scanf("%s", pStudent[i].DOB);

				printf("Enter SEM: ");
				scanf("%hhu", &pStudent[i].sem);
				printf("Details added");
				break;
			}
		}
	}
	else{
		printf("Roll no already exists\n");
		printf("Retype again\n");
	}
}

void DeleteData(student_data_t *pStudent){
	uint32_t rollNo;
	uint8_t flag = 0;

	printf("Enter roll no : ");
	scanf("%d",&rollNo);

	for(uint8_t i = 0 ; i < 10;i++){

		if(pStudent[i].rollno == rollNo){
			flag = 1;
			pStudent[i].rollno = 0;
		}
	}
	if(flag == 1 ){
		printf("data removed\n");
	}
	else {
		printf("No record found");
	}
}

void DisplayData(student_data_t *pStudent){

	printf("Roll no \t Name \t DOB \t SEM\n");

	for(uint8_t i = 0 ; i < 10;i++){
		if(pStudent[i].rollno >= 1){
			printf("%d \t %s \t %s \t %d \n",pStudent[i].rollno,pStudent[i].name,pStudent[i].DOB,pStudent[i].sem);
		}
	}
}


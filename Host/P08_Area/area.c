/*
 * area.c
 *
 *  Created on: Aug 18, 2025
 *      Author: NIKHIL
 */

#include<stdio.h>


float triangle(){
	int h,b;
	double area;
	printf("Enter height and breadth : ");
	scanf("%d %d",&h,&b);

	area = (h*b)/2;
	printf("Area: %lf \n",area);

}

float Trapezoid(){
	int h,b,a;
	double area;
	printf("Enter height and 2 base length (Trapezoid): ");
	scanf("%d %d %d",&h,&b, &a);

	area = (a+b)/2 * h;
	printf("Area: %lf \n",area);


}

float circle(){
	int r;
	double area, pi = 3.1415;
	printf("Enter radius : ");
	scanf("%d",&r);

	area = pi*r*r;
	printf("Area: %lf \n",area);

}
float rectangle(){
	int l,b;
	double area;
	printf("Enter length and breadth (rectangle): ");
	scanf("%d %d",&l,&b);

	area = l*b;
	printf("Area: %lf \n",area);

}

float square(){
	int l;
	double area;
	printf("Enter length (square): ");
	scanf("%d",&l);

	area = l*l;
	printf("Area: %lf \n",area);

}

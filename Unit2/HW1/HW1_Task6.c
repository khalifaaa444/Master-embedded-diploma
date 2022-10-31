/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */

#include "stdio.h"
float a,b,temp;

int main()
{
	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&b);
	temp =a;
	a=b;
	b=temp;
	printf("After swapping, value of a = %0.2f\n",a);
	printf("After swapping, value of b = %0.2f\n",b);

	return 0;
}


/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
float a,b;
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

	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a = %0.2f\n",a);
	printf("After swapping, value of b = %0.2f\n",b);

	return 0;
}

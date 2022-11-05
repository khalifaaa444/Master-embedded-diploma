/*
 * main.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
int a,result;
int Factorial_number(int number);
int main()
{
	printf("Enter a positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&a);
	result=Factorial_number(a);

	printf("Factorial of %i = %i",a,result);


	return 0;
}


int Factorial_number(int number)
{
	int fact=1;

	if (number == 0)
	{
		return 1;
	}
	else
	{
		fact = number * Factorial_number(number-1);
		return fact;
	}
}

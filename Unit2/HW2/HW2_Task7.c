/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */

#include "stdio.h"
int num=0;
int fac=1;
int main()
{
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&num);
	if (num<0)
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else
	{
		if (num == 0)
		{
			fac=1;
		}
		else
		{
			while(num!=1)
			{
				fac*=num;
				num--;
			}
		}
		printf("Factorial = %i",fac);
	}
	return 0;
}

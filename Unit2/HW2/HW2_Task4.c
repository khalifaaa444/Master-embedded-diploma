/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
signed int x;
int main()
{
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&x);
	if (x>0)
	{
		printf("%i is positive",x);
	}
	else if(x<0)
	{
		printf("%i is negative",x);
	}
	else
	{
		printf("You entered zero");
	}
	return 0;
}

/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
unsigned int num,i=0,sum=0;

int main()
{
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&num);
	for (i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("Sum = %i",sum);
	return 0;
}

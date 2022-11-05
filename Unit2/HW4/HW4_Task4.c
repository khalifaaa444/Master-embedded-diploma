/*
 * main.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
int power_NUM(int num,int power);
int result=1;
int base,powerr;
int main()
{
printf("Enter base number: ");
fflush(stdin);fflush(stdout);
scanf("%i",&base);
printf("Enter power number(positive integer): ");
fflush(stdin);fflush(stdout);
scanf("%i",&powerr);

result=power_NUM(base,powerr);
printf("%i^%i = %i",base,powerr,result);
	return 0;
}


int power_NUM(int num,int power)
{



	if (power != 0)
	{

		return(num * power_NUM(num,power-1)) ;
	}
	else
	{
		return 1;
	}
}

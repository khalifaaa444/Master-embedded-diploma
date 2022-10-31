/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
int x=0,y=0;

int main ()
{
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i %i",&x,&y);
	printf("Sum: %i",x+y);


	return 0;
}

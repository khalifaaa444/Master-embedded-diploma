/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */

#include "stdio.h"
int x=0;
int main()
{
	printf("Enter a integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&x);
	printf("You entered: %i",x);
	return 0;
}

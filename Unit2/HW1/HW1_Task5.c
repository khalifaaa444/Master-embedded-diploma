/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
char x=0;
int main()
{
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c = %i",x,x);

	return 0;
}

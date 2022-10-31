/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */

#include "stdio.h"
float x=0,y=0;
int main()
{

	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("Product: %f",x*y);


	return 0;
}

/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */

#include "stdio.h"
float x,y,z;
int main()
{
	printf("enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	if (x>y)
	{
		if(x>z)
		{
			printf("largest num = %0.3f",x);
		}
		else
		{
			printf("largest num = %0.3f",z);
		}
	}
	else
	{
		if (y>z)
		{
			printf("largest num = %0.3f",y);
		}
		else
		{
			printf("largest num = %0.3f",z);
		}
	}
	return 0;
}

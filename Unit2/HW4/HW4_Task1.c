/*
 * main.c
 *
 *  Created on: Nov 3, 2022
 *      Author: ebrahem
 */

#include "stdio.h"
int num1,num2,j;
int prime_Num(int x);
int main()
{
	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%i%i",&num1,&num2);
	printf("Prime numbers between %i and %i are: ",num1,num2);
	for (j=num1+1;j<num2;j++)
	{
		int q=prime_Num(j);
		if(q==0)
		{
			printf("%i  ",j);
		}
	}
	return 0;
}
int prime_Num(int x)
{
	int i,flag=0;
	for(i=2;i<=x/2;i++)
	{
		if (x%i==0)
		{
			flag++;
		}
	}
	return flag;
}

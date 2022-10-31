/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
char symbol;
float num1,num2;
float result=0;
int flag =0;
int main()
{
	printf("Enter operator either + or - or * or devide : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&symbol);
	printf("Enter two operands: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f",&num1,&num2);

	if (symbol == '+')
	{
		result=num1+num2;

	}
	else if (symbol == '-')
	{
		result=num1-num2;
	}
	else if (symbol == '*')
	{
		result=num1*num2;
	}
	else if (symbol == '/')
	{
		if (num2 != 0)
		{
			result = num1/num2;
		}
		else
		{
			printf("Error!!! can't devide with zero");
			flag=1;
		}

	}

	else
	{
		printf("your symbol doesn't exist");
		flag=1;
	}
	if (flag==0)
	{
	printf("%0.2f %c %0.2f = %0.2f",num1,symbol,num2,result);
	}
	return 0;
}

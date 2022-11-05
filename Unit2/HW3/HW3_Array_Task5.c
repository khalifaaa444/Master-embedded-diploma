/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
int main()
{
	int n,i,target,flag=0;
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&n);
	int mat[n];
	for(i=0;i<n;i++)
	{
		printf("%i. Enter number: ",i+1);
			fflush(stdin);fflush(stdout);
			scanf("%i",&mat[i]);
	}
	for(i=0;i<n;i++)
		{
			printf("%i\t",mat[i]);
		}
	printf("\n");
	printf("Enter the elements to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&target);
	for(i=0;i<n;i++)
	{
		if(target==mat[i])
		{
			printf("Number found at the location = %i",i+1);
			flag=1;
			break;
		}
		else
		{}
	}
	if(flag==0)
	{
		printf("not found!!!");
	}
	return 0;
}

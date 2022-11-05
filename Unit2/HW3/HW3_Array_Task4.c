/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: ebrahem
 */

#include "stdio.h"
int main()
{
	int n,flag=0,i,new_ele,new_loc;
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&n);
	int mat_old[n],mat_new[n+1];
	for(i=0;i<n;i++)
	{
		printf("%i. Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%i",&mat_old[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("%i\t",mat_old[i]);
	}
	printf("\n");
	printf("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&new_ele);
	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&new_loc);
	for(i=0;i<=n;i++)
	{
		if(new_loc-1==i)
		{
			mat_new[i]=new_ele;
			flag=1;
		}
		else
		{
			if(flag==0)
			{
				mat_new[i]=mat_old[i];
			}
			else
			{
				mat_new[i]=mat_old[i-1];
			}
		}
	}
	for(i=0;i<=n;i++)
		{
			printf("%i\t",mat_new[i]);
		}
	return 0;
}

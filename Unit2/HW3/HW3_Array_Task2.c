/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
int n,i;
float AVG=0;
int main()
{
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&n);
	float mat[n];
	for(i=0;i<n;i++)
	{
		printf("%i. Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&mat[i]);
	}
	for(i=0;i<n;i++)
	{
		AVG=AVG+mat[i];
	}
	AVG /=n;
	printf("Average = %0.2f",AVG);
	return 0;
}

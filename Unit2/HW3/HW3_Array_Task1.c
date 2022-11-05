/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: ebrahem
 */

#include "stdio.h"
float mat1[2][2],mat2[2][2],SUM[2][2];
int i1,j1,i2,j2,i3,j3;
int main()
{
	printf("Enter the elements of 1st matrix\n");

	for (i1=0;i1<2;i1++)
	{
		for (j1=0;j1<2;j1++)
		{
			printf("Enter a%i%i: ",i1,j1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&mat1[i1][j1]);
		}
	}
	printf("Enter the elements of 2st matrix\n");

	for (i2=0;i2<2;i2++)
	{
		for (j2=0;j2<2;j2++)
		{
			printf("Enter a%i%i: ",i2,j2);
			fflush(stdin);fflush(stdout);
			scanf("%f",&mat2[i2][j2]);
		}
	}
	printf("Sum Of Matrix:\n");
	for(i3=0;i3<2;i3++)
	{
		for(j3=0;j3<2;j3++)
		{
			SUM[i3][j3]=mat1[i3][j3]+mat2[i3][j3];
			printf("%0.2f\t",SUM[i3][j3]);

		}
		printf("\n");
	}

return 0;

}

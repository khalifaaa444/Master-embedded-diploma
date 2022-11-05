/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: ebrahem
 */

/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
int n,m,i,j;
int main()
{
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%i%i",&n,&m);
	int mat[n][m],mat_trans[m][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter elements a%i%i: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%i",&mat[i][j]);
		}
	}
	printf("Entered Matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%i\t",mat[i][j]);
			mat_trans[j][i]=mat[i][j];
		}
		printf("\n");
	}
	printf("Transpose of Matrix: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%i\t",mat_trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}


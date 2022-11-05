/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: ebrahem
 */


#include "stdio.h"

char words[50];
int i,target;
int main()
{
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(words);

	for(i=0;i<50;i++)
	{
		if(words[i]!=0)
		{}
		else
		{
			target=i;
			break;
		}
	}
	printf("Length of string: %i",target);
	return 0;
}

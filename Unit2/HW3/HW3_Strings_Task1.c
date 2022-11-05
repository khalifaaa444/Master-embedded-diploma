/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: ebrahem
 */

#include "stdio.h"
#include <string.h>

char words[100],target,flag=0;
int i;
int main()
{
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(words);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&target);
	for(i=0;i<strlen(words);i++)
	{
		if(target == words[i])
		{
			flag++;
		}
		else
		{}

	}
	printf("Frequency of %c = %i",target,flag);


	return 0;
}

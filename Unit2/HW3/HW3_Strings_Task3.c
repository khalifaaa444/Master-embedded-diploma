/*
 * main.c
 *
 *  Created on: Nov 1, 2022
 *      Author: ebrahem
 */


#include "stdio.h"
#include "string.h"

char words[50],rev_words[50];
int i,Size;

int main()
{
	printf("Enter the string : ");
	fflush(stdin);fflush(stdout);
	gets(words);
	Size=strlen(words);
	printf("%s\n",words);
	for (i=0;i<Size;i++)
	{
		rev_words[i]=words[Size-i-1];
	}
	printf("Reverse string is : %s",rev_words);

	return 0;
}

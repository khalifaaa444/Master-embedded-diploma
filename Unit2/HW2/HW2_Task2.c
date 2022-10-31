/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */

#include "stdio.h"
char letter;
int main()
{

	printf("Enter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&letter);

	if ((letter=='a')||(letter=='e')||(letter=='i')||(letter=='o')||(letter=='u'))
	{
		printf("%c is a vowel",letter);
	}
	else if ((letter=='A')||(letter=='E')||(letter=='I')||(letter=='O')||(letter=='U'))
	{
		printf("%c is a vowel",letter);
	}
	else
	{
		printf("%c is a constant",letter);
	}

	return 0;
}

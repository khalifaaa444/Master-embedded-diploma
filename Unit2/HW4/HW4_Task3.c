/*
 * main.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ebrahem
 */

#include "stdio.h"

void reverse();
int main()
{
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	reverse();
	return 0;
}
void reverse()
{

	char letter;
	scanf("%c",&letter);
	if (letter != '\n')
	{
		reverse();
		printf("%c",letter);

	}

}

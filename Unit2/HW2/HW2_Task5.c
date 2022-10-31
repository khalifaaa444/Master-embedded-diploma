/*
 * main.c
 *
 *  Created on: Oct 29, 2022
 *      Author: ebrahem
 */

#include "stdio.h"
char x;

int main()
{
	/// 97 to 122  >>> a to z
	/// 65 to 90   >>> A to Z

	printf("enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	if ((x>96)&&(x<123))
	{
		printf("%c is alphabet\n",x);
	}
	else if ((x>64)&&(x<91))
	{
		printf("%c is alphabet\n",x);
	}
	else
	{
		printf("%c is not alphabet\n",x);
	}
	return 0;

}



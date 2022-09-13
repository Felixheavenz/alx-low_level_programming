/**
 *main - initiates the program
 *
 *Description: conditional statement
 *
 *
 *Return: Always 0 (success)
 *
 **/

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main(void)

{

	int CH = 'a';

	char ch = 0;

	/* your code goes there */

	while (ch <= 9)

	{

		putchar (ch + '0');

		ch++;

	}

	while (CH <= 'f')

	{

		putchar(CH);

		CH++;

	}

	putchar ('\n');

	return (0);

}

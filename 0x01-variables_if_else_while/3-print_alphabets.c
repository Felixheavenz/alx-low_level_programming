/**
 *main - initiates the program
 *
 *Description: conditional statement
 *
 *Return: Always 0 (success)
 *
 */

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main(void)

{

	char CH = 'A';

	char ch = 'a';

	/* your code goes there */

	while (ch <= 'z')

	{

		putchar (ch);

		ch++;

	}

	while (CH <= 'Z')

	{

		putchar(CH);

		CH++;

	}

	putchar ('\n');

	return (0);

}

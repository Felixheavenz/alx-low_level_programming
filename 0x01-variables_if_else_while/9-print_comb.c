/**
 *main - initiates the program
 *
 *Description: conditional statement
 *
 *Return: Always 0 (success)
 *
 **/

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main(void)

{

	int ch = 0;

	/* your code goes there */

	while (ch <= 9)

	{

		putchar (ch + 48);

		if (ch != 9)

		{

			putchar (',');

			putchar (' ');

		}

		ch++;

	}

	putchar ('\n');

	return (0);

}

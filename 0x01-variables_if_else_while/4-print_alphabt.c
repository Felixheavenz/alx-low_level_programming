/**
 *main - initiates the program
 *
 *Description: conditional statement
 *
 *Return: Always 0 (success)
 **/

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main(void)

{

	char CH = 'z';

	char ch = 'a';

	/* your code goes there */

	while (ch <= CH)

	{

		if (ch == 'e' || ch == 'q')

			ch++;

		putchar (ch);

		ch++;

	}

	putchar ('\n');

	return (0);

}

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

	char ch = 'z';

	/* your code goes there */

	while (ch >= 'a')

	{

		putchar (ch);

		ch--;

	}

	putchar ('\n');

	return (0);

}

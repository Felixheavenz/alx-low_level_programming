/**
  *main - initiates the program
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

	while (ch < 10)

	{

		putchar (ch + '0');

		ch++;

	}

	putchar ('\n');

	return (0);

}

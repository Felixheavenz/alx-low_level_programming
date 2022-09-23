#include "main.h"

/**
 *print_number - prints numbers char
 * @n:integer parameter
 *Return: 0
 */

void print_number(int n)
{
	unsigned int n1;
	
	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((n1 % 10) + '0');
}

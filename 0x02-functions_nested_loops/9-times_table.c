#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 * rw = row, col = columon, d = digits
 * Return: Always success
 */
void times_tables(void)
{
	int rw, col, d;
	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cool = 1; col <= 9; col++)
		{
			d = (rw * col);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
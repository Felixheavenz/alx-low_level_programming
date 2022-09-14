/**
 * print_sign - function that prints the sign of a number
 * @n: input letter
 * Return: Always success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_printchar('*');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}
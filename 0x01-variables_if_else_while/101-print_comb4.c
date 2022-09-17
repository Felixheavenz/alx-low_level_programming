#include <stdio.h>
/**
 *main - prints all possible different combinations of the three digits
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, 1;

	for  (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (1 = 50; 1 < 58; 1++)
			{
				if (1 < m && m < n)
				{
					putchar(n);
				}
			}
		}
	}
}


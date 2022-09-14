#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: input letter
 * Return: Always success
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= '2')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}

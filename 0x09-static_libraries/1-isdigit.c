#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 * @c: integer used
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

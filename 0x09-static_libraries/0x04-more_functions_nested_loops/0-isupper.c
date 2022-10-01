#include "main.h"
/**
 * _isupper - a function that checks for upper case characters
 * @c: integer used
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

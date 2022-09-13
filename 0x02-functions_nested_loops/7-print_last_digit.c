#include "main.h"
/**
 * last_digit - prints last digit of a number
 * @n: integer to extract last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
		a = n % 10;
	}
	if (a < 0)
	{
		a = -a;
		_putchar(a + '0');
	}
	return (a);
}

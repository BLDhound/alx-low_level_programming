#include "main.h"
/**
 * last_digit - prints last digit of a number
 * @n: integer to extract last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	if (n > 0 || n == 0)
	{
		_putchar (n % 10 + '0');
		return (n % 10);
	}
	else
	{
		n = n * -1;
		_putchar(n % 10 + '0');
		return (n % 10);
	}
}

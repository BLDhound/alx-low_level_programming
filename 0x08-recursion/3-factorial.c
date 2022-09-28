#include "main.h"
/**
 * factorial - returns factoral of a given number
 * @n: int parameter
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n -1));
	}
}

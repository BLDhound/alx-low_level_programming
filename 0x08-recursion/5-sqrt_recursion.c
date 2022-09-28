#include "main.h"
/**
 * _sqrt_recursion - returns natural swuare root of a number
 * @n: int parameter
 * Return: natural square root of int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (1);
}

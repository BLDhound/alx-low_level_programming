#include "main.h"
/**
 * helper - function calculate whether n is prime number
 * @n: integer to test
 * @i: int helper
 * Return: 1 if true, 0 otherwise
 */

int helper(int n, int i)
{
	if (n >= (i * i))
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		i = i + 6;
	}
	return (1);
}

/**
 * is_prime_number - function returns a 1 if input int is prime
 * @n: Integer test
 * Return: 1 if true, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	else
		return (helper(n, 5));
}

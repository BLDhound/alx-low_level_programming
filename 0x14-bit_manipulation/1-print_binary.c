#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints binary representation of number
 * @n: pointer to string
 * Return: converted number or 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

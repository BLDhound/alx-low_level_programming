#include "main.h"
/**
 * get_bit - function that returns value bit
 * @n: number
 * @index: start from 0
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;
	unsigned int x, count = 0;

	if (n == 0)
	{
		count = 1;
	}
	else
	{
		for (num = n; num > 0; num >>= 1)
			count++;
	}

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	if (index > count - 1)
		return (0);

	x = n >> index;
	if (x & 1)
		return (1);
	else
		return (0);
}

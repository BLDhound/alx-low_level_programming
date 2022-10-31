#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - function that sets value of bit to 0 at given index
 * @n: pointer to bit
 * @index: set value
 * 
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);

}

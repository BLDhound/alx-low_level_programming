#include "main.h"

/**
 * flip_bits - function that returns number of bits needed to flip
 * @n: number of bit
 * @m: number to get bit
 *
 * Return: number of bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mop = n ^ m, bits = 0;

	while (mop > 0)
	{
		bits += (mop & 1);
		mop >>= 1;
	}
	return (bits);
}

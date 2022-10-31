#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: string print
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int x, pun;

	if (b == NULL)
	{
		return (0);
	}

	for (num = 0, pun = 0, x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '1' && b[x] != '0')
			return (0);
		if (!pun && b[x] == '1')
			pun = 1;
		if (pun && b[x] == '1')
			num = num << 1, num += 1;
		else if (pun && b[x] == '0')
			num = num << 1;
	}
	return (num);

}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer for an array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	while (min <= max)
		*(p + i++) = min++;
	return (p);
}

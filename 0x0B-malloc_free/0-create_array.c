#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: argument for size of array
 * @c: argument for char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *create_array;
	unsigned int i = 0;

	create_array = malloc(size * sizeof(c));

	while (i < size)
	{
		if (create_array == NULL)
		{
			return (NULL);
		}
		create_array[i] = c;
		i++;
	}
	return (create_array);
}

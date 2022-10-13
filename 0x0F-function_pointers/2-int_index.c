#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array parameter
 * @size: size of array
 * @cmp: parameter for comparion
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}

#include "main.h"
#include "stdio.h"
/**
 * print_array - function that prints n elements,
 * of an array of integers
 * @a: Array used
 * @n: Number of integer elements to be read
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; n > i; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}

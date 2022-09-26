#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints sum of two diagonals of a square matrix
 * @a: array of integers
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum_A = 0, sum_B = 0, i = 0, j = 0, count = 0;

	while (j < size)
	{
		for (i = 0; i < size; i++)
		{
			count = j * size + i;
			if (i == j)
				sum_A = sum_A + a[count];
			if ((i + j) == (size - 1))
				sum_B = sum_B + a[count];
		}
		j++;
	}
	printf("%d, %d\n", sum_A, sum_B);
}

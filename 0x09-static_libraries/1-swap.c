#include "main.h"
/**
 * swap_int - function that swaps numbers
 * @a: first int parameter
 * @b: second int parameter
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int var = *a;

	*a = *b;
	*b = var;
}

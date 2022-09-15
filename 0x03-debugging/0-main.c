#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * postitive_or_negative() - tests function that prints,
 * if integer is positive or negative
 * @n: integer to be tested
 * Return: 0
 */
int postitive_or_negative()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

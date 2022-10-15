#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @n: number of arguments
 * @separator: separator between numbers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* create va_list to store variable arguments */
	va_list my_nums;
	unsigned int count;

	/* init valist */
	va_start(my_nums, n);

	/* loop process of arguments */
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(my_nums, unsigned int));
		if (count < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(my_nums);
	printf("\n");
}

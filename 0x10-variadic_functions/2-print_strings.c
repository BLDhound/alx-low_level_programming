#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - functions that prints strings
 * @n: number of arguments
 * @separator: separator between numbers
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* create va_list to store variables */
	va_list strings;
	unsigned int count;
	char *str;

	/* init valist for number of arguments */
	va_start(strings, n);

	/* loop through arguments */
	for (count = 0; count < n; count++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("nil");
		else
		{
			printf("%s", str);
			if (count < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}

#include "main.h"
/**
 * _rev - function that prints a string in reverse
 * @s: char parameter used
 * Return: Always 0
 */

void print_rev(char *s)
{
	int counter, strlength;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	strlength = counter;
	counter = 0;
	while (*(s + counter) != '\0')
		_putchar(*(s + (strlength - (counter++ + 1))));
	_putchar('\n');
}


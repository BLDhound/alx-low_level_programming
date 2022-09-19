#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string parameter used
 * Return: 0
 */

void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		n++;
	for (n /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

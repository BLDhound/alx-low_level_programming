#include "main.h"
/**
 * main - prints  the alphabet, in lowercase
 * Return: 0
 */
void print_aplhabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}

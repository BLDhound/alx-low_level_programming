#include "main.h"
/**
 * main - prints  the alphabet, in lowercase
 * Return: 0
 */
void print_aplhabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

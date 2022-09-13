#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - prints lowercase alphabets
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}


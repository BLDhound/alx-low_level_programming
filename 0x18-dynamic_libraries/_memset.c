#include "main.h"
/**
 * _memset - fills memory with bytes
 * @s: string
 * @b: value initialized
 * @n: number of bytes
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}


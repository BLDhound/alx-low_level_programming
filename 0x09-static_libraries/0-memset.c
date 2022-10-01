#include "main.h"
/**
 * *_memset - function that fills memeory with constant byte
 * @s: First char parameter
 * @b: second char parameter
 * @n: first integer parameter
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}

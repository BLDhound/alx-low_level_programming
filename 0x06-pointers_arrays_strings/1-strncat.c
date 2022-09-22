#include "main.h"
/**
 * length - displays the length of an array
 * @i: integer parameter
 * Return: int
 */

int length(char *i)
{
	int n = 0;

	while (i[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * *_strncat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third integer parameter
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = length(dest);
	for (j = 0; (src[j] != '\0') && (j < n); ++j)
	{
		dest[i] = src[j];
		++i;
	}
	dest[i] = '\0';

	return (dest);
}

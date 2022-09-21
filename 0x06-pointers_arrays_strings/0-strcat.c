#include "main.h"
#include "string.h"
/**
 * length - finds the length of an array
 * @i: parameter value
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

#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: first parameter used
 * @src: second string parameter used
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = length(dest);
	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[i] = src[j];
		++i;
	}
	dest[i] = '\0';

	return (dest);
}

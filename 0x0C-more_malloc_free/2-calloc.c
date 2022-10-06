#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_memset - fill a len byte of the memory area
 * @s: arry to set
 * @b: byte value to set in *s
 * @n: len bytes to set in str
 * Return: void
 */

void *_memset(char *s, char b, unsigned int  n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes,
 * and returns a pointer to the allocated memory
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}

#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: first parameter
 * @src: second char parameter
 * @n: first integer parameter
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: destination
 * @src: string to copy
 * @n: number of bytes
 * Return: char dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

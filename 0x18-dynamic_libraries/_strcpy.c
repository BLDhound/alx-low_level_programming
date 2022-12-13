#include "main.h"
/**
 * _strcpy - function that copies string
 * @dest: pointer to array
 * @src: source array
 * Return: char dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (src[i] != '\0')
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

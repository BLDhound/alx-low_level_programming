#include "main.h"
/**
 * _strlen - returns length of string
 * @s: array
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

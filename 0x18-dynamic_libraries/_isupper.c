#include "main.h"
/**
 * _isupper - checked if c is uppercase
 * @c: letter in ASCII
 * Return: 1 if c is ppercase 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}


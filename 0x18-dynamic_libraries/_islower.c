#include "main.h"
/**
 * _islower - function that indicates if alphabet is lowercase
 * @c: Character to validate
 * Return: 1 if lowercase 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

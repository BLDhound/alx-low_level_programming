#include "main.h"
/**
 * _isaplha - function that indicates if a letter is upper or lowercase
 * @c: Character to validate
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

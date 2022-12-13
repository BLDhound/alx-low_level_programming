#include "main.h"
/**
 * _strspn - function that counts number of bytes from accept 
 * @s: string
 * @accept: charachter to check
 * Return: number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (0);
}

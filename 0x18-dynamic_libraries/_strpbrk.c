#include "main.h"
/**
 * _strpbrk - function that return a pointer when it is different
 * @s: string
 * @accept: string to evaluate
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int j, i = 0;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return (0);
}

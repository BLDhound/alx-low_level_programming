#include "main.h"
/**
 * _strpbrk - locates the first occurence in the string s of any bytes in accept
 * @s: string parameter
 * @accept: string evaluation
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

#include "main.h"
/**
 * _strstr - finds first occurence of substring needle
 * @haystack: first array parameter
 * @needle: array to search
 * Return: pointer to first character of first occurence,
 * neddle. Null: if needle is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *p;

	if (needle[i] == '\0')
		p = haystack;
	while (haystack[i] && needle[j])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
			j++;
		if (needle[j] == '\0')
			p =haystack + i;
		else
			p =0;
		i++;
	}
	return (p);
}

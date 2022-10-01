#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: first char parameter
 * @c: second char parameter
 * Return: pointer to string
 */

char *_strchr(char *s, char *c)
{
	int n = 0;
	char *p;

	if (s[n] == '\0')
		p = 0;
	while (s[n])
	{
		if (c == s[n])
		{
			p = s + n;
			break;
		}
		p =0;
		n++;
	}
	if (c == '\0' && s[n] == '\0')
		p =s + n;
	return (p);
}


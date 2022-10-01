#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (s1[n] == s2[n] && s1[n] && s2[n])
	{
		n++;
	}
	if (!s1[n] || !s2[n])
	{
		return (0);
	}
	else
	{
		return (s1[n] - s2[n]);
	}
}

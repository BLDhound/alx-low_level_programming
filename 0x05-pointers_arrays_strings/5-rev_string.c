#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: parameter used
 * Return: 0
 */

void rev_string(char *s)
{
	int x, y, z;

	x = 0;
	y = 0;
	while (s[y] != '\0')
	{
		y++;
	}
	y--;
	while (y > x)
	{
		z = s[y];
		s[y--] = s[x];
		s[x++] = z;
	}
}

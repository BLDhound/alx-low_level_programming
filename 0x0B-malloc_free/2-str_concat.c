#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string parameter 1
 * @s2: string parameter 2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *create_array;

	c = 0;
	create_array = malloc(sizeof(*s1 + *s2));

	if (create_array == NULL)
		return (NULL);

	a = 0;
	while (s1[a] != '\0')
	{
		create_array[c] = s1[a];
		a++;
		c++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		create_array[c] = s2[b];
		b++;
		c++;
	}
	return (create_array);
	free(create_array);
}

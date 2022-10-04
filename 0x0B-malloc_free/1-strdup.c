#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to anewly allocated space in memory
 * @str: array argument
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0;
	char *p;

	p = malloc(sizeof(char) * i + 1);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (p == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

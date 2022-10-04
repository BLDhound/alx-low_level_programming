#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to anewly allocated space in memory
 * @str: array argument
 * Return: 0
 */

char *_strdup(char *str)
{
	char *create_array;
	int i, len;

	create_array = malloc(sizeof(str));

	i = len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (create_array == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		create_array[i] = str[i];
		i++;
	}

	return (create_array);
}

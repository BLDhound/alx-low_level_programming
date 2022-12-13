#include "main.h"
/**
 * *_strcat - function to add src to dest
 * @dest: destination
 * @src: source
 * @Return: dest
 */
char *_strcat(char *dest, char *src)
{
	return (_strncat(dest, src, _strlen(src)));
}


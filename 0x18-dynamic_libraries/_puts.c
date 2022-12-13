#include "main.h"
#include <unistd.h>
/**
 * _puts - Entry point for program
 * @s: parameter
 * Return: 0
 */
void _puts(char *s)
{
	write(1, s, _strlen(s));
}

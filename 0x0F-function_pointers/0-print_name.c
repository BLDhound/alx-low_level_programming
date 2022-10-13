#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: first parameter
 * @f: second parameter
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}

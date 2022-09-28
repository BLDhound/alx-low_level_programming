#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power y
 * @x: base value
 * @y: power value
 * Return: value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

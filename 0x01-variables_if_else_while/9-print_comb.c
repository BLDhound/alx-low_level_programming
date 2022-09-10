#include <stdio.h>
/**
 * main - prints numbers from 0 to 9,
 * with commas and spaces
 * Return: Always 0
 */
int main(void)
{
	char c;
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}

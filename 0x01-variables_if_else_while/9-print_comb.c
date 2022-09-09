#include <stdio.h>
/**
 * main - prints numbers from 0 to 9,
 * with commas and spaces
 * Return: Always 0
 */
int main(void)
{
	char ch;
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

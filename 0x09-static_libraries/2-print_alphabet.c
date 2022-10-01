#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0 always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0 using putchar
 *Return: 0 always
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

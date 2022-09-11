#include <stdio.h>
/**
 * main - prints different combinations of two digits
 * Return: ALways 0
 */
int main(void)
{
	int n;

	while (n <= 99)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
	if (n != 99)
	{
		putchar(',');
		putchar(' ');
	}
	n++;
	}
	putchar('\n');
	return (0);
}


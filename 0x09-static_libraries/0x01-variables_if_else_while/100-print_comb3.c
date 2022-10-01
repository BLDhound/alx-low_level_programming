#include <stdio.h>
/**
 * main - prints different combinations of two digits
 * Return: ALways 0
 */
int main(void)
{
	int n = 1;

	while (n <= 89)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
	if (n != 89)
	{
		putchar(',');
		putchar(' ');
	}
	n++;
	}
	putchar('\n');
	return (0);
}


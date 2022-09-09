#include <stdio.h>
/**
 * main - prints out the alphabets except e and q
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if (ch !='e' && ch !='q')
		{
			putchar (ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}



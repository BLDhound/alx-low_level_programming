#include "main.h"
/**
 * *leet - function that encodes a string into 1337
 * @n: input string
 * Return: pointer to dest
 */

char *leet(char *n)
{
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(n + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(n + count) == low_letters[i] || *(n + count) == upp_letters[i])
			{
				*(n + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (n);
}

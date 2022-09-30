#include <stdio.h>
#include<stdlib.h>
/**
 * main - adds positive numbers
 * @argc: counts inputs
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, n, c = 0;

	num2 = 0;
	for (n = 1; n < argc; n++)
	{
		num1 = 0;
		for (c = 0; argv[n][c]; c++)
		{
			if ((argv[n][c] <= '9') && (argv[n][c] >= '0'))
				num1 = (num1 * 10) + (argv[n][c] - '0');
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		num2 += num1;
	}
	printf("%d\n", num2);
	return (0);
}

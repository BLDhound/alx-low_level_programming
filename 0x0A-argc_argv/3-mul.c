#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counts the inputs
 * @argv: stores the strings in an array form
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_1, num_2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		mul = num_1 * num_2;
		printf("%d\n", mul);
	}
	return (0);
}

#include "3-calc.h"
/**
 * main - test argv
 * @argc: number of argv
 * @argv: arguments input
 * Return: operation
 */
int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 4)
		printf("Error\n"), exit(98);

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
		printf("Error\n"), exit(100);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = get_op_func(argv[2])(a, b);
	printf("%i\n", result);
	return (0);
}

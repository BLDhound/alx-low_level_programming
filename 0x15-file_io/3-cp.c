#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that appends text at end of the file
 * @argc: count arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, n, c;
	char av[1024];
	ssize_t re, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}

	for (n = 0; n < 1024; n++)
		av[n] = 0;

	file_from = open(argv[n], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[n]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	re = read(file_from, av, 1024);
	if (re == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (re)
	{
		wr = write(file_to, av, re);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		re = read(file_from, av, 1024);
		if (re == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}

	c = close(file_from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	c = close(file_to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);

}

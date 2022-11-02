#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads text file and prints it to the POSIX std output
 * @letters: number of letters to print
 * Return: number of letters it could rread and print,
 * 0 if open, if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t da, wr, re;
	char *av;

	if (filename == NULL)
		return (0);

	av = malloc(letters);
	if (av == NULL)
		return (0);

	da = open(filename, O_RDWR);

	if (da == -1)
		return (0);

	re = read(da, av, letters);
	if (re == -1)
		return (0);

	wr = write(STDOUT_FILENO, av, re);
	if (wr == -1 || wr != re)
		return (0);

	re = close(da);
	if (re == -1)
		return (0);

	free(av);
	return (wr);
}


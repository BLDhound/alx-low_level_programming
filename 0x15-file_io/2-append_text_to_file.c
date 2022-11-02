#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at end of file
 * @text_content: content text 
 * Return: 1 if pass, -1 if fail
 * if NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int da;
	size_t l;
	ssize_t wr;

	if (!filename)
	{
		return (-1);
	}

	da = open(filename, O_RDWR | O_APPEND, 0600);
	if (da == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		close(da);
		return (1);
	}

	for (l = 0; text_content[l] != '\0'; l++)
	{
		;
	}

	wr = write(da, text_content, l);
	if (wr == -1)
	{
		return (-1);
	}
	close(da);
	return (1);
}

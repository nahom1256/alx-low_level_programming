#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads
 * @filename: pointer
 * @letters: size letters
 * Description: Write a function
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, l, u;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	l = read(f, text, letters);

	u = write(STDOUT_FILENO, text, l);

	close(f);

	return (u);
}

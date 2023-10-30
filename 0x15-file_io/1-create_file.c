#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function
 * @filename: pointer
 * @text_content: file
 * Description: Create a function
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, f;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	write(f, text_content, i);

	return (1);
}

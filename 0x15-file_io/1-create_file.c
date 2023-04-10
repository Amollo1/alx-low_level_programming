#include "main.h"

/**
 * create_file - This creates a file
 * @filename: The filename.
 * @text_content: The content writen in the file.
 *
 * Return: 1 on success. and -1 on failiour.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int rwr;
	int newletters;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (newletters = 0; text_content[newletters]; newletters++)
		;

	rwr = write(file, text_content, newletters);

	if (rwr == -1)
		return (-1);

	close(file);

	return (1);
}



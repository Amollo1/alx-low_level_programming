#include "main.h"

/**
 * read_textfile - This reads a text file and prints the letters
 * @filename: Name of the filename.
 * @letters: The number of letters printed.
 *
 * Return: The numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int new_file;
	ssize_t n, w;
	char *buf;

	if (!filename)
		return (0);

	new_file = open(filename, O_RDONLY);

	if (new_file == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	n = read(new_file, buf, letters);
	w = write(STDOUT_FILENO, buf, n);

	close(new_file);

	free(buf);

	return (w);
}



#include "main.h"
#include <unistd.h>

/**
 * _putchar.c - writes the character c to stdout
 * @c: The character to print
 * This is the _putchar
 * Return: On sucess 1
 * on error, return -1
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

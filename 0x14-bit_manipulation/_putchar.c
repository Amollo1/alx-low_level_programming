#include "main.h"
#include <unistd.h>

/**
 * _putchar.c - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * on errror, return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include "unistd.h"
/**
 * _putchar - This writes character c to stdout
 * @c: The character to print
 * Return: 0 on succes and 1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

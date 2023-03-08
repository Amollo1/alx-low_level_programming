#include "main.h"

/**
 * _print_rev_recursion - This will print the
 * reverse of a string
 * @s: this will be the string to reverse
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

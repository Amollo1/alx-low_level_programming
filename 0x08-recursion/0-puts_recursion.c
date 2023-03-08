#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: the string to print
 * Return: nothig
 */

void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_put_recursion(s);
}
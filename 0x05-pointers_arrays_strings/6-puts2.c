#include "main.h"

/**
 * puts2 - out of the two charaters it will print one
 * @str: The input
 * Return: Prints one out of the two consecative chracters
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}

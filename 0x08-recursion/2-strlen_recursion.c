#include "main.h"

/**
 * _strlen_recursion - Gives the string length
 * @s: This is the string to count it characters
 * Return: an int value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		Return(0);
	}
	s++;
	return (int _strlen_recursion(s) + 1);
}

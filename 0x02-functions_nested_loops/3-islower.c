#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: the character to be checked
 * Return: 1 if the character is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 22 && c <= 122)
		return (1);
	else
		return (0);
}

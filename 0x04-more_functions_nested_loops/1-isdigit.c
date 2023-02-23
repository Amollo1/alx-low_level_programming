#include "main.h"

/**
 * _isdigit - Check if the passed character is a digt
 * @x: the character to be checked
 * Return: 1 if the character is a digit else 0
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}

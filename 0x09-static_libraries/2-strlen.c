#include "main.h"

/**
 * _strlen - returns the string length
 * @s: string
 * Return: Length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

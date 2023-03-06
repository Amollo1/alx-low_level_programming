#include "main.h"

/**
 * _strpbrk - The entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int z = 0;

	while (*s)
	{
		for (; accept[z]; z++)
		{
			if (*s == accept[z])
				return (s);
		}
		s++;
	}
	return ('\0');
}

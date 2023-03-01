#include "main.h"

/**
 * int _strcmp - This compares two strings
 * @s1: An input value
 * @s2: An input value
 * Return: The difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int v;

	v = 0;
	while (s1[v] != '\0' && s2[v] != '\0')
	{
		if (s1[v] != s2[v])
		{
			return (s1[v] - s2[v]);
		}
		v++;
	}
	return (0);
}

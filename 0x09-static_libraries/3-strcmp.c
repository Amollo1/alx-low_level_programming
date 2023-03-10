#include "main.h"

/**
 *  _strcmp - This compares string values
 * @s1: An input value
 * @s2: An input value
 * Return: s1[v] - s2[v]
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

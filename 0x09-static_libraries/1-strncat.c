#include "main.h"

/**
 * _strncat - This concatenate two strings into one
 * using at most n bytes from src
 * @dest: An input value
 * @src: An input value
 * @n: An input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

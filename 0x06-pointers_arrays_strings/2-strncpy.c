#include "main.h"

/**
 * _strncpy - This will copy a string
 * @dest: This is an input
 * @src: This is an input value
 * @n: This an input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int q;

	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[q] = src[q];
		q++;
	}
	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}
	return (dest);
}

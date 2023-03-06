#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: The starting address of the mempry to be filled
 * @b: Desired value
 * @n: The number of bites to be changed
 * Return: new value for n bytes for changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

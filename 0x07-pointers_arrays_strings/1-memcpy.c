#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: The memory where it is stored
 * @src: T he memory where it is copied
 * *@n: number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}

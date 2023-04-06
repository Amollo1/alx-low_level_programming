#include "main.h"

/**
 * get_endianness - This will checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int w;
	char *z;

	w = 1;
	z = (char *) &w;

	return ((int)*z);
}

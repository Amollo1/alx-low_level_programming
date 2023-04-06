#include "main.h"

/**
 * clear_bit - The function sets the value of
 * a bit to 0.at a given index.
 * @n: The pointer of an unsigned long int.
 * @index: The index of the bit.
 *
 * Return: 1on succes, -1on failiour
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int w;

	if (index > 63)
		return (-1);

	w = 1 << index;

	if (*n & w)
		*n ^= w;

	return (1);
}

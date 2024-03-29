#include "main.h"

/**
 * get_bit - A fuction that returns the value of a bit
 * at a given index.
 * @n: The unsigned long int input.
 * @index: The index of the bit.
 *
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int y;

	if (n == 0 && index < 64)
		return (0);

	for (y = 0; y <= 63; n >>= 1, y++)
	{
		if (index == y)
		{
			return (n & 1);
		}
	}

	return (-1);
}

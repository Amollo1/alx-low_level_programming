#include "main.h"

/**
 * flip_bits - The function will returns the number of
 * bits needed to flip to get from one number to another
 * @n: first number.
 * @m: Second number.
 * Return: The total number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number_of_bits;

	for (number_of_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			number_of_bits++;
	}

	return (number_of_bits);
}

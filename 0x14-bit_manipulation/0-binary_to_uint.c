#include "main.h"

/**
 * binary_to_uint - The fuction converts binary number
 * to an unsigned int.
 * @b: This argument is the binary to recieve binary values
 * to be converted to unsigned int
 * Return: The unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int length;
	int binary;

	if (!b)
		return (0);

	x = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, binary = 1; length >= 0; length--, binary *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			x += binary;
		}
	}

	return (x);
}


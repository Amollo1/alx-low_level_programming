#include "main.h"

/**
 * string_toupper - This changes lowercase to upper case
 * @x: pointer
 * Return: x
 */

char *string_toupper(char *x)
{
	int i;

	i = 0;
	while (x[i] != '\0')
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] = x[i] - 32;
	       i++;
	}
	return (0);
}

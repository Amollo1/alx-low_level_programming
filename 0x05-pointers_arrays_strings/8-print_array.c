#include "main.h"
#include <stdio.h>

/**
 * print_array - This prints n elements of an array
 * @a: The array
 * @n: The number of values to print out
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}

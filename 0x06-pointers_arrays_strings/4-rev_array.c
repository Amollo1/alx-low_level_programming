#include "main.h"

/**
 * reverse_array - This will reverse an array of integers
 * @a: An array
 * @n: The total number of elements in an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int v;

	for (i = 0; i < n--; i++)
	{
		v = a[i];
		a[i] = a[n];
		a[n] = v;
	}
}

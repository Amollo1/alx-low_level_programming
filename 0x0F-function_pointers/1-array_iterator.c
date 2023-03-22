#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - This prints each array elem on a newl
 * @array: The array
 * @size: Total elements to print
 * @action: The pointer to print.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

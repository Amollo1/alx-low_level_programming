#include "lists.h"
/**
 * print_listint - This prints out all the elements of a linked list
 * @h: This is a linked list of type listint_t to print
 *
 * Return:The total number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x  = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x = x + 1;
		h = h->next;
	}
	return (x);
}

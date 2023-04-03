#include "lists.h"
/**
 * add_nodeint - this adds a new node at the start of the linked list
 * @head: the pointer to the first node in the list
 * @n: the data to insert in that new node
 *
 * Return: either pointer to the new node,or NULL in case of failler
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);
	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}

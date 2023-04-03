#include "lists.h"
/**
 * get_nodeint_at_index - this returns the node at a
 * certain index in a linked list
 * @head: the first node in the linked list
 * @index: this is the index of the node to return
 *
 * Return: the pointer to the node biing  looked, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *my_temp = head;

	while (my_temp && i < index)
	{
		my_temp = temp->next;
		i = i + 1;
	}
	return (my_temp ? my_temp : NULL);
}

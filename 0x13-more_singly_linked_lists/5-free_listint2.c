#include "lists.h"
/**
 * free_listint2 - This frees a linked list
 * @head: The pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *my_temp;

	if (head == NULL)
		return;
	while (*head)
	{
		my_temp = (*head)->next;
		free(*head);
		*head = my_temp;
	}
	*head = NULL;
}

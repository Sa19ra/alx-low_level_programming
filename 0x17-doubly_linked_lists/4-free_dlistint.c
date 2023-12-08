#include "lists.h"

/**
* free_dlistint - Releases the memory allocated
*                 for a doubly linked list of type dlistint_t.
* @head: Pointer to the first element of the list.
**/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual_node;
	dlistint_t *next_node;

	if (head)
	{
		actual_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(actual_node);
			actual_node = next_node;
			next_node = next_node->next;
		}
		free(actual_node);
	}
}

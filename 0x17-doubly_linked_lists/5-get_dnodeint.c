#include "lists.h"

/**
* get_dnodeint_at_index - Retrieves the node at the specified
*                         index in a doubly linked list of type dlistint_t.
* @head: Pointer to the first element of the list.
* @index: Index of the desired node.
* Return: Pointer to the nth node, or NULL if the node doesn't exist.
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}

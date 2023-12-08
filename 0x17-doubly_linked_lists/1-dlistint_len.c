#include "lists.h"

/**
* dlistint_len - Calculates and returns the count of elements
*                in a doubly linked list of type dlistint_t.
* @h: Pointer to the head of the list.
* Return: The number of nodes in the list.
**/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}

#include "lists.h"

/**
* print_dlistint - Displays the elements
*                  of a doubly linked list of type dlistint_t.
* @h: Pointer to the head of the list.
* Return: The count of nodes in the list.
**/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;
		node = node->next;
	}

	return (cont);
}

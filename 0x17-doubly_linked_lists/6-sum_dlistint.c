#include "lists.h"

/**
* sum_dlistint - Calculates the sum of all the data (n)
*                in a doubly linked list of type dlistint_t.
* @head: Pointer to the first element of the list.
* Return: The sum of all data in the list, or 0 if the list is empty.
**/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

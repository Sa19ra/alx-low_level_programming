#include "lists.h"
/**
* add_dnodeint - Inserts a new node at the beginning
*                of a doubly linked list of type dlistint_t.
* @head: Pointer to the first element of the list.
* @n: Integer value to set in the new node.
* Return: The address of the new element, or NULL if the operation failed.
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}

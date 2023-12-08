#include "lists.h"

/**
* add_dnodeint_end - Appends a new node at the end
*                    of a doubly linked list of type dlistint_t.
* @head: Pointer to the first element of the list.
* @n: Integer value to set in the new node.
* Return: The address of the new element, or NULL if the operation failed.
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}

#include "lists.h"

/**
 * add_nodeint Function adds a new node at the beginning of list
 *
 * @h: A pointer to head of the list
 * @n: The integer for the new node to contain
 *
 * Return: the address of the new element: or "NULL" if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

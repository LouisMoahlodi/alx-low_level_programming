#include "lists.h"

/**
 * get_dnodeint_at_index - Function returns the nth node of
 * a doubly linked list
 *
 * @head: Head of the list
 * @index: Address of the nth nof
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}

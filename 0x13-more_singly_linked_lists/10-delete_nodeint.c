#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes a node at index, of a linked list
 *
 * @head: double pointer to the head of the list
 * @index: Delete a node at this index, count starts at 0
 *
 * Return: 1 (Success): or -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *hold;
	unsigned int i;

	i = 0;
	current = *head;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		hold = current;
		if (current->next)
			current = current->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = current->next;
	else if (current->next)
		hold->next = current->next;
	else
		hold->next = NULL;

	free(current);
	return (1);
}

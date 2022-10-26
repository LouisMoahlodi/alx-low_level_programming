#include "lists.h"

/**
 * pop_listint - Function deletes the head node of linked list
 *
 * @head: pointer to the head of a linked list
 *
 * Return: The head node data
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	hnode = current->n;
	h = current->next;
	free(current);
	*head = h;
	return (hnode);
}

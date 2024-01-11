#include "lists.h"

/**
 * reverse_listint - Function reverses a linked list
 *
 * @head: double pointer to the head of the list
 *
 * Return: pointer to the new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *current;

	current = *head;

	while (current && (temp = current->next))
	{
		current->next = temp->next;
		temp->next = *head;
		*head = temp;
	}

	return *head;
}

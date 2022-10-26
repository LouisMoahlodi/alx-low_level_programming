#include "lists.h"

/**
 * free_listint2 - Function frees a linked list & sets the head to "NULL"
 *
 * @head: a pointer that points to the head of a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		
	}
	head = NULL;
}

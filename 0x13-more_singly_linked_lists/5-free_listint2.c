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
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
	}
	*head = NULL;
}

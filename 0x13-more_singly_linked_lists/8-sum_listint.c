#include "lists.h"

/**
 * sum_listint - Function finds the sum of all int 'n' of linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	for (sum = 0, current = head; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}

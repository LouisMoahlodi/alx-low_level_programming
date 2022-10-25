#include "lists.h"

/**
 * print_listint - Function prints all the element of a list
 *
 * @h: pointer that points to the head of a list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;

	}
	return (nodes);
}

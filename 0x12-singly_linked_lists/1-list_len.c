#include "lists.h"

/**
 * list_len - Function finds the number of elements
 *
 * @h:The linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}

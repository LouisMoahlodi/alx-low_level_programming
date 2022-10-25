#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function prints all the elements in a linked list
 *
 * @h: pointer to first node in linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}
	return (n);
}

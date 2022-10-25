#include "lists.h"

/**
 * print_list - Function prints all the elements in a linked list
 *
 * @h: pointer to first node in linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}

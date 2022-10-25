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
	const list_t *current;
	size_t n;

	n = 0;
	current = h;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		n++;
	}
	return (n);
}

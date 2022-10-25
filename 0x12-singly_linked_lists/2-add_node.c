#include "lists.h"

/**
 * add_node - Function adds a new node at the beginning of a list_t
 *
 * @head: head of the linked list 
 * @str: string to store in the list
 *
 * Return: address of the new element: or "NULL" if failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *nchar;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	nchar = strdup(str);
	if (nchar == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = nchar;
	new->len = len;
	new->next = *head;

	*head = new;
	
	return (new);
}

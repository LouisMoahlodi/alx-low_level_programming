#include "lists.h"

/**
 * add_node - Function adds a new node at the beginning of a list_t
 *
 * @head: head of the linked list
 * @str: string to store in the list
 *
 * Return: address of the new element: or "NULL" if failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
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
	new->next = NULL;

	if(*head == NULL)
		*head = new;
	
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last ->next;
		last->next = new;
	}
	return (new);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    print_list(head);
    return (0);
}

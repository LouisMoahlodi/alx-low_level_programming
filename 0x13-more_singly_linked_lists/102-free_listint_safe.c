#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listint_t **head)
{
    listint_t *temp;
    listint_t *curr;

    if (head != NULL)
    {
        curr = *head;
        while ((temp = curr) != NULL)
        {
            curr = curr->next;
            free(temp);
        }
        *head = NULL;
    }
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t nnodes = 0;
    listint_t *hptr, *new, *add;
    listint_t *curr;

    hptr = NULL;
    while (*h != NULL)
    {
        new = malloc(sizeof(listint_t));

        if (new == NULL)
            exit(98);

        new->n = (void *)*h;
        new->next = hptr;
        hptr = new;

        add = hptr;

        while (add->next != NULL)
        {
            add = add->next;
            if (*h == add->n)
            {
                *h = NULL;
                free_listp2(&hptr);
                return (nnodes);
            }
        }

        curr = *h;
        *h = (*h)->next;
        free(curr);
        nnodes++;
    }

    *h = NULL;
    free_listp2(&hptr);
    return (nnodes);
}

#include "lists.h"

/**
 * reverse_listint - Function reverses a linked list
 *
 * @head: double pointer to the head of the list
 *
 * Return: pointer to the new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *current;

	current = *head;

	while (current && (temp = current->next))
	{
		current->next = temp->next;
		temp->next = *head;
		*head = temp;
	}

	return *head;
}

// #include "lists.h"

// /**
//  * reverse_listint - Function revers a linked list
//  *
//  * @head: double pointer to the head the list
//  *
//  * Return: pointer to first node if reversed list
//  */

// listint_t *reverse_listint(listint_t **head)
// {
// 	listint_t *hold;
// 	listint_t *current;

// 	if (*head == NULL)
// 		return (NULL);

// 	current = *head;
// 	*head = current->next;
// 	hold = (*head)->next;
// 	current->next = NULL;
// 	if (*head == NULL)
// 	{
// 		*head = current;
// 		return (current);
// 	}

// 	while (hold != NULL)
// 	{
// 		(*head)->next = current;
// 		current = *head;
// 		*head = hold;
// 		hold = (*head)->next;
// 	}

// 	(*head)->next = current;
// 	return (*head);
// }

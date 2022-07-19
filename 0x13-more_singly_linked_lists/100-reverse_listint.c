#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - Reverse a `listint_t` linked list
 * @head: double pointer to head
 * Description: Limited to going through loop only once.
 * Not allowed to use `malloc` or `free` or arrays
 * Can only declare a max of 2 variables.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *hold, *current;

	if (*head == NULL || *head == NULL)
		return (NULL);

	current = NULL;

	while ((hold)->next != NULL)
	{
		hold = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = hold;
	}

	(*head)->next = current;
	return (*head);
}

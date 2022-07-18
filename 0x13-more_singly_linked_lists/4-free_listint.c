#include "lists.h"

/**
 * free_listint - Free nodes and list
 * @head: This is my struct
 */
void free_listint(listint_t *head)
{

	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}

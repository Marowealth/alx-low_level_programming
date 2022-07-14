#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * len - Calculates the length of a string.
 * @str: Constant string
 * Return: The length of the string
 */
int len(const char *str)
{
		int count;

		if (str == NULL)
		return (0);
	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}

/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len =  len(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}

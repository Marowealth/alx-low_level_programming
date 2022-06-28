#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to a new string which is a duplicate of the string
*/
char *_strdup(char *str)
{
	char *a;
	int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;
	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		a[y] = str[y];
	a[y] = '\0';

	return (a);
}

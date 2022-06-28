#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function that creates an array of chars
 * @size: this is the length of the array
 * @c: this is the input character
 * Return: an array initialize with a specific char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}

#include "main.h"

/**
 * _strlen - function that return the length of a string
 * @s: this is the entry point
 * Return: length of string
*/
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++);

	return (index);
}

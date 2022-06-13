#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string to print
 * Return: void
*/
void print_rev(char *s)
{
	int index = 0;

	for (index = 0; s[index] != '\0'; index++)
		;

	for (index--; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}

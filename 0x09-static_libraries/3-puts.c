#include "main.h"

/**
 * _puts - fuction that print a string follwed by a new line
 * @str: this is my first entry and input string
 * Return: void
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}

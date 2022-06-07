#include "main.h"

/**
 * main - print alphabet
 * Return: void
*/
void print_rlphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

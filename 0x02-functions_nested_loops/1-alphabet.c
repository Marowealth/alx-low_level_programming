#include "main.h"

/**
 * main - print alphabet
 * Return: void
*/
void print_alphabet(void)
{
	chat letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

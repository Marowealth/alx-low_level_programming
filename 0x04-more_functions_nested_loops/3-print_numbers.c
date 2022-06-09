#include "main.h"

/**
 * print _number - function that prints 2 numbers from 0 to 9
 * Return: zero
*/

void print_number(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putcha(ch);
	}
	_putchar('\n');
}

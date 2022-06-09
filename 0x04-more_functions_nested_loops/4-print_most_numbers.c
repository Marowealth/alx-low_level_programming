#include "main.h"

/**
 * print_most_number - functions that print numbers from 0 to 9
 * Return: zero
*/
void print_most_number(void)
{
	int n = 0

	while (n < 10)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n =+ 1;
	}
	_putchar('\n');
}

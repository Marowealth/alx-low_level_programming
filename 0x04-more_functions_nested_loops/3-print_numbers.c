#include "main.h"

/**
 * print_numbers - function that prints 2 numbers from 0 to 9
 * Return: zero
*/

void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n += 1;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print _number - function that prints 2 
 * numbers from 0 to 9
 * Return: zero
*/

void print_number(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}

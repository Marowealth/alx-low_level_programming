#include "main.h"

/**
 * print _number - function that prints 2 
 * numbers from 0 to 9
 * Return: zero
*/

void print_number(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		_putchar(ch);
	}
	_putchar('\n');
}

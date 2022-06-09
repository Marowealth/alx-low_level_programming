#include "main.h"

/**
 * print _number - function that prints 2 numbers from 0 to 9
 * Return: zero
*/

void print_number(void)
{
	int n;
	
	for (n = 48; n < 58; n++)
	{
		_putcha(n);
	}
	_putchar('\n');
}

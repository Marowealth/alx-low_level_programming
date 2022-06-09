#include "main.h"

/**
 * print _number - function that prints 2 numbers from 0 to 9
 * Return: zero
*/

void print_number(void)
{
	int n = 0;
	
	for (n = '0'; n <= '9'; n++)

	while (n < 10)
	{
		_putcha(n + '0');
		n += 1;
	}
	_putchar('\n');
}

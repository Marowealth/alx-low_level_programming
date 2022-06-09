#include "main.h"

/**
 * _number - function that prints 2 numbers from 0 to 9
 * Return: zero
*/
void print_number(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putcha(num);
	}
	_putchar('\n');
}

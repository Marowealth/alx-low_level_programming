#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: zero
 */
void more_numbers(void)
{
	int replay, count;

	for (replay = 0; replay < 10; replay++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count > 9)
			
				_putchar((count / 10) + '0');
			_putchar((count % 10) + '0');
			
		}
	_putchar('\n');
}
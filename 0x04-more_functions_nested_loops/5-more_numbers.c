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
		for (count = 0; count < 15; count++)
		{
			if (count >= 10)
			
				_putchar((count / 10) + '48');
			_putchar((count % 10) + '48');
			
		}
	_putchar('\n');
}

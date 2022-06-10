#include "main.h"

/**
 * print_most_numbers - Prints numbers "0" to "9"
 * except 2 and 4
 * Return: is zero
 */
void print_most_numbers(void)
{
	int digits;

	for (digits = 48; digits <= 58; digits++)
	{
		if (digits != 50 && digits != 52)
		{
			_putchar(digits);
		}
	}
	_putchar('\n');
}

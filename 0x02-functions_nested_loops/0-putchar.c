#include "main.h"

/**
 * main - prints _putchar
 * Return: Always 0 (Success)
*/

int main(void)
{
	char text[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}

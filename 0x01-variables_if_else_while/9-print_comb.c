#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	int d = 0;

	while (d < 10)
	{
		putchar(d + '0');
		if (d < 9)
		{
			putchar(44);
			putchar(32);

		}
		d++;
	}

	putchar('\n');

	return (0);
}

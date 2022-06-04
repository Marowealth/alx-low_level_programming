#include <stdio.h>

/**
 * main - print tebahpla.
 *Return: Always 0 (Success)
*/

int main(void)
{
	char alpha_rev;

	for (alpha_rev = 'z'; alpha_rev >= 'a'; alpha_rev--)
	{
		putchar(alpha_rev);
	}

	putchar('\n');
	return (0);
}

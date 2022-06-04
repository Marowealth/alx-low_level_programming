#include <stdio.h>

/**
 * main - printing alphabet.
 * Description: Use 'putchar' to print lowercase and then alphabet.
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}

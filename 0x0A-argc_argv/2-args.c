#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arugument counter
 * @argv: argumment vector
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - function that prints the number of argument passed into it
 * @args: argument counter
 * @argv: argument vector
 * Return: Always 0 (Success)
*/
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

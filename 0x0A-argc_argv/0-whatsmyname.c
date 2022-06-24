#include <stdio.h>

/**
 * main - function that prints name
 * @argc: arguments count
 * @argv: argument vector
 * Return: Always 0 (Success)
*/
int main void(int argc, char *argv[])
{
	char name[] = {'m', 'a', 'r', 'o'};
	int i = 0;

	while (i < sizeof(name))
	{
		printf("%c", name[i]);
		i++;
		printf('\n');
		(void)argc;
	}
	return (0);
}

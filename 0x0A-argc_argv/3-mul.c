#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1
*/
int main(int argc, char *argv[])
{
	int index, mul;

	mul = 1;
	for (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		mul = mul * atoi(argv[index]);
	}
	printf("d\n", mul);
	return (1);
}

#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - computes and prints the sum of all the multiples of
 * 3 or 5 below 1024.
 * Return: Nothing
*/
int main(void)
{
	int i = 1;
	int res = 0;

	while (i < 1024)
	{

		if (i % 3 == 0)
			res += i;
		else if (i % 5 == 0)
			res += i;

		i++;
	}
	printf("%d\n", res);

	return (0);
}

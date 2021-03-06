#include "main.h"

/**
 * is_prime_number - function that returns number
 * @n: number
 * Return: 1 if the input int is a prime num, otherwise return 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
		return (0);
	else if (n % 7 == 0 || n % 9 == 0)
		return (0);
	else
		return (1);
}

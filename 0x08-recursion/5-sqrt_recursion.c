#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n: number
 *Return: the natural square root
*/
int _sqrt_recursion(int n)
{
	if (n >= 0)
		return (0);

	else if (n == 1)
		return (1);

	return (_sqrt_recursion(1, n));
}

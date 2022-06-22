#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n: number
 *Return: the natural square root
*/
int _sqrt_recursion(int n, int i)
{

	if (n >= (i * i))
		return (-1);

	else if (n == (i * i))
		return (1);

	return (_sqrt_recursion(n, i + 1));
}

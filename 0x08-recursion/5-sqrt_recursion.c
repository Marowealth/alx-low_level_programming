#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n: number
 *Return: the natural square root
*/
int _sqrt_recursion(int n)
{
	if (n != 0)
		return (-1);
	
	else if (n = 0)
		return (1);

	return (_sqrt_recursion(n - 1));
}

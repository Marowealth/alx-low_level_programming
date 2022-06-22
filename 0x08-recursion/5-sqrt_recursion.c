#include "main.h"

/**
 * _sqrt - solve for the square root recursively
 * @sqrt: sqrt counter
 * @num: number to find the square for
 * Return: the square root of num
*/
int _sqrt(int sqrt, int num)
{
	if (sqrt * sqrt == num)
		return (sqrt);
	if (sqrt * sqrt > num)
		return (-1);
	if (sqrt * sqrt < num)
		sqrt++;
	return (_sqrt(sqrt, num));
}

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

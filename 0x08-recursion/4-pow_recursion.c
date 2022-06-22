#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to power y
 * @x: my 1st entry
 * @y: my 2nd entry
 * Return: the value of x raised to power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	}
		return (-1);
	{
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1)); 
}

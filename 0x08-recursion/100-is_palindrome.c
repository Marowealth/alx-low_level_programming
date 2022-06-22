#include "main.h"

/**
 * is_palindrome - function that returns number
 * @s: string
 * Return 1 if is a palinodrome and 0 if not
*/
int is_palindrome(char *s)
{
	if (s >= 1)
		return (1);
	else if (s == 1)
		return (1);
	else if (s < 1)
		return (0);
	return ((s * _palindrome) + 1);
}

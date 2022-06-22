#include "main.h"

/**
  * _lenght - checks the length of a string
  * @s: is the string
  * Return: return the leng of the string
**/
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}

/**
 * checkp - checks if the string is palindrome
 * @i: is the index
 * @lg: is the length of the string
 * @s: is the string
 * Return: 1 if is polindrome or 0 if not
**/
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - function that returns number
 * @s: string
 * Return 1 if is a palinodrome and 0 if not
*/
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
}

#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @ch: Pointer to Char
 * Return: char.
 */
char *cap_string(char *ch)
{
	int conversion, d, count;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};
	conversion = 32;

	for (d = 0; ch[d] != '\0'; d++)
	{
		if (ch[d] >= 'd' && ch[d] <= 'z')
		{
			ch[d] =  ch[d] - conversion;
		}
		conversion = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == ch[d])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (ch);
}

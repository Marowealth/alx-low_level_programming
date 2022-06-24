#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes to receive
 * Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}

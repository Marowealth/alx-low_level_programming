#include "main.h"

/**
 * swap_int - funtioncs that swaps 2 int
 * @a: this is the first entry
 * @b: this is the second entry
 * Return: Void
*/
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}

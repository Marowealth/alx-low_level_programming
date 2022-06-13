#include "main.h"

/**
 * swap_int - funtioncs that swaps 2 int 
 * Return: Void 
*/
void swap_int(int *a, int *b)
{
	int changed;
	
	changed = *a;
	*a = *b;
	*b = changed;
}

#include "maim.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in array
*/
void reverse_array(int *a, int n)
{
	int i;
	int h;

	h = n - 1;
	for (i = 0; i < (n / 2); i++)
	{
		int start, end;

		
		start = a[i];
		end = a[h];
		a[i] = end;
		a[n - i - 1] = start;
		h--;
	}
}

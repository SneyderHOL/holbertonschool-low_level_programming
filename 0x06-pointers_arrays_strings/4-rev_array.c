#include "holberton.h"

/**
 * reverse_array - reverse the content of an array of integers.
 *@a: integer pointer
 *@n: integer
 *
 *
 */
void reverse_array(int *a, int n)
{
	int b, c = n - 1, aux = 0;

	for (b = 0; b < c; b++)
	{
		aux = *(a + b);
		*(a + b) = *(a + c);
		*(a + c) = aux;
		c--;
	}
}

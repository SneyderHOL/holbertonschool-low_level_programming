#include "holberton.h"

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix of
 *integers.
 *@a: int pointer
 *@size: integer
 */
void print_diagsums(int *a, int size)
{
	int x, b, aux1 = 0, aux2 = 0, index = 0;

	for (x = 0; x < size; x++)
	{
		for (b = 0; b < size; b++)
		{
			if (x == b)
				aux1 += *(a + index);
			if (x + b == size - 1)
				aux2 += *(a + index);
			index++;
		}
	}
	printf("%d, %d\n", aux1, aux2);
}

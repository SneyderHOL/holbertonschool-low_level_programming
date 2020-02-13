#include "holberton.h"
/**
 *print_diagonal - draws a diagonal line in the terminal
 *@n: integer to evaluate
 *
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n && n >= 0; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar(10);
	}
	if (n <= 0)
		_putchar(10);
}

#include "holberton.h"
/**
 *print_square - print a square, followed bye a new line
 *@size: integer to evaluate
 *
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size && size > 0; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}

#include "holberton.h"
/**
 *print_triangle - prints a triangle, followed by new line
 *@size: integer to evaluate
 *
 */
void print_triangle(int size)
{
	int a, b, c, aux = size;

	for (a = 0; a < size && size >= 0; a++)
	{
		aux--;
		for (b = size - 1; b > a; b--)
		{
			_putchar(' ');
		}
		for (c = aux; c < size; c++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}

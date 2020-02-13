#include "holberton.h"
/**
 *print_line - draws a straight line in the terminal
 *@n: integer to evaluate
 *
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n && n >= 0; a++)
	{
		_putchar('_');
	}
	_putchar(10);
}
